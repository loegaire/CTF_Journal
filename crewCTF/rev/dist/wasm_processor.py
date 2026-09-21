import re

def x_function(number):
    """
    The function that determines which branch to take.
    Counts the number of 1 bits in the binary representation.
    Returns 1 if odd number of 1s, 0 if even number of 1s.
    """
    result = 0
    while number != 0:
        result ^= number & 1
        number >>= 1
    return result

def process_wasm_code(wasm_content):
    """
    Process WASM code to find patterns and replace them based on x function output.

    Looks for patterns like:
    i32.const <number>
          call $import0
          if (result i32)
            i32.const <value1>
          else
            i32.const <value2>
          end

    And replaces with:
    i32.const <number>
          call $import0
            i32.const <chosen_value>
          end
    """
    # Pattern to match the construct with flexible whitespace
    pattern = r'i32\.const\s+(\d+)\s+call\s+\$import0\s+if\s+\(result\s+i32\)\s+i32\.const\s+(\d+)\s+else\s+i32\.const\s+(\d+)\s+end'

    def replacement_function(match):
        number = int(match.group(1))
        value_if_true = match.group(2)
        value_if_false = match.group(3)

        # Calculate x(number)
        x_result = x_function(number)

        # Choose the appropriate value based on x function result
        # If x returns 1, take the "if" branch, otherwise take the "else" branch
        if x_result == 1:
            chosen_value = value_if_true
        else:
            chosen_value = value_if_false

        # Return the simplified code
        return f'i32.const {number}\n      call $import0\n        i32.const {chosen_value}\n      end'

    # Apply the replacement
    processed_content = re.sub(pattern, replacement_function, wasm_content, flags=re.MULTILINE | re.DOTALL)

    return processed_content

def process_wasm_file(input_file_path, output_file_path=None):
    """
    Process a WASM file and save the result.

    Args:
        input_file_path (str): Path to the input WASM file
        output_file_path (str, optional): Path for the output file. 
                                        If None, adds '_processed' to the input filename.

    Returns:
        str: The processed content, or None if an error occurred
    """
    try:
        # Read the input file
        with open(input_file_path, 'r', encoding='utf-8') as file:
            content = file.read()

        # Process the content
        processed_content = process_wasm_code(content)

        # Determine output file path
        if output_file_path is None:
            if input_file_path.endswith('.wasm'):
                output_file_path = input_file_path.replace('.wasm', '_processed.wasm')
            elif input_file_path.endswith('.wat'):
                output_file_path = input_file_path.replace('.wat', '_processed.wat')
            else:
                output_file_path = input_file_path + '_processed'

        # Write the processed content
        with open(output_file_path, 'w', encoding='utf-8') as file:
            file.write(processed_content)

        print(f"Processing complete!")
        print(f"Input file: {input_file_path}")
        print(f"Output file: {output_file_path}")

        return processed_content

    except FileNotFoundError:
        print(f"Error: File '{input_file_path}' not found.")
        return None
    except Exception as e:
        print(f"Error processing file: {e}")
        return None

def batch_process_directory(directory_path, file_extension=".wasm"):
    """
    Process all WASM files in a directory.

    Args:
        directory_path (str): Path to the directory containing WASM files
        file_extension (str): File extension to look for (default: ".wasm")
    """
    import os

    if not os.path.exists(directory_path):
        print(f"Error: Directory '{directory_path}' not found.")
        return

    processed_count = 0

    for filename in os.listdir(directory_path):
        if filename.endswith(file_extension):
            input_path = os.path.join(directory_path, filename)
            print(f"\nProcessing: {filename}")

            result = process_wasm_file(input_path)
            if result is not None:
                processed_count += 1

    print(f"\nBatch processing complete! Processed {processed_count} files.")

# Example usage and testing
if __name__ == "__main__":
    # Test the x function
    print("Testing x function:")
    test_values = [2279, 100, 0, 1, 7, 15, 255]
    for val in test_values:
        print(f"x({val}) = {x_function(val)}")

    print("\n" + "="*50)

    # Test with sample code
    sample_code = """module
    (import "env" "import0" (func $import0 (result i32)))
    (func $test
        i32.const 2279
        call $import0
        if (result i32)
            i32.const 3
        else
            i32.const 7
        end
        drop

        i32.const 100
        call $import0
        if (result i32)
            i32.const 10
        else
            i32.const 20
        end
        drop
    )
    )"""

    print("Sample WASM code processing:")
    print("Before:")
    print(sample_code)

    processed_sample = process_wasm_code(sample_code)
    print("\nAfter:")
    print(processed_sample)

    # Uncomment the following lines to process actual files:
    process_wasm_file("input.wasm")
    # batch_process_directory("./wasm_files/")
