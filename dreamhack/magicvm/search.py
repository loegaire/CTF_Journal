
data = open("/tmp/bytecode.bin", "rb").read()

print(f"Bytecode Size: {len(data)}")

# Search for Opcode 1 (01)
print("--- Opcode 1 Gadgets ---")
for i in range(len(data) - 4):
    if data[i] == 1:
        # Check Next Opcode (at i+3)
        next_op = data[i+3]
        print(f"[{i}] 01 {data[i+1]:02x} {data[i+2]:02x} -> {next_op:02x}")

# Search for Opcode 0 (00)
print("\n--- Opcode 0 Gadgets ---")
for i in range(len(data) - 4):
    if data[i] == 0:
        # Check Next Opcode (at i+3) (Op0 consumes 2 args?)
        # Wait. Op0 consumes 2 args (implied index + 2nd index).
        # Does PC increment twice?
        # Standard Fetch consumes 2 bytes?
        # Opcode 1 consumed 2 bytes (Index 1, Index 2).
        # Opcode 0 consumes 1 byte (Index 2). (Index 1 implicit).
        # So Next Opcode is at i+2?
        # Let's check both i+2 and i+3.
        next_op2 = data[i+2]
        next_op3 = data[i+3]
        print(f"[{i}] 00 {data[i+1]:02x} -> {next_op2:02x} (or {next_op3:02x}?)")
