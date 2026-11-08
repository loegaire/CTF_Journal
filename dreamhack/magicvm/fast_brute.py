#!/usr/bin/env python3
"""
Fast brute-force solver using the fixed call_check harness.
For each byte position, try all 256 values while keeping others fixed.
Use call_check (with srand fix) for fast validation.
"""
import ctypes
import signal
import sys

lib = ctypes.CDLL("./libexploit.so")
lib.call_check.argtypes = [ctypes.POINTER(ctypes.c_uint8)]
lib.call_check.restype = ctypes.c_int

def handler(signum, frame):
    raise TimeoutError()

signal.signal(signal.SIGALRM, handler)

# Quick test: does call_check work at all now?
print("[*] Testing call_check with all zeros...")
zeros = (ctypes.c_uint8 * 32)(*([0] * 32))
try:
    signal.alarm(3)
    result = lib.call_check(zeros)
    signal.alarm(0)
    print(f"[*] call_check(zeros) = {result}")
except TimeoutError:
    signal.alarm(0)
    print("[-] call_check(zeros) timed out!")
    sys.exit(1)

print("[*] Starting byte-by-byte brute force...")

# Start with all zeros
flag = [0] * 32

for byte_idx in range(32):
    found = False
    for val in range(256):
        flag[byte_idx] = val
        test = (ctypes.c_uint8 * 32)(*flag)
        
        try:
            signal.alarm(2)
            result = lib.call_check(test)
            signal.alarm(0)
        except TimeoutError:
            signal.alarm(0)
            continue
        
        if result != 0:
            hex_flag = ''.join(f'{b:02x}' for b in flag)
            print(f"\n[+] FOUND! Flag: DH{{{hex_flag}}}")
            sys.exit(0)
    
    # If no single byte change produces success, keep the byte that doesn't hang
    # For now, try keeping 0
    flag[byte_idx] = 0
    if byte_idx % 4 == 0:
        print(f"  byte[{byte_idx}]: no immediate success, continuing...")

print(f"\n[-] Single-byte brute force didn't find solution")
print(f"[*] All bytes tried: {bytes(flag).hex()}")
