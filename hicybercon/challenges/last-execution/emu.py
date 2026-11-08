import struct, hashlib, sys
M=1<<64
K=0x9E3779B97F4A7C15
VAR={}
X=0xA5A5A5A5A5A5A5A5

def ROL(x,r): 
    r%=64
    return ((x<<r)|(x>>(64-r)))&(M-1) if r else x&M-1
def ROR(x,r):
    r%=64
    return ((x>>r)|(x<<(64-r)))&(M-1) if r else x&M-1
def sext32(v): return v-(1<<32) if v&0x80000000 else v

class Image:
    def __init__(self,path):
        self.mem=bytearray(open(path,'rb').read())
        self.segs={}
        N=struct.unpack('>I',self.mem[0x0c:0x10])[0]
        self.EXEC_SEED,self.TABLE_SEED=struct.unpack('>QQ',self.mem[0x10:0x20])
        self.ENTRY=struct.unpack('>I',self.mem[0x20:0x24])[0]
        for i in range(N):
            b=0x100+i*0x40
            e=self.mem[b:b+0x40]
            eid,typ=struct.unpack('>II',e[:8])
            off,=struct.unpack('>Q',e[0x08:0x10])
            sz,=struct.unpack('>Q',e[0x10:0x18])
            flags,aux=struct.unpack('>II',e[0x18:0x20])
            crc,=struct.unpack('>I',e[0x20:0x24])
            name=e[0x24:0x34].split(b'\0')[0].decode()
            self.segs[eid]=dict(id=eid,type=typ,off=off,sz=sz,flags=flags,aux=aux,crc=crc,name=name)

    def rrchain(self,seg,n):
        cache=self.__dict__.setdefault('_rrc',{}).get(seg['id'])
        if cache is None:
            cache=[ (self.TABLE_SEED ^ ((seg['id']*0x1BF5)%M))%64 ]
            self._rrc[seg['id']]=cache
        while len(cache)<=n:
            k=len(cache)
            B=self.mem[seg['off']+(k-1)*64]
            cache.append((cache[k-1]*17 + B + k*13)%64)
        return cache
    def logicalrow(self,seg,i,rr):
        key=(seg['id'],i)
        rc=self.__dict__.setdefault('_rowc',{})
        if key not in rc:
            st=bytes(self.mem[seg['off']+i*64:seg['off']+i*64+64])
            rc[key]=bytes(st[(j-rr)%64] for j in range(64))
        return rc[key]
    def rotations(self,seg):
        rot=[]
        m=ROL((self.EXEC_SEED ^ ((seg['id']*K)%M))%M,17)
        npages=(seg['sz']+255)//256
        for p in range(npages):
            if p>0:
                po=seg['off']+(p-1)*256
                w=int.from_bytes(self.mem[po:po+8],'big')
                m=ROL(((m ^ w ^ X)*K)%M,31)
            rot.append(m%64)
        return rot

class VM:
    DISP={0x03:'NOP',0x0A:'JNZ',0x0B:'LI',0x12:'JMP',0x16:'LUI',0x1D:'TRAP',0x21:'ORI',
          0x2D:'MOV',0x38:'ADD',0x42:'ADDI',0x4C:'SUB',0x55:'AND',0x5F:'OR',0x6A:'XOR',
          0x73:'XORI',0x7E:'MUL',0x87:'ROL',0x8F:'HALT',0x91:'ROR',0x9C:'SHL',0xA5:'SHR',
          0xB0:'NOT',0xBA:'LDW',0xC3:'LDB',0xC9:'ANDI',0xCE:'STW',0xD7:'STB',0xE2:'LDRR',
          0xEC:'CMP',0xF5:'JZ'}
    PSH=['NOP','XOR','ADD','MOV','ROL','SHR','AND','SUB']
    def __init__(self,img):
        self.img=img
        self.R=[0]*16
        self.Z=0
        self.maxsteps=200000
    def read_word(self,addr):
        return int.from_bytes(self.img.mem[addr:addr+8],'big')
    def tbl_rowlogical(self,seg,i):
        rr=self.img.rrchain(seg,i)
        return self.img.logicalrow(seg,i,rr[i])
    def ldrr(self,phys):
        seg=None
        for s in self.img.segs.values():
            if s['type']==3 and s['off']<=phys<s['off']+s['sz']:
                seg=s;break
        if seg is None: raise Exception("LDRR outside TBL at %x"%phys)
        row_base=seg['off']+((phys-seg['off'])&~63)
        k=phys-row_base
        i=(row_base-seg['off'])//64
        logical=self.tbl_rowlogical(seg,i)
        return int.from_bytes(logical[k:k+8],'big')
    def writable(self,addr):
        for s in self.img.segs.values():
            if s['off']<=addr<s['off']+s['sz']:
                return bool(s['flags']&1)
        return False

    def _execlimit_fastforward(self):
        R=self.R
        R0=R[0]; R13=R[13]; R14=R[14]
        R6=R[6]; R8=R[8]; R5=R[5]; R12=R[12]
        N=R[9]; Msk=1<<64
        def step(R6,R8,R5,R12):
            r7=(((R6 & 0x3ffff)*R13 + R14) % Msk) & 0x3ffff
            R6=((R6 ^ (R6 & 0x3ffff)) | r7)
            R8=(R8 + (ROL(R6,0x1b) ^ R6)) % Msk
            R8=(R8 + ((R12<<0xf) | R5)) % Msk
            R11=(R5+0x4001) % Msk
            R5=R11 & 0x7fff
            if (R11>>0xf)!=0:
                R12+=1
                if R12==R0: R12=0
            return R6,R8,R5,R12
        hist=[(R6,R8,R5,R12)]
        seen={(R6,R5,R12):0}
        i=0
        while i<N:
            R6,R8,R5,R12=step(R6,R8,R5,R12)
            i+=1
            hist.append((R6,R8,R5,R12))
            key=(R6,R5,R12)
            if key in seen:
                start=seen[key]
                period=i-start
                cyc_delta=(R8-hist[start][1])%Msk
                k=(N-start)%period
                q=(N-start)//period
                R6f,R8f,R5f,R12f=hist[start+k]
                R8f=(R8f + q*cyc_delta)%Msk
                R6,R8,R5,R12=R6f,R8f,R5f,R12f
                i=N
                break
            seen[key]=i
        R[6]=R6; R[8]=R8; R[5]=R5; R[12]=R12; R[9]=0

    def run(self,segid,limit=None):
        seg=self.img.segs[segid]
        rot=self.img.rotations(seg)
        pc=0
        steps=0
        while True:
            steps+=1

            if seg.get('name')=='EXEC_LIMIT' and pc==0xb8:
                if 'forceN' in VAR: self.R[9]=VAR['forceN']
                if not VAR.get('noff'):
                    self._execlimit_fastforward()
                    pc=0x188
                    continue
            if steps>self.maxsteps: raise Exception("step limit")
            raw=self.read_word(seg['off']+pc)
            word=(ROR if VAR.get('fetchror') else ROL)(raw,rot[pc>>8])
            op=(word>>56)&0xff
            rd=(word>>48)&0xff
            ra=(word>>40)&0xff
            rb=(word>>32)&0xff
            imm=word&0xffffffff
            idx=(op+((pc>>3)+seg['aux']))%256
            mnem=self.DISP.get(idx)
            if mnem is None:
                mnem=self.PSH[idx%8]
                rd%=16;ra%=16;rb%=16
            else:
                if rd>15 or ra>15 or rb>15: raise Exception("reg fault %s at pc %x"%(mnem,pc))
            if getattr(self,'trace',False):
                print(f"pc={pc:#05x} {mnem:5} rd={rd} ra={ra} rb={rb} imm={imm:#x} R[rd]={self.R[rd]:#x} R[ra]={self.R[ra]:#x} R[rb]={self.R[rb]:#x}")
            nxt=pc+8
            R=self.R
            if mnem=='NOP': pass
            elif mnem=='LI': R[rd]=(sext32(imm) if VAR.get('lisext') else imm)
            elif mnem=='LUI': R[rd]=(imm<<32)&(M-1)
            elif mnem=='ORI': R[rd]|=(sext32(imm)&(M-1) if VAR.get('orisext') else imm)
            elif mnem=='MOV': R[rd]=R[ra]
            elif mnem=='ADD': R[rd]=(R[ra]+R[rb])&(M-1)
            elif mnem=='SUB': R[rd]=(R[ra]-R[rb])&(M-1)
            elif mnem=='AND': R[rd]=R[ra]&R[rb]
            elif mnem=='OR': R[rd]=R[ra]|R[rb]
            elif mnem=='XOR': R[rd]=R[ra]^R[rb]
            elif mnem=='ADDI': R[rd]=(R[ra]+(imm if VAR.get('addizext') else sext32(imm)))&(M-1)
            elif mnem=='ANDI': R[rd]=R[ra]&(sext32(imm) if VAR.get('andisext') else imm)
            elif mnem=='XORI': R[rd]=R[ra]^(sext32(imm) if VAR.get('andisext') else imm)
            elif mnem=='MUL': R[rd]=(R[ra]*R[rb])&(M-1)
            elif mnem=='ROL': R[rd]=(ROR if VAR.get('swaprol') else ROL)(R[ra],imm%64)
            elif mnem=='ROR': R[rd]=(ROL if VAR.get('swaprol') else ROR)(R[ra],imm%64)
            elif mnem=='SHL': R[rd]=(R[ra]>>(imm%64))&(M-1) if VAR.get('swapsh') else (R[ra]<<(imm%64))&(M-1)
            elif mnem=='SHR': R[rd]=(R[ra]<<(imm%64))&(M-1) if VAR.get('swapsh') else (R[ra]>>(imm%64))&(M-1)
            elif mnem=='NOT': R[rd]=R[ra]^(M-1)
            elif mnem=='LDW': R[rd]=int.from_bytes(self.img.mem[(R[ra]+sext32(imm))&(M-1):][:8],'big')
            elif mnem=='LDB': R[rd]=self.img.mem[(R[ra]+sext32(imm))&(M-1)]
            elif mnem=='STW':
                a=(R[ra]+sext32(imm))&(M-1)
                if not self.writable(a): raise Exception("WRITEPROT %x"%a)
                self.img.mem[a:a+8]=R[rd].to_bytes(8,'big')
            elif mnem=='STB':
                a=(R[ra]+sext32(imm))&(M-1)
                if not self.writable(a): raise Exception("WRITEPROT %x"%a)
                self.img.mem[a]=R[rd]&0xff
            elif mnem=='LDRR': R[rd]=self.ldrr((R[ra]+sext32(imm))&(M-1))
            elif mnem=='CMP': self.Z=1 if R[ra]==R[rb] else 0
            elif mnem=='JMP': nxt=(pc+(0 if VAR.get('jmpno8') else 8)+sext32(imm))&(M-1)
            elif mnem=='JZ':
                if (not self.Z) if VAR.get('jzflip') else self.Z: nxt=(pc+(0 if VAR.get('jzno8') else 8)+sext32(imm))&(M-1)
            elif mnem=='JNZ':
                if self.Z if VAR.get('jzflip') else (not self.Z): nxt=(pc+(0 if VAR.get('jzno8') else 8)+sext32(imm))&(M-1)
            elif mnem=='HALT':
                lr=VAR.get('linkreg',1)
                nid=(imm ^ (R[lr]&0xffffffff))&0xffffffff
                return nid
            elif mnem=='TRAP': raise Exception("TRAP at pc %x imm=%x"%(pc,imm))
            else: raise Exception("unknown "+mnem)
            pc=nxt
    def run_chain(self,segid):
        seen=0
        while True:
            nid=self.run(segid)
            if nid==0xffffffff:
                return
            seg=self.img.segs.get(nid)
            if seg is None or seg['type']!=1: raise Exception("BADLINK %x"%nid)
            segid=nid; seen+=1
            if seen>100: raise Exception("chain too long")

if __name__=='__main__':
    img=Image('last_execution.img')
    # verify traces
    main=img.segs[1]
    print("EXEC_MAIN ROT[0:3]",img.rotations(main)[:3])
    dseed=img.segs[0xc]
    rr=[ (img.TABLE_SEED ^ ((dseed['id']*0x1BF5)%M))%64 ]
    for k in range(1,4):
        bo=dseed['off']+(k-1)*64
        B=img.mem[bo]
        rr.append((rr[k-1]*17+B+k*11)%64)
    print("DSEED rr[0:4]",rr)
    st=img.segs[6]
    rot=img.rotations(st)
    raw=img.read_word(st['off']+0x40)
    word=ROL(raw,rot[0x40>>8])
    op=(word>>56)&0xff
    print("SELFTEST op@0x40=%#x idx=%#x expect 0xE2"%(op,(op+((0x40>>4)+st['aux']))%256))
