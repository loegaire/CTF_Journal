
data = open("/tmp/bytecode.bin", "rb").read()

offsets = [3414, 1873, 3212]

for off in offsets:
    chunk = data[off:off+20]
    hex_chunk = " ".join([f"{b:02x}" for b in chunk])
    print(f"Offset {off}: {hex_chunk}")
