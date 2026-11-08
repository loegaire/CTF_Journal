
data = open("/tmp/bytecode.bin", "rb").read()

def get_op(val):
    return val & 0xF

print("--- Safe Jumps (Op12/Op14) ---")
for i in range(len(data) - 5):
    op = get_op(data[i])
    if op == 12 or op == 14:
        arg1 = data[i+1]
        arg2 = data[i+2]
        if arg1 <= 0x1F and arg2 <= 0x1F:
            print(f"[{i}] Op{op} {arg1:02x} {arg2:02x}")

print("\n--- Inspect 421 ---")
chunk = data[421:430]
hex_chunk = " ".join([f"{b:02x}" for b in chunk])
print(f"Offset 421: {hex_chunk}")
