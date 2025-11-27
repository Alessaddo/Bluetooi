use bluer::{Adapter};
use bluer::{Session};
use futures::StreamExt;
use std::fs::ReadDir;
use std::{io, vec};
use std::fs;
use std::fs::File;
use std::path::PathBuf;
use tokio::time::{timeout, Duration};

pub async fn initiate (session: &Session, paired_devices: &mut Vec<bluer::Address>) -> bluer::Result<PathBuf>
{
    let adapter: bluer::Adapter = get_adapter(session).await.expect("");
    let dir: PathBuf = create_cache_path(adapter.name());  // check if the directory exist, if not it'll create it
    let path = fs::read_dir(&dir).unwrap();
    load_paired_devices(paired_devices, path).await.expect("error while loading already paired devices...");

    Ok(dir)
}

pub async fn get_adapter(session: &Session) -> bluer::Result<Adapter>
{
   let adapter = session.default_adapter().await?;
   Ok(adapter)
}


pub fn create_cache_path(ad_name: &str) -> PathBuf
{
    let mut cache_path = dirs::cache_dir().expect("Could not find cache directory");
    cache_path.push(format!("blootooi/{}",ad_name));

    if !cache_path.exists() 
    {   
        println!("directory created");
        let _ = fs::create_dir_all(&cache_path);
    }

    return cache_path;
}

pub async fn load_paired_devices(devices_array: &mut Vec<bluer::Address>, directory: ReadDir) -> bluer::Result<()>
{
    for device_name in directory
    {
        if let Ok(entry) = device_name
        {   
            if let Some (name) = entry.file_name().to_str()
            {
                let address = string_to_address(name.to_string());
                devices_array.push(address);
            }
        }
    }
    Ok(())
}

pub fn print_paired(devices_array: &Vec<bluer::Address>)
{
    println!("{:?}", devices_array [1]);
    for device in devices_array
    {
        println!("{:?}", device);
    }
}

pub fn read_input() -> String{

    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("error: unable to read user input");
    //println!("{}",input); //for debug, to remove
    return input.trim().to_string();

}

pub async fn scan_devices(session: &Session, paired_array: &mut Vec<bluer::Address>, cache_path: &PathBuf) -> bluer::Result<()> { 

    let adapter: bluer::Adapter = get_adapter(session).await?;
    println!("scanning...");
    
    // scans in search of new devices
    let discover = adapter.discover_devices().await?;
    tokio::pin!(discover);
    
    timeout(Duration::from_secs(30), async {
        while let Some(event) = discover.next().await {
            match event {
                bluer::AdapterEvent::DeviceAdded(addr) => {
                    let device = adapter.device(addr)?;
                    let name = device.name().await.unwrap_or_default().unwrap_or_default();
                    let icon = device.icon().await.ok().flatten();

                    // creates a reference file to the device to be displayed as an "already paired"
                    // device
                    if device.is_paired().await?
                    {
                        if !paired_array.iter().any(|d| d == &addr)
                        {
                            let mut file_path = cache_path.clone();
                            file_path.push(format!("{}.txt",addr));
                            match File::create_new(&file_path) {
                                Ok(_file) => {
                                // File created successfully
                                },
                            Err(e) => {
                                eprintln!("Failed to create file: {}", e);
                                continue;
                                }
                            }
                            println!("{:?}", file_path )
                        }
                    }
                    if !addr.is_empty() && !name.is_empty()
                     {
                        println!("[{}] name={} type={:?}", addr, name, icon);
                     }
                }
                _ => {} 
            }
        }
        Ok::<(), bluer::Error>(())
    }).await;
    Ok(())
}

/*
 * Power the default_adapter on or off, based on its current state
*/
pub async fn power_adapter (session: &Session) -> bluer::Result<()>
{
    let adapter: bluer::Adapter = get_adapter(session).await?;
    let switch: bool = adapter.is_powered().await.expect("cannot find any adapter");
    let _ = adapter.set_powered(!switch).await;
    println!("{:?}",switch);
    Ok(())
}

pub async fn pair_device(session: &Session) -> bluer::Result<()>
{
    let adapter: bluer::Adapter = get_adapter(session).await?;

    println!("Waiting for an address");

    let input_address: String = read_input();
    let device_address = string_to_address(input_address);
    let device = adapter.device(device_address)?;

    println!("{}", device_address);

    println!("Pairing with: {:?}", device.name().await.unwrap_or_default());

    device.pair().await?;

    println!("Pairing riuscito");
    Ok(())
}

pub async fn dis_connect_device(session: &Session) -> bluer::Result<()>
{
    let adapter: bluer::Adapter = get_adapter(session).await?;

    println!("Waiting for an address");
    let input_address: String = read_input();
    let device_address = string_to_address(input_address);
    let device = adapter.device(device_address)?;
    println!("{}", device_address);
    
    if !device.is_connected().await.expect("palle")
    {
        println!("Conection with: {:?}", device.name().await.unwrap_or_default());
        device.connect().await?;
        println!("Connection succeded");  
    }
    else
    {
        println!("Disconnecting...");
        device.disconnect().await?;
        println!("Device disconnected");
    }
    Ok(())
}

pub async fn forget_device (session: &Session) -> bluer::Result<()>
{
    let adapter: bluer::Adapter = get_adapter(session).await?;

    let input_address: String = read_input();
    let _ = adapter.remove_device(string_to_address(input_address));
    Ok(())
}


pub async fn un_trust_device(session: &Session) -> bluer::Result<()>
{
    let adapter: bluer::Adapter = get_adapter(session).await?;

    let input_address: String = read_input();
    let device = adapter.device(string_to_address(input_address))?;
    let switch: bool = !device.is_trusted().await.expect("culo");
    let _ = device.set_trusted(switch).await;
    println!("the device is now {:?}", device.is_trusted().await.expect("palle"));
    Ok(())
}

pub fn string_to_address (string: String) -> bluer::Address
{
    let new_address: bluer::Address = string[0..17].parse().unwrap();
    return new_address;
}
