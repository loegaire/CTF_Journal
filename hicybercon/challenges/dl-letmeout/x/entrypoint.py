#!/usr/bin/env python3
import os
import secrets
import sys

FLAG_SRC = "/flag.txt"
FLAG_DIR = "/flags"
PORT = "7201"
MAX_CONNS = 24
DECOYS = 3

flag = os.environ.pop("FLAG", "").strip()
if not flag and os.path.exists(FLAG_SRC):
    with open(FLAG_SRC, encoding="utf-8") as fh:
        flag = fh.read().strip()

if flag:
    target = os.path.join(FLAG_DIR, secrets.token_hex(4))
    with open(target, "w", encoding="utf-8") as fh:
        fh.write(flag + "\n")
    os.chmod(target, 0o444)
    for _ in range(DECOYS):
        decoy = os.path.join(FLAG_DIR, secrets.token_hex(4))
        with open(decoy, "w", encoding="utf-8") as fh:
            fh.write("not the flag you're looking for\n")
        os.chmod(decoy, 0o444)
elif not os.listdir(FLAG_DIR):
    sys.exit("no FLAG in environment, no /flag.txt, and /flags is empty -- nothing to serve")

if os.path.exists(FLAG_SRC):
    os.remove(FLAG_SRC)

os.chdir(FLAG_DIR)
os.execvp("setpriv", [
    "setpriv", "--reuid=nobody", "--regid=nogroup", "--clear-groups",
    "socat", "-T60", f"TCP-L:{PORT},fork,reuseaddr,max-children={MAX_CONNS}",
    "EXEC:python /app/jail.py,stderr",
])
