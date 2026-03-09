package main

import (
	"bytes"
	"crypto/aes"
	"crypto/cipher"
	"encoding/binary"
	"fmt"
	"os"
)

func main() {
	c1 := uint64(0xc07edfb429a5f151)
	c2 := uint64(0xb34e3d248f2f3b2a)
	c3 := uint64(0x8cdd9c0bcfb0ed5a)
	c4 := uint64(0x0c64c43e9b0ee6cd)

	blob := make([]byte, 32)
	binary.LittleEndian.PutUint64(blob[0:8], c1)
	binary.LittleEndian.PutUint64(blob[8:16], c2)
	binary.LittleEndian.PutUint64(blob[16:24], c3)
	binary.LittleEndian.PutUint64(blob[24:32], c4)

	ecxHigh := uint16(0xe55f)
	idVal := uint16(0x1337)
	
    // Replicate key construction
    // Slice 12-16: ID ID
    slice12_16 := make([]byte, 4)
    binary.LittleEndian.PutUint16(slice12_16[0:2], idVal)
    binary.LittleEndian.PutUint16(slice12_16[2:4], idVal)

	// Scan Ranges
	// Flags: 0..255 (Byte 0)
    // FragOffset: 0 (Assumed)
    // TTL: 0..255
    // Checksum: 0..65535
    
    // Total: 256 * 256 * 65536 = 4 Billion.
    // 4 min at 17M ops/sec. Go can likely do 50M ops/sec per core.
    
    fmt.Println("Starting brute force...")
    
	key := make([]byte, 16)
    // Fill constant parts
    copy(key[12:16], slice12_16)
    
	// Iterate Flags (Byte 0 of Flags/Frag)
	for flags := 0; flags < 256; flags++ {
        // Iterate TTL
        for ttl := 0; ttl < 256; ttl++ {
            
            // Construct IP Slice (Bytes 2-6)
            // Flags(2), TTL(1), Proto(1)
            // Mask: F0 F1 T P
            // Flags = flags (0..255)
            // FragOffset = 0
            // Proto = 1
            
            ipSlice := []byte{byte(flags), 0, byte(ttl), 1}
            copy(key[2:6], ipSlice)
            
            for edx := 0; edx < 65536; edx++ {
                // Construct EDX dependent parts
                // Slice 0-2
                val := ecxHigh ^ uint16(edx)
                valSwapped := ((val & 0xff) << 8) | ((val >> 8) & 0xff)
                binary.LittleEndian.PutUint16(key[0:2], valSwapped)
                
                // Slice 6-8
                binary.LittleEndian.PutUint16(key[6:8], uint16(edx))
                
                // Slice 8-12
                binary.LittleEndian.PutUint32(key[8:12], uint32(edx))
                
                // Decrypt
                block, _ := aes.NewCipher(key) // Assume no error
                mode := cipher.NewCBCDecrypter(block, key)
                
                pt := make([]byte, 32)
                mode.CryptBlocks(pt, blob)
                
                // Check if starts with CMO{
                if bytes.Contains(pt, []byte("CMO{")) {
                    fmt.Printf("FOUND! EDX=%x Flags=%x TTL=%x Key=%x\n", edx, flags, ttl, key)
                    fmt.Printf("Flag: %s\n", pt)
                    os.Exit(0)
                }
            }
        }
        if flags % 10 == 0 {
            fmt.Printf("Scanned flags %d/256...\n", flags)
        }
	}
    fmt.Println("Finished (Not found).")
}
