import struct
from pathlib import Path

from Crypto.Hash import keccak

key = [0x4C3A2711, 0x8E7D6859, 0xCDBCAB90, 0x02F1EFDE]
previous = bytes.fromhex("a1b2c3d4e5f60718")
binary = Path("recovered/inode_0x92f0dce4f5a0.dmp").read_bytes()
ciphertext = binary[0x246AE0:0x246AE0 + 96]
plaintext = bytearray()
mask = 0xFFFFFFFF
delta = 0x9E3779B9
for offset in range(0, len(ciphertext), 8):
    block = ciphertext[offset:offset + 8]
    left, right = struct.unpack("<2I", block)
    total = (delta * 32) & mask
    for round_index in range(32):
        right = (right - ((((left << 4) ^ (left >> 5)) + left) ^ (total + key[(total >> 11) & 3]))) & mask
        total = (total - delta) & mask
        left = (left - ((((right << 4) ^ (right >> 5)) + right) ^ (total + key[total & 3]))) & mask
    plaintext.extend(value ^ prior for value, prior in zip(struct.pack("<2I", left, right), previous))
    previous = block
assert plaintext[-1:] == b"\x01"
address = plaintext[:-1].decode("ascii")
alphabet = "123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"
decoded = bytearray()
for offset in range(0, len(address), 11):
    block = address[offset:offset + 11]
    value = 0
    for character in block:
        value = value * 58 + alphabet.index(character)
    decoded.extend(value.to_bytes(8 if len(block) == 11 else 5, "big"))
assert len(decoded) == 69 and decoded[0] == 0x12
assert keccak.new(digest_bits=256, data=bytes(decoded[:-4])).digest()[:4] == decoded[-4:]
print(address)
print("Verified Monero mainnet prefix and Keccak checksum")
