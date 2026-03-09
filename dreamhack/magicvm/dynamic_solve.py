#!/usr/bin/env python3
"""
Byte-at-a-time brute force using GDB CMP match counting.
For each byte position, try all 256 values and pick the one
that produces the most CMP matches.
"""
import subprocess
import re
import sys

def run_gdb(hex_input):
    """Run binary with GDB, return (num_matches, num_total, correct)."""
    gdb_script = """set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti
break *0x5555555cfba8
commands
  silent
  printf "CMP: v1=0x%02x v2=0x%02x\\n", (unsigned char)$al, *(unsigned char*)($rbp - 0x23b)
  continue
end
continue
quit
"""
    result = subprocess.run(
        ['gdb', '-batch', '-x', '/dev/stdin', './main'],
        input=gdb_script,
        capture_output=True, text=True, timeout=30,
        env={'PATH': '/usr/bin:/bin', 'HOME': '/tmp'},
        stdin=subprocess.PIPE
    )
    # Actually we need to feed BOTH the gdb script via -x and the input to the program
    # Let me restructure
    return None

def run_gdb2(hex_input):
    """Run binary with GDB, counting CMP matches."""
    with open('/tmp/sv.gdb', 'w') as f:
        f.write(f"""set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti
break *0x5555555cfba8
commands
  silent
  printf "CMP: v1=0x%02x v2=0x%02x\\n", (unsigned char)$al, *(unsigned char*)($rbp - 0x23b)
  continue
end
continue
quit
""")
    
    result = subprocess.run(
        f'echo "{hex_input}" | gdb -batch -x /tmp/sv.gdb ./main',
        shell=True, capture_output=True, text=True, timeout=30
    )
    
    matches = 0
    total = 0
    for line in result.stdout.split('\n'):
        m = re.match(r'CMP: v1=0x([0-9a-f]+) v2=0x([0-9a-f]+)', line)
        if m:
            total += 1
            if m.group(1) == m.group(2):
                matches += 1
    
    correct = 'Correct' in result.stdout
    return matches, total, correct

# Start with solved input from previous analysis
# (satisfies the "simple" CMPs my previous solver found)
flag = list(bytearray.fromhex("91474cb45c12099901877f04981ac73c2c07668b1e47614df375b164143b78ef"))

# Test baseline
hex_input = ''.join(f'{b:02x}' for b in flag)
matches, total, correct = run_gdb2(hex_input)
print(f"[*] Baseline: {matches}/{total} matches, correct={correct}")

if correct:
    print(f"[+] Already correct! Flag: DH{{{hex_input}}}")
    sys.exit(0)

# Brute force each byte
for byte_idx in range(32):
    print(f"\n[*] Brute-forcing byte[{byte_idx}]...")
    best_val = flag[byte_idx]
    best_matches = matches
    
    for val in range(256):
        if val == flag[byte_idx]:
            continue
        
        test_flag = flag.copy()
        test_flag[byte_idx] = val
        hex_input = ''.join(f'{b:02x}' for b in test_flag)
        
        m, t, c = run_gdb2(hex_input)
        
        if c:
            print(f"\n[+] FOUND! byte[{byte_idx}]={val:02x}")
            print(f"[+] Flag: DH{{{hex_input}}}")
            sys.exit(0)
        
        if m > best_matches:
            print(f"  byte[{byte_idx}]=0x{val:02x}: {m}/{t} matches (improvement!)")
            best_val = val
            best_matches = m
    
    if best_val != flag[byte_idx]:
        print(f"  [*] Setting byte[{byte_idx}] = 0x{best_val:02x} ({best_matches} matches)")
        flag[byte_idx] = best_val

hex_input = ''.join(f'{b:02x}' for b in flag)
print(f"\n[*] Final: {hex_input}")
m, t, c = run_gdb2(hex_input)
print(f"[*] Final check: {m}/{t} matches, correct={c}")
