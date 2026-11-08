import sys
import ctypes

lib = ctypes.CDLL("./libexploit.so")
lib.call_vm_func.argtypes = [ctypes.c_uint8, ctypes.c_uint8, ctypes.c_uint8, ctypes.c_uint8]
lib.call_vm_func.restype = ctypes.c_uint64

def check_func(id):
    val1 = lib.call_vm_func(id, 1, 2, 3)
    val2 = lib.call_vm_func(id, 10, 20, 30)
    if val1 == val2:
        print(f"Func {id} ({hex(id)}) is CONSTANT: {hex(val1)}")
    else:
        print(f"Func {id} ({hex(id)}) VARIES: {hex(val1)} vs {hex(val2)}")

check_func(0x80) # Start Opcode
check_func(0x71) # Step 2 Opcode
check_func(0x2C) # Operand 1
check_func(0x48) # Operand 2
