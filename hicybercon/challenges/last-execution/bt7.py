import emu
M=1<<64
d=open('last_execution.img','rb').read()
TS=0xbadc0ffee0ddf00d; DSEED_OFF=0x42300
target=[0x31,0x2D,0x30,0x16]
def bytesof(off,row,bo): # row index within seg, byte offset
    return d[off+row*64+bo]
cands=[]
for Brow in (-1,0,1):
 for Boff in range(64):
  # B_i = byte at row (i-1+Brow) of seg, offset Boff
  B=[bytesof(DSEED_OFF, (i-1+Brow), Boff) for i in (1,2,3)]
  for A in range(1,64):
   for C in range(1,64):
    D=(target[1] - (target[0]*A + B[0] + 1*C))%64
    r1=(target[0]*A+B[0]+1*C+D)%64
    if r1!=target[1]: continue
    r2=(r1*A+B[1]+2*C+D)%64
    if r2!=target[2]: continue
    r3=(r2*A+B[2]+3*C+D)%64
    if r3!=target[3]: continue
    cands.append((Brow,Boff,A,C,D))
print("cands",len(cands),flush=True)
def mkv(Brow,Boff,A,C,D):
    img=emu.Image('last_execution.img'); vm=emu.VM(img)
    def rrc(seg,n):
        cache=[(TS ^ ((seg['id']*0x1BF5)%M))%64]
        while len(cache)<=n:
            k=len(cache)
            r=k-1+Brow
            if r<0: r=0
            B=img.mem[seg['off']+r*64+Boff]
            cache.append((cache[k-1]*A+B+k*C+D)%64)
        return cache
    def lr(seg,i,rr):
        st=bytes(img.mem[seg['off']+i*64:seg['off']+i*64+64])
        return bytes(st[(j-rr)%64] for j in range(64))
    img.rrchain=rrc; img.logicalrow=lr
    return vm
res=[]
for p in cands:
    try:
        vm=mkv(*p); vm.maxsteps=2000000
        n1=vm.run(1)
        if n1!=2: continue
        n2=vm.run(2)
        if n2!=3: continue
        n3=vm.run(3)
        print("LINKS",p,n3,hex(vm.R[1]&0xffffffff),flush=True)
        res.append((p,n3))
    except Exception as e: pass
print("done",res,flush=True)
