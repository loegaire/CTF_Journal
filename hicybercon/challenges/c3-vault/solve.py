#!/usr/bin/env python3
# C3 Vault — authenticate as the retired ESP32-C3 gateway.
# Credentials recovered offline from flash_image.bin + efuse_read.bin (see notes-c3-vault.md).
# Protocol reversed from factory app (fcn.42004a00 derive, fcn.42004888 respond):
#   device_key = HMAC-SHA256(seed_v2, b"c3-vault/device-key/v2\0" + device_id + u32le(generation))
#   response   = HMAC-SHA256(device_key, b"C3VAULT-AUTH-V2\0" + challenge(32) + device_id)
#   send: "AUTH <response as 64 hex>"
import sys, socket, hmac, hashlib, struct, re, time

SEED_V2  = bytes.fromhex("826e4e9e65c0ce89f413b7c291bb7e84185c64d4ec8769805227253b985083c5")
SEED_V1  = bytes.fromhex("d857200f87a1728b5220a4d77c31d7d9ee9bf8992ad16dbb398d05844676aa4f")  # stale/decoy
DEVICE_ID= bytes.fromhex("ee0315f3953aad298d7f3f43973ad618")
GEN      = 7
DK_LABEL = b"c3-vault/device-key/v2\x00"
AU_LABEL = b"C3VAULT-AUTH-V2\x00"

def device_key(seed, gen):
    return hmac.new(seed, DK_LABEL + DEVICE_ID + struct.pack("<I", gen), hashlib.sha256).digest()

def response(dk, challenge):
    return hmac.new(dk, AU_LABEL + challenge + DEVICE_ID, hashlib.sha256).digest()

def candidates(challenge):
    for seed in (SEED_V2, SEED_V1):
        for gen in (GEN, 0, 1):
            dk = device_key(seed, gen)
            yield response(dk, challenge).hex()

def main():
    host, port = sys.argv[1], int(sys.argv[2])
    s = socket.create_connection((host, port), timeout=10)
    s.settimeout(5)
    buf = b""
    def readlines():
        nonlocal buf
        try:
            while True:
                d = s.recv(4096)
                if not d: break
                buf += d
                if b"\n" not in d and len(d) < 4096: break
        except socket.timeout:
            pass
        out, buf = buf.split(b"\n"), b""
        # keep last partial
        return out
    data = b""
    try:
        time.sleep(0.3)
        data = s.recv(65536)
    except socket.timeout:
        pass
    print("<<", data.decode(errors="replace"))
    m = re.search(rb"([0-9a-fA-F]{64})", data)
    if not m:
        # maybe need to send a command (HELP) or the server waits; try sending newline
        s.sendall(b"HELP\n"); time.sleep(0.3)
        try: data = s.recv(65536)
        except socket.timeout: data=b""
        print("<<", data.decode(errors="replace"))
        m = re.search(rb"([0-9a-fA-F]{64})", data)
    if not m:
        print("No 64-hex challenge seen; inspect transport manually."); return
    challenge = bytes.fromhex(m.group(1).decode())
    print("challenge:", challenge.hex())
    for resp in candidates(challenge):
        s.sendall(b"AUTH " + resp.encode() + b"\n")
        time.sleep(0.3)
        try: r = s.recv(65536)
        except socket.timeout: r=b""
        print(">> AUTH", resp)
        print("<<", r.decode(errors="replace"))
        if b"hiCTF{" in r:
            print("FLAG:", re.search(rb"hiCTF\{[^}]*\}", r).group().decode()); return

if __name__ == "__main__":
    if len(sys.argv) < 3:
        # self-test: print derived values
        dk = device_key(SEED_V2, GEN)
        print("device_key(v2,gen7):", dk.hex())
        print("example resp for zero challenge:", response(dk, b"\0"*32).hex())
        print("usage: solve.py HOST PORT")
    else:
        main()
