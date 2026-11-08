from recover_pages import m,read
import struct,hashlib
from pathlib import Path
ptrs=struct.unpack_from('<6Q',m,4067508966)
pages=[((p-0xffffe18300000000)//64)*4096 for p in ptrs]
data=b''.join(read(p,4096) for p in pages)[:23360]
Path('artifacts/collector_partial.bin').write_bytes(data)
print('pages',list(map(hex,pages)))
print('PARTIAL FILE ONLY; not the original malware SHA-256:',hashlib.sha256(data).hexdigest())
