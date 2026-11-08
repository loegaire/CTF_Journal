#!/usr/bin/env python3
"""Collect the two allowed proofs and print verified PLONK remainders.

Default target is the offline oracle.  This is an observation PoC only: it does
not guess a key, submit a flag, or bypass the query budget.
"""
import argparse
import json
import socket
import sys

from solve_baby_circuit_real import (
    find_generator_and_omega, ih, proof_remainder_eval,
)


def recv(f):
    line = f.readline()
    if not line:
        raise EOFError("oracle closed connection")
    return json.loads(line.decode())


def send(f, obj):
    f.write((json.dumps(obj) + "\n").encode())
    f.flush()
    return recv(f)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--host", default="127.0.0.1")
    ap.add_argument("--port", type=int, default=1337)
    ap.add_argument("--v", type=int, default=1200)
    ap.add_argument("--f1", type=int, default=95)
    ap.add_argument("--f2", type=int, default=100)
    args = ap.parse_args()

    with socket.create_connection((args.host, args.port), timeout=15) as s:
        f = s.makefile("rwb", buffering=0)
        banner = recv(f)
        print("banner:", banner)
        spec = send(f, {"action": "get_hardware_specs"})
        if spec.get("status") != "success":
            raise RuntimeError(spec)

        pub = spec["session_parameters"]
        p = ih(pub["field_prime"])
        _, omega = find_generator_and_omega(p, 64)
        mds = [[ih(x) for x in row] for row in spec["poseidon_mds"]]
        rc0 = [ih(x) for x in spec["round_constants"][0]]
        a1, a2, a3 = (ih(pub[k]) for k in ("shear_alpha1", "shear_alpha2", "shear_alpha3"))

        proofs = []
        for freq in (args.f1, args.f2):
            req = {
                "action": "prove",
                "public_nonce": "0x0",
                "public_nonce2": "0x0",
                "core_voltage_mv": args.v,
                "clock_freq_mhz": freq,
            }
            out = send(f, req)
            if out.get("status") != "success":
                raise RuntimeError(out)
            proofs.append(out["proof"])
            print(f"proof timing V={args.v} F={freq}; remaining={out.get('queries_remaining')}")

    for i, proof in enumerate(proofs, 1):
        z, rem = proof_remainder_eval(proof, p, omega, mds, rc0, a1, a2, a3)
        print(f"proof {i}: z={hex(z)}")
        print(f"proof {i}: remainder={hex(rem)}")
        if rem == 0:
            print("  nominal/consistent quotient at this evaluation point")
        else:
            print("  nonzero remainder: fault residual is observable")


if __name__ == "__main__":
    main()
