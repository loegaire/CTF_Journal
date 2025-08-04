from pwn import *
io = remote('103.69.97.144',5022)
context.log_level = 'DEBUG'
print(io.recv())
io.send(b'A')
print(io.recv())
io.send(b'BKSEC{welc0m3_t0_th3_sh0wwwwww}')
print(io.recv())
io.send(b'bksec@5.15.0-46-generic')
print(io.recv())
io.send(b'python3 -c "open(\'flag.txt\', \'w\').write(\'BKSEC{an0th3r_fl4g_found_nice_:333333}\')"')
print(io.recv())
io.send(b'vim')
print(io.recv())
io.send(b'/usr/bin/gcc@13.3.0')
print(io.recv())
io.send(b'bksec@1337hack0r')
print(io.recv())

