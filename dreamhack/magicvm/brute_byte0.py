#!/usr/bin/env python3
"""
Brute force byte[0] to find which value makes final CMP v1=0x91.
"""
import subprocess
import re

def get_final_cmp(hex_input):
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

TARGET = 0x91

for val in range(256):
    flag = [0] * 32
    flag[0] = val
    hex_test = ''.join(f'{b:02x}' for b in flag)
    last, correct = get_final_cmp(hex_test)
    
    if correct:
        print(f"\n[+] CORRECT! byte[0]=0x{val:02x}, input={hex_test}")
        print(f"[+] Flag: DH{{{hex_test}}}")
        break
    
    if last:
        v1 = last[1]
        if v1 == TARGET:
            print(f"\n[+] MATCH! byte[0]=0x{val:02x} gives v1=0x{v1:02x} == target 0x{TARGET:02x}")
            print(f"[+] Input: {hex_test}")
            # Now verify with the actual binary
            verify = subprocess.run(
                f'echo "{hex_test}" | ./main',
                shell=True, capture_output=True, text=True, timeout=10,
                cwd='/home/thinh/ctf/dreamhack/magicvm'
            )
            print(f"[+] Binary output: {verify.stdout.strip()}")
            break
        
        if val % 16 == 0:
            print(f"  byte[0]=0x{val:02x}: v1=0x{v1:02x}")

print("\nDone!")
