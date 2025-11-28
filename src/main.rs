mod manager;
use bluer::{Device, Session};
use std::{fs::ReadDir, path::PathBuf, vec};
use color_eyre::{Result, owo_colors::colors::xterm::DecoOrange};
use ratatui::{
    DefaultTerminal, Frame, crossterm::event::{self, Event, KeyCode}, widgets::{Block,Borders,Paragraph, List, ListItem, ListState}
};
use std::sync::{Arc, Mutex};

struct AppState {
    devices_list: Arc<Mutex<Vec<manager::DeviceInfo>>>,
    selected_index: usize,
}

impl AppState {
    fn new(devices_list: Arc<Mutex<Vec<manager::DeviceInfo>>>) -> Self {
        Self {
            devices_list,
            selected_index: 0,
        }
    }
    
    fn select_next(&mut self) {
        let len = self.devices_list.lock().unwrap().len();
        if len > 0 {
            self.selected_index = (self.selected_index + 1) % len;
        }
    }
    
    fn select_previous(&mut self) {
        let len = self.devices_list.lock().unwrap().len();
        if len > 0 {
            self.selected_index = if self.selected_index == 0 {
                len - 1
            } else {
                self.selected_index - 1
            };
        }
    }
}

#[tokio::main(flavor = "multi_thread")]
async fn main() -> Result<()> {

    let session = Session::new().await?; 
    let mut paired_devices: Vec<bluer::Address> = vec![];
    let adapter_path : PathBuf = manager::initiate(&session, &mut paired_devices).await.expect("An error occured while trying to initiate the program");
    
    let terminal = ratatui::init();
    let result = run(terminal, &session, &mut paired_devices, &adapter_path).await;
    ratatui::restore();
    result
}

async fn run(mut terminal: DefaultTerminal, session: &Session, paired_devices: &mut Vec<bluer::Address>, dir: &PathBuf) -> Result<()> {
    let adapter: bluer::Adapter = manager::get_adapter(&session).await.expect("Unable to get any adapter");
    let devices_list = Arc::new(Mutex::new(Vec::<manager::DeviceInfo>::new()));
    
    {
        let mut list = devices_list.lock().unwrap();
        paired_to_render(&mut list, &paired_devices, &session).await.expect("An error occured while loading paired devices...");
    }

    let mut app_state = AppState::new(devices_list.clone());
    let mut scan_handle: Option<tokio::task::JoinHandle<_>> = None;
    
    loop {
        terminal.draw(|frame| {
            render(frame, &app_state);
        })?;


        if let Some(handle) = &mut scan_handle {
            if handle.is_finished() {
                scan_handle = None;
            }
        }
        if event::poll(std::time::Duration::from_millis(200))? {
            if let Event::Key(key) = event::read()?
            {
                match key.code
                {
                    KeyCode::Char('q') | KeyCode::Char('Q') | KeyCode::Esc =>
                    {
                        if let Some(handle) = scan_handle {
                            handle.abort();
                        }
                        break;
                    }
                    KeyCode::Char('o') | KeyCode::Char('O') =>
                    {
                        manager::power_adapter(&session).await?;
                    }
                    KeyCode::Char('s') | KeyCode::Char('S') =>
                    {
                        if scan_handle.is_none() & adapter.is_powered().await?
                        {
                            let session_clone = session.clone();
                            let mut paired_clone = paired_devices.clone();
                            let dir_clone = dir.clone();
                            let devices_list_clone = devices_list.clone();

                            // Delete previous scan results (devices that aren't paired)
                            {
                                let mut list = devices_list.lock().unwrap();
                                list.retain(|x| x.paired != "");
                            }

                            scan_handle = Some(tokio::spawn(async move {
                                manager::scan_devices(&session_clone, &mut paired_clone, &dir_clone, devices_list_clone).await.expect("Unable to start scanning...");
                            }));
                        }
                    }
                    KeyCode::Up | KeyCode::Char('k') | KeyCode::Char('K') =>
                    {
                        app_state.select_previous();
                    }
                    KeyCode::Down | KeyCode::Char('j') | KeyCode::Char('J') =>
                    {
                        app_state.select_next();
                    }
                    KeyCode::Char('c') | KeyCode::Char('C') | KeyCode::Enter=>
                    {
                        if adapter.is_powered().await?
                        {
                            let device_address = app_state.devices_list.lock().unwrap()[app_state.selected_index].address.to_string();
                            manager::dis_connect_device(&session, device_address).await.expect("Error occured while connecting to the selected device.");
                        }
                    }
                    KeyCode::Char('p') | KeyCode::Char('P')=>
                    {
                        if adapter.is_powered().await?{
                            let device_address = app_state.devices_list.lock().unwrap()[app_state.selected_index].address.to_string();
                            manager::pair_device(&session, device_address).await.expect("Error occured while pairing to the selected device.");
                        }
                    }
                    KeyCode::Char('t') | KeyCode::Char('T')=>
                    {
                        if adapter.is_powered().await?{
                            let device_address = app_state.devices_list.lock().unwrap()[app_state.selected_index].address.to_string();
                            manager::un_trust_device(&session, device_address).await.expect("An error occured");
                        }
                    }
                    KeyCode::Char('f') | KeyCode::Char('F')=>
                    {
                        if adapter.is_powered().await?{
                            let device_address = app_state.devices_list.lock().unwrap()[app_state.selected_index].address.to_string();
                            manager::forget_device(&session, device_address, devices_list.clone()).await.expect("An error occured");
                        }
                    }
                    _ =>{}
                }
            }
        }
    }
    Ok(())
}


fn render(frame: &mut Frame, app_state: &AppState) {
    use ratatui::prelude::*;

    let devices = app_state.devices_list.lock().unwrap();
    let items: Vec<ListItem> = devices
        .iter()
        .map(|d| {
            ListItem::new(format!("[{}] {} ({})   {} | {}", 
                d.address, d.device_name, d.device_type, d.trusted, d.paired))
        })
        .collect();

    let mut list_state = ListState::default();
    list_state.select(Some(app_state.selected_index));

    let list = List::new(items)
        .block(Block::new().borders(Borders::ALL).title("Devices"))
        .highlight_style(Style::default().bg(Color::DarkGray).add_modifier(Modifier::BOLD))
        .highlight_symbol(">> ");

    let layout = Layout::default()
        .direction(Direction::Vertical)
        .constraints(vec![Constraint::Percentage(5), Constraint::Percentage(95)])
        .split(frame.area());

    frame.render_widget(
        Paragraph::new("(O)n/off | (S)can | (C)onnect | (P)air | (T)rust | (F)orget | (Q)uit")
        .alignment(Alignment::Center)
        .block(Block::new().borders(Borders::NONE).title("Commands").title_alignment(Alignment::Center)),
        layout[0],
    );
    
    frame.render_stateful_widget(list, layout[1], &mut list_state);
}
async fn paired_to_render (devices_list: &mut Vec<manager::DeviceInfo>, paired: &Vec<bluer::Address>, session: &Session) -> bluer::Result<()>
{
    let adapter: bluer::Adapter = manager::get_adapter(&session).await.expect("Unable to get any adapter");
    for address in paired
    {

        let device = adapter.device(*address)?;
        let new_device: manager::DeviceInfo = manager::DeviceInfo  
        {
            address: address.to_string(),
            device_name: device.name().await?.unwrap_or("Unknown".to_string()),
            device_type: device.icon().await.ok().flatten().expect("Unknown"),
            trusted: if device.is_trusted().await? {"T".to_string()} else {"".to_string()},
            paired: if device.is_connected().await? {"O".to_string()} else if device.is_paired().await? {"✓".to_string()} else {"".to_string()},
        };

        devices_list.push(new_device);
            
    }
    Ok(())
}

