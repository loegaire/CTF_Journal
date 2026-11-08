import zlib
d=open('artifacts/t2f/t2f-masterclass.zip','rb').read()
data=d[38:38+121532]
class BR:
    def __init__(s,b): s.b=b; s.p=0
    def bit(s):
        if s.p>=len(s.b)*8: raise EOFError
        v=(s.b[s.p>>3]>>(s.p&7))&1; s.p+=1; return v
    def bits(s,n):
        v=0
        for i in range(n): v|=s.bit()<<i
        return v
def parse_header():
    r=BR(data)
    BF=r.bit(); BT=r.bits(2)
    HLIT=r.bits(5)+257; HDIST=r.bits(5)+1; HCLEN=r.bits(4)+4
    order=[16,17,18,0,8,7,9,6,10,5,11,4,12,3,13,2,14,1,15]
    cl=[0]*19
    for i in range(HCLEN): cl[order[i]]=r.bits(3)
    t=build(cl)
    syms=[]
    while len(syms)<HLIT+HDIST:
        s=dec(r,t)
        if s<16: syms.append(s)
        elif s==16: syms+=[syms[-1]]*(r.bits(2)+3)
        elif s==17: syms+=[0]*(r.bits(3)+3)
        elif s==18: syms+=[0]*(r.bits(7)+11)
    return BF,BT,HLIT,HDIST,cl,syms,r.p
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
def rev(c,l):
    r=0
    for i in range(l): r=(r<<1)|((c>>i)&1)
    return r
def build_rev(lengths):
    t=build(lengths)
    return {(l,rev(c,l)):s for (l,c),s in t.items()}
def dec(r,t):
    code=0;l=0
    while True:
        code=(code<<1)|r.bit(); l+=1
        if (l,code) in t: return t[(l,code)]
        if l>15: raise ValueError('bad code')
LBASE=[3,4,5,6,7,8,9,10,11,13,15,17,19,23,27,31,35,43,51,59,67,83,99,115,131,163,195,227,258]
LEXT=[0,0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,0]
DBASE=[1,2,3,4,5,7,9,13,17,25,33,49,65,97,129,193,257,385,513,769,1025,1537,2049,3073,4097,6145,8193,12289,16385,24577]
DEXT=[0,0,0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13]
def inflate(bits_lit,bits_dist,bitpos,reverse=False):
    r=BR(data); r.p=bitpos
    lit=build_rev(bits_lit) if reverse else build(bits_lit)
    dist=build_rev(bits_dist) if reverse else build(bits_dist)
    out=bytearray()
    try:
        while True:
            s=dec(r,lit)
            if s<256: out.append(s)
            elif s==256: break
            else:
                i=s-257
                ln=LBASE[i]+r.bits(LEXT[i])
                ds=dec(r,dist)
                dd=DBASE[ds]+r.bits(DEXT[ds])
                if dd>len(out): raise ValueError('dist too far')
                for _ in range(ln): out.append(out[-dd])
            if len(out)>200000: raise ValueError('too big')
    except (EOFError,ValueError) as e:
        return bytes(out),str(e),r.p
    return bytes(out),'eob',r.p
BF,BT,HLIT,HDIST,cl,syms,start=parse_header()
lit=syms[:HLIT]; dist=syms[HLIT:]
cands=[None]+[i for i,l in enumerate(lit) if l==7]
for idx in cands:
    L=lit[:]
    if idx is not None: L[idx]+=1
    for reverse in (False,True):
        out,status,bp=inflate(L,dist,start,reverse)
        crc=zlib.crc32(out)&0xffffffff
        tag='REV' if reverse else 'STD'
        hit='MATCH!' if crc==0xcce1c38d and len(out)==131072 else ''
        print(idx,tag,'len',len(out),'status',status,'crc',hex(crc),'bitpos',bp,'hit',hit)
