import subprocess

msg = b'msg_:"*$$*":'
subprocess.run(["./connected"], input=msg + b"\n100.25.26.10\n")
