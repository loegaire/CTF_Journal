import struct

def fnv1a_32_check(data, target, prime=0x1000193, basis=0x811c9dc5):
    # Optimized check? Python logical ops are slow in loops.
    # But 700k is manageable.
    hash_val = basis
    for byte in data:
        hash_val = hash_val ^ byte
        hash_val = (hash_val * prime) & 0xFFFFFFFF
    return hash_val == target

def solve_sliding():
    target = 0x18940a3d # 412355133
    key_bytes = bytearray([
        0x30, 0x2b, 0x3d, 0xfc,
        0xf6, 0xb6, 0x06, 0x3b,
        0x0e, 0xb1, 0xed, 0xc0,
        0xe1, 0x48, 0x07, 0x0c,
        0x0b, 0xbb, 0xf4, 0xf9,
        0x48, 0x01,
        0x19
    ])
    
    with open("flag.wav", "rb") as f:
        # Read all data
        # Skip header?
        # Just read everything. The window can be anywhere.
        content = f.read()
            
    print(f"Scanning {len(content)} bytes...")
    
    # Pre-calculate key for faster access
    key_len = len(key_bytes)
    
     # Optimize: We need to check FNV1a(chunk ^ key)
    
    for i in range(len(content) - key_len):
        chunk = content[i : i + key_len]
        
        # XOR
        xor_chunk = bytearray([b ^ k for b, k in zip(chunk, key_bytes)])
        
        # Hash
        hash_val = 0x811c9dc5
        for b in xor_chunk:
            hash_val = hash_val ^ b
            hash_val = (hash_val * 0x1000193) & 0xFFFFFFFF
            
        if hash_val == target:
            print(f"MATCH FOUND at offset {i}!")
            print("XOR Result (Flag?):", xor_chunk)
            try: print("ASCII:", xor_chunk.decode())
            except: pass
            return

    print("No forward match found. Checking backward...")
    # Backward sliding window?
    # Or just reverse the whole content and scan?
    reversed_content = content[::-1]
    for i in range(len(reversed_content) - key_len):
        chunk = reversed_content[i : i + key_len]
        # Note: chunk here is already reversed relative to original file
        
        xor_chunk = bytearray([b ^ k for b, k in zip(chunk, key_bytes)])
         
        hash_val = 0x811c9dc5
        for b in xor_chunk:
            hash_val = hash_val ^ b
            hash_val = (hash_val * 0x1000193) & 0xFFFFFFFF
            
        if hash_val == target:
            # Calculate original file offset
            # reversed[i] corresponds to original[len-1-i]
            offset_end = len(content) - 1 - i
            print(f"MATCH FOUND (Backward) ending at offset {offset_end}!")
            print("XOR Result (Flag?):", xor_chunk)
            try: print("ASCII:", xor_chunk.decode())
            except: pass
            return

    print("Done.")

if __name__ == "__main__":
    solve_sliding()
