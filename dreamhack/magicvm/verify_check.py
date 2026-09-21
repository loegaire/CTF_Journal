import sys
import ctypes

lib = ctypes.CDLL("./libexploit.so")
lib.call_vm_func.argtypes = [ctypes.c_uint8, ctypes.c_uint8, ctypes.c_uint8, ctypes.c_uint8]
lib.call_vm_func.restype = ctypes.c_uint64

# Load bytecode
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

solved_input_hex = "91474cb45c12099901877f04981ac73c2c07668b1e47614df375b164143b78ef"
solved_input_bytes = bytes.fromhex(solved_input_hex)

print(f"[*] Testing Input: {solved_input_hex}")
print(f"[*] Input Bytes: {solved_input_bytes.hex()}")

lib.call_check.argtypes = [ctypes.POINTER(ctypes.c_uint8)]
lib.call_check.restype = ctypes.c_int

base_input = list(solved_input_bytes)

lib.call_check.argtypes = [ctypes.POINTER(ctypes.c_uint8)]
lib.call_check.restype = ctypes.c_int

base_input = list(solved_input_bytes)

import signal

def handler(signum, frame):
    raise TimeoutError("Timeout")

signal.signal(signal.SIGALRM, handler)

found = False
for b in range(256):
    # Skip ? No, test all with timeout.
    
    base_input[31] = b
    solved_inp_array = (ctypes.c_uint8 * 32).from_buffer_copy(bytes(base_input))
    
    print(f"Testing {hex(b)}...", end='\r')
    
    try:
        signal.alarm(1) # 1 second timeout
        res = lib.call_check(solved_inp_array)
        signal.alarm(0) # Disable alarm
        
        if res != 0:
            print(f"\n[+] FOUND! Input[31] = {hex(b)}")
            print(f"[+] Full Input: {bytes(base_input).hex()}")
            print(f"[+] Flag: DH{{{bytes(base_input).hex()}}}")
            found = True
            break
            
    except TimeoutError:
        print(f"\n[-] Timeout on {hex(b)}")
        continue

if not found:
    print("[-] Brute force failed.")
