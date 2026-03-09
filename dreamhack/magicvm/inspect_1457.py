
data = open("/tmp/bytecode.bin", "rb").read()
chunk = data[1457:1470]
hex_chunk = " ".join([f"{b:02x}" for b in chunk])
print(f"Offset 1457: {hex_chunk}")
