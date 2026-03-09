import ctypes
import sys
import signal

# Ignore SIGSEGV for debugging
# signal.signal(signal.SIGSEGV, lambda s,f: None)

# Load the shared library  
lib = ctypes.CDLL("./main.so")
libc = ctypes.CDLL("libc.so.6")

# Find main.so base address  
base_addr = None
with open("/proc/self/maps") as f:
    for line in f:
        if "main.so" in line and "r-x" in line:
            base_addr = int(line.split("-")[0], 16)
            break

print(f"main.so base: {hex(base_addr)}")

# check function at offset 0x7a96d
check_offset = 0x7a96d
check_addr = base_addr + check_offset

CHECKFUNC = ctypes.CFUNCTYPE(ctypes.c_ubyte, ctypes.POINTER(ctypes.c_ubyte))
check_func = CHECKFUNC(check_addr)

# The transformation function needs the State pointer (first arg to rand/transform)
# which is passed as rdi. Looking at 0x7a8da, it takes (state_ptr, idx).
# state_ptr is just the input buffer pointer!

# But check() at 0x7a975 sets up a huge stack frame (0x250 bytes)  
# and stores the input pointer at -0x248(rbp).
# It also initializes Stack[0..31] to zero.
# Then it calls srand? Let me check...

# Actually, check at 0x7a96d is just the function entry.
# Let me check if srand is called inside.

# Looking at the disasm:
# 7a96d: endbr64; push rbp; ...
# 7a975: sub $0x250, rsp
# 7a97c: mov rdi, -0x248(rbp)  -- save input pointer
# 7a992: movw $0, -0x236(rbp)  -- PC = 0
# 7a99b: zero out stack array
# ...
# Then it goes to the dispatcher loop

# srand must be called before check() - in main().
# Let me call srand first, then allocate a buffer with malloc (since check might need malloced memory for free)

# Create input via malloc (so free doesn't crash)
malloc = libc.malloc
malloc.restype = ctypes.c_void_p
free = libc.free

input_ptr = malloc(64)  # allocate more than needed
if not input_ptr:
    print("malloc failed")
    sys.exit(1)

# Zero it out
libc.memset(input_ptr, 0, 64)

# Call srand
libc.srand(0x1337)

# Cast to proper pointer type
input_p = ctypes.cast(input_ptr, ctypes.POINTER(ctypes.c_ubyte))

print("Calling check with all zeros...")
try:
    result = check_func(input_p)
    print(f"check(all_zeros) = {result}")
except Exception as e:
    print(f"Exception: {e}")

# Try again with different input
libc.memset(input_ptr, 0x41, 32)
libc.srand(0x1337)
try:
    result = check_func(input_p)
    print(f"check(all_0x41) = {result}")
except Exception as e:
    print(f"Exception: {e}")

free(input_ptr)
