
data = open("/tmp/bytecode.bin", "rb").read()
chunk = data[0:20]
hex_chunk = " ".join([f"{b:02x}" for b in chunk])
print(f"Offset 0: {hex_chunk}")
