mod manager;
use bluer::{Session};
use std::{vec};
use color_eyre::Result;
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
    manager::initiate(&session, &mut paired_devices);
    
    let terminal = ratatui::init();
    let result = run(terminal, &session).await;
    ratatui::restore();
    result
}

async fn run(mut terminal: DefaultTerminal, session: &Session) -> Result<()> {
    let adapter: bluer::Adapter = manager::get_adapter(&session).await.expect("Unable to get any adapter");
    loop {
        terminal.draw(render)?;
        if let Event::Key(key) = event::read()?
        {
            match key.code
            {
                KeyCode::Char('q') | KeyCode::Char('Q') | KeyCode::Esc =>
                {
                    break;
                }
                KeyCode::Char('o') | KeyCode::Char('O') =>
                {
                    manager::power_adapter(&adapter).await?;
                }
                _ =>{}
            }
        }
    }
    Ok(())
}


fn render(frame: &mut Frame) {
    use ratatui::prelude::*;
    let layout = Layout::default()
        .direction(Direction::Vertical)
        .constraints(vec![Constraint::Percentage(5), Constraint::Percentage(95)])
        .split(frame.area());

    frame.render_widget(
        Paragraph::new("(O)n/off | (C)onnect | (P)air | (T)rust | (F)orget | (Q)uit")
        .alignment(Alignment::Center)
        .block(Block::new().borders(Borders::NONE).title("Commands").title_alignment(Alignment::Center)),
        layout[0],
    );
    frame.render_widget(
        Paragraph::new("").block(Block::new().borders(Borders::ALL).title("Devices")),
        layout[1],
    );
}

