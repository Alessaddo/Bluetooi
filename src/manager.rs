use bluer::{Adapter};
use bluer::{Session};
use futures::StreamExt;
use std::fs::ReadDir;
use std::{io, vec};
use std::fs;
use std::fs::File;
use std::path::PathBuf;
use tokio::time::{timeout, Duration};
use std::sync::{Arc, Mutex};

#[derive(Clone)]
pub struct DeviceInfo
{
    pub address: String,
    pub device_name: String,
    pub device_type: String,
    pub trusted: String,
    pub paired: String,
}


pub async fn initiate (session: &Session, paired_devices: &mut Vec<bluer::Address>) -> bluer::Result<PathBuf>
{
    let adapter: bluer::Adapter = get_adapter(session).await.expect("");
    let dir: PathBuf = create_cache_path(adapter.name());  // check if the directory exist, if not it'll create it
    let path = fs::read_dir(&dir).unwrap();
    load_paired_devices(paired_devices, path, &session).await.expect("error while loading already paired devices...");

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

pub async fn load_paired_devices(devices_array: &mut Vec<bluer::Address>, directory: ReadDir,session: &Session) -> bluer::Result<()>
{
    let adapter: bluer::Adapter = get_adapter(session).await?;

    for device_name in directory
    {
        if let Ok(entry) = device_name
        {   
            if let Some (name) = entry.file_name().to_str()
            {
                let address = string_to_address(name.to_string());
                
                match adapter.device(address)
                {
                    Ok(device) =>{
                        match device.is_paired().await {
                            Ok(true) => {devices_array.push(address);}
                        

                            _ => if let Err(_) = std::fs::remove_file(entry.path()){}
                        }
                    }
                    Err(_) => {
                        if let Err(_) = std::fs::remove_file(entry.path()){}
                    }
                    
                }
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

pub async fn scan_devices(session: &Session, paired_array: &mut Vec<bluer::Address>, cache_path: &PathBuf, devices_list: Arc<Mutex<Vec<DeviceInfo>>>) -> bluer::Result<()> {
    let adapter: bluer::Adapter = get_adapter(session).await?;  
    let discover = adapter.discover_devices().await?;
    tokio::pin!(discover);
   // started scanning 
    let _scan_result = timeout(Duration::from_secs(30), async {
        while let Some(event) = discover.next().await {
            match event {
                bluer::AdapterEvent::DeviceAdded(addr) => {
                    let device = adapter.device(addr)?;
                    let name = device.name().await.unwrap_or_default().unwrap_or_default();
                    let icon = device.icon().await.ok().flatten();
                    
                    if device.is_paired().await? {
                        if !paired_array.iter().any(|d| d == &addr) {
                            let mut file_path = cache_path.clone();
                            file_path.push(format!("{}.txt", addr));
                            match File::create_new(&file_path) {
                                Ok(_file) => {},
                                Err(_) => {
                                    continue;
                                }
                            }
                        }
                    }
                    else if !addr.is_empty() && !name.is_empty() {
                        // Collect the data you need outside the lock
                        let new_device_info = DeviceInfo {
                            address: addr.to_string(),
                            device_name: name.clone(),
                            device_type: format!("{:?}", icon),
                            trusted: device.is_trusted().await?.to_string(),
                            paired: if device.is_connected().await? {"✓".to_string()} else if device.is_paired().await? {"⚭".to_string()} else {"".to_string()},
                        };
                        
                        // Then lock and update quickly
                        {
                            let mut list = devices_list.lock().unwrap();
                            list.push(new_device_info);
                        } // Lock dropped immediately
                                            
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

pub async fn pair_device(session: &Session, address: String) -> bluer::Result<()>
{
    let adapter: bluer::Adapter = get_adapter(session).await?;

    let device_address = string_to_address(address);
    let device = adapter.device(device_address)?;

    device.pair().await?;

    Ok(())
}

pub async fn dis_connect_device(session: &Session, address: String) -> bluer::Result<()>
{
    let adapter: bluer::Adapter = get_adapter(session).await?;

    let device_address = string_to_address(address.clone());
    let device = adapter.device(device_address)?;

    if !device.is_paired().await?
    {
        pair_device(&session, address).await.expect("An error occured while pairing the device.");
    }
    
    if !device.is_connected().await.expect("palle")
    {
        device.connect().await?;
    }
    else
    {
        device.disconnect().await?;
    }
    Ok(())
}

pub async fn forget_device (session: &Session, address: String, devices_list: Arc<Mutex<Vec<DeviceInfo>>>) -> bluer::Result<()>
{
    let adapter: bluer::Adapter = get_adapter(session).await?;

    let _ = adapter.remove_device(string_to_address(address.clone())).await?;

    let mut list = devices_list.lock().unwrap();
    let index = list.iter().position(|x| x.address == address).unwrap();
    list.remove(index);

    Ok(())
}


pub async fn un_trust_device(session: &Session, address: String) -> bluer::Result<()>
{
    let adapter: bluer::Adapter = get_adapter(session).await?;

    let device = adapter.device(string_to_address(address))?;
    let switch: bool = !device.is_trusted().await.expect("Error occured");
    let _ = device.set_trusted(switch).await;
    Ok(())
}

pub fn string_to_address (string: String) -> bluer::Address
{
    let new_address: bluer::Address = string[0..17].parse().unwrap();
    return new_address;
}
