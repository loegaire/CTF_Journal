import struct,zlib
d=open('artifacts/t2f/t2f-masterclass.zip','rb').read()
data=d[38:38+121532]
class BR:
    def __init__(s,b): s.b=b; s.p=0
    def bit(s):
        v=(s.b[s.p>>3]>>(s.p&7))&1; s.p+=1; return v
    def bits(s,n):
        v=0
        for i in range(n): v|=s.bit()<<i
        return v
r=BR(data)
BF=r.bit(); BT=r.bits(2)
HLIT=r.bits(5)+257; HDIST=r.bits(5)+1; HCLEN=r.bits(4)+4
order=[16,17,18,0,8,7,9,6,10,5,11,4,12,3,13,2,14,1,15]
cl=[0]*19
for i in range(HCLEN): cl[order[i]]=r.bits(3)
def build(lengths):
    maxl=max(lengths) if lengths else 0
    bl=[0]*(maxl+1)
    for l in lengths:
        if l: bl[l]+=1
    code=0; nc=[0]*(maxl+1)
    for bits in range(1,maxl+1):
        code=(code+bl[bits-1])<<1; nc[bits]=code
    t={}
    for sym,l in enumerate(lengths):
        if l: t[(l,nc[l])]=sym; nc[l]+=1
    return t
clt=build(cl)
def dec(r,t):
    code=0;l=0
    while True:
        code=(code<<1)|r.bit(); l+=1
        if (l,code) in t: return t[(l,code)]
        if l>15: return None
syms=[]
while len(syms)<HLIT+HDIST:
    s=dec(r,clt)
    if s<16: syms.append(s)
    elif s==16: syms+=[syms[-1]]*(r.bits(2)+3)
    elif s==17: syms+=[0]*(r.bits(3)+3)
    elif s==18: syms+=[0]*(r.bits(7)+11)
start=r.p
lit=syms[:HLIT]; dist=syms[HLIT:]
# data bits
bits_data=[]
for p in range(start,len(data)*8):
    bits_data.append((data[p>>3]>>(p&7))&1)
def enc_bits(vals):
    out=[]
    for v in vals: out.append(v)
    return out
def pack(bits):
    out=bytearray((len(bits)+7)//8)
    for i,b in enumerate(bits): out[i>>3]|=b<<(i&7)
    return bytes(out)
# build CL encoder (canonical)
clenc=build(cl)
inv={v:k for k,v in clenc.items()}
def enc_sym(s):
    l,c=inv[s]; out=[]
    for i in range(l-1,-1,-1): out.append((c>>i)&1)
    return out
def make_stream(lit2,dist2):
    bits=[]
    def put(v,n):
        for i in range(n): bits.append((v>>i)&1)
    put(BF,1); put(BT,2); put(HLIT-257,5); put(HDIST-1,5); put(HCLEN-4,4)
    for i in range(HCLEN): put(cl[order[i]],3)
    for v in lit2+dist2:
        if v<=9: bits+=enc_sym(v)
        elif v<=15: bits+=enc_sym(v)
        else: raise Exception('need rle')
    bits+=bits_data
    return pack(bits)
def kraft(l): return sum(2.0**-x for x in l if x)
cands=[i for i,l in enumerate(lit) if l==7]
print('candidates',cands,'kraft',kraft(lit))
crc_exp=0xcce1c38d
for idx in cands:
    lit2=lit[:]; lit2[idx]+=1
    if abs(kraft(lit2)-1.0)>1e-9: continue
    s=make_stream(lit2,dist)
    try:
        o=zlib.decompress(s,-15)
    except Exception as e:
        continue
    ok=(zlib.crc32(o)&0xffffffff)==crc_exp
    print('cand',idx,'->len',len(o),'crc',hex(zlib.crc32(o)&0xffffffff),'ok',ok)
    if ok:
        open('artifacts/t2f/flag.bin','wb').write(o); print('SAVED'); break
