
data = open("/tmp/bytecode.bin", "rb").read()

offsets = [441, 525, 470, 508]

for off in offsets:
    chunk = data[off:off+3]
    hex_chunk = " ".join([f"{b:02x}" for b in chunk])
    print(f"Offset {off}: {hex_chunk}")
