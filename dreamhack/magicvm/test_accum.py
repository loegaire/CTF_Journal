#!/usr/bin/env python3
"""
Find the accumulation function for the final CMP value.
Each byte contributes to the stack value that gets checked.
Test: set only byte[i] to various values, record delta.
"""
import subprocess
import re

def get_final_v1(hex_input):
    result = subprocess.run(
        f'echo "{hex_input}" | gdb -batch -x solve.gdb ./main',
        shell=True, capture_output=True, text=True, timeout=30,
        cwd='/home/thinh/ctf/dreamhack/magicvm'
    )
    for line in result.stdout.split('\n'):
        m = re.match(r'CMP: mode=0xb4 v1=0x([0-9a-f]+) v2=0x([0-9a-f]+)', line)
        if m:
            return int(m.group(1), 16)
    return None

# Baseline: all zeros -> v1=0xfe
base = get_final_v1("0" * 64)
print(f"Base (all zeros): v1=0x{base:02x}")

# Test each byte individually with value 0x01
print("\n[*] Testing each byte set to 0x01:")
for i in range(32):
    flag = [0] * 32
    flag[i] = 0x01
    v1 = get_final_v1(''.join(f'{b:02x}' for b in flag))
    delta = (v1 - base) & 0xff
    if delta != 0:
        print(f"  byte[{i:2d}]=0x01: v1=0x{v1:02x} delta=0x{delta:02x}")

# Test XOR hypothesis: set byte[0]=0x91 and byte[1]=0x01
print("\n[*] Testing combinations:")
flag = [0] * 32
flag[0] = 0x91
v1_0 = get_final_v1(''.join(f'{b:02x}' for b in flag))
print(f"  byte[0]=0x91: v1=0x{v1_0:02x}")

flag = [0] * 32  
flag[1] = 0x91
v1_1 = get_final_v1(''.join(f'{b:02x}' for b in flag))
print(f"  byte[1]=0x91: v1=0x{v1_1:02x}")

flag = [0] * 32
flag[0] = 0x91; flag[1] = 0x91
v1_both = get_final_v1(''.join(f'{b:02x}' for b in flag))
print(f"  byte[0,1]=0x91: v1=0x{v1_both:02x}")

# Check if XOR: v1_both == base ^ (v1_0 ^ base) ^ (v1_1 ^ base)?
xor_pred = base ^ (v1_0 ^ base) ^ (v1_1 ^ base)
add_pred = (base + (v1_0 - base) + (v1_1 - base)) & 0xff
print(f"  XOR prediction: 0x{xor_pred:02x}, ADD prediction: 0x{add_pred:02x}, actual: 0x{v1_both:02x}")
