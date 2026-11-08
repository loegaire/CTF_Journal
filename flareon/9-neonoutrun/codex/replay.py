import frida,time,zlib,zstandard,pathlib,json,os
root=pathlib.Path(__file__).resolve().parents[1]
os.chdir(root)
seq=[r['byte'] for r in json.loads(pathlib.Path('codex/timing_solution.json').read_text())]
src=pathlib.Path('artifacts/game.js').read_text()+'''
Date.now=()=>100000000;
const inp=JSON.stringify({up:true,bounds:{left:-100,right:100}});
tick(inp);
obstacles=[];
for(const sec of SEQUENCE){state.lapStartTime=100000000-sec*1000;state.y=laps[state.currentLap-1];tick(inp);}
globalThis.codexResult='CODEX_RESULT:'+JSON.stringify(state);
'''.replace('SEQUENCE',json.dumps(seq))
co=zlib.compressobj(9,zlib.DEFLATED,-15)
z=zstandard.ZstdCompressor().compress(co.compress(src.encode())+co.flush())
js=r'''
const base=Process.getModuleByName('neon_outrun').base;
const data=new Uint8Array(DATA);const buf=Memory.alloc(data.length);buf.writeByteArray(data.buffer);let done=false;
Interceptor.attach(base.add(0x68a9f5),function(){if(done)return;done=true;const ib=this.context.rsp.add(0x108);ib.writePointer(buf);ib.add(8).writeU64(data.length);ib.add(16).writeU64(0);send('Injected replay script');});
for (const a of [0x67deb2,0x67eb83,0x67e81e]) Interceptor.attach(base.add(a),function(){send('callback '+a.toString(16));});
Interceptor.attach(base.add(0x67e9a8),function(){send('Native replaceAll success gate passed');});
rpc.exports={scan(){const out=[];for(const r of Process.enumerateRanges('rw-')){try{for(const h of Memory.scanSync(r.base,r.size,'43 4f 44 45 58 5f 52 45 53 55 4c 54 3a 7b')){let s=Array.from(new Uint8Array(h.address.readByteArray(1000)),x=>String.fromCharCode(x)).join('');let end=s.indexOf('}');if(end>=0)out.push(s.slice(0,end+1));}}catch(e){}}return out;}};
'''.replace('DATA',json.dumps(list(z)))
pid=frida.spawn(['artifacts/neon_outrun']);s=frida.attach(pid);sc=s.create_script(js)
sc.on('message',lambda m,d:print(m,flush=True));sc.load();frida.resume(pid)
try:
 for _ in range(12):
  time.sleep(1)
  out=sc.exports_sync.scan()
  if out:
   pathlib.Path('codex/native_replay.json').write_text(json.dumps(out,indent=2))
   print(out,flush=True);break
finally:
 frida.kill(pid)
os._exit(0)
