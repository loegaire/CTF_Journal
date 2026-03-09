
data = open("/tmp/bytecode.bin", "rb").read()

offsets = [2863, 1418, 2856, 1728, 966]

for off in offsets:
    chunk = data[off:off+10]
    hex_chunk = " ".join([f"{b:02x}" for b in chunk])
    print(f"Offset {off}: {hex_chunk}")
