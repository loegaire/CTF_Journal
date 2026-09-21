import angr
import claripy

# --- CONFIGURATION ---
binary_path = './extracted_elf.bin'

# 1. ADDRESSES (From your snippets)
# The start of the logic loop (after inputs are parsed)
start_addr   = 0x401320  
success_addr = 0x40178C
fail_addr    = 0x40137A

p = angr.Project(binary_path, auto_load_libs=False)

# 2. DEFINE FLAG
flag_chars = [claripy.BVS(f"flag_{i}", 8) for i in range(29)]
flag_ast = claripy.Concat(*flag_chars)

# 3. CREATE STATE (The "Silver Bullet" Method)
# We use full_init_state to load global variables (IV0, etc) correctly.
# BUT we explicitly tell it to start at our custom address.
state = p.factory.full_init_state(addr=start_addr)

# 4. REPAIR THE STACK (Crucial!)
# Since we teleported, we must build the stack frame manually.
rbp_val = 0x7fffffff1200
state.regs.rbp = rbp_val
state.regs.rsp = rbp_val - 0x200 
state.regs.rax = 0 # Bypass the "cmp eax, 0" check

# 5. INJECT VARIABLES (Using your Source Code offsets)
# Source: "_QWORD v10[34]; // [rbp-190h]"
flag_addr = rbp_val - 0x190
print(f"[*] Injecting Flag at {hex(flag_addr)} (RBP-0x190)")
state.memory.store(flag_addr, flag_ast)

# Source: Length is derived from v10[33]
# v10 is at -0x190. v10[33] is at -0x190 + (33*8) = -0x190 + 0x108 = -0x88.
len_addr = rbp_val - 0x88
print(f"[*] Injecting Length 29 at {hex(len_addr)} (RBP-0x88)")
state.memory.store(len_addr, claripy.BVV(29, 64))

# 6. CONSTRAINTS
state.solver.add(flag_chars[0] == ord('D'))
state.solver.add(flag_chars[1] == ord('H'))
state.solver.add(flag_chars[2] == ord('{'))
state.solver.add(flag_chars[28] == ord('}'))

for k in flag_chars:
    state.solver.add(k >= 0x20)
    state.solver.add(k <= 0x7E)

# 7. EXECUTE
print("[*] Running solver...")
simgr = p.factory.simulation_manager(state)
simgr.explore(find=success_addr, avoid=fail_addr)

if simgr.found:
    found_state = simgr.found[0]
    solution = found_state.memory.load(flag_addr, 29)
    print(f"[+] FLAG: {found_state.solver.eval(solution, cast_to=bytes).decode('utf-8','ignore')}")
else:
    print("[-] Not found. The constraints might be wrong or the binary offsets vary.")
