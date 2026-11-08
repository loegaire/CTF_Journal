rows=[]
for l in open('scratch/irc_msgs.txt'):
    p=l.rstrip('\n').split('\t')
    if len(p)<4: continue
    rows.append((float(p[1]),p[2],'\t'.join(p[3:])))
def name(m):
    for pat,n in [('anyone got','A'),('right here','B'),('n0t_th3','C'),('wait really','D'),('trust me','E'),('spam filter','S'),('the flag is in','F'),('just kidding','J'),('d3c0y','K')]:
        if pat in m: return n
    return '?'
import collections,itertools
seqs={}
for st in ['2','4']:
    ss=[r for r in rows if r[1]==st]
    names=[name(r[2]) for r in ss]
    for a,b in set(zip(names,names[1:])):
        g=[ss[i+1][0]-ss[i][0] for i in range(len(ss)-1) if names[i]==a and names[i+1]==b]
        seqs[(st,a,b)]=g
    seqs[(st,'ALL','ALL')]=[ss[i+1][0]-ss[i][0] for i in range(len(ss)-1)]

def ascii_try(bits, nbits, msb, off):
    out=[]
    for i in range(off,len(bits)-nbits+1,nbits):
        chunk=bits[i:i+nbits]; v=0
        if msb:
            for b in chunk: v=(v<<1)|b
        else:
            for k,b in enumerate(chunk): v|=b<<k
        out.append(chr(v) if 32<=v<127 else '.')
    return ''.join(out)

for key,g in seqs.items():
    if len(g)<10: continue
    vals=sorted(g)
    # candidate thresholds: midpoints between clusters via quantiles and fixed
    cands=set()
    for q in [0.5,0.6,0.7,0.75,0.8,0.85,0.9,0.95]:
        cands.add(vals[int(q*(len(vals)-1))])
    for t in [0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.1,0.12,0.15,0.2,0.25,0.3,0.4,0.5,1.0]:
        cands.add(t)
    for thr in cands:
        bits=[1 if x>thr else 0 for x in g]
        for nbits in [7,8]:
            for msb in [True,False]:
                for off in range(nbits):
                    s=ascii_try(bits,nbits,msb,off)
                    if 'cruX' in s or 'crux' in s or 'ipher' in s or 'flag' in s.lower():
                        print('HIT',key,'thr',thr,'n',nbits,'msb',msb,'off',off,repr(s[:120]))
print('done')
