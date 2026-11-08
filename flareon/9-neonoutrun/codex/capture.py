import frida, time, pathlib
pid = frida.spawn(['artifacts/neon_outrun'])
session = frida.attach(pid)
script = session.create_script(r'''
rpc.exports = { capture() {
for (const r of Process.enumerateRanges('rw-')) {
try {
for (const hit of Memory.scanSync(r.base, r.size, '6c 65 74 20 6e 65 6f 6e 3d 22 22 3b')) {
 const text = hit.address.readUtf8String(4229);
 if (text.endsWith('});}')) return text;
}
} catch(e) {}
}
return null;
}};
''')
script.load()
frida.resume(pid)
try:
    for _ in range(15):
        time.sleep(1)
        text = script.exports_sync.capture()
        if text:
            pathlib.Path('codex/captured_game.js').write_text(text)
            print('Captured original runtime script:', len(text), flush=True)
            print('Matches existing:', text == pathlib.Path('artifacts/game.js').read_text(), flush=True)
            break
    else:
        print('No runtime script found', flush=True)
finally:
    frida.kill(pid)
