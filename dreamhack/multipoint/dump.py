import idc
import ida_bytes

# 1. Setup Addresses (Update these if they are different in your binary!)
# The massive array start
addr_instr = 0x201020 
# The limit you found (00 00 00 00)
addr_end   = 0x21BD1C 
# The "Key Table" (byte_21BD20)
addr_key   = 0x21BD20 
# The Target Result (unk_21BD60) used in memcmp
addr_goal  = 0x21BD60 

# 2. Dump the Key Table (It's likely small, maybe 256 bytes?)
# Let's just grab 256 bytes to be safe
key_table = [idc.get_wide_byte(addr_key + i) for i in range(256)]

# 3. Dump the Goal (38 bytes, based on memcmp size)
goal_array = [idc.get_wide_byte(addr_goal + i) for i in range(38)]

# 4. Parse the Massive Instruction Array
coeffs = {} # Map (row, col) -> total_coefficient

print("Parsing instructions... this might take a second.")
cursor = addr_instr
while cursor < addr_end:
    # Read the 4 bytes of the struct
    target_idx = idc.get_wide_byte(cursor + 0) # Row (Equation #)
    input_idx  = idc.get_wide_byte(cursor + 1) # Col (Flag Char #)
    key_idx    = idc.get_wide_byte(cursor + 2) # Index into Key Table
    multiplier = idc.get_wide_byte(cursor + 3) # Raw multiplier
    
    # Calculate the total coefficient for this step
    # Logic: key_table[key_idx] * multiplier
    val = (key_table[key_idx] * multiplier) % 251
    
    # Add to our matrix (Row, Col)
    if (target_idx, input_idx) not in coeffs:
        coeffs[(target_idx, input_idx)] = 0
    coeffs[(target_idx, input_idx)] = (coeffs[(target_idx, input_idx)] + val) % 251
    
    cursor += 4

print("Done! Here is your Python solver data:")
print("-" * 20)
print(f"goal = {goal_array}")
print("matrix_data = [")
for (r, c), v in coeffs.items():
    print(f"    ({r}, {c}, {v}),")
print("]")
print("-" * 20)
