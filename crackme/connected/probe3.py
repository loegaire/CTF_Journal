import subprocess

pairs = [
    (b':"*$$*":', b"64.14.3.25"),
    (b':"*$$*":', b"64.14.3.29"),
    (b':"*$$*":', b"100.25.26.15"),
]

for msg, ip in pairs:
    print("---", msg, ip)
    subprocess.run(["./connected"], input=msg + b"\n" + ip + b"\n")
