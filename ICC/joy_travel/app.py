import imageio
import numpy as np

width, height = 120, 120
frame_count = 10
palette_size = 16

frames = []

np.random.seed(42)

for i in range(frame_count):
    palette = []
    for j in range(palette_size):
        r = np.random.randint(0, 256)
        g = (r ^ (i * 13)) & 0xFF
        b = (g ^ (j * 7)) & 0xFF
        palette.append((r, g, b))

    frame = np.zeros((height, width, 3), dtype=np.uint8)
    cell_w = width // 4
    cell_h = height // 4
    for y in range(4):
        for x in range(4):
            color = palette[y * 4 + x]
            frame[y * cell_h:(y + 1) * cell_h, x * cell_w:(x + 1) * cell_w] = color
    frames.append(frame)

imageio.mimsave("solar.gif", frames, duration=0.4)
print("solar.gif")
