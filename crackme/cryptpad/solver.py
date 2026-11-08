import struct

def rc4_process(key, data):
    # KSA
    S = list(range(256))
    j = 0
    # Duplicate key to fill 256 bytes
    key_expanded = (key * (256 // len(key) + 1))[:256]
    
    for i in range(256):
        j = (j + S[i] + key_expanded[i]) & 0xFF
        S[i], S[j] = S[j], S[i]

    # PRGA
    i = 0
    j = 0
    res = bytearray()
    for b in data:
        i = (i + 1) & 0xFF
        j = (j + S[i]) & 0xFF
        S[i], S[j] = S[j], S[i]
        k = S[(S[i] + S[j]) & 0xFF]
        res.append(b ^ k)
    
    return res

def solve():
    # Read the hex flag
    with open("flag.hex.txt", "r") as f:
        hex_data = f.read().replace('\n', '').strip()
    
    data = bytes.fromhex(hex_data)
    
    # Check footer
    # Format: [Data ... Padding ... ] [Original Size (4)] [Key (8)] [Key Len (1)]
    
    key_len = data[-1]
    print(f"Key Length: {key_len}")
    
    if key_len != 8:
        print("Warning: Key length is not 8, might imply different structure.")
        
    key = data[-9:-1]
    print(f"Recovered Key: {key.hex()}")
    
    # Original Size is 4 bytes before Key
    orig_size_bytes = data[-13:-9]
    orig_size = struct.unpack("<I", orig_size_bytes)[0]
    print(f"Original Size: {orig_size}")
    
    # Extract Ciphertext
    # The algorithms run on the first 'orig_size' bytes
    if orig_size > len(data):
        print("Error: Original size is larger than file size!")
        return

    ciphertext = bytearray(data[:orig_size])
    
    # Decrypt Step 1: XOR with Key (Repeating)
    print("Step 1: First XOR Pass...")
    for x in range(len(ciphertext)):
        ciphertext[x] ^= key[x % 8]
        
    # Decrypt Step 2: RC4
    print("Step 2: RC4 Pass...")
    # RC4 is symmetric, so encryption function = decryption function
    ciphertext = rc4_process(key, ciphertext)
    
    # Decrypt Step 3: XOR with Key (Repeating)
    # The encryption did: XOR -> RC4 -> XOR
    # Decryption should typically reverse operations: XOR(inv) -> RC4(inv) -> XOR(inv)
    # Since XOR and RC4 are their own inverses: XOR -> RC4 -> XOR
    print("Step 3: Second XOR Pass...")
    for x in range(len(ciphertext)):
        ciphertext[x] ^= key[x % 8]
        
    print(f"\nDecrypted Output (Hex): {ciphertext.hex()}")
    try:
        print(f"Decrypted Output (Text): {ciphertext.decode('utf-8', errors='replace')}")
    except Exception as e:
        print(f"Decoding error: {e}")

if __name__ == "__main__":
    solve()
