import ctypes
import glob
import json
import sqlite3
from pathlib import Path

database = glob.glob("recovered/fs/home/centos/.mozilla/firefox/ckx*/storage/default/moz-extension*/idb/*.sqlite")[0]
connection = sqlite3.connect(database)
snappy = ctypes.CDLL("libsnappy.so.1")
snappy.snappy_uncompress.argtypes = [ctypes.c_char_p, ctypes.c_size_t, ctypes.c_void_p, ctypes.POINTER(ctypes.c_size_t)]
records = {}
for reverse in [0, 1]:
    connection.execute(f"PRAGMA reverse_unordered_selects={reverse}")
    try:
        for key, data in connection.execute("SELECT key, data FROM object_data"):
            name = "".join(chr(value - 1) if value else "/" for value in key[1:])
            if not name.startswith(("vault/", "keyring-v2/")):
                continue
            output = ctypes.create_string_buffer(2000000)
            size = ctypes.c_size_t(len(output))
            status = snappy.snappy_uncompress(data, len(data), output, ctypes.byref(size))
            if status:
                raise ValueError(f"Snappy error {status}: {name}")
            decoded = output.raw[:size.value]
            Path("recovered/" + name.replace("/", "_") + ".bin").write_bytes(decoded)
            strings = []
            for offset in range(0, len(decoded) - 8, 8):
                if decoded[offset + 4:offset + 8] == b"\x04\x00\xff\xff":
                    length = int.from_bytes(decoded[offset:offset + 4], "little")
                    if length & 0x80000000:
                        strings.append(decoded[offset + 8:offset + 8 + (length & 0x7fffffff)].decode("latin1"))
            records[name] = strings
    except sqlite3.DatabaseError:
        pass
Path("recovered/keplr_vault.json").write_text(json.dumps(records, indent=2))
print(json.dumps(records, indent=2))
