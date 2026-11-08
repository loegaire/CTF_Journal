import emu,hashlib,struct,itertools
M=1<<64;K=0x9E3779B97F4A7C15;X=0xA5A5A5A5A5A5A5A5
d=open('last_execution.img','rb').read()
ES=0x9e3779b9f00dcafe
EXPECT="0b6d8d4770eac443de6b9b73340a4a262117d9da42e6ced9411ebda286bbbcf2"
def commit(R): return hashlib.sha256(b''.join(struct.pack('>Q',R[i]) for i in range(1,5))).hexdigest()
# variants: (a0,f1,woff_mode,f2,a1) where w = be64 or le64, offset 0 of page p-1
cands=[]
for a0 in range(1,64):
 for f1 in (emu.ROL,emu.ROR):
  for a1 in range(1,64):
   for f2 in (emu.ROL,emu.ROR):
    # build main rot
    off=0x700; m=f1((ES^((1*K)%M))%M,a0); rot=[m%64]
    for p in range(1,4):
        w=int.from_bytes(d[off+(p-1)*256:off+(p-1)*256+8],'big')
        m=f2(((m^w^X)*K)%M,a1); rot.append(m%64)
    if rot[:3]==[0,0x39,0x37]:
        cands.append((a0,f1.__name__,a1,f2.__name__))
print("rot candidates",len(cands))
def make(a0,f1n,a1,f2n):
    f1=emu.ROL if f1n=='ROL' else emu.ROR
    f2=emu.ROL if f2n=='ROL' else emu.ROR
    img=emu.Image('last_execution.img'); vm=emu.VM(img)
    def rotations(seg):
        r=[]; m=f1((img.EXEC_SEED^((seg['id']*K)%M))%M,a0)
        np=(seg['sz']+255)//256
        for p in range(np):
            if p>0:
                po=seg['off']+(p-1)*256
                w=int.from_bytes(img.mem[po:po+8],'big')
                m=f2(((m^w^X)*K)%M,a1)
            r.append(m%64)
        return r
    img.rotations=rotations
    return vm
best=[]
for c in cands:
    try:
        vm=make(*c); vm.maxsteps=2000000
        vm.run(6)
        if commit(vm.R)!=EXPECT: continue
        vm2=make(*c); vm2.maxsteps=3000000
        n1=vm2.run(1)
        if n1!=2: continue
        n2=vm2.run(2)
        if n2!=3: continue
        n3=vm2.run(3)
        print("CAND",c,"commOK n3=",n3,"R1low",hex(vm2.R[1]&0xffffffff),flush=True)
        best.append((c,n3))
    except Exception as e:
        pass
print("done",best)
