#!/usr/bin/env python3
# NeonOutRun: game logic is JS evaluated in an embedded V8 (decrypted at runtime,
# recovered from a process memory dump -> artifacts/game.js). The flag is
# assembled one char per lap: messages[(lap-1)//2][map[lap-1]] + "@flare-on.com".
import re
src = open('artifacts/game.js').read()
messages = eval(re.search(r'const messages=(\[.*?\]);', src).group(1))
mp = eval(re.search(r'map=(\[.*?\]);', src).group(1))
codes = eval('[' + re.search(r'String\.fromCharCode\(([\d,]+)\)', src).group(1) + ']')
neon = ''.join(messages[(l - 1) // 2][mp[l - 1]] for l in range(1, 29)) + ''.join(map(chr, codes))
print(neon.replace(' ', '_'))
