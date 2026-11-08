#!/bin/bash
# usage: q.sh 'query' [start] [end] [limit]
python3 -I - "$@" <<'PY'
import json,sys
q=sys.argv[1]; s=sys.argv[2] if len(sys.argv)>2 else '2026-10-14T00:00:00Z'; e=sys.argv[3] if len(sys.argv)>3 else '2026-10-29T23:00:00Z'; L=sys.argv[4] if len(sys.argv)>4 else '20000'
t=open('/home/thinh/ctf/htb-cymbal/3/scratch/tmpl.js').read()
t=t.replace('__Q__',json.dumps(q)).replace('__S__',json.dumps(s)).replace('__E__',json.dumps(e)).replace('__L__',L)
open('/home/thinh/ctf/htb-cymbal/3/scratch/cur.js','w').write(t)
PY
