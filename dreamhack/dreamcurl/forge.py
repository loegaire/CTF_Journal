import base64
import hashlib
import struct

def make_license(name: str, exp: str) -> str:
    magic = 0x4C52550C4DEA520D
    name_field = name.encode().ljust(0x20, b"\x00")
    exp_field = exp.encode().ljust(0x10, b"\x00")
    sig = hashlib.md5(f"{name}|{exp}".encode()).digest()
    blob = struct.pack("<Q", magic) + name_field + exp_field + sig
    return base64.b64encode(blob).decode()

print(make_license("my_username", "2026-12-31"))
