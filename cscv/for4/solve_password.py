from pathlib import Path
import zipfile,zlib
machine=Path('artifacts/machine-id').read_bytes().strip()
a,b=0x811c9dc5,0x55aa55aa
for c in machine:
 a=((a^c)*0x1000193)&0xffffffff
 b=((b*33)^c)&0xffffffff
for c in b'K9-EXFIL-2026':
 b=((b^c)*0x1000193)&0xffffffff
 a=((a*31)^c)&0xffffffff
password=f'VLT9-{a:08x}-{b:08x}'
plain=zipfile._ZipDecrypter(password.encode())(Path('artifacts/vault_entry.enc').read_bytes())[12:]
assert zlib.crc32(plain)==0xf2072598
assert plain==Path('artifacts/vault_backup.key').read_bytes()
print('Machine ID:',machine.decode())
print('Archive password:',password)
print('Verified: decrypted entry matches original plaintext and CRC32.')
Path('artifacts/archive_password.txt').write_text(password+'\n')
