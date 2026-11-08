import base64
import re
import zipfile
from pathlib import Path


prefix = b"CSCV{"
variants = {}
for shift in range(95):
    variants[bytes((value - 32 + shift) % 95 + 32 for value in prefix)] = ("rotate", shift)
for key in range(256):
    variants[bytes(value ^ key for value in prefix)] = ("xor", key)
pattern = re.compile(b"|".join(re.escape(value) for value in variants))
base64_pattern = re.compile(rb"[A-Za-z0-9+/]{20,}={0,2}")


def scan(label, data):
    for match in pattern.finditer(data):
        kind, key = variants[match.group()]
        fragment = data[match.start():match.start() + 200]
        if kind == "rotate":
            decoded = bytes((value - 32 - key) % 95 + 32 for value in fragment)
        else:
            decoded = bytes(value ^ key for value in fragment)
        if re.match(rb"CSCV\{[ -~]{4,150}\}", decoded):
            print(label, match.start(), kind, key, repr(decoded), flush=True)
    for match in base64_pattern.finditer(data):
        token = match.group()
        if len(token) > 200000:
            continue
        try:
            decoded = base64.b64decode(token + b"=" * (-len(token) % 4))
        except ValueError:
            continue
        if b"CSCV" in decoded:
            print(label, match.start(), "base64", repr(decoded[:2000]), flush=True)


with zipfile.ZipFile("collect.zip") as archive:
    for entry in archive.infolist():
        if entry.is_dir() or entry.file_size > 10000000 or entry.filename.endswith(".rpm"):
            continue
        scan(entry.filename, archive.read(entry))
print("collection scan complete", flush=True)
with Path("memory_strings.txt").open("rb") as stream:
    for line in stream:
        scan("memory", line)
print("memory scan complete", flush=True)
