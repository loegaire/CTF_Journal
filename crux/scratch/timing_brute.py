rows=[]
for l in open('scratch/irc_msgs.txt'):
    p=l.rstrip('\n').split('\t')
    if len(p)<4: continue
    rows.append((float(p[1]),p[2],'\t'.join(p[3:])))
def nm(m):
    for pat,n in [('the flag is in','F'),('just kidding','J'),('d3c0y','K'),('anyone got','A'),('right here','B'),('n0t_th3','C'),('wait really','D'),('trust me','E'),('spam filter','S')]:
        if pat in m: return n
    return '?'
def make_seqs():
    out={}
    for st in ['2','4']:
        ss=[r for r in rows if r[1]==st]
        names=[nm(r[2]) for r in ss]
        times=[r[0] for r in ss]
        out[(st,'ALL')]=[times[i+1]-times[i] for i in range(len(times)-1)]
        for i in range(len(ss)-1):
            a,b=names[i],names[i+1]
            out.setdefault((st,'T',a,b),[]).append(times[i+1]-times[i])
        # periods of same message
        idx={}
        for i,n in enumerate(names):
            if n in idx:
                out.setdefault((st,'P',n),[]).append(times[i]-times[idx[n]])
            idx[n]=i
    return out
seqs=make_seqs()
def render(bits,n,msb,off,inv):
    s=''
    for i in range(off,len(bits)-n+1,n):
        ch=bits[i:i+n]; v=0
        if msb:
            for b in ch: v=(v<<1)|(b^inv)
        else:
            for k,b in enumerate(ch): v|=(b^inv)<<k
        s+=chr(v) if 32<=v<127 else '.'
    return s
hits=0
for key,g in seqs.items():
    if len(g)<20: continue
    # use percentile-based thresholds
    sg=sorted(g)
    thrs=set()
    for q in [x/100 for x in range(20,96,5)]:
        thrs.add(sg[int(q*(len(sg)-1))])
    for thr in thrs:
        for pol in [0,1]:
            bits=[1 if (x>thr)!=bool(pol) else 0 for x in g]
            for n in [7,8]:
                for msb in [True,False]:
                    for off in range(n):
                        s=render(bits,n,msb,off,0)
                        ratio=sum(c!='.' for c in s)/max(1,len(s))
                        if 'cruXipher' in s or 'cruxipher' in s.lower() or ('cruX' in s and 'ipher' in s):
                            print('HIT',key,thr,pol,n,msb,off,repr(s)); hits+=1
                        elif ratio>0.97 and len(s)>25 and s[:6].isalpha() and ' ' not in s:
                            pass
print('hits',hits)
