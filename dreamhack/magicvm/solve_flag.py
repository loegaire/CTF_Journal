import sys
import ctypes
import struct
import random

lib = ctypes.CDLL("./libexploit.so")
lib.call_vm_func.argtypes = [ctypes.c_uint8, ctypes.c_uint8, ctypes.c_uint8, ctypes.c_uint8]
lib.call_vm_func.restype = ctypes.c_uint64

def parse_objdump(filename):
    data = b""
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
    return data

bytecode = parse_objdump("bytecode.dump")

libc = ctypes.CDLL("libc.so.6")
libc.srand.argtypes = [ctypes.c_uint]
libc.rand.argtypes = []
libc.rand.restype = ctypes.c_int

def get_indices():
    r = libc.rand()
    return r & 0x1F, (r >> 5) & 0x1F, (r >> 10) & 0x1F

# Interactive solver
inputs = bytearray([0] * 32)

print("[*] Starting solver...")

# Max iterations (32 bytes)
for i in range(32):
    # Reset rand for deterministic trace
    libc.srand(0x1337)
    pc = 0
    
    # We trace until we hit a check we haven't satisfied (or end)
    # We assume checks appear sequentially in the execution path or loop.
    # We look for the 'i-th' unique CMP logic?
    # Or simply: Trace runs.
    # For every CMP encountered:
    #   Decode Index, Target.
    #   Check if inputs[Index] == Target.
    #   If match, continue.
    #   If mismatch, FIX IT and restart loop.
    
    # We need to be careful: the inputs are reused.
    # But if we assume 1-byte-at-a-time verification.
    
    found_fix = False
    
    # Trace Buffer
    # We limit steps to avoid infinite loops if we are stuck.
    # But as we fix inputs, we should progress.
    # 5000 steps should cover 32 checks (looping overhead).
    
    for step in range(5000):
        if pc >= len(bytecode): break
        
        # Opcode
        idx1, idx2, idx3 = get_indices()
        op_val = lib.call_vm_func(bytecode[pc], inputs[idx1], inputs[idx2], inputs[idx3])
        opcode = (op_val >> 4) & 0xF
        
        if opcode == 11: # CMP
            # Op 1 (Index)
            idx1, idx2, idx3 = get_indices()
            v1_raw = lib.call_vm_func(bytecode[pc+1], inputs[idx1], inputs[idx2], inputs[idx3])
            
            # Op 2 (Target)
            idx1, idx2, idx3 = get_indices()
            v2_raw = lib.call_vm_func(bytecode[pc+2], inputs[idx1], inputs[idx2], inputs[idx3])
            
            idx_chk = v1_raw & 0xFF
            target = v2_raw & 0xFF
            
            # Check constraint
            if inputs[idx_chk] != target:
                print(f"[!] Mismatch at Step {step} PC={pc:x}: Input[{idx_chk}] ({inputs[idx_chk]:02x}) != {target:02x}")
                inputs[idx_chk] = target
                found_fix = True
                break # Restart trace with new input input
            
            pc += 3
            
        elif opcode in [12, 13, 14]: # Control flow
            # Needed to follow JCOND correctly
            # We need to consume operands properly
            idx1, idx2, idx3 = get_indices()
            low = lib.call_vm_func(bytecode[pc+1], inputs[idx1], inputs[idx2], inputs[idx3])
            
            idx1, idx2, idx3 = get_indices()
            high = lib.call_vm_func(bytecode[pc+2], inputs[idx1], inputs[idx2], inputs[idx3])
            
            dest = (low & 0xFF) | ((high & 0xFF) << 8)
            
            if opcode == 12: # JMP
                pc = dest
                continue
                
            if opcode == 13: # JCOND
                # We need the result of previous CMP!
                # Since we restart on mismatch, if we are here, CMP matched!
                # So v17 (Zero Flag?) corresponds to EQUAL.
                # If v17 checks EQUAL, it is TRUE.
                # Logic: v17 = (v29 == v40).
                # So if match, v17=1.
                # JCOND: if (v17) PC = dest.
                # So we take the branch on Match.
                pc = dest
                continue
                
            pc += 3
            
        else:
            width = 3
            if opcode in [9, 10]: width = 2
            elif opcode == 15: width = 1
            
            for _ in range(width - 1):
                get_indices()
            pc += width
            if opcode == 15: # RET
                print("[*] Reached RET (Success!)")
                found_fix = False # Done
                break

    if not found_fix:
        print("[*] No more mismatches found (or stuck).")
        break

print(f"Final Inputs: {inputs.hex()}")

# Trace mismatch for last byte to see where it goes
print("[*] Tracing mismatch for last byte...")
inputs[31] = (inputs[31] + 1) % 256
libc.srand(0x1337)
pc = 0
for step in range(100):
    if pc >= len(bytecode): break
    idx1, idx2, idx3 = get_indices()
    op_val = lib.call_vm_func(bytecode[pc], inputs[idx1], inputs[idx2], inputs[idx3])
    opcode = (op_val >> 4) & 0xF
    print(f"MismatchTrace Step {step} PC={hex(pc)} OP={opcode}")
    
    width = 3
    if opcode in [9, 10]: width = 2
    elif opcode == 15: width = 1

    if opcode == 11: # CMP
        v1_raw = lib.call_vm_func(bytecode[pc+1], inputs[idx1], inputs[idx2], inputs[idx3])
        v2_raw = lib.call_vm_func(bytecode[pc+2], inputs[idx1], inputs[idx2], inputs[idx3])
        # Decode values from raw (assuming same mask as before? Or check trace logic)
        # solve.py trace_operands logic:
        # v1 = v1_raw
        # v2 = v2_raw
        print(f"Mismatch CMP at {hex(pc)}: v1={hex(v1_raw)} v2={hex(v2_raw)}")
    
    if opcode == 13: # JCOND
         # Check v17
         # We need to expose v17 from libexploit?
         # Or assume mismatch -> v17=0.
         # If v17=0, JCOND falls through (no jump).
         dest_parts = [bytecode[pc+1], bytecode[pc+2]] # JCOND arg?
         # Wait, op 13 uses operands?
         # sub_7A8DA(..., bytecode[pc+1]) 
         pass

    for _ in range(width - 1): get_indices()
    pc += width
