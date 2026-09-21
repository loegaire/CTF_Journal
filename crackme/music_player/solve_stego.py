import struct

def solve_stego():
    try:
        with open("flag.wav", "rb") as f:
            f.seek(44) # Skip header
            data = f.read()
        
        # Extract LSBs
        bits = ""
        for byte in data:
            bits += str(byte & 1)
        
        # Search for "CTF" pattern in bits
        # C = 0x43 = 01000011
        # T = 0x54 = 01010100
        # F = 0x46 = 01000110
        # { = 0x7B = 01111011
        
        # MSB first pattern
        target_msb = "01000011010101000100011001111011"
        if target_msb in bits:
            print(f"Found CTF{{ pattern (MSB First) at index {bits.find(target_msb)}")
            start_idx = bits.find(target_msb)
            # Decode reasonably length
            decoded = ""
            for i in range(start_idx, start_idx + 800, 8):
                byte_bits = bits[i:i+8]
                if len(byte_bits) == 8:
                    decoded += chr(int(byte_bits, 2))
            print("Decoded around match:", decoded)
            
        # LSB first pattern (reverse bits of each byte)
        # C = 11000010
        target_lsb = "11000010001010100110001011011110"
        if target_lsb in bits:
            print(f"Found CTF{{ pattern (LSB First) at index {bits.find(target_lsb)}")
             # Decoding this is trickier as we need to take 8 bits, reverse them, then chr
            start_idx = bits.find(target_lsb)
            decoded = ""
            for i in range(start_idx, start_idx + 800, 8):
                byte_bits = bits[i:i+8]
                if len(byte_bits) == 8:
                    decoded += chr(int(byte_bits[::-1], 2))
            print("Decoded around match:", decoded)

    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    solve_stego()
