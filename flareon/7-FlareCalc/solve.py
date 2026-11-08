#!/usr/bin/env python3
"""FlareCalc solve: extract encrypted chunks from the Authenticode cert, walk the
byte FSM (unicorn) to recover the 32-byte key buffer, XTEA-decrypt the flag chunk.
Trigger in the real binary: 22/7= , 88224646+0= , 8675309+0= , 1/0=  -> key "8675309-88224646-31428571"."""
import hashlib, struct, os, re, collections, subprocess, sys
from unicorn import *; from unicorn.x86_const import *
EXE = 'artifacts/FlareCalc.exe'
if not os.path.exists(EXE): subprocess.run(['7z','x','-pflare','-oartifacts','7-FlareCalc.7z'],check=True)
pe = open(EXE,'rb').read()
sec_off, sec_sz = struct.unpack_from('<II', pe, struct.unpack_from('<I',pe,0x3c)[0]+0x18+0x70+4*8)  # security dir
blob = pe[sec_off+8:sec_off+sec_sz]
KEY = b'8675309-88224646-31428571'
def ln(b,i):
    x=b[i]; i+=1
    if x<0x80: return x,i
    n=x&0x7f; return int.from_bytes(b[i:i+n],'big'), i+n
p=blob.find(bytes([0x2b,6,1,4,1,0x8a,0x39,1])); q=p+8
if blob[q]==1: q=p+0xb
L,q=ln(blob,q+1); c=blob[q:q+L]; L,i=ln(c,1); end=i+L; C={}
while i<end:
    L,j=ln(c,i+1); nxt=j+L
    L,j=ln(c,j+1); cid=int.from_bytes(c[j:j+L],'big'); j+=L
    L,j=ln(c,j+1); raw=c[j:j+L]; i=nxt
    s=0
    for b in hashlib.md5(KEY+struct.pack('<I',cid)).digest(): s=(s*31+b)&0xff
    d=bytearray(raw)
    for k in range(len(d)): s=(s*109+0x39)&0xff; d[k]^=s
    r=0x2437
    for b in KEY: r=(r*0x81+b)&0xffffffff
    out=bytearray(); k=0
    while k<len(d):
        out.append(d[k]); r=(r*0x41c64e6d+0x3039)&0xffffffff; n=r%3+1
        for _ in range(n): r=(r*0x41c64e6d+0x3039)&0xffffffff
        k+=1+n
    C[cid]=bytes(out)
mu=Uc(UC_ARCH_X86,UC_MODE_64); BUF,STK,CODE=0x200000,0x300000,0x1000000
mu.mem_map(BUF,0x1000); mu.mem_map(STK,0x10000); mu.mem_map(CODE,0x1000*len(C)); ADDR={}; HOOK={}; N=1000000
for n,(k,d) in enumerate(sorted(C.items())):
    a=CODE+n*0x1000; ADDR[k]=a; mu.mem_write(a,d)
    m=re.search(rb'\x8b\x4c\x24(.)\x8b\x44\x24(.)\x03\xc8\x89\x4c\x24\2',d,re.S)
    if m: HOOK[a+m.start()]=(m.group(1)[0],m.group(2)[0])
def hk(uc,addr,size,ud):   # fast-forward the 1M-iteration anti-emulation loop
    o=HOOK[addr]; sp=uc.reg_read(UC_X86_REG_RSP)
    if int.from_bytes(uc.mem_read(sp+o[0],4),'little')==0:
        uc.mem_write(sp+o[0],(N-1).to_bytes(4,'little')); uc.mem_write(sp+o[1],((N-1)*(N-2)//2&0xffffffff).to_bytes(4,'little'))
for a in HOOK: mu.hook_add(UC_HOOK_CODE,hk,begin=a,end=a)
def run(cid,byte,buf):
    mu.mem_write(BUF,buf); mu.reg_write(UC_X86_REG_RSP,STK+0x8000); mu.mem_write(STK+0x8000,(0xdead000).to_bytes(8,'little'))
    mu.reg_write(UC_X86_REG_RCX,byte); mu.reg_write(UC_X86_REG_RDX,BUF)
    try: mu.emu_start(ADDR[cid],0xdead000,count=200000)
    except UcError: return None,None
    if mu.reg_read(UC_X86_REG_RIP)!=0xdead000: return None,None
    return mu.reg_read(UC_X86_REG_RAX)&0xffffffff, bytes(mu.mem_read(BUF,32))
start=(0xcb7a,bytes(32)); Q=collections.deque([(start,b'')]); seen={start}
while Q:
    (s,buf),path=Q.popleft()
    if s==0x1185: break
    for b in range(256):
        ns,nb=run(s,b,buf)
        if ns in C and (ns,nb) not in seen: seen.add((ns,nb)); Q.append(((ns,nb),path+bytes([b])))
print('labyrinth key:',path)
k=[a^b for a,b in zip(struct.unpack('<4I',buf[:16]),struct.unpack('<4I',buf[16:]))]
data=C[0x2706]; flag=b''
for o in range(0,40,8):
    v0,v1=struct.unpack('>2I',data[o:o+8]); sm=0xc6ef3720
    for _ in range(32):
        v1=(v1-((((v0<<4)^(v0>>5))+v0)^(sm+k[(sm>>11)&3])))&0xffffffff; sm=(sm+0x61c88647)&0xffffffff
        v0=(v0-((((v1<<4)^(v1>>5))+v1)^(sm+k[sm&3])))&0xffffffff
    flag+=struct.pack('>2I',v0,v1)
print('flag:',flag.rstrip(b'\0').decode())
