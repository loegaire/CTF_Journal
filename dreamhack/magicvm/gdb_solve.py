import gdb
import struct

# The CMP instruction is at offset 0x7bba8 in the binary
# At this point: al = -0x23c(%rbp) [operand1 AFTER indirection]
#                compared with -0x23b(%rbp) [operand2 AFTER indirection]
#
# We inject rainbow pattern [0,1,2,...,31] so that the raw operand1
# value (before indirection) tells us WHICH input byte is being checked.
# The value at -0x23b after indirection tells us what it should equal.

CMP_OFFSET = 0x7bba8

results = []
hit_count = [0]

class CmpBreakpoint(gdb.Breakpoint):
    def stop(self):
        rbp = int(gdb.parse_and_eval("$rbp"))
        
        # Read the two values being compared
        # al = value from -0x23c (input-derived, after indirection)
        al_val = int(gdb.parse_and_eval("$al")) & 0xff
        
        # -0x23b = expected value (after indirection)
        expected = int(gdb.parse_and_eval("*(unsigned char*)($rbp - 0x23b)")) & 0xff
        
        # Also read the RAW values before indirection happened
        # -0x23c was overwritten by indirection, but we can read al
        raw_input = int(gdb.parse_and_eval("*(unsigned char*)($rbp - 0x23c)")) & 0xff
        
        hit_count[0] += 1
        results.append((hit_count[0], al_val, expected))
        
        print(f"CMP #{hit_count[0]:2d}: input_val=0x{al_val:02x} expected=0x{expected:02x} match={al_val == expected}")
        
        # Don't stop execution
        return False

class RunSolver(gdb.Command):
    def __init__(self):
        super(RunSolver, self).__init__("solve_vm", gdb.COMMAND_USER)
    
    def invoke(self, arg, from_tty):
        # Disable ASLR
        gdb.execute("set disable-randomization on")
        
        # Start the binary to get base address
        gdb.execute("start", to_string=True)
        
        # Get PIE base address
        mappings = gdb.execute("info proc mappings", to_string=True)
        base = None
        for line in mappings.split('\n'):
            if 'main' in line and 'r-x' in line:
                parts = line.split()
                base = int(parts[0], 16)
                break
        
        if base is None:
            # Try another way
            for line in mappings.split('\n'):
                if '/main' in line:
                    parts = line.split()
                    base = int(parts[0], 16)
                    break
        
        if base is None:
            print("[-] Could not find base address!")
            return
        
        print(f"[*] Base address: {hex(base)}")
        
        cmp_addr = base + CMP_OFFSET
        print(f"[*] CMP breakpoint at: {hex(cmp_addr)}")
        
        # Set breakpoint at CMP instruction
        bp = CmpBreakpoint(f"*{hex(cmp_addr)}")
        
        # Continue execution - the binary will read input
        # We feed it a rainbow pattern
        print("[*] Continuing execution...")
        gdb.execute("continue")
        
        # After program exits, print results
        print(f"\n[*] Total CMP hits: {hit_count[0]}")
        print("\n[*] Building flag...")
        
        # The results tell us what values the VM expects
        flag_bytes = [0] * 32
        for idx, (num, input_val, expected) in enumerate(results):
            if input_val < 32:
                flag_bytes[input_val] = expected
                print(f"  flag[{input_val}] = 0x{expected:02x}")
        
        flag_hex = ''.join(f'{b:02x}' for b in flag_bytes)
        print(f"\n[+] Flag bytes: {flag_hex}")
        print(f"[+] Flag: DH{{{flag_hex}}}")

RunSolver()
