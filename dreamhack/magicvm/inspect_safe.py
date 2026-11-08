
data = open("/tmp/bytecode.bin", "rb").read()

offsets = [1724, 3211, 3212, 1418, 1873]

for off in offsets:
    chunk = data[off:off+12]
    hex_chunk = " ".join([f"{b:02x}" for b in chunk])
    print(f"Offset {off}: {hex_chunk}")
