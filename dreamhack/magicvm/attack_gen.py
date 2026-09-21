import os

# 1. Create Input Files
# Base: All Zeros
base = [0] * 32
with open(f"in_base.txt", "w") as f:
    f.write("".join(f"{b:02x}" for b in base))

# Probes: Set one byte to 1
for i in range(32):
    probe = list(base)
    probe[i] = 1
    with open(f"in_{i}.txt", "w") as f:
        f.write("".join(f"{b:02x}" for b in probe))

# 2. Create GDB Script
gdb_content = """
set pagination off
set style enabled off
set confirm off
set disable-randomization on
set logging file trace.log
set logging overwrite on
set logging enabled on

# Define the hook to print the checksum
break *0x5555555cfba8
commands
  silent
  # We only care if AL is the checksum (target is 0x91)
  # But to be safe, we print everything and filter later
  printf "DATA:%02x:%02x\\n", $al, *(unsigned char*)($rbp - 0x23B)
  set $eflags |= 0x40
  continue
end

# 1. Run Base
echo [LOG] Running Base\\n
file ./main
run < in_base.txt

"""

# Add runs for all 32 bytes
for i in range(32):
    gdb_content += f"echo [LOG] Running Byte {i}\\n\n"
    gdb_content += f"run < in_{i}.txt\n"

gdb_content += "quit\n"

with open("mass.gdb", "w") as f:
    f.write(gdb_content)

print("[+] Created 'mass.gdb' and input files.")
print("[+] ACTION REQUIRED: Run this command in your terminal:")
print("    gdb -x mass.gdb ./main")
