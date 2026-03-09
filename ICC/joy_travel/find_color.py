from PIL import Image
import numpy as np

# Load the GIF
gif = Image.open("solar_traveller.gif")
frames = []
try:
    while True:
        # Convert frame to RGB if necessary
        frame = gif.convert("RGB")
        # Get the palette (if indexed) or pixel colors
        if frame.mode == "P":
            palette = frame.getpalette()
            if palette:
                # Palette is a flat list [R,G,B,R,G,B,...]
                palette = np.array(palette).reshape(-1, 3)[:16]  # Get first 16 colors
                frames.append(palette)
        else:
            # If not indexed, sample colors from the 4x4 grid
            pixels = np.array(frame)
            cell_w, cell_h = frame.width // 4, frame.height // 4
            palette = []
            for y in range(4):
                for x in range(4):
                    # Sample a pixel from the center of each cell
                    color = pixels[y * cell_h + cell_h // 2, x * cell_w + cell_w // 2]
                    palette.append(color)
            frames.append(np.array(palette))
        gif.seek(gif.tell() + 1)  # Next frame
except EOFError:
    pass

# Print palette for each frame
for i, palette in enumerate(frames):
    print(f"Frame {i}: {palette.tolist()}")
