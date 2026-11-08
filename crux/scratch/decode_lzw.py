import sys,pickle

def gen_perm(seed=0x0745B6,N=256):
    a=list(range(N)); s=seed
    def nxt():
        nonlocal s
        s^=(s<<13)&0xFFFFFFFF; s^=s>>17; s^=(s<<5)&0xFFFFFFFF
        return s&0xFFFFFFFF
    for i in range(N-1,0,-1):
        j=nxt()%(i+1); a[i],a[j]=a[j],a[i]
    return a

def decode(data,P,w0=10,reset_code=256,end_code=257,start_next=258):
    lit={i:bytes([P[i]]) for i in range(256)}
    D={}; nextc=start_next; prev=None; out=bytearray(); bitpos=0; w=w0; total=len(data)*8
    while bitpos+w<=total:
        c=0
        for i in range(w):
            c|=((data[(bitpos+i)//8]>>((bitpos+i)%8))&1)<<i
        bitpos+=w
        if c==reset_code:
            D={}; nextc=start_next; prev=None
        elif c==end_code:
            break
        else:
            if c in D: entry=D[c]
            elif c<256: entry=lit[c]
            elif prev is not None and c==nextc: entry=prev+prev[:1]
            else: raise ValueError(f'bad code {c} next={nextc} at bit {bitpos}')
            out+=entry
            if prev is not None:
                D[nextc]=prev+entry[:1]; nextc+=1
            prev=entry
        if nextc>=(1<<w) and w<24: w+=1
    return bytes(out)

if __name__=='__main__':
    P=gen_perm(int(sys.argv[2],16) if len(sys.argv)>2 else 0x0745B6)
    print(decode(open(sys.argv[1],'rb').read(),P))
