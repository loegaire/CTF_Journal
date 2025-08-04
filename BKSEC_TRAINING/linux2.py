from pwn import *

def main():
    host = "103.69.97.144"  # Change this to the actual host
    port = 5022  # Updated port to match your latest request
    p = remote(host, port)
    
    # Handle "Press any key to continue" prompt
    print(p.recvuntil(b"Press any key to continue...").decode().strip())
    p.sendline(b"")  # Sending an empty newline to continue
    
    # Proceed with sending expected inputs
    p.sendline(b"BKSEC{welc0m3_t0_th3_sh0wwwwww}")
    print(p.recv().decode().strip())
    
    p.sendline(b"bksec@5.15.0-46-generic")
    print(p.recv().decode().strip())
    
    p.sendline(b"python3 -c \"open('flag.txt', 'w').write('BKSEC{an0th3r_fl4g_found_nice_:333333}')\"")
    print(p.recv().decode().strip())
    
    p.sendline(b"vim")
    print(p.recv().decode().strip())
    
    p.sendline(b"/usr/bin/gcc@13.3.0")
    print(p.recv().decode().strip())
    
    p.sendline(b"1337hack0r@group")
    print(p.recv().decode().strip())
    
    p.interactive()

if __name__ == "__main__":
    main()


