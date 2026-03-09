from pwn import *
from functools import reduce

# --- CRT Helper Function ---
def chinese_remainder_theorem(remainders, moduli):
    total_product = reduce(lambda x, y: x * y, moduli)
    result = 0
    for remainder, modulus in zip(remainders, moduli):
        p = total_product // modulus
        inv = pow(p, -1, modulus)
        result += remainder * p * inv
    return result % total_product
#r = process('./casino_777')
r = remote('host3.dreamhack.games',14786) # Replace with your actual host/port if needed
# The prime moduli (Slot lengths)
moduli = [73, 83, 89, 97, 103, 79, 101, 127, 131, 137]
found_remainders = [None] * 10
total_spins_so_far = 0
print("[*] Starting Casino Breaker...")
# --- Step 1: Generate the Slots ---
r.sendlineafter(b'>', b'1')
print("[+] Slots generated.")
# --- Step 2: Probe Loop ---
# We spin 1 unit at a time until we find the '7' for every slot.
while None in found_remainders:
    r.sendlineafter(b'>', b'2')
    # 2. "How many rotate the slots ?" -> Send 1
    r.sendlineafter(b'?', b'1')
    
    total_spins_so_far += 1
    
    # 3. Read the Result line
    r.recvuntil(b'Result: ')
    line = r.recvline().strip().decode()
    # The output is space-separated chars: "W X ( : G 9..."
    chars = line.split(' ')
    # 4. Check for '7' (ASCII 55)
    for i in range(10):
        # Only check if we haven't found this slot's solution yet
        if found_remainders[i] is None:
            if chars[i] == '7':
                print(f"[+] Slot {i} aligned at spin {total_spins_so_far} (Mod {moduli[i]})")
                found_remainders[i] = total_spins_so_far

# --- Step 3: Calculate the Jackpot Spin ---
print(f"[*] Found all remainders: {found_remainders}")

# Calculate X such that X == remainder[i] (mod modulus[i])
# This was the missing line that caused your NameError!
target_total_rotation = chinese_remainder_theorem(found_remainders, moduli)

print(f"[*] CRT Solution (Target Total Spins): {target_total_rotation}")

# --- Step 4: Perform the Final Spin (Chunked) ---
# We have already spun 'total_spins_so_far'.
# We need to spin the difference to reach the target.
spins_needed = target_total_rotation - total_spins_so_far

# Ensure spins_needed is positive (Standard CRT fix)
big_N = reduce(lambda x, y: x * y, moduli)
while spins_needed < 0:
    spins_needed += big_N

print(f"[*] Total spins needed: {spins_needed}")

# Safe chunk size: 4 quintillion (fits safely in signed 64-bit)
# LLONG_MAX is ~9 quintillion, so 4 is extremely safe.
CHUNK_SIZE = 4 * 10**18 

if spins_needed > CHUNK_SIZE:
    print("[!] Value exceeds safe limits. Breaking into chunks...")

while spins_needed > 0:
    # Determine how much to spin in this step
    current_chunk = min(spins_needed, CHUNK_SIZE)
    
    print(f"[*] Sending chunk: {current_chunk}")
    
    # 1. Select Option 2 (Rotate)
    r.sendlineafter(b'>', b'2')
    
    # 2. Send the chunk
    r.sendlineafter(b'?', str(current_chunk).encode())
    
    # Decrease the remaining amount
    spins_needed -= current_chunk
    
    # Consume the output so the buffer is clean for the next loop/flag
    # The loop prints the result after every spin
    if spins_needed > 0:
        r.recvuntil(b'Result: ')

# --- Step 5: Profit ---
print("[*] All spins sent! Checking for flag...")

# After the final spin, the program should print the flag automatically
# if the check inside passes.
r.interactive()
