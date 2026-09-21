
data = open("/tmp/bytecode.bin", "rb").read()

def get_op(val):
    return val & 0xF

print("--- Safe Opcode 0 Gadgets ---")
for i in range(len(data) - 5):
    if get_op(data[i]) == 0 and data[i] <= 0x20:
        arg2 = data[i+1]
        next_byte = data[i+2]
        next_op = get_op(next_byte)
        if arg2 <= 0x1F:
            print(f"[{i}] 00 {arg2:02x} -> Next: {next_op:x} ({next_byte:02x})")

print("\n--- Opcode 10 Gadgets ---")
for i in range(len(data) - 5):
    if data[i] == 0x10:
        arg2 = data[i+1]
        next_byte = data[i+2]
        print(f"[{i}] 10 {arg2:02x} -> Next: {get_op(next_byte):x}")

print("\n--- Opcode 15 (RET) Gadgets ---")
for i in range(len(data)):
    if get_op(data[i]) == 15:
        print(f"[{i}] {data[i]:02x}")
