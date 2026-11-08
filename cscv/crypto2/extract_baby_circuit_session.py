#!/usr/bin/env python3
"""Collect one Baby Circuit session and reduce its two proofs to fault equations.

The server creates secrets per TCP connection.  Keep the output together with
any later key-recovery work: values from another connection cannot be mixed.
"""
import argparse
import hashlib
import json
import socket
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent / "extracted" / "public"))
import plonk_engine as pe


def integer(value):
    return int(value, 16)


def receive(stream):
    line = stream.readline()
    if not line:
        raise ConnectionError("server closed the connection")
    return json.loads(line)


def request(stream, payload):
    stream.write((json.dumps(payload) + "\n").encode())
    stream.flush()
    reply = receive(stream)
    if reply.get("status") == "error":
        raise RuntimeError(reply["message"])
    return reply


def lagrange_at(selector, row, z):
    p = selector.p
    omega_row = pow(selector.omega, row, p)
    return ((pow(z, selector.n, p) - 1) * omega_row *
            pow(selector.n * (z - omega_row) % p, p - 2, p)) % p


def proof_remainder(proof, selector):
    """Evaluate G(zeta)-T(zeta)(zeta^64-1) from the published proof."""
    p = selector.p
    z = integer(proof["zeta"])
    ev = {name: integer(value) for name, value in proof["evaluations"].items()}
    qm, ql, qr, qo, qc, qacc = [
        pe.poly_eval(poly, z, p)
        for poly in (selector.q_M, selector.q_L, selector.q_R,
                     selector.q_O, selector.q_C, selector.q_acc)
    ]
    remainder = (qm * ev["eval_a"] * ev["eval_b"] + ql * ev["eval_a"] +
                 qr * ev["eval_b"] + qo * ev["eval_c"] + qc +
                 qacc * (ev["eval_z_omega"] - ev["eval_z"] - ev["eval_a"]) -
                 (pow(z, 64, p) - 1) * ev["eval_t"]) % p
    return z, remainder


def derive_key(w, r1, r2):
    raw = b"".join(value.to_bytes(32, "big") for value in (w, r1, r2))
    return hashlib.sha256(raw).digest()


def verify_key(session, w, r1, r2):
    from Crypto.Cipher import AES
    from Crypto.Util.Padding import unpad

    if not (0 <= w < 2**96 and 0 <= r1 < 2**54 and 0 <= r2 < 2**54):
        raise ValueError("bounds must be w < 2^96 and r1,r2 < 2^54")
    plaintext = unpad(AES.new(derive_key(w, r1, r2), AES.MODE_CBC,
                              bytes.fromhex(session["iv"])).decrypt(
                              bytes.fromhex(session["encrypted_flag"])), 16)
    return plaintext.decode("utf-8", "replace")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--host", default="113.20.103.55")
    parser.add_argument("--port", type=int, default=1337)
    parser.add_argument("--nonce1", default="0x0")
    parser.add_argument("--nonce2", default="0x0")
    parser.add_argument("--output", help="write the full session record as JSON")
    parser.add_argument("--w", type=integer)
    parser.add_argument("--r1", type=integer)
    parser.add_argument("--r2", type=integer)
    args = parser.parse_args()

    with socket.create_connection((args.host, args.port), timeout=15) as sock:
        stream = sock.makefile("rwb", buffering=0)
        banner = receive(stream)
        specs = request(stream, {"action": "get_hardware_specs"})
        public = specs["session_parameters"]
        p = integer(public["field_prime"])
        mds = [[integer(x) for x in row] for row in specs["poseidon_mds"]]
        rc = [[integer(x) for x in row] for row in specs["round_constants"]]
        selector = pe.CircuitSelectors(
            mds, rc[0], integer(public["shear_alpha1"]),
            integer(public["shear_alpha2"]), integer(public["shear_alpha3"]), p)
        proofs = {}
        # 100 MHz faults the four round-24 S-box products and the BIST shear.
        # 112 MHz additionally faults row 3, exposing load^5.  Their two
        # distinct weighted equations are stronger than spending a query on
        # the 95 MHz shear-only fault.
        for freq in (100, 112):
            proofs[str(freq)] = request(stream, {
                "action": "prove", "public_nonce": args.nonce1,
                "public_nonce2": args.nonce2, "core_voltage_mv": 1200,
                "clock_freq_mhz": freq,
            })["proof"]

    z100, r100 = proof_remainder(proofs["100"], selector)
    z112, r112 = proof_remainder(proofs["112"], selector)
    weights100 = {str(row): lagrange_at(selector, row, z100)
                  for row in (22, 35, 49, 57, 60)}
    weights112 = {str(row): lagrange_at(selector, row, z112)
                  for row in (3, 22, 35, 49, 57, 60)}
    record = {
        "banner": banner,
        "session": specs,
        "proofs": proofs,
        "derived": {
            "field_prime": hex(p),
            "nonce1": args.nonce1,
            "nonce2": args.nonce2,
            "remainder_100": hex(r100),
            "lagrange_weights_100": {row: hex(value) for row, value in weights100.items()},
            "equation_100": (
                "R100 = L22*t0^5 + L35*t1^5 + L49*t2^5 + L57*t3^5 + L60*ell; "
                "ell = alpha1*(t1 + alpha3*t2) + alpha2*t3"
            ),
            "remainder_112": hex(r112),
            "lagrange_weights_112": {row: hex(value) for row, value in weights112.items()},
            "equation_112": (
                "R112 = L3*c3 + L22*t0^5 + L35*t1^5 + L49*t2^5 "
                "+ L57*t3^5 + L60*ell"
            ),
        },
    }
    if args.output:
        Path(args.output).write_text(json.dumps(record, indent=2) + "\n")
    print(json.dumps(record["derived"], indent=2))
    if None not in (args.w, args.r1, args.r2):
        print("plaintext:", verify_key(specs, args.w, args.r1, args.r2))


if __name__ == "__main__":
    main()
