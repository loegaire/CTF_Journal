import os

def remove_trailing_zeros(input_path, output_path):
    # Read the entire PNG file
    with open(input_path, 'rb') as f:
        data = f.read()
    
    # Find the IEND chunk signature (49454e44ae426082)
    iend_signature = b'\x49\x45\x4e\x44\xae\x42\x60\x82'
    iend_pos = data.find(iend_signature)
    
    if iend_pos == -1:
        print("Error: IEND chunk not found in PNG file.")
        return
    
    # Calculate the position after the IEND chunk (8 bytes for signature)
    end_pos = iend_pos + len(iend_signature)
    
    # Truncate the file content up to the end of IEND chunk
    cleaned_data = data[:end_pos]
    
    # Write the cleaned data to a new file
    with open(output_path, 'wb') as f:
        f.write(cleaned_data)
    
    print(f"Cleaned PNG file saved to {output_path}")

if __name__ == "__main__":
    input_file = "warped.png"  # Replace with your input PNG file path
    output_file = "output_cleaned.png"  # Replace with desired output file path
    
    if not os.path.exists(input_file):
        print(f"Error: Input file {input_file} does not exist.")
    else:
        remove_trailing_zeros(input_file, output_file)
