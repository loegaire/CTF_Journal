import struct

def fnv1a_32(data):
    hash_val = 0x811c9dc5
    fnv_prime = 0x1000193
    for byte in data:
        hash_val = hash_val ^ byte
        hash_val = (hash_val * fnv_prime) & 0xFFFFFFFF
    return hash_val

def check_hash():
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
        content = f.read()
        idx = content.find(b"data")
        if idx == -1: return
        
        # Audio Data
        wav_data = content[idx+8:]
        
    # Sequence 1: 0, End, End-1 ...
    seq1 = bytearray()
    seq1.append(wav_data[0])
    for i in range(1, 23):
        seq1.append(wav_data[len(wav_data) - i])
        
    # Sequence 2: End, End-1 ...
    seq2 = bytearray()
    for i in range(1, 24):
        seq2.append(wav_data[len(wav_data) - i])

    # Sequence 3: End-22 ... End (Forward at end)
    seq3 = wav_data[-23:]

    # Sequence 4: Start (Forward) - just to be sure
    seq4 = wav_data[:23]

    candidates = [
        ("Backward Mixed", seq1),
        ("Backward Pure", seq2),
        ("Forward End", seq3),
        ("Forward Start", seq4)
    ]
    
    for name, data in candidates:
        # Check FNV(data ^ key)
        xor_result = bytearray([b ^ k for b, k in zip(data, key_bytes)])
        hash_val = fnv1a_32(xor_result)
        
        print(f"[{name}] XOR Hash: {hex(hash_val)}")
        if hash_val == target:
            print(f"!!! MATCH FOUND: {name} !!!")
            print("XOR Result (Flag?):", xor_result)
            try: print("ASCII:", xor_result.decode())
            except: pass

if __name__ == "__main__":
    check_hash()
