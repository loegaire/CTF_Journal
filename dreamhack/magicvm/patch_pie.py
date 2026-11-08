import struct

with open("main.so", "r+b") as f:
    data = f.read()
    # Search for DT_FLAGS_1 tag: 0x6ffffffb
    tag = struct.pack("<Q", 0x6ffffffb)
    
    offset = data.find(tag)
    if offset == -1:
        print("[-] DT_FLAGS_1 not found!")
    else:
        print(f"[+] DT_FLAGS_1 found at {hex(offset)}")
        # The value is the next 8 bytes
        val_offset = offset + 8
        val = struct.unpack("<Q", data[val_offset:val_offset+8])[0]
        print(f"[*] Old Value: {hex(val)}")
        
        # DF_1_PIE is 0x08000000
        new_val = val & ~0x08000000
        print(f"[*] New Value: {hex(new_val)}")
        
        f.seek(val_offset)
        f.write(struct.pack("<Q", new_val))
        print("[+] Patched!")
