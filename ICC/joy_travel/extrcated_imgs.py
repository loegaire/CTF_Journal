from PIL import Image
import os

def extract_gif_frames(gif_path, output_dir):
    # Create output directory if it doesn't exist
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)
    
    # Open the GIF
    with Image.open(gif_path) as img:
        # Ensure the GIF has multiple frames
        if not hasattr(img, 'n_frames'):
            print("The input file is not an animated GIF.")
            return
        
        # Iterate through all frames
        for frame in range(img.n_frames):
            img.seek(frame)  # Move to the current frame
            # Save the frame as PNG
            frame_path = os.path.join(output_dir, f"frame_{frame:03d}.png")
            img.save(frame_path, 'PNG')
            print(f"Saved frame {frame} to {frame_path}")

# Example usage
gif_path = "solar_traveller.gif"  # Replace with your GIF file path
output_dir = "extracted_frames"  # Directory to save frames
extract_gif_frames(gif_path, output_dir)
