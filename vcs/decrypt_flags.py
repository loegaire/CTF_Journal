#!/usr/bin/env python3

# Target crackme flag decryption script
# Analyzes the C++ source code to extract the real flag

import struct

# Encrypted flag data from target.cpp
encrypted_pass1 = bytes([
    0x3C, 0x36, 0x3B, 0x3D, 0x21, 0x3B, 0x34, 0x2E, 0x33, 0x05, 
    0x3E, 0x3F, 0x38, 0x2F, 0x3D, 0x05, 0x3E, 0x3F, 0x37, 0x35, 0x27
])

encrypted_pass2 = bytes([
    0x1A, 0x0F, 0x1C, 0x1E, 0x08, 0x1C, 0x11, 0x05, 0x10, 0x1B,
    0x1D, 0x1E, 0x15, 0x14, 0x1E, 0x1B, 0x1D, 0x1E, 0x14, 0x12, 0x04
])

encrypted_pass3 = bytes([
    0x7F, 0x79, 0x7A, 0x7C, 0x60, 0x7A, 0x75, 0x6B, 0x70, 0x7A,
    0x7D, 0x7E, 0x71, 0x6E, 0x7C, 0x7A, 0x7D, 0x7E, 0x74, 0x72, 0x64
])

# Custom encryption key from source
custom_key = b"SUPER_SECRET_KEY_2024"

def perform_xor_decryption(input_data, key):
    """XOR decryption function from target.cpp"""
    output = bytearray()
    for i in range(len(input_data)):
        output.append(input_data[i] ^ key)
    return bytes(output)

def perform_aes_decryption_simulation(input_data):
    """AES decryption simulation from target.cpp"""
    aes_key = [0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0]
    output = bytearray()
    for i in range(len(input_data)):
        output.append(input_data[i] ^ aes_key[i % 8])
    return bytes(output)

def perform_custom_cipher(input_data):
    """Custom cipher implementation from target.cpp"""
    output = bytearray(input_data)
    for i in range(len(output)):
        # Bit rotation: (output[i] << 2) | (output[i] >> 6)
        rotated = ((output[i] << 2) & 0xFF) | ((output[i] >> 6) & 0xFF)
        output[i] = rotated
        # Add key (with modulo to prevent overflow)
        key_byte = custom_key[i % len(custom_key)]
        output[i] = (output[i] + key_byte) & 0xFF
        # Final XOR
        output[i] ^= 0x55
    return bytes(output)

def decrypt_string_full():
    """Full decryption process matching target.cpp DecryptString()"""
    # Layer 1: XOR decryption with 0x5A
    temp1 = perform_xor_decryption(encrypted_pass1, 0x5A)
    
    # Layer 2: AES decryption simulation
    temp2 = perform_aes_decryption_simulation(temp1)
    
    # Layer 3: Custom cipher
    final_result = perform_custom_cipher(temp2)
    
    return final_result

def decrypt_method_2():
    """Second decryption method: XOR with 0x5A"""
    return perform_xor_decryption(encrypted_pass2, 0x5A)

def decrypt_method_3():
    """Third decryption method: Custom cipher only"""
    return perform_custom_cipher(encrypted_pass3)

def main():
    print("=== TARGET CRACKME FLAG DECRYPTION ===\n")
    
    # Method 1: Full three-layer decryption
    print("Method 1 (Full decryption):")
    flag1 = decrypt_string_full()
    try:
        print(f"  Decrypted: {flag1.decode('utf-8')}")
    except UnicodeDecodeError:
        print(f"  Raw bytes: {flag1.hex()}")
    
    # Method 2: XOR only
    print("\nMethod 2 (XOR only):")
    flag2 = decrypt_method_2()
    try:
        print(f"  Decrypted: {flag2.decode('utf-8')}")
    except UnicodeDecodeError:
        print(f"  Raw bytes: {flag2.hex()}")
    
    # Method 3: Custom cipher only
    print("\nMethod 3 (Custom cipher only):")
    flag3 = decrypt_method_3()
    try:
        print(f"  Decrypted: {flag3.decode('utf-8')}")
    except UnicodeDecodeError:
        print(f"  Raw bytes: {flag3.hex()}")
    
    # Check which ones look like flags
    print("\n=== FLAG ANALYSIS ===")
    flags = []
    
    for i, flag in enumerate([flag1, flag2, flag3], 1):
        try:
            decoded = flag.decode('utf-8')
            if 'flag{' in decoded and '}' in decoded:
                flags.append((i, decoded))
                print(f"✓ Method {i}: {decoded}")
        except UnicodeDecodeError:
            print(f"✗ Method {i}: Not valid UTF-8")
    
    if flags:
        print(f"\n=== VALID FLAGS FOUND: {len(flags)} ===")
        for method, flag in flags:
            print(f"Method {method}: {flag}")
    else:
        print("\n=== NO VALID FLAGS FOUND ===")
        print("The decrypted results may need further analysis or the flag format might be different.")

if __name__ == "__main__":
    main()