
data = open("/tmp/bytecode.bin", "rb").read()

def get_op(val):
    return val & 0xF

def is_safe_jump(idx):
    if idx + 2 >= len(data): return False
    op = get_op(data[idx])
    if op in [12, 14]:
        arg1 = data[idx+1]
        arg2 = data[idx+2]
        return arg1 <= 0x1F and arg2 <= 0x1F
    return False

print("--- Check Op0/10/20 Chains ---")
for i in range(len(data) - 15):
    op = data[i]
    if get_op(op) == 0 and op <= 0x20:
        # Check ahead 10 bytes
        for dist in range(2, 12):
            if is_safe_jump(i + dist):
                print(f"[{i}] Op{op:02x} -> Jump at +{dist} ([{i+dist}])")

print("\n--- Check Op1 Chains ---")
for i in range(len(data) - 15):
    op = data[i]
    if get_op(op) == 1:
        for dist in range(3, 12):
            if is_safe_jump(i + dist):
                print(f"[{i}] Op{op:02x} -> Jump at +{dist} ([{i+dist}])")
