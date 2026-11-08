#!/usr/bin/env python3
# ToxicMiner: key = modified-SHA256d(BE32 volser || BE32 0x0b501e7e)[:16]; flag = RC4(key, blob@0x1401bd3b0).
# The modified transform (0x140135240) is executed natively from the original image via scratch/bf2.
import subprocess, os, pefile
os.makedirs('artifacts', exist_ok=True); os.makedirs('scratch', exist_ok=True)
subprocess.run(['7z','x','-y','-pflare','-oartifacts','4-ToxicMiner.7z'], check=True, capture_output=True)
pe = pefile.PE('artifacts/ToxicMiner.exe')
img = bytearray(pe.OPTIONAL_HEADER.SizeOfImage)
for s in pe.sections:
    d = s.get_data(); img[s.VirtualAddress:s.VirtualAddress+len(d)] = d
img[0x1b5790] = 0xc3  # stub __security_check_cookie
open('scratch/image.bin','wb').write(img)
subprocess.run(['gcc','-O2','-o','scratch/bf2','scratch/bf2.c'], check=True)
VOLSER = '0x01cec01d'  # found by 2^32 brute force (printable-plaintext filter)
out = subprocess.run(['./scratch/bf2', VOLSER, VOLSER], capture_output=True, text=True, check=True).stdout
print(out.split(' ', 1)[1].strip())
