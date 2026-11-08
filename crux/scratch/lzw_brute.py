import itertools,sys

def bits_to_codes(data, w0, order='msb', grow_early=False, maxw=16, reset=None, hdr=0):
    data=data[hdr:]
    if order=='msb':
        bitstr=''.join(f'{b:08b}' for b in data)
        pos=0; w=w0; n=1<<w
        # dynamic width: emit codes one at a time; track dict size
        # standard: after adding entry, if next_code == (1<<w)-1 (early) or ==1<<w, increase BEFORE reading next code
        nextcode=256  # 0..255 initial
        out=[]
        while pos+w<=len(bitstr):
            c=int(bitstr[pos:pos+w],2); pos+=w; out.append((c,w))
            nextcode+=1
            lim=(1<<w)-1 if grow_early else (1<<w)
            if nextcode>=lim and w<maxw:
                w+=1
        return out
    else:
        # lsb-first bit packing (like GIF): read bits low bit first into code little-endian
        out=[]; pos=0; w=w0; nextcode=256
        total=len(data)*8
        while pos+w<=total:
            c=0
            for i in range(w):
                byte=data[(pos+i)//8]; bit=(byte>>((pos+i)%8))&1
                c|=bit<<i
            pos+=w; out.append((c,w))
            nextcode+=1
            lim=(1<<w)-1 if grow_early else (1<<w)
            if nextcode>=lim and w<maxw: w+=1
        return out

def lzw_decode(codes, maxw=16, clear=None, initial=None):
    d={i:bytes([i]) for i in range(256)} if initial is None else initial
    out=bytearray(); prev=None; nxt=256
    for c,w in codes:
        if clear is not None and c==clear:
            d={i:bytes([i]) for i in range(256)}; nxt=256; prev=None; continue
        if c in d: entry=d[c]
        elif prev is not None and c==nxt: entry=prev+prev[:1]
        else: return None
        out+=entry
        if prev is not None:
            d[nxt]=prev+entry[:1]; nxt+=1
        prev=entry
    return bytes(out)

target=open('artifacts/lzw/sample.txt','rb').read()
data=open('artifacts/lzw/sample.lzw','rb').read()
for hdr in [0,1,2,3,4]:
  for w0 in [8,9,10,11,12,13,14,15,16]:
    for order in ['msb','lsb']:
      for early in [False,True]:
        for maxw in [12,13,14,15,16]:
          try:
            codes=bits_to_codes(data,w0,order,early,maxw,hdr)
          except Exception: continue
          for clear in [None,256,(1<<w0)-1]:
            out=lzw_decode(codes,maxw,clear)
            if out==target:
              print('MATCH',hdr,w0,order,early,maxw,clear,len(codes))
              sys.exit()
            if out and out[:40]==target[:40]:
              print('PREFIX',hdr,w0,order,early,maxw,clear,len(out))
print('done')
