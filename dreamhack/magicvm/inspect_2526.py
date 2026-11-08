
data = open("/tmp/bytecode.bin", "rb").read()
chunk = data[2526:2576]
hex_chunk = " ".join([f"{b:02x}" for b in chunk])
print(f"Offset 2526: {hex_chunk}")
