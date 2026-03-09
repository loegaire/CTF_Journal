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

def trace_operands(input_bytes, label):
    libc.srand(0x1337)
    pc = 0
    traces = []
    
    # We want to capture the values associated with the first few CMPs
    for step in range(100):
        if pc >= len(bytecode): break
        
        op_val = lib.call_vm_func(bytecode[pc], 
                                  input_bytes[get_indices()[0]], 
                                  input_bytes[get_indices()[1]], 
                                  input_bytes[get_indices()[2]])
        opcode = (op_val >> 4) & 0xF
        
        info = {}
        
        if opcode == 11: # CMP
            # Fetch operands
            # Note: We must fetch using the sequence of randomness
            # Consumes 1 rand for Op1
            idx1, idx2, idx3 = get_indices()
            v1_raw = lib.call_vm_func(bytecode[pc+1],
                                      input_bytes[idx1],
                                      input_bytes[idx2],
                                      input_bytes[idx3])
            # Consumes 1 rand for Op2
            idx1, idx2, idx3 = get_indices()
            v2_raw = lib.call_vm_func(bytecode[pc+2],
                                      input_bytes[idx1],
                                      input_bytes[idx2],
                                      input_bytes[idx3])
            
            info["Op"] = "CMP"
            info["V1"] = v1_raw & 0xFF # Cast to byte
            info["V2"] = v2_raw & 0xFF
            traces.append(info)
            pc += 3
            
        else:
            # Advance PC but consume randoms correctly
            # Check len
            width = 3
            if opcode in [9, 10]: width = 2
            elif opcode == 15: width = 1
            
            # Consume randoms for operands
            for _ in range(width - 1):
                _ = get_indices() # Consume rand state
                # We assume we don't need value for trace unless CMP
                
            pc += width
            
    print(f"[{label}] Found {len(traces)} CMPs")
    for i, t in enumerate(traces[:10]):
        print(f"  {i}: {t['V1']:02x} vs {t['V2']:02x}")
    return traces

t1 = trace_operands(bytes([0]*32), "Zeros")
t2 = trace_operands(bytes([255]*32), "FFs")

print("[*] Analysis:")
for i in range(min(len(t1), len(t2))):
    v1_diff = t1[i]["V1"] != t2[i]["V1"]
    v2_diff = t1[i]["V2"] != t2[i]["V2"]
    print(f"CMP {i}: V1 Var? {v1_diff} | V2 Var? {v2_diff}")
    
