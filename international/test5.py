# List of pitch values
pitches = [
    55, 60, 40, 70, 60, 63, 65, 60, 61, 45, 60, 60, 42, 71, 60, 42, 60, 69, 43,
    60, 77, 43, 60, 70, 49, 60, 71, 69, 60, 46, 68, 60, 73, 72, 60, 60, 60, 71,
    67, 60, 51, 60, 45, 60, 78, 64, 60, 41, 60, 58, 60, 60, 41, 60
]

# Convert pitches to ASCII
ascii_chars = []
for j in range(0,69):
    for i, pitch in enumerate(pitches, 1):
        if 32 <= pitch + j <= 126:  # Printable ASCII range
            char = chr(pitch+j)
            ascii_chars.append(char)
            print(f"{i:02d}. Pitch: {pitch}, ASCII: {char}")
        else:
            print(f"{i:02d}. Pitch: {pitch}, ASCII: [non-printable]")
    ascii_chars.append("      ")
# Print concatenated printable characters
print("\nConcatenated printable ASCII characters:")
print(''.join(ascii_chars))
