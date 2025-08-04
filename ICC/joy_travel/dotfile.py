from PIL import Image
import math

# Read binary palette data
with open(".palette_blob", "rb") as f:
    data = f.read()

# Interpret as RGB triplets
palette = [tuple(data[i:i+3]) for i in range(0, len(data) - len(data) % 3, 3)]

# Compute the closest square dimensions
num_colors = len(palette)
side = math.ceil(math.sqrt(num_colors))
padding_needed = side * side - num_colors

# Pad the palette with black (or any default color)
palette += [(0, 0, 0)] * padding_needed

# Create and show the image
img = Image.new("RGB", (side, side))
img.putdata(palette)
img.show()

