import ctypes
import signal

# Load library
lib = ctypes.CDLL("./libexploit.so")
lib.call_check.argtypes = [ctypes.POINTER(ctypes.c_uint8)]
lib.call_check.restype = ctypes.c_int

# Base input (first 30 bytes from solver)
solved_input_hex = "91474cb45c12099901877f04981ac73c2c07668b1e47614df375b164143b78ef"
base_input = list(bytearray.fromhex(solved_input_hex))

def handler(signum, frame):
    raise TimeoutError("Timeout")

signal.signal(signal.SIGALRM, handler)

print("[*] Brute-forcing last 2 bytes...")
found = False

for b1 in range(256):
    if b1 % 16 == 0:
        print(f"[*] Progress: {b1}/256...")
    
    for b2 in range(256):
        base_input[30] = b1
        base_input[31] = b2
        
        test_input = (ctypes.c_uint8 * 32).from_buffer_copy(bytes(base_input))
        
        try:
            signal.alarm(1)
            result = lib.call_check(test_input)
            signal.alarm(0)
            
            if result != 0:
                print(f"\n[+] FOUND! Bytes [30]={hex(b1)}, [31]={hex(b2)}")
                print(f"[+] Full Input: {bytes(base_input).hex()}")
                print(f"[+] Flag: DH{{{bytes(base_input).hex()}}}")
                found = True
                break
        except TimeoutError:
            signal.alarm(0)
            continue
    
    if found:
        break

if not found:
    print("[-] Brute force failed. Trying last 3 bytes...")
    
    # Try last 3 bytes if last 2 didn't work
    for b0 in range(256):
        if b0 % 16 == 0:
            print(f"[*] Progress: {b0}/256 (byte 29)...")
        
        for b1 in range(256):
            for b2 in range(256):
                base_input[29] = b0
                base_input[30] = b1
                base_input[31] = b2
                
                test_input = (ctypes.c_uint8 * 32).from_buffer_copy(bytes(base_input))
                
                try:
                    signal.alarm(1)
                    result = lib.call_check(test_input)
                    signal.alarm(0)
                    
                    if result != 0:
                        print(f"\n[+] FOUND! Bytes [29]={hex(b0)}, [30]={hex(b1)}, [31]={hex(b2)}")
                        print(f"[+] Full Input: {bytes(base_input).hex()}")
                        print(f"[+] Flag: DH{{{bytes(base_input).hex()}}}")
                        found = True
                        break
                except TimeoutError:
                    signal.alarm(0)
                    continue
            
            if found:
                break
        
        if found:
            break

if not found:
    print("[-] Complete brute force failed.")
