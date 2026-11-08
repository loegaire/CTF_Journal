def calc_target():
    key_bytes = bytearray([
        0x30, 0x2b, 0x3d, 0xfc,
        0xf6, 0xb6, 0x06, 0x3b,
        0x0e, 0xb1, 0xed, 0xc0,
        0xe1, 0x48, 0x07, 0x0c,
        0x0b, 0xbb, 0xf4, 0xf9,
        0x48, 0x01,
        0x19
    ])
    
    target = b"CTF{"
    required_input = bytearray()
    
    for i in range(len(target)):
        required_input.append(key_bytes[i] ^ target[i])
        
    print("Required Input for CTF{:", required_input.hex())
    
    # Check if this sequence exists in binary or wav
    # 737f7b87
    
if __name__ == "__main__":
    calc_target()
