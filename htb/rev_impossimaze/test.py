def decode_message(encoded_message, shift_values):
    decoded_message = []
    group_index = 0  # Tracks the current shift group

    for i in range(0, len(encoded_message), 5):
        group = encoded_message[i:i+5]  # Get the next 5-character group
        if group_index >= len(shift_values):  # No more shift values left
            decoded_message.extend(group)  # Add remaining characters as-is
            continue

        shift = shift_values[group_index]  # Get the shift value for this group
        group_index += 1  # Move to the next shift group

        for char in group:
            if char.islower():  # Only shift lowercase alphabetical characters
                decoded_char = chr(((ord(char) - ord('a') - shift) % 26 + ord('a')))
            else:
                decoded_char = char  # Non-alphabetical characters are added as-is
            decoded_message.append(decoded_char)

    return ''.join(decoded_message)

# Take user input
encoded_message = input().strip()  # First line: encoded message
num_groups = int(input().strip())  # Second line: number of shift groups
shift_values = list(map(int, input().strip()[1:-1].split(',')))  # Third line: shift values

# Decode the message
decoded_message = decode_message(encoded_message, shift_values)
print(decoded_message)
