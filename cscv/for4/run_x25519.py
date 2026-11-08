from pathlib import Path
import subprocess
files=[]
for l in Path('network_maps.txt').read_text().splitlines():
 a=l.split('\t')
 if len(a)>10 and a[4]=='rw-' and a[-1].startswith('pid.'):
  files.append('network_memory/'+a[-1])
subprocess.run(['./find_x25519',*files])
