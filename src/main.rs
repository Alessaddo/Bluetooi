mod manager;
use bluer::{Device, Session};
use std::{fs::ReadDir, path::PathBuf, vec};
use color_eyre::{Result, owo_colors::colors::xterm::DecoOrange};
use ratatui::{
    DefaultTerminal, Frame, crossterm::event::{self, Event, KeyCode}, widgets::{Block,Borders,Paragraph}
};

struct DeviceInfo
{
    address: String,
    device_name: String,
    device_type: String,
    trusted: String,
    paired: String,
}

#[tokio::main(flavor = "current_thread")]
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
    let mut devices_list : Vec<DeviceInfo> = vec![];
    paired_to_render(&mut devices_list, &paired_devices, &session).await.expect("An error occured while loading paired devices...");

    //devices_to_render()
    let mut scan_handle: Option<tokio::task::JoinHandle<_>> = None;
    
    loop {
        terminal.draw(|frame| render(frame, &mut devices_list))?;

        // check if scan is complete
        if let Some(handle) = &mut scan_handle {
            if handle.is_finished() {
                scan_handle = None;
            }
        }

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
                    if scan_handle.is_none() {
                        let session_clone = session.clone();
                        let mut paired_shared = paired_devices.clone();
                        let dir_clone = dir.clone();
                        scan_handle = Some(tokio::spawn(async move {
                            manager::scan_devices(&session_clone, &mut paired_clone, &dir_clone).await.expect("Unable to start scanning...");
                        }));
                    }
                _ =>{}
            }
        }
    }
    Ok(())
}


fn render(frame: &mut Frame, devices: &mut Vec<DeviceInfo>) {
    use ratatui::prelude::*;

    let device_list = devices
        .iter()
        .map(|d| format!("[{}] {} ({})   {} | {}", 
            d.address, d.device_name, d.device_type, d.trusted, d.paired))
        .collect::<Vec<String>>()
        .join("\n\n");

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
    frame.render_widget(
        Paragraph::new(device_list).block(Block::new().borders(Borders::ALL).title("Devices")).alignment(Alignment::Left),
        layout[1],
    );
}

async fn paired_to_render (devices_list: &mut Vec<DeviceInfo>, paired: &Vec<bluer::Address>, session: &Session) -> bluer::Result<()>
{
    let adapter: bluer::Adapter = manager::get_adapter(&session).await.expect("Unable to get any adapter");
    for address in paired
    {

        let device = adapter.device(*address)?;
        let new_device: DeviceInfo = DeviceInfo  
        {
            address: address.to_string(),
            device_name: device.name().await?.unwrap_or("Unknown".to_string()),
            device_type: device.icon().await.ok().flatten().expect("Unknown"),
            trusted: if device.is_trusted().await? {"T".to_string()} else {"".to_string()},
            paired: if device.is_paired().await? {"✓".to_string()} else if device.is_connected().await? {"✓".to_string()} else {"".to_string()},
        };

        devices_list.push(new_device);
            
    }
    Ok(())
}

