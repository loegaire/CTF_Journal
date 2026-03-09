import sys

def parse_log():
    if not os.path.exists("trace.log"):
        print("[!] Error: trace.log not found. Did you run GDB?")
        return None, None

    with open("trace.log", "r") as f:
        lines = f.readlines()

    # We need to extract the FINAL checksum for each run.
    # The log contains "[LOG] Running..." followed by many "DATA:..." lines.
    # The last "DATA" line before the next "[LOG]" (or end of file) is the checksum.
    
    checksums = []
    current_last_data = None
    
    for line in lines:
        if "[LOG]" in line:
            if current_last_data is not None:
                checksums.append(current_last_data)
            current_last_data = None
        elif "DATA:" in line:
            # Format DATA:AL:TARGET
            parts = line.strip().split(":")
            # Store tuple (Calculated_Sum, Target)
            current_last_data = (int(parts[1], 16), int(parts[2], 16))
            
    # Append the very last one
    if current_last_data is not None:
        checksums.append(current_last_data)
        
    return checksums

import os

print("[*] Parsing trace.log...")
results = parse_log()

if not results or len(results) < 33:
    print(f"[!] Error: Expected 33 runs, found {len(results) if results else 0}.")
    sys.exit(1)

# Index 0 is Base. Indices 1..32 are Byte 0..31 probes.
base_sum, target = results[0]
print(f"[*] Base Sum (All 0s): {hex(base_sum)}")
print(f"[*] Target Sum:        {hex(target)}")

weights = []
print("[*] Calculating Weights...")
for i in range(32):
    # Result[i+1] corresponds to in_{i}.txt
    probe_sum, _ = results[i+1]
    
    # Weight = Probe - Base
    weight = (probe_sum - base_sum) & 0xFF
    weights.append(weight)
    # print(f"    Byte {i}: Weight {weight}")

# Solve: Sum(Input[i] * Weight[i]) = Target - Base
goal = (target - base_sum) & 0xFF
print(f"[*] Solving for difference: {goal}")

final_bytes = [0] * 32
current_val = 0

# Greedy Solver
for i in range(32):
    w = weights[i]
    if w == 0: continue
    
    needed = (goal - current_val) & 0xFF
    if needed == 0: break
    
    # Find x such that x * w = needed
    # Brute force 0..255
    for val in range(256):
        if (val * w) & 0xFF == needed:
            final_bytes[i] = val
            current_val = (current_val + (val * w)) & 0xFF
            break

# Verify
if current_val != goal:
    print("[!] Warning: Could not reach exact target with greedy solver.")
    print("    This usually means the weights are all even but target is odd.")
    print("    However, with 32 bytes, this is statistically unlikely.")

# Output
hex_flag = "".join(f"{b:02x}" for b in final_bytes)
print(f"\n[+] FLAG HEX: {hex_flag}")
try:
    print(f"[+] FLAG ASCII: DH{{{bytes.fromhex(hex_flag).decode()}}}")
except:
    print("[+] (Could not decode to ASCII, submit the hex wrapped in DH{})")
