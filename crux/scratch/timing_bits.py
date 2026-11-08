rows=[]
for l in open('scratch/irc_msgs.txt'):
    p=l.rstrip('\n').split('\t')
    if len(p)<4: continue
    rows.append((float(p[1]),p[2],'\t'.join(p[3:])))
def seq(st):
    ss=[r for r in rows if r[1]==st]
    return [ss[i+1][0]-ss[i][0] for i in range(len(ss)-1)]
def tryascii(bits, tag):
    for nbits in [7,8]:
        for msb in [True,False]:
            for off in range(nbits):
                out=[]
                for i in range(off,len(bits)-nbits+1,nbits):
                    ch=bits[i:i+nbits]; v=0
                    if msb:
                        for b in ch: v=(v<<1)|b
                    else:
                        for k,b in enumerate(ch): v|=b<<k
                    out.append(chr(v) if 32<=v<127 else '.')
                s=''.join(out)
                print(f'{tag} n={nbits} msb={msb} off={off}: {s[:120]}')
for st in ['2','4']:
    g=seq(st)
    for lo,hi in [(50,150),(150,400),(40,150),(150,400)]:
        pass
    # binary long-gap presence with various thresholds
    for tag,cond in [
        ('100vs300',lambda x: None if (x<50 or x>400) else (1 if x>150 else 0)),
        ('presence>50',lambda x: 1 if x>50 else 0),
        ('70vs210',lambda x: None if (x<40 or x>400) else (1 if x>120 else 0)),
    ]:
        bits=[c for x in g if (c:=cond(x)) is not None]
        print('==== stream',st,tag,'bits',len(bits))
        tryascii(bits,f'{st}-{tag}')
