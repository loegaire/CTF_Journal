#!/usr/bin/env python3
# Flare-On #2 GhostStream — 7z pw "flare" -> GhostStream.wim -> GhostStream.exe + PolyjuicePotion.txt:LordVoldemort (ADS)
import struct
# Parent: ADS "AlbusDumbledore \r\n" ^ (WM_CREATE ^ WM_NCCALCSIZE = 0x82), then ^ 15-byte table -> "HarryPotter\0..." (after 7-day check)
tbl=bytes([0x8b,0x8f,0x92,0x85,0x88,0x96,0x98,0x9b,0x94,0x8b,0x95,0xe6,0xed,0xf0,0xe7])
b=bytearray(c^0x82 for c in b"AlbusDumbledore \r\n")
for i in range(15): b[i]^=tbl[i]
key=bytes(b).split(b'\0')[0]; assert key==b"HarryPotter"
# Partner: RC4-like, i steps by 18, extra XOR with hooked-strlen-decoded "Piertotum Locomotor" and (18+ct)
ct=struct.pack('<9IH',0x35875c96,0x8b397ad7,0x286d0475,0xc85856bb,0xe1daee35,0x37a956a4,0xf9561581,0xd340a27,0x262c82ee,0xf8a5)
k2=bytes(((c+i+1)&0xff)^0x13 for i,c in enumerate(b"Bxs]bv`^u)TpcnolVjN"))
D=len(b"Wingardium Leviosa")  # 18
S=list(range(256)); j=0
for i in range(256): j=(j+key[i%len(key)]+S[i])&0xff; S[i],S[j]=S[j],S[i]
i=j=0; out=bytearray()
for n in range(38):
    i=(i+D)&0xff; j=(j+S[i])&0xff; S[i],S[j]=S[j],S[i]
    out.append(S[(S[i]+S[j])&0xff]^k2[n%19]^((D+ct[n])&0xff))
print(out.decode())
