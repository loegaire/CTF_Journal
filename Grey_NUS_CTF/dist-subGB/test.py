from PIL import Image
import numpy as np

# Step 1: Load the image and extract RGB values
def extract_rgb_values(image_path):
    # Open the image
    img = Image.open(image_path).convert("RGB")
    # Get the pixel data as a list
    pixels = list(img.getdata())
    # Remove duplicates while preserving order (if needed)
    unique_colors = []
    seen = set()
    for color in pixels:
        if color not in seen:
            seen.add(color)
            unique_colors.append(color)
    return unique_colors

# Step 2: Create a grid and paint the RGB values
def paint_rgb_on_grid(rgb_values, grid_width, grid_height, tile_size):
    # Calculate the new image dimensions
    new_width = grid_width * tile_size
    new_height = grid_height * tile_size
    
    # Create a new blank image
    new_img = Image.new("RGB", (new_width, new_height))
    pixels = new_img.load()
    
    # Number of colors to cycle through
    num_colors = len(rgb_values)
    
    # Fill the grid with tiles
    for row in range(grid_height):
        for col in range(grid_width):
            # Calculate the color index (cycle through rgb_values)
            color_index = (row * grid_width + col) % num_colors
            color = rgb_values[color_index]
            
            # Paint the tile with the selected color
            for y in range(tile_size):
                for x in range(tile_size):
                    pixel_x = col * tile_size + x
                    pixel_y = row * tile_size + y
                    if pixel_x < new_width and pixel_y < new_height:
                        pixels[pixel_x, pixel_y] = color
    
    return new_img

# Main function
def main():
    # Path to your image (replace with your image file path)
    image_path = "subGB.png"  # The narrow strip image with RGB colors
    
    # Extract RGB values
    rgb_values = extract_rgb_values(image_path)
    print(f"Extracted {len(rgb_values)} unique RGB colors: {rgb_values}")
    
    # Grid dimensions (adjust as needed)
    grid_width = 10   # Number of tiles horizontally
    grid_height = 5   # Number of tiles vertically
    tile_size = 50    # Size of each tile in pixels
    
    # Paint the grid with RGB values
    new_img = paint_rgb_on_grid(rgb_values, grid_width, grid_height, tile_size)
    
    # Save the new image
    new_img.save("grid_output.png")
    print("Grid image saved as 'grid_output.png'")

if __name__ == "__main__":
    main()
