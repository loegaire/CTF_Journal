import hashlib,struct
M=1<<64
Kc=0x9E3779B97F4A7C15
P=[0x00,0x05,0x0A,0x0F,0x04,0x09,0x0E,0x03,0x08,0x0D,0x02,0x07,0x0C,0x01,0x06,0x0B]
IP=[0x00,0x0D,0x0A,0x07,0x04,0x01,0x0E,0x0B,0x08,0x05,0x02,0x0F,0x0C,0x09,0x06,0x03]
def ROL(x,r): r%=64; return ((x<<r)|(x>>(64-r)))&(M-1) if r else x&M-1

def sbox_from_D(D):
    perm=list(range(256))
    for i in range(255,0,-1):
        j=D[i]%(i+1)
        perm[i],perm[j]=perm[j],perm[i]
    return perm

def key_sched(key):
    x=list(struct.unpack('>4Q',key))
    RK=[]
    for i in range(1,18):
        for j in range(4):
            t=(x[j]+x[(j+1)%4]+(Kc*(4*(i-1)+j+1))%M)%M
            t^=(x[(j+3)%4]>>7)
            x[j]=ROL(t,13)
        RK.append(struct.pack('>QQ',(x[0]^x[2])&(M-1),(x[1]^x[3])&(M-1)))
    return RK

def enc_block(blk,key,SBOX):
    RK=key_sched(key)
    st=bytearray(blk)
    for r in range(16):
        for t in range(16): st[t]^=RK[r][t]
        st=bytearray(SBOX[b] for b in st)
        st=bytearray(st[P[t]] for t in range(16))
    for t in range(16): st[t]^=RK[16][t]
    return bytes(st)

def dec_block(blk,key,SBOX):
    RK=key_sched(key)
    INV=[0]*256
    for i,v in enumerate(SBOX): INV[v]=i
    st=bytearray(blk)
    for t in range(16): st[t]^=RK[16][t]
    for r in range(15,-1,-1):
        st=bytearray(st[IP[t]] for t in range(16))
        st=bytearray(INV[b] for b in st)
        for t in range(16): st[t]^=RK[r][t]
    return bytes(st)

def unshift(col_data, shifts):
    # col_data: bytes size 16*L row-major stored
    L=len(col_data)//16
    out=bytearray(len(col_data))
    for r in range(L):
        for c in range(16):
            s=(r+shifts[c])%L
            out[r*16+c]=col_data[s*16+c]
    return bytes(out)

def decrypt_seal(segdata,key,SBOX):
    shifts=segdata[:16]
    ct=segdata[16:]
    L=len(ct)//16
    ct=unshift(ct,shifts)
    pt=b''
    for i in range(L):
        pt+=dec_block(ct[i*16:i*16+16],key,SBOX)
    return pt,shifts,L
