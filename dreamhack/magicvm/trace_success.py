import ctypes
import struct

lib = ctypes.CDLL("./libexploit.so")
lib.call_vm_func.argtypes = [ctypes.c_uint8, ctypes.c_uint8, ctypes.c_uint8, ctypes.c_uint8]
lib.call_vm_func.restype = ctypes.c_uint64

# Load bytecode
def parse_objdump(filename):
    data = b""
    try:
        with open(filename, "r") as f:
            for line in f:
                if "contents of section .data:" in line: continue
                try:
                    parts = line.split()
                    hex_parts = []
                    for p in parts[1:]:
                        if len(p) == 8 or len(p) == 4 or len(p) == 2:
                            try:
                                int(p, 16)
                                hex_parts.append(p)
                            except:
                                break
                        else:
                            break
                    for h in hex_parts:
                        data += bytes.fromhex(h)
                except:
                    pass
    except FileNotFoundError:
        print("[-] Bytecode file not found. Please run 'objdump ... > bytecode.dump' first.")
        exit(1)
    return data

bytecode = parse_objdump("bytecode.dump")

libc = ctypes.CDLL("libc.so.6")
libc.srand.argtypes = [ctypes.c_uint]
libc.rand.argtypes = []
libc.rand.restype = ctypes.c_int

def get_indices():
    r = libc.rand()
    return r & 0x1F, (r >> 5) & 0x1F, (r >> 10) & 0x1F

solved_input_hex = "91474cb45c12099901877f04981ac73c2c07668b1e47614df375b164143b78ef"
inputs = bytearray.fromhex(solved_input_hex)

print(f"[*] Tracing input: {inputs.hex()}")

libc.srand(0x1337)
pc = 0
op_0_hit = False

for step in range(10000):
    if pc >= len(bytecode): break
    
    idx1, idx2, idx3 = get_indices()
    
    # We want to see the opcode.
    # But wait, libexploit just calling sub_7A8DA which returns opcode?
    # Yes.
    op_val = lib.call_vm_func(bytecode[pc], inputs[idx1], inputs[idx2], inputs[idx3])
    opcode = (op_val >> 4) & 0xF
    
    # Check if Opcode 0
    if opcode == 0:
        op_0_hit = True
        val = op_val
        # Calculate condition value
        # Opcode 0 condition depends on `val & 0xC`.
        # `val` is derived from operand?
        # Re-reading Opcode 0 logic:
        # call 7a8da -> returns byte (al) based on bytecode[pc] ??
        # Wait, sub_7A8DA(input, bytecode[pc]) returns the opcode/operand byte.
        # But `Opcode 0` handler calls `sub_7A8DA` AGAIN?
        # Disassembly of `7b7be`:
        # call 7a8da <rand@plt+0x7770a>
        # Yes! It fetches another byte!
        # Because `pc` was incremented?
        # My loop increments `pc` AFTER processing.
        # But `sub_7A8DA` uses `rand()`. Be careful with PRNG sync.
        
        # In the VM loop (check function):
        # 1. Fetch opcode: val = sub_7A8DA(..., bytecode[pc]). pc++? No pc index is used.
        # Main loop: `v1 = pc++`.
        # So `opcode` fetch consumes 1 byte of bytecode and 1 rand() call.
        
        # Opcode 0 Handler (`7b7be`):
        # Calls `sub_7A8DA`. Usage of `rand()`? Yes. 
        # So Opcode 0 consumes one MORE input-derived byte.
        # And THIS byte is `val`.
        # Condition: `(val & 0xF) >> 2`. i.e. bits 2,3.
        # If `(val & 0xC) == 0`, Jump.
        # So we need to trace this value!
        
        # We need to simulate the operand fetch for data.
        # Since libexploit call `sub_7A8DA` updates rand() state?
        # NO! `sub_7A8DA` in libexploit calls `rand()` inside the separate process image?
        # Wait, libexploit calls `funcs_7A968[id]`.
        # `funcs_7A968` contains pointers to `sub_...`.
        # But `sub_7A8DA` is the DECODER.
        # The instruction handlers `7b7be` etc are NOT in `funcs_7A968`.
        # `funcs_7A968` is used by `sub_7A8DA`.
        # Logic:
        # check() loop:
        #   byte = sub_7A8DA(..., bytecode[pc])
        #   opcode = byte >> 4
        #   switch(opcode): ...
        
        # So my `call_vm_func` effectively simulates `sub_7A8DA` and REPLACES `rand()` call?
        # No, `libexploit` *calls* the function in the binary.
        # That function calls `rand()` in the binary (libc).
        # So I need to keep Python `rand` generic?
        # Actually `libexploit` is using the binary's `rand`.
        # So Python's `rand` is just for me to track indices?
        # Yes.
        
        print(f"[*] Hit Opcode 0 at PC={hex(pc)} Val={hex(val)} Indices={idx1},{idx2},{idx3}")
        
    print(f"Step {step} PC={hex(pc)} OP={opcode}")

    width = 2 # Default for 1, 2, 4, 5, 8, 9, 10, etc.
    if opcode == 0 or opcode == 15: width = 1
    elif opcode == 11: width = 3
    # Opcode 12, 13, 14 are jumps/calls - assumed not taken or linear for now effectively width 3?
    # Trace showed Op 10 then 0. 
    # If 12, 13, 14 appear, we might be desync again if we don't simulate jump.
    # But current trace seems linear.
    
    # Consume extra rands for operands
    for _ in range(width - 1): get_indices()
    pc += width
    
    if opcode == 15:
        print("[*] RET reached.")
        break
