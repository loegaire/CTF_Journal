#!/usr/bin/env python3
from pwn import *

context.arch = 'amd64'
context.log_level = 'warn'

elf = ELF('./main')
CMP_OFFSET = 0x7bba8

# Rainbow pattern: input[i] = i, so hex string is "000102...1e1f"
rainbow = ''.join(f'{i:02x}' for i in range(32))
print(f"[*] Rainbow input: {rainbow}")

# Start process with GDB attached
p = process('./main')

# Read /proc/pid/maps to find the base address
maps = open(f'/proc/{p.pid}/maps').read()
for line in maps.split('\n'):
    if '/main' in line and 'r-x' in line:
        base = int(line.split('-')[0], 16)
        break
    # Also check for r--xp (newer kernels)
    if '/main' in line and 'x' in line:
        base = int(line.split('-')[0], 16)
        break

print(f"[*] Base: {hex(base)}")
print(f"[*] CMP addr: {hex(base + CMP_OFFSET)}")

# Attach GDB
gdb_script = f"""
set pagination off
break *{hex(base + CMP_OFFSET)}
commands
  silent
  set $v1 = (unsigned char)$al
  set $v2 = *(unsigned char*)($rbp - 0x23b)
  printf "CMP: v1=0x%02x v2=0x%02x\\n", $v1, $v2
  continue
end
continue
"""

# Write GDB script 
with open('/tmp/gdb_cmp.gdb', 'w') as f:
    f.write(gdb_script)

# Detach process and re-run with GDB
p.close()

# Run with GDB in batch mode, feeding rainbow input
import subprocess
result = subprocess.run(
    ['gdb', '-batch', '-x', '/tmp/gdb_cmp.gdb', '-p', '0'],  # dummy, we'll use another approach
    capture_output=True, text=True, timeout=30
)

print(result.stdout)
