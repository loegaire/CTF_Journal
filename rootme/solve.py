import sys

# The username defined in the challenge
username = b"root-me.org"

serial = []

for i in range(len(username)):
    # The Equation: User - i + 20 = File
    # Rearranged:   User = File + i - 20
    
    # Python bytes are integers, so we can do math directly.
    # We use & 0xFF to handle any wrapping (though unlikely here).
    char_val = (username[i] + i - 20) & 0xFF
    serial.append(char_val)

# Write RAW bytes to stdout (crucial for unprintable chars)
sys.stdout.buffer.write(bytes(serial))
