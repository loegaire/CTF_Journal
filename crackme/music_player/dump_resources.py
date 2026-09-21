import pefile
import os

def dump_resources():
    try:
        pe = pefile.PE("RecordPlayer.exe")
        
        if not hasattr(pe, 'DIRECTORY_ENTRY_RESOURCE'):
            print("No resources found.")
            return

        for resource_type in pe.DIRECTORY_ENTRY_RESOURCE.entries:
            type_name = str(resource_type.name) if resource_type.name else str(pefile.RESOURCE_TYPE.get(resource_type.struct.Id, resource_type.struct.Id))
            
            for resource_id in resource_type.directory.entries:
                res_id = str(resource_id.name) if resource_id.name else str(resource_id.struct.Id)
                
                for resource_lang in resource_id.directory.entries:
                    data = pe.get_data(resource_lang.data.struct.OffsetToData, resource_lang.data.struct.Size)
                    
                    filename = f"resource_{type_name}_{res_id}.bin"
                    with open(filename, "wb") as f:
                        f.write(data)
                    print(f"Extracted {filename} ({len(data)} bytes)")

    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    dump_resources()
