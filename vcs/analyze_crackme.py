#!/usr/bin/env python3

# Comprehensive analysis of the target crackme

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
        # Add key
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

def analyze_hex_strings(hex_str):
    """Try to interpret hex data as different encodings"""
    try:
        # Try ASCII
        ascii_result = bytes.fromhex(hex_str).decode('ascii', errors='ignore')
        if ascii_result:
            return f"ASCII: {ascii_result}"
    except:
        pass
    
    try:
        # Try UTF-8
        utf8_result = bytes.fromhex(hex_str).decode('utf-8', errors='ignore')
        if utf8_result:
            return f"UTF-8: {utf8_result}"
    except:
        pass
    
    try:
        # Try Latin-1
        latin1_result = bytes.fromhex(hex_str).decode('latin-1', errors='ignore')
        if latin1_result:
            return f"Latin-1: {latin1_result}"
    except:
        pass
    
    return f"Raw hex: {hex_str}"

def main():
    print("=== COMPREHENSIVE TARGET CRACKME ANALYSIS ===\n")
    
    # Method 1: Full three-layer decryption
    print("Method 1 (Full decryption - XOR + AES + Custom):")
    flag1 = decrypt_string_full()
    print(f"  Raw bytes: {flag1.hex()}")
    print(f"  Analysis: {analyze_hex_strings(flag1.hex())}")
    
    # Method 2: XOR only
    print("\nMethod 2 (XOR only with 0x5A):")
    flag2 = decrypt_method_2()
    print(f"  Raw bytes: {flag2.hex()}")
    try:
        decoded = flag2.decode('utf-8')
        print(f"  UTF-8: {decoded}")
        if 'flag{' in decoded and '}' in decoded:
            print(f"  ✓ VALID FLAG: {decoded}")
    except UnicodeDecodeError as e:
        print(f"  Not UTF-8: {e}")
        print(f"  Analysis: {analyze_hex_strings(flag2.hex())}")
    
    # Method 3: Custom cipher only
    print("\nMethod 3 (Custom cipher only):")
    flag3 = decrypt_method_3()
    print(f"  Raw bytes: {flag3.hex()}")
    print(f"  Analysis: {analyze_hex_strings(flag3.hex())}")
    
    # Additional analysis: Try different approaches
    print("\n=== ALTERNATIVE DECRYPTION APPROACHES ===")
    
    # Try different XOR keys on encrypted_pass1
    print("Testing different XOR keys on encrypted_pass1:")
    for key in [0x5A, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49]:
        result = perform_xor_decryption(encrypted_pass1, key)
        try:
            decoded = result.decode('utf-8')
            if 'flag{' in decoded and '}' in decoded:
                print(f"  ✓ KEY 0x{key:02X}: {decoded}")
        except:
            pass
    
    # Try different XOR keys on encrypted_pass2
    print("\nTesting different XOR keys on encrypted_pass2:")
    for key in [0x5A, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49]:
        result = perform_xor_decryption(encrypted_pass2, key)
        try:
            decoded = result.decode('utf-8')
            if 'flag{' in decoded and '}' in decoded:
                print(f"  ✓ KEY 0x{key:02X}: {decoded}")
        except:
            pass
    
    # Check if any of the fake flags from source code work
    print("\n=== FAKE FLAG ANALYSIS ===")
    fake_flags = [
        "flag{debugger_detected}",
        "flag{easy_mode}", 
        "flag{beginner_ctf}",
        "flag{try_harder}",
        "flag{not_this_one}"
    ]
    
    for fake_flag in fake_flags:
        print(f"  Fake flag: {fake_flag}")
        # Apply same transformations as the program does to fake flags
        fake_bytes = fake_flag.encode('utf-8')
        # Try XOR with 0x5A (like in ConfuseReverseEngineers)
        xor_result = perform_xor_decryption(fake_bytes, 0x5A)
        print(f"    XOR 0x5A: {xor_result.hex()}")
    
    # Look for patterns in the encrypted data
    print("\n=== ENCRYPTED DATA PATTERNS ===")
    print(f"encrypted_pass1 length: {len(encrypted_pass1)}")
    print(f"encrypted_pass2 length: {len(encrypted_pass2)}")
    print(f"encrypted_pass3 length: {len(encrypted_pass3)}")
    
    # Check if encrypted data contains patterns
    for i, (name, data) in enumerate([
        ("pass1", encrypted_pass1),
        ("pass2", encrypted_pass2), 
        ("pass3", encrypted_pass3)
    ]):
        print(f"\n{name}: {data.hex()}")
        # Check for repeating patterns
        if len(data) > 10:
            # Check if first 10 bytes repeat
            if data[:10] == data[10:20]:
                print(f"  Repeating pattern detected!")
            # Check for simple XOR patterns
            xor_diff = data[0] ^ data[1]
            if all(data[i] ^ data[i+1] == xor_diff for i in range(len(data)-1)):
                print(f"  Simple XOR pattern with difference 0x{xor_diff:02X}")

if __name__ == "__main__":
    main()