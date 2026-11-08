import pefile

def debug_resources():
    try:
        pe = pefile.PE("RecordPlayer.exe")
        
        if not hasattr(pe, 'DIRECTORY_ENTRY_RESOURCE'):
            print("No resources found.")
            return

        print("--- Resource Directory Dump ---")
        for resource_type in pe.DIRECTORY_ENTRY_RESOURCE.entries:
            type_id = resource_type.struct.Id
            type_name = str(resource_type.name) if resource_type.name else str(pefile.RESOURCE_TYPE.get(type_id, type_id))
            print(f"Type: {type_name} (ID: {type_id})")
            
            for resource_id in resource_type.directory.entries:
                res_id = resource_id.struct.Id
                res_name = str(resource_id.name) if resource_id.name else str(res_id)
                print(f"  - Resource ID: {res_name} (ID: {res_id})")

    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    debug_resources()
