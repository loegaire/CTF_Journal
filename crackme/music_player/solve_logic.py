import struct

def solve_logic():
    # Hardcoded Key from FUN_1400016f0
    key_bytes = bytearray([
        0x30, 0x2b, 0x3d, 0xfc,
        0xf6, 0xb6, 0x06, 0x3b,
        0x0e, 0xb1, 0xed, 0xc0,
        0xe1, 0x48, 0x07, 0x0c,
        0x0b, 0xbb, 0xf4, 0xf9,
        0x48, 0x01,
        0x19
    ])
    
    try:
        with open("resource_BINARY_111.bin", "rb") as f:
            binary_data = f.read()

        print("BINARY (23 bytes):", binary_data[:23].hex())
        
        # XOR Key with Binary Data (Raw)
        result = bytearray()
        for i in range(min(len(key_bytes), len(binary_data))):
            result.append(binary_data[i] ^ key_bytes[i])
        print("XOR (Key ^ BinRaw):", result.hex())
        try:
             print("ASCII:", result.decode('utf-8'))
        except:
             print("ASCII: (decode err)")

        # XOR Key with Binary Data (Every 4th byte, assuming int array)
        # Binary data looked like 06 00 00 00 ...
        ints = struct.unpack('<' + 'I' * (len(binary_data) // 4), binary_data)
        # Take first 23 ints? Or bytes from ints?
        # If the generated audio matches these INTs?
        # Generated audio is 8-bit.
        # Maybe the INTs represent 8-bit values?
        
        result_ints = bytearray()
        for i in range(min(len(key_bytes), len(ints))):
             # ints[i] is a 32-bit int. XOR with key byte?
             # Or key byte is matched against int?
             val = ints[i] & 0xFF
             result_ints.append(val ^ key_bytes[i])
        
        print("XOR (Key ^ BinInts[0]):", result_ints.hex())
        try:
             print("ASCII:", result_ints.decode('utf-8'))
        except: pass

    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    solve_logic()
