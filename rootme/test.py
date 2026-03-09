import hashlib

# The Username (Typed at the "Login :" prompt)
username = b"root-me.org"
serial_bytes = bytearray()

print(f"Calculating Serial for Username: {username}")

# Logic: File[i] = Stdin[i] - i + 0x14
for i in range(len(username)):
    # Calculate byte value (Article's Logic)
    # Note the reversal: we SUBTRACT i instead of ADDING
    val = (username[i] - i + 0x14) & 0xFF
    serial_bytes.append(val)

print(f"Serial Bytes (Hex): {serial_bytes.hex()}")

# The Challenge says: "The validation password is the serial’s sha256 hash."
# We hash the hex string of the calculated serial.
hex_serial = serial_bytes.hex()
m = hashlib.sha256()
m.update(hex_serial.encode())

print("-" * 30)
print(f"FLAG (SHA256): {m.hexdigest()}")
print("-" * 30)
