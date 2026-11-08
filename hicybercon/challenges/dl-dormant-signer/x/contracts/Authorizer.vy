# pragma version 0.4.3
# pragma evm-version cancun
"""
@title Withdrawal Authorizer
@notice Releases custody withdrawals against a co-signature from the desk's
        automated signer. A relayer submits the request together with the
        signer's (v, r, s); the contract checks that the signer approved
        exactly this (authorizer, request id, amount, recipient), marks the
        request id as settled and pays the recipient, less the desk fee.

        Request digest (signed raw, no message prefix):
            keccak256(abi_encode(authorizer, request_id, amount, recipient))

        When the desk winds an authorizer down it files a recovery escrow with
        it (seal or destroy). The backend masks the escrow with escrow_mask()
        over the signer's liveness signature before filing; the contract then
        folds in the settlement digest, so the filed value is bound to this
        deployment's history:
            filed = escrow ^ escrow_mask(liveness signature) ^ running digest
        Only the signer can produce its liveness signature, so only the signer
        can open the escrow.
"""

event Authorized:
    request_id: indexed(bytes32)
    recipient: indexed(address)
    relayer: address
    amount: uint256

event Sealed:
    settled: uint256

event Retired:
    beneficiary: address

operator: public(address)
retired: public(bool)
sealed: public(bool)
fee_bps: public(uint16)
relayers: public(DynArray[address, 3])
trusted_signer: address
relayer_quota: public(uint8[3])
used: public(HashMap[bytes32, bool])
last_request_id: public(bytes32)
masked_secret: bytes32
running_digest: bytes32
settled: public(uint256)

LIVENESS_DIGEST: constant(bytes32) = keccak256("custody-desk/authorizer/liveness/v1")
ESCROW_DOMAIN: constant(bytes32) = keccak256("custody-desk/authorizer/escrow/v1")


@deploy
@payable
def __init__(signer: address, relayers: DynArray[address, 3], quota: uint8[3], fee_bps: uint16):
    self.operator = msg.sender
    self.trusted_signer = signer
    self.relayers = relayers
    self.relayer_quota = quota
    self.fee_bps = fee_bps


@external
@payable
def __default__():
    # float top-ups from the desk
    pass


@internal
@view
def _request_digest(request_id: bytes32, amount: uint256, recipient: address) -> bytes32:
    return keccak256(abi_encode(self, request_id, amount, recipient))


@external
@nonreentrant
def authorize(request_id: bytes32, amount: uint256, recipient: address, v: uint8, r: bytes32, s: bytes32):
    assert not self.sealed, "authorizer sealed"
    idx: uint256 = 3
    for i: uint256 in range(3):
        if i < len(self.relayers):
            if self.relayers[i] == msg.sender:
                idx = i
                break
    assert idx < 3, "unknown relayer"
    assert self.relayer_quota[idx] > 0, "relayer quota exhausted"
    assert not self.used[request_id], "request already settled"

    digest: bytes32 = self._request_digest(request_id, amount, recipient)
    assert ecrecover(digest, v, r, s) == self.trusted_signer, "signature does not match signer"

    self.used[request_id] = True
    self.relayer_quota[idx] -= 1
    self.last_request_id = request_id
    self.running_digest = keccak256(concat(self.running_digest, digest))
    self.settled += amount
    send(recipient, amount - amount * convert(self.fee_bps, uint256) // 10000)
    log Authorized(request_id=request_id, recipient=recipient, relayer=msg.sender, amount=amount)


@internal
def _seal(blob: bytes32):
    self.masked_secret = convert(convert(blob, uint256) ^ convert(self.running_digest, uint256), bytes32)
    self.sealed = True
    log Sealed(settled=self.settled)


@external
def seal(blob: bytes32):
    """
    @notice Close the authorizer to new requests and file the recovery escrow.
    """
    assert msg.sender == self.operator, "operator only"
    assert not self.sealed, "authorizer sealed"
    self._seal(blob)


@external
def destroy(final_seal: bytes32):
    """
    @notice Decommission in one call: file the escrow (unless already sealed),
            then self-destruct and return the remaining float to the operator.
    """
    assert msg.sender == self.operator, "operator only"
    if not self.sealed:
        self._seal(final_seal)
    self.retired = True
    log Retired(beneficiary=self.operator)
    selfdestruct(self.operator)


@external
@view
def check_liveness(v: uint8, r: bytes32, s: bytes32) -> bool:
    """
    @notice True iff (v, r, s) is the signer's answer to the liveness probe.
            The signer answers with its standard deterministic signature
            (RFC 6979, low-s, v in {27, 28}) over the raw LIVENESS_DIGEST, with
            no message prefix, so the same key always gives the same answer.
            The backend never submits it on-chain.
    """
    return ecrecover(LIVENESS_DIGEST, v, r, s) == self.trusted_signer


@external
@pure
def escrow_mask(v: uint8, r: bytes32, s: bytes32) -> bytes32:
    """
    @notice The mask the backend applies to the escrow before filing it:
            keccak256(ESCROW_DOMAIN ++ r ++ s ++ v), v as a single byte, over
            the signer's liveness signature.
    """
    return keccak256(concat(ESCROW_DOMAIN, r, s, convert(v, bytes1)))
