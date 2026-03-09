import subprocess

cases = [
    (b':"*$$*":', b"83.48.92.8"),
    (b':"*$$*":', b"64.14.3.29"),
    (b':"*$$*":', b"100.25.26.15"),
    (b':"*$$*":', b"64.14.3.25"),
    (b'x`hffh`x', b"64.14.3.29"),
    (b'x`hffh`x', b"100.25.26.15"),
]

for msg, ip in cases:
    print("---", msg, ip)
    subprocess.run(["./connected"], input=msg + b"\n" + ip + b"\n")
