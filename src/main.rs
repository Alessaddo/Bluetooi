use bluer::{Adapter, Address};
use bluer::{Device, Session};
use futures::StreamExt;
use std::fmt::format;
use std::fs::DirEntry;
use std::fs::ReadDir;
use std::ops::Add;
use std::{io, vec};
use std::io::*;
use std::fs;
use std::path::Path;
use std::fs::File;
use std::io::prelude::*;
use std::path::PathBuf;


#[tokio::main(flavor = "current_thread")]


async fn main() -> bluer::Result<()> {   
    
    let session = Session::new().await?;
    let adapter = session.default_adapter().await?;
    let dir: PathBuf = create_cache_path(adapter.name());  // check if the directory exist, if not it'll create it
    let path = fs::read_dir(&dir).unwrap();
    
    let user_input = read_input();
    
    let mut paired_devices: &mut Vec<bluer::Address> = &mut vec![];
    load_paired_devices(&mut paired_devices, path).await.expect("error while loading already paired devices...");
    let _ = match user_input.trim()
    {
        //"test" => load_paired_devices(paired_devices, path).await,

        "power" => power_adapter(&adapter).await,

        "scan" => scan_devices(&adapter, &mut paired_devices, &dir).await,

        "pair" => pair_device(&adapter).await,

        "connect" => dis_connect_device(&adapter).await,

        "trust" => un_trust_device(&adapter).await,

        "forget" => forget_device(&adapter).await,

        "paired" => 
        {
            print_paired(&paired_devices);
            Ok(())
        },

        _ => 
        {
            println!("no command found...");
            Ok(())
        }    
    };
    Ok(())
}

fn create_cache_path(ad_name: &str) -> PathBuf
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

async fn load_paired_devices(devices_array: &mut Vec<bluer::Address>, directory: ReadDir) -> bluer::Result<()>
{
    for device_name in directory
    {
        if let Ok(entry) = device_name
        {   
            if let Some (name) = entry.file_name().to_str()
            {
                let address = string_to_address(name.to_string()).await;
                devices_array.push(address);
            }
        }
    }
    Ok(())
}

fn print_paired(devices_array: &Vec<bluer::Address>)
{
    println!("{:?}", devices_array [1]);
    for device in devices_array
    {
        println!("{:?}", device);
    }
}

fn read_input() -> String{

    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("error: unable to read user input");
    //println!("{}",input); //for debug, to remove
    return input.trim().to_string();

}

async fn scan_devices(adapter: &bluer::Adapter, paired_array: &mut Vec<bluer::Address>, cache_path: &PathBuf) -> bluer::Result<()> { 

    adapter.set_powered(true).await?;
    println!("scanning...");
    
    // scans in search of new devices
    let discover = adapter.discover_devices().await?;
    tokio::pin!(discover);
    
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
                            Ok(file) => {
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
            _ => {} // ignore other events
        }
    }    
    Ok(())
}

/*
 * Power the default_adapter on or off, based on its current state
*/
async fn power_adapter (adapter: &bluer::Adapter) -> bluer::Result<()>
{
    let switch: bool = adapter.is_powered().await.expect("cannot find any adapter");
    adapter.set_powered(!switch).await;
    println!("{:?}",switch);
    Ok(())
}

async fn pair_device(adapter: &Adapter) -> bluer::Result<()>
{
    println!("Waiting for an address");
    let input_address: String = read_input();
    let device_address = string_to_address(input_address).await;
    let device = adapter.device(device_address)?;
    println!("{}", device_address);

    println!("Pairing with: {:?}", device.name().await.unwrap_or_default());

    device.pair().await?;

    println!("Pairing riuscito");
    Ok(())
}

async fn dis_connect_device(adapter: &Adapter) -> bluer::Result<()>
{
    println!("Waiting for an address");
    let input_address: String = read_input();
    let device_address = string_to_address(input_address).await;
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

async fn forget_device (adapter: &Adapter) -> bluer::Result<()>
{
    let input_address: String = read_input();
    let _ = adapter.remove_device(string_to_address(input_address).await).await;
    Ok(())
}


async fn un_trust_device(adapter: &Adapter) -> bluer::Result<()>
{
    let input_address: String = read_input();
    let device = adapter.device(string_to_address(input_address).await)?;
    let switch: bool = !device.is_trusted().await.expect("culo");
    let _ = device.set_trusted(switch).await;
    println!("the device is now {:?}", device.is_trusted().await.expect("palle"));
    Ok(())
}

async fn string_to_address (string: String) -> bluer::Address
{
    let new_address: bluer::Address = string[0..17].parse().unwrap();
    return new_address;
}
