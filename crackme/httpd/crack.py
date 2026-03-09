import struct
from Crypto.Cipher import AES
import time

def solve():
    c1 = 0xc07edfb429a5f151
    c2 = 0xb34e3d248f2f3b2a
    c3 = 0x8cdd9c0bcfb0ed5a
    c4 = 0x0c64c43e9b0ee6cd
    blob = struct.pack('<Q', c1) + struct.pack('<Q', c2) + struct.pack('<Q', c3) + struct.pack('<Q', c4)

    # Precompute parts from packet-derived fields seen in disasm.
    payload = 0xe55fdec6
    payload_bytes = struct.pack('<I', payload)
    payload_hi = (payload >> 16) & 0xffff
    payload_lo = payload & 0xffff
    id_val = 0x1337
    id_bytes = struct.pack('<H', id_val)

    # Precompute all checksum-dependent parts.
    # key[0:2]   = bswap16((payload_hi ^ cksum))
    # key[6:8]   = cksum (little-endian bytes as stored in packet)
    # key[14:16] = bswap16((cksum ^ payload_lo))
    checksum_parts = []
    for cksum in range(65536):
        v0 = payload_hi ^ cksum
        v0_swapped = ((v0 & 0xff) << 8) | ((v0 >> 8) & 0xff)
        s0 = struct.pack('<H', v0_swapped)

        v1 = (cksum ^ payload_lo) & 0xffff
        v1_swapped = ((v1 & 0xff) << 8) | ((v1 >> 8) & 0xff)
        s14 = struct.pack('<H', v1_swapped)

        s6 = struct.pack('<H', cksum)
        checksum_parts.append((s0, s6, s14))

    # IP Parts (Slice 2-6)
    # Flags/Frag(2) TTL(1) Proto(1)
    ip_parts = []
    proto = b'\x01'
    # Try common flags/fragment values (network order).
    for flags in [b'\x00\x00', b'\x40\x00']:
        for ttl in range(256):
            ip_parts.append(flags + struct.pack('B', ttl) + proto)
            
    print(f"Starting brute force: {len(ip_parts)} IP variants * 65536 checksums...")
    count = 0
    start = time.time()
    
    for ip_p in ip_parts:
        # Optimization: We construct key = s0 + ip_p + s6 + payload + id + s14
        # Key length 16.
        # Structure:
        # 0-2: s0 (from edx)
        # 2-6: ip_p (fixed in outer loop)
        # 6-8: s6 (checksum bytes)
        # 8-12: payload (fixed)
        # 12-14: id (fixed)
        # 14-16: s14 (from checksum)
        
        # Only edx varies in inner loop.
        for cksum in range(65536):
            s0, s6, s14 = checksum_parts[cksum]
            key = s0 + ip_p + s6 + payload_bytes + id_bytes + s14
            
            # Decrypt
            # Optimize: Create cipher only once? No, Key changes.
            # AES.new is fast.
            
            # To speed up, check first block only?
            # Ciphertext is 32 bytes.
            # Plaintext = D(C) XOR IV. IV=Key.
            
            # PyCryptodome AES is fast enough for 30M ops? Maybe 1 min.
            
            cipher = AES.new(key, AES.MODE_CBC, key)
            pt = cipher.decrypt(blob)
            
            if b'CMO{' in pt:
                print(f"FOUND! checksum={hex(cksum)}, IP={ip_p.hex()}")
                print(f"flag: {pt}")
                return

            count += 1
            if count % 1000000 == 0:
                print(f" scanned {count}...")

    print("Finished.")

if __name__ == "__main__":
    solve()
