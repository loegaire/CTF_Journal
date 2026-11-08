rows=[]
for l in open('scratch/irc_msgs.txt'):
    p=l.rstrip('\n').split('\t')
    if len(p)<4: continue
    rows.append((float(p[1]),p[2],'\t'.join(p[3:])))
def seq(st):
    ss=[r for r in rows if r[1]==st]
    return [ss[i+1][0]-ss[i][0] for i in range(len(ss)-1)]
def tryascii(bits, tag, out):
    for nbits in [7,8]:
        for msb in [True,False]:
            for off in range(nbits):
                s=''
                for i in range(off,len(bits)-nbits+1,nbits):
                    ch=bits[i:i+nbits]; v=0
                    if msb:
                        for b in ch: v=(v<<1)|b
                    else:
                        for k,b in enumerate(ch): v|=b<<k
                    s+=chr(v) if 32<=v<127 else '.'
                if any(k in s for k in ['cruX','crux','ipher','flag','CTF','{']):
                    print(f'HIT {tag} n={nbits} msb={msb} off={off}: {s[:160]}')
for st in ['2','4']:
    g=seq(st)
    variants=[
      ('long_presence', lambda x: 1 if x>0.05 else 0),
      ('100vs300', lambda x: None if (x<0.05 or x>0.45) else (1 if x>0.15 else 0)),
      ('70vs210', lambda x: None if (x<0.04 or x>0.4) else (1 if x>0.12 else 0)),
      ('lt150', lambda x: None if x>0.45 else (1 if x>0.05 else 0)),
      ('skip_sep', lambda x: None if x>0.4 else (1 if x>0.05 else 0)),
    ]
    for tag,cond in variants:
        bits=[c for x in g if (c:=cond(x)) is not None]
        print('==== stream',st,tag,'bits',len(bits),'ones',sum(bits))
        tryascii(bits,f'{st}-{tag}',None)
        # also print raw for smallish
        if len(bits)<=300:
            print('  raw:', ''.join(map(str,bits)))
