# Inverts the per-8-byte-block bit shuffle in chall's payload; table dumped at runtime (win11).
t=bytes.fromhex('335374397916747f7c3053717c253674742d33567c700176711772777b72047f')
pw=bytearray(len(t))
for b in range(0,len(t),8):
    for r in range(8):
        for k in range(8):
            p=7-k
            if t[b+r]>>p&1: pw[b+(r+k)%8]|=1<<p
print(pw.decode())
