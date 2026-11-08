#!/usr/bin/env python3
"""
Brute force the last CMP value.
The final CMP (#129) uses stack indirection: v1=stack[something], v2=0x91.
We need v1 == 0x91. The stack value is accumulated from all input bytes.
Strategy: try changing each byte one at a time and observe the final v1.
"""
import subprocess
import re

def get_final_cmp(hex_input):
    """Run binary with GDB, extract the final CMP v1 value."""
    result = subprocess.run(
        f'echo "{hex_input}" | gdb -batch -x solve.gdb ./main',
        shell=True, capture_output=True, text=True, timeout=30,
        cwd='/home/thinh/ctf/dreamhack/magicvm'
    )
    
    last_cmp = None
    correct = 'Correct' in result.stdout
    for line in result.stdout.split('\n'):
        m = re.match(r'CMP: mode=0x([0-9a-f]+) v1=0x([0-9a-f]+) v2=0x([0-9a-f]+)', line)
        if m:
            last_cmp = (int(m.group(1), 16), int(m.group(2), 16), int(m.group(3), 16))
    
    return last_cmp, correct

# Baseline: all zeros
hex_test = "0" * 64
last, correct = get_final_cmp(hex_test)
print(f"All zeros: final CMP mode=0x{last[0]:02x} v1=0x{last[1]:02x} v2=0x{last[2]:02x} correct={correct}")

# Test: changing byte 0 only
for val in range(0, 256, 16):
    flag = [0] * 32
    flag[0] = val
    hex_test = ''.join(f'{b:02x}' for b in flag)
    last, correct = get_final_cmp(hex_test)
    if correct:
        print(f"[+] CORRECT! byte[0]={val:02x}")
        break
    if last and last[1] != 0xfe:  # Different from all-zeros baseline
        print(f"  byte[0]={val:02x}: final v1=0x{last[1]:02x} (target=0x91)")

# Find which bytes affect the final CMP
print("\n[*] Finding which bytes change the final CMP value...")
base_v1 = 0xfe  # all-zeros result
for byte_idx in range(32):
    flag = [0] * 32
    flag[byte_idx] = 0x01  # Small change
    hex_test = ''.join(f'{b:02x}' for b in flag)
    last, correct = get_final_cmp(hex_test)
    if last and last[1] != base_v1:
        print(f"  byte[{byte_idx}] affects final CMP: v1 changes from 0x{base_v1:02x} to 0x{last[1]:02x}")
