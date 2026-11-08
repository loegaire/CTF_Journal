# pragma version 0.4.3
# pragma evm-version cancun
"""
@title Voucher Desk
@notice Redeems store-credit vouchers signed by the desk's voucher issuer.
        Voucher digest (signed raw, no message prefix):
            keccak256(abi_encode(desk, voucher_id, amount, holder))
"""

event Redeemed:
    voucher_id: indexed(uint256)
    holder: indexed(address)
    amount: uint256

owner: public(address)
issuer: public(address)
redeemed: public(HashMap[uint256, bool])
credit: public(HashMap[address, uint256])
total_issued: public(uint256)


@deploy
def __init__(issuer: address):
    self.owner = msg.sender
    self.issuer = issuer


@external
def redeem(voucher_id: uint256, amount: uint256, v: uint8, r: bytes32, s: bytes32):
    assert not self.redeemed[voucher_id], "voucher already redeemed"
    digest: bytes32 = keccak256(abi_encode(self, voucher_id, amount, msg.sender))
    assert ecrecover(digest, v, r, s) == self.issuer, "voucher not signed by issuer"
    self.redeemed[voucher_id] = True
    self.credit[msg.sender] += amount
    self.total_issued += amount
    log Redeemed(voucher_id=voucher_id, holder=msg.sender, amount=amount)


@external
def set_issuer(issuer: address):
    assert msg.sender == self.owner, "owner only"
    self.issuer = issuer
