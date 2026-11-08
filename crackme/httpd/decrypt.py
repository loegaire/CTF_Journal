from Crypto.Cipher import AES
import struct

# Constants from assembly (Little Endian)
c1 = 0xc07edfb429a5f151
c2 = 0xb34e3d248f2f3b2a
c3 = 0x8cdd9c0bcfb0ed5a
c4 = 0x0c64c43e9b0ee6cd

# Pack to bytes
b1 = struct.pack('<Q', c1)
b2 = struct.pack('<Q', c2)
b3 = struct.pack('<Q', c3)
b4 = struct.pack('<Q', c4)

constants = b1 + b2 + b3 + b4

key = constants[0:16]
iv = constants[0:16]
ciphertext = constants[0:32]

print(f"Key: {key.hex()}")
print(f"IV: {iv.hex()}")
print(f"Ciphertext: {ciphertext.hex()}")

cipher = AES.new(key, AES.MODE_CBC, iv)
plaintext = cipher.decrypt(ciphertext)

print(f"Plaintext (hex): {plaintext.hex()}")
try:
    print(f"Plaintext (utf-8): {plaintext.decode('utf-8')}")
except:
    print("Plaintext is not utf-8")
