
data = open("/tmp/bytecode.bin", "rb").read()
chunk = data[916:936]
hex_chunk = " ".join([f"{b:02x}" for b in chunk])
print(f"Offset 916: {hex_chunk}")
