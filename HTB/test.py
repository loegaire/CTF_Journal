import base64

# Keys from the ransomware (Base64-encoded)
key1_base64 = "NXhzR09iakhRaVBBR2R6TGdCRWVJOHUwWVNKcTc2RWl5dWY4d0FSUzdxYnRQNG50UVk1MHlIOGR6S1plQ0FzWg=="
key2 = "n2mmXaWy5pL4kpNWr7bcgEKxMeUx50MJ"

# Decode Key1 (Base64 → bytes)
key1 = base64.b64decode(key1_base64)
# Key2 is already in plaintext (convert to bytes)
key2_bytes = key2.encode('utf-8')

def decrypt_file(secure_file_path, output_file_path):
    # Read the .secure file (Base64 encoded)
    with open(secure_file_path, 'rb') as f:
        encrypted_base64 = f.read().strip()
    
    # Base64 decode → raw encrypted bytes
    encrypted_bytes = base64.b64decode(encrypted_base64)
    
    # XOR decrypt using the two keys
    decrypted_bytes = bytearray()
    for i in range(len(encrypted_bytes)):
        key1_byte = key1[i % len(key1)]
        key2_byte = key2_bytes[i % len(key2_bytes)]
        decrypted_byte = encrypted_bytes[i] ^ key1_byte ^ key2_byte
        decrypted_bytes.append(decrypted_byte)
    
    # Save the decrypted file
    with open(output_file_path, 'wb') as f:
        f.write(decrypted_bytes)
    print(f"[+] File decrypted to: {output_file_path}")

# Example usage:
decrypt_file(
    secure_file_path="/home/thinh/htb/map.pdf.secured",
    output_file_path="/home/thinh/htb/output"
)
