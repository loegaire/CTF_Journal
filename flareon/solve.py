#!/usr/bin/env python3
# Flare-On: flarecaptcha — 7z pw "flare". Flag = XOR-decoded bitmap.
# key = (2s hold * (len(resetWidget.toString())=222 + 1115)) & 0xFFFF; bytes also ^ len("UTF-8")
bm=[123,5,102,4,100,22,102,19,106,28,110,7,103,24,109,30,110,55,105,27,110,5,106,90,96,25,33,20,96,26]
w=(2*(222+1115))&0xFFFF; k=(w>>8, w&0xFF)
print(''.join(chr(x^5^k[i%2]) for i,x in enumerate(bm)))
