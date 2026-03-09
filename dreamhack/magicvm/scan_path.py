
data = open("/tmp/bytecode.bin", "rb").read()

pcs = [499, 502, 505, 508, 518, 520, 522, 525, 422, 424, 426, 428, 431, 434, 437, 439, 441, 394, 396, 398, 401, 404, 407, 410, 413, 416, 419, 421]

def get_op(val):
    return val >> 4

print("--- Analyze Trace Path ---")
for pc in pcs:
    if pc >= len(data): continue
    byte = data[pc]
    op = get_op(byte)
    print(f"PC {pc}: {byte:02x} (Op{op})")
    
    # Check if Safe Gadget
    if op == 0: # Op0 (MOV)
        # Arg2 is at PC+? 
        # Op0 uses 1 arg (Index). Size 2.
        if pc+1 < len(data):
            arg = data[pc+1]
            if arg <= 0x1F:
                print(f"  SAFE GADGET Op0! Arg {arg:02x}")
    elif op == 10: # Op10 (MOV Stack)
        # Arg2. Size 2.
        if pc+1 < len(data):
            arg = data[pc+1]
            if arg <= 0x1F:
                print(f"  SAFE GADGET Op10! Arg {arg:02x}")
    elif op == 1: # Op1 (Mode)
        # Args PC+1, PC+2. Size 3.
        if pc+2 < len(data):
            arg1 = data[pc+1]
            arg2 = data[pc+2]
            if arg1 <= 0x1F: # Op1 Arg1 sets Mode
                print(f"  SAFE GADGET Op1! Arg1 {arg1:02x} Arg2 {arg2:02x}")
    elif op == 14: # Op14 (Rand Jump)
        if pc+2 < len(data):
             arg1 = data[pc+1]
             arg2 = data[pc+2]
             if arg1 <= 0x1F and arg2 <= 0x1F:
                 print(f"  SAFE JUMP Op14! {arg1:02x} {arg2:02x}")
