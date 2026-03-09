import ctypes
import signal

# Load library
lib = ctypes.CDLL("./libexploit.so")
lib.call_vm_func.argtypes = [ctypes.c_uint8, ctypes.c_uint8, ctypes.c_uint8, ctypes.c_uint8]
lib.call_vm_func.restype = ctypes.c_uint64

lib.call_check.argtypes = [ctypes.POINTER(ctypes.c_uint8)]
lib.call_check.restype = ctypes.c_int

# Base input
solved_input_hex = "91474cb45c12099901877f04981ac73c2c07668b1e47614df375b164143b78ef"
base_input = list(bytearray.fromhex(solved_input_hex))

def handler(signum, frame):
    raise TimeoutError("Timeout")

signal.signal(signal.SIGALRM, handler)

# From trace, the last Opcode 0 uses indices: 11, 30, 15
# Let's try modifying these bytes to change the operand value
# Target: make (val & 0xF) have bits 0-1 equal to 1 (i.e., val & 3 == 1)
# This means val & 0xF should be 1, 5, 9, or D

print("[*] Testing manipulation of Opcode 0 operand bytes...")
print(f"[*] Base input: {bytes(base_input).hex()}")
print(f"[*] Original bytes: [11]={hex(base_input[11])}, [30]={hex(base_input[30])}, [15]={hex(base_input[15])}")

target_indices = [11, 30, 15, 23, 16, 4, 26, 20, 13]  # Last few Opcode 0 indices

found = False

for idx in target_indices:
    print(f"\n[*] Testing modifications to byte [{idx}]...")
    original_val = base_input[idx]
    
    for new_val in range(256):
        if new_val == original_val:
            continue
            
        test_input = base_input.copy()
        test_input[idx] = new_val
        
        test_arr = (ctypes.c_uint8 * 32).from_buffer_copy(bytes(test_input))
        
        try:
            signal.alarm(2)
            result = lib.call_check(test_arr)
            signal.alarm(0)
            
            if result != 0:
                print(f"\n[+] FOUND! Byte [{idx}] changed from {hex(original_val)} to {hex(new_val)}")
                print(f"[+] Full Input: {bytes(test_input).hex()}")
                print(f"[+] Flag: DH{{{bytes(test_input).hex()}}}")
                found = True
                break
        except TimeoutError:
            signal.alarm(0)
            continue
    
    if found:
        break

if not found:
    print("\n[-] Single-byte modification didn't work. Trying pairs...")
    
    # Try modifying pairs of bytes
    for i, idx1 in enumerate(target_indices[:5]):
        for idx2 in target_indices[i+1:6]:
            print(f"[*] Testing pair [{idx1}], [{idx2}]...")
            
            for v1 in range(0, 256, 16):  # Coarse search
                for v2 in range(0, 256, 16):
                    test_input = base_input.copy()
                    test_input[idx1] = v1
                    test_input[idx2] = v2
                    
                    test_arr = (ctypes.c_uint8 * 32).from_buffer_copy(bytes(test_input))
                    
                    try:
                        signal.alarm(1)
                        result = lib.call_check(test_arr)
                        signal.alarm(0)
                        
                        if result != 0:
                            print(f"\n[+] FOUND! [{idx1}]={hex(v1)}, [{idx2}]={hex(v2)}")
                            print(f"[+] Full Input: {bytes(test_input).hex()}")
                            print(f"[+] Flag: DH{{{bytes(test_input).hex()}}}")
                            found = True
                            break
                    except TimeoutError:
                        signal.alarm(0)
                        continue
                
                if found:
                    break
            
            if found:
                break
        
        if found:
            break

if not found:
    print("\n[-] Pair modification didn't work either.")
