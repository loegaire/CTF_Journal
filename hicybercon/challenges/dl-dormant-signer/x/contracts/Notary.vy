# pragma version 0.4.3
# pragma evm-version cancun
"""
@title Notary
@notice Timestamps document hashes countersigned by a registered notary.
        Notaries sign the 32-byte document hash as a standard personal
        message (EIP-191 version 0x45, the "Ethereum Signed Message" prefix).
"""

event Stamped:
    document: indexed(bytes32)
    notary: indexed(address)
    submitter: address

admin: public(address)
notaries: public(HashMap[address, bool])
stamped_at: public(HashMap[bytes32, uint256])
stamped_by: public(HashMap[bytes32, address])
stamps: public(uint256)


@deploy
def __init__():
    self.admin = msg.sender


@external
def set_notary(notary: address, enabled: bool):
    assert msg.sender == self.admin, "admin only"
    self.notaries[notary] = enabled


@external
def stamp(document: bytes32, v: uint8, r: bytes32, s: bytes32):
    assert self.stamped_at[document] == 0, "already stamped"
    digest: bytes32 = keccak256(concat(b"\x19Ethereum Signed Message:\n32", document))
    notary: address = ecrecover(digest, v, r, s)
    assert self.notaries[notary], "not a registered notary"
    self.stamped_at[document] = block.timestamp
    self.stamped_by[document] = notary
    self.stamps += 1
    log Stamped(document=document, notary=notary, submitter=msg.sender)
