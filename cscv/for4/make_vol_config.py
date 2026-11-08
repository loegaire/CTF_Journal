import json
from pathlib import Path
d=json.loads(Path('/home/thinh/ctf/cscv/for3/vol-config.json').read_text())
d['kernel.layer_name.memory_layer.base_layer.location']=Path('mem.dmp').resolve().as_uri()
d['kernel.layer_name.kernel_virtual_offset']=d['kernel.offset']=0xa400000
d['kernel.layer_name.page_map_offset']=591396864+0xce10000
Path('vol-config.json').write_text(json.dumps(d,indent=2))
