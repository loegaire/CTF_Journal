import subprocess

msg = b"x`hffh`x"
subprocess.run(["./connected"], input=msg + b"\n64.14.3.25\n")
