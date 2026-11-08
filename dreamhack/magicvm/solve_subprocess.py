import subprocess
import sys
import time

def check_input(hex_input):
    """Run ./main with the given 64-char hex input and check result."""
    result = subprocess.run(
        ["./main"],
        input=hex_input + "\n",
        capture_output=True,
        text=True,
        timeout=5
    )
    return "Correct" in result.stdout

# Quick test
print("Testing all zeros...")
r = check_input("0" * 64)
print(f"All zeros: {'Correct' if r else 'Wrong'}")

# Test all ff
r = check_input("f" * 64)
print(f"All ff: {'Correct' if r else 'Wrong'}")

# Single byte brute force - for each of 32 byte positions, try all 256 values
# This tests 32 * 256 = 8192 inputs
print("\nStarting single-byte brute force...")
t0 = time.time()

best = list("0" * 64)

for byte_pos in range(32):
    hex_pos = byte_pos * 2  # Position in hex string
    found = False
    for val in range(256):
        test = list("0" * 64)
        test[hex_pos] = f"{val >> 4:x}"
        test[hex_pos + 1] = f"{val & 0xf:x}"
        hex_str = "".join(test)
        
        if check_input(hex_str):
            print(f"FOUND! byte[{byte_pos}]=0x{val:02x}")
            print(f"Input: {hex_str}")
            sys.exit(0)
    
    elapsed = time.time() - t0
    print(f"byte {byte_pos}: no hit ({elapsed:.1f}s)")

print("\nSingle byte failed. Trying random inputs...")
import random
t0 = time.time()
for trial in range(10000):
    inp = ''.join(f'{random.randint(0,255):02x}' for _ in range(32))
    if check_input(inp):
        print(f"RANDOM FOUND! trial={trial}")
        print(f"Input: {inp}")
        sys.exit(0)
    if trial % 100 == 0:
        elapsed = time.time() - t0
        print(f"Trial {trial} ({elapsed:.1f}s)")

print("Failed.")
