import numpy as np

np.random.seed(42)
palette_size = 16
frame_count = 10
bytes_list = []

for i in range(frame_count):
    for j in range(palette_size):
        r = np.random.randint(0, 256)
        g = (r ^ (i * 13)) & 0xFF
        b = (g ^ (j * 7)) & 0xFF
        bytes_list.extend([r, g, b])

# Try interpreting as ASCII
flag = ''.join(chr(b) for b in bytes_list)
print(flag)
