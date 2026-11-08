import hashlib
import hmac
import json
from pathlib import Path

from Crypto.Cipher import AES
from mnemonic import Mnemonic

vault = json.loads(Path("recovered/keplr_vault.json").read_text())
key = bytes.fromhex("d1c1e07fa9bb035ef0dc0be88875d1cb6cfe3ec001a7b52514030ec5c81b0b0c")


def decrypt(counter, ciphertext):
    return AES.new(key, AES.MODE_CTR, nonce=b"", initial_value=int.from_bytes(counter, "big")).decrypt(ciphertext)


salt = bytes.fromhex(vault["vault/aesCounterSalt"][0])
counter = decrypt(salt, bytes.fromhex(vault["vault/aesCounterCipher"][0]))
ciphertext = bytes.fromhex(vault["vault/vaultMap"][-1].removeprefix("__uint8array__"))
plaintext = decrypt(counter, ciphertext)
decoded = json.loads(plaintext)
mnemonic = Mnemonic("english")
assert mnemonic.check(decoded["mnemonic"])
master = hmac.new(b"Bitcoin seed", mnemonic.to_seed(decoded["mnemonic"]), hashlib.sha512).digest()
serialized = bytes.fromhex("0488ade4") + bytes(9) + master[32:] + b"\x00" + master[:32]
assert serialized.hex() == decoded["masterSeedText"]
Path("recovered/keplr_decrypted.json").write_text(json.dumps(decoded, indent=2))
print(decoded["mnemonic"])
print("Verified BIP39 checksum and master seed")
