from pwn import *


t = process('/home/thinh/picoctf/chall')

print(t.recvuntil('Enter your choice: '))
t.sendline(b'2')
t.sendline(b'picooooo')
print(t.recvall())
