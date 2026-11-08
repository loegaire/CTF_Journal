import emu,time
M=1<<64
d=open('last_execution.img','rb').read()
TS=0xbadc0ffee0ddf00d; DSEED_OFF=0x42300
target=[0x31,0x2D,0x30,0x16]
cands=[]
for A in range(1,64):
 for C in range(1,64):
  for D in range(64):
   for Boff in range(64):
    def rf(prev,k):
        return (prev*A+d[DSEED_OFF+(k-1)*64+Boff]+k*C+D)%64
    rr=[target[0],rf(target[0],1)]; rr.append(rf(rr[1],2)); rr.append(rf(rr[2],3))
    if rr==target: cands.append((A,C,D,Boff))
f=open('bt6.log','w',buffering=1)
f.write("cands %d\n"%len(cands))
def mkv(A,C,D,Boff):
    img=emu.Image('last_execution.img'); vm=emu.VM(img)
    def rrc(seg,n):
        cache=[(TS ^ ((seg['id']*0x1BF5)%M))%64]
        while len(cache)<=n:
            k=len(cache); B=img.mem[seg['off']+(k-1)*64+Boff]
            cache.append((cache[k-1]*A+B+k*C+D)%64)
        return cache
    def lr(seg,i,rr):
        st=bytes(img.mem[seg['off']+i*64:seg['off']+i*64+64])
        return bytes(st[(j-rr)%64] for j in range(64))
    img.rrchain=rrc; img.logicalrow=lr
    return vm
t=time.time()
mainpass=[]
for p in cands:
    try:
        vm=mkv(*p); vm.maxsteps=2000000
        n1=vm.run(1)
        f.write("MAIN %s n1=%s R1low=%x\n"%(p,n1,vm.R[1]&0xffffffff))
        if n1==2: mainpass.append(p)
    except Exception as e:
        f.write("MAIN %s EXC %s\n"%(p,e))
f.write("mainpass %d t=%.1f\n"%(len(mainpass),time.time()-t))
for p in mainpass:
    try:
        vm=mkv(*p); vm.maxsteps=2000000
        vm.run(1); n2=vm.run(2)
        f.write("FOLDA %s n2=%s\n"%(p,n2))
        if n2==3:
            n3=vm.run(3)
            f.write("LINKS %s n3=%s R1low=%x\n"%(p,n3,vm.R[1]&0xffffffff))
    except Exception as e:
        f.write("FOLDA %s EXC %s\n"%(p,e))
f.write("DONE %.1f\n"%(time.time()-t))
