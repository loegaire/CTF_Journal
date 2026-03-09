import subprocess

cases = [
    b':"*$$*":',
    b"x`hffh`x",
]

for msg in cases:
    print("---", msg)
    subprocess.run(["./connected"], input=msg + b"\n64.14.3.29\n")
