exec(open('scratch/t2f_inflate.py').read().split("cands=")[0])
import zlib
BF,BT,HLIT,HDIST,cl,syms,start=parse_header()
lit=syms[:HLIT]; dist=syms[HLIT:]
def decode_all(lit,dist,skip_eob=True):
    r=BR(data); r.p=start
    t=build(lit); dt=build(dist)
    out=bytearray(); eobs=[]
    try:
        while True:
            s=dec(r,t)
            if s==256:
                eobs.append(len(out))
                if not skip_eob: break
                continue
            if s<256: out.append(s)
            else:
                i=s-257
                ln=LBASE[i]+r.bits(LEXT[i])
                ds=dec(r,dt); dd=DBASE[ds]+r.bits(DEXT[ds])
                for _ in range(ln): out.append(out[-dd])
    except (EOFError,ValueError) as e:
        pass
    return bytes(out),eobs,r.p
target=0xcce1c38d
cands=[('oversub',None)]+[(f'fix{i}',i) for i,l in enumerate(lit) if l==7]
for name,idx in cands:
    L=lit[:]
    if idx is not None: L[idx]+=1
    for skip in (True,False):
        o,eobs,bp=decode_all(L,dist,skip)
        crc=zlib.crc32(o)&0xffffffff
        flag = b'cruX' in o or b'cruXipher' in o
        print(name,'skipEOB' if skip else 'stopEOB','len',len(o),'crc',hex(crc),'eobs',eobs[:5],'neobs',len(eobs),'flag?',flag)
        if flag:
            i=o.find(b'cruX')
            print('   context',repr(o[max(0,i-40):i+120]))
        if crc==target:
            print('   MATCH!')
            open(f'artifacts/t2f/variant_{name}_{skip}.bin','wb').write(o)
