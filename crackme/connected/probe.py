import subprocess

cases = [
    b"B",
    b"C",
    b'"',
    b":",
    b"*",
    b"$$",
    b':"*$$*":',
]

for s in cases:
    print("---", s)
    subprocess.run(["./connected"], input=s + b"\n100.25.26.15\n")
