import numpy as np

np.random.seed(42)
palette_size = 16
frame_count = 10

for i in range(frame_count):
    for j in range(palette_size):
        r = np.random.randint(0, 256)
        g = (r ^ (i * 13)) & 0xFF
        b = (g ^ (j * 7)) & 0xFF
        # Convert RGB to characters
        cr, cg, cb = chr(r), chr(g), chr(b)
        # Check if all characters are in printable ASCII range (32 to 126)
        if (32 <= r <= 126 and 32 <= g <= 126 and 32 <= b <= 126):
            print(f"{r} {g} {b}")
            print(f"{cr}{cg}{cb}")
