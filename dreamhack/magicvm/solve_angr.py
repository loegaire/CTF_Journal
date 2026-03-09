#!/usr/bin/env python3
import angr
import claripy

# Load the binary
proj = angr.Project('./main', auto_load_libs=False)

# Create symbolic input - 64 hex characters
flag_chars = [claripy.BVS(f'flag_{i}', 8) for i in range(64)]

# Constrain to valid hex characters (0-9, a-f)
hex_chars = b'0123456789abcdef'
constraints = []
for char in flag_chars:
    constraints.append(claripy.Or(*[char == c for c in hex_chars]))

# Create initial state
state = proj.factory.entry_state(
    stdin=claripy.Concat(*flag_chars + [claripy.BVV(b'\n')])
)

# Add hex character constraints
for constraint in constraints:
    state.solver.add(constraint)

# Create simulation manager
simgr = proj.factory.simulation_manager(state)

print("[*] Starting symbolic execution...")
print(f"[*] Initial state: {state}")

# Explore to find "Correct" path, avoid "Wrong" path
print("[*] Exploring paths...")

# Explore: find states that reach "Correct", avoid "Wrong"
simgr.explore(
    find=lambda s: b"Correct" in s.posix.dumps(1),
    avoid=lambda s: b"Wrong" in s.posix.dumps(1)
)


print(f"\n[*] Exploration complete!")
print(f"[*] Found states: {len(simgr.found)}")
print(f"[*] Active states: {len(simgr.active)}")
print(f"[*] Deadended states: {len(simgr.deadended)}")

if simgr.found:
    found_state = simgr.found[0]
    solution = found_state.posix.dumps(0).decode('latin-1').strip()
    print(f"\n[+] SOLUTION FOUND!")
    print(f"[+] Flag input: {solution}")
    print(f"[+] Flag: DH{{{solution}}}")
else:
    print("\n[-] No solution found")
    print("[*] Trying to get partial results from deadended states...")
    
    # Try deadended states
    for i, state in enumerate(simgr.deadended[:5]):
        try:
            output = state.posix.dumps(1)
            if output:
                print(f"  State {i} output: {output[:100]}")
        except:
            pass
