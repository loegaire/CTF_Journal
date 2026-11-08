def manual_decode():
    # rcTF<=DKR[djmnpssnheehmrw|}xnfa^^^`dffdba`\XWYXX[e
    data = b'rcTF<=DKR[djmnpssnheehmrw|}xnfa^^^`dffdba`\\XWYXX[e'

    # Pattern: -15, -15, -14, -10, +1, +7, +7, +7...
    # Looks like shift increases? Or repeats?
    # Let's assume the target is "CTF{...}"
    target = b"CTF{"
    
    diffs = []
    for i in range(len(target)):
        diffs.append(data[i] - target[i])
    print("Diff to CTF{:", diffs)
    
    # Try subtracting the pattern:
    # 47, 15, 14, -53...
    
    # Maybe try to find "CTF" anywhere in the permutations?
    pass

if __name__ == "__main__":
    manual_decode()
