import ast

def binary_to_ascii(filename):
    with open(filename, "r") as file:
        binary_list = ast.literal_eval(file.read().strip())  # Convert string to list safely

    if not all(bit in [0, 1] for bit in binary_list):
        raise ValueError("File contains non-binary values!")

    binary_str = "".join(map(str, binary_list))  # Convert list to binary string
    ascii_text = "".join(chr(int(binary_str[i:i+8], 2)) for i in range(0, len(binary_str), 8))

    print("Decoded ASCII Message:")
    print(ascii_text)

# Example usage
binary_to_ascii("RAM")

