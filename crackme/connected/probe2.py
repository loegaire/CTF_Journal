import subprocess

pairs = [
    (b"msg_test", b"83.48.92.8"),
    (b"x`hffh`x", b"83.48.92.8"),
    (b"msg_x`hffh`x", b"100.25.26.10"),
]

for msg, ip in pairs:
    print("---", msg, ip)
    subprocess.run(["./connected"], input=msg + b"\n" + ip + b"\n")
