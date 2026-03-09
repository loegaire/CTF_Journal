import subprocess

msg = b"msg_test"
xor = bytes([b ^ 0x42 for b in msg])
print("xor", xor)
subprocess.run(["./connected"], input=xor + b"\n64.14.3.29\n")
