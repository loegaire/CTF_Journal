def decrypt(encrypted_hex, key):
    encrypted_bytes = bytes.fromhex(encrypted_hex)
    key_repeated = (key * (len(encrypted_bytes) // len(key))) + key[:len(encrypted_bytes) % len(key)]
    decrypted = bytes([e ^ ord(k) for e, k in zip(encrypted_bytes, key_repeated)])
    return decrypted.decode()

def main():
    encrypted_hex = '73796071764d47410a1c001e074d53680a0903066c0507690501665e594e'
    key = '123456789'
    flag = decrypt(encrypted_hex, key)
    print("Flag:", flag)

if __name__ == '__main__':
    main()
