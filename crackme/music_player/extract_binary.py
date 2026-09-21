import pefile

def extract_binary():
    try:
        pe = pefile.PE("RecordPlayer.exe")
        
        target_type = "BINARY" # Or ID 1504 if name matching fails
        target_id = 111
        
        for resource_type in pe.DIRECTORY_ENTRY_RESOURCE.entries:
            type_name = str(resource_type.name) if resource_type.name else None
            type_id = resource_type.struct.Id
            
            # Match type by name or ID
            if type_name == "BINARY" or type_id == 1504:
                print(f"Found Type: {type_name} (ID: {type_id})")
                
                for resource_id in resource_type.directory.entries:
                    if resource_id.struct.Id == target_id:
                        print(f"Found Resource ID: {target_id}")
                        
                        data = pe.get_data(resource_id.directory.entries[0].data.struct.OffsetToData, resource_id.directory.entries[0].data.struct.Size)
                        
                        filename = "resource_BINARY_111.bin"
                        with open(filename, "wb") as f:
                            f.write(data)
                        print(f"Extracted {filename} ({len(data)} bytes)")
                        return
        print("Resource not found.")

    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    extract_binary()
