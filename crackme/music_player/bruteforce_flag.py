def solve():
    # The snippet we extracted
    # rcTF<=DKR[djmnpssnheehmrw|}xnfa^^^`dffdba`\XWYXX[e
    data = b'rcTF<=DKR[djmnpssnheehmrw|}xnfa^^^`dffdba`\\XWYXX[e'
    
    print("Trying XOR...")
    for key in range(256):
        decoded = bytes([b ^ key for b in data])
        if b'CTF' in decoded or b'ctf' in decoded:
            print(f"XOR Key {key}: {decoded}")

    print("\nTrying ADD/SUB...")
    for shift in range(256):
        decoded = bytes([(b + shift) & 0xFF for b in data])
        if b'CTF' in decoded or b'ctf' in decoded:
            print(f"ADD Shift {shift}: {decoded}")
        
        decoded = bytes([(b - shift) & 0xFF for b in data])
        if b'CTF' in decoded or b'ctf' in decoded:
             print(f"SUB Shift {shift}: {decoded}")

    print("\nTrying Index-based operations...")
    # (val + i) % 256
    decoded = bytes([(b + i) & 0xFF for i, b in enumerate(data)])
    if b'CTF' in decoded: print(f"ADD Index: {decoded}")
    decoded = bytes([(b - i) & 0xFF for i, b in enumerate(data)])
    if b'CTF' in decoded: print(f"SUB Index: {decoded}")
    decoded = bytes([(b ^ i) & 0xFF for i, b in enumerate(data)])
    if b'CTF' in decoded: print(f"XOR Index: {decoded}")

    # Check manual pattern from analysis earlier
    # r->C 47?
    # c->T 15?
    pass

if __name__ == "__main__":
    solve()
