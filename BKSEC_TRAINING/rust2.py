from z3 import *

# Create a Z3 solver instance
solver = Solver()

# Define the flag as an array of 18 bytes (since the length check is 0x12)
flag = [BitVec(f'flag_{i}', 8) for i in range(18)]

# Add constraints based on the conditions in the check_flag function

# Condition 1: ((flag[7] + (flag[0] * flag[8])) & flag[1]) == 0x11
solver.add(((flag[7] + (flag[0] * flag[8])) & flag[1] == 0x11)

# Condition 2: ((flag[14] - (flag[10] * flag[2])) ^ (flag[16] - flag[6])) == -12376
solver.add(((flag[14] - (flag[10] * flag[2])) ^ (flag[16] - flag[6]) == -12376)

# Condition 3: ((flag[7] * flag[11] - flag[13]) ^ flag[4]) == 3526
solver.add(((flag[7] * flag[11] - flag[13]) ^ flag[4]) == 3526)

# Condition 4: (flag[17] + (flag[17] * flag[0])) == 9628
solver.add((flag[17] + (flag[17] * flag[0])) == 9628)

# Condition 5: ((flag[5] - flag[1]) ^ (flag[14] & flag[6])) == 19
solver.add(((flag[5] - flag[1]) ^ (flag[14] & flag[6])) == 19)

# Condition 6: ((flag[9] - flag[0]) ^ ((flag[11] * flag[9]) & flag[7])) == -51
solver.add(((flag[9] - flag[0]) ^ ((flag[11] * flag[9]) & flag[7])) == -51)

# Condition 7: ((flag[17] & flag[0]) ^ flag[6]) == 12
solver.add(((flag[17] & flag[0]) ^ flag[6]) == 12)

# Condition 8: (flag[9] ^ (flag[6] + flag[17])) == 194
solver.add((flag[9] ^ (flag[6] + flag[17])) == 194)

# Condition 9: ((flag[4] * flag[14] - flag[7] * flag[4]) ^ flag[6]) == -201
solver.add(((flag[4] * flag[14] - flag[7] * flag[4]) ^ flag[6]) == -201)

# Condition 10: ((flag[16] - flag[6]) - (flag[12] * flag[7])) & flag[17]) == 2
solver.add(((flag[16] - flag[6]) - (flag[12] * flag[7])) & flag[17] == 2)

# Condition 11: (flag[7] - (flag[15] * flag[12]) - flag[6]) == -5564
solver.add((flag[7] - (flag[15] * flag[12]) - flag[6]) == -5564)

# Condition 12: (flag[2] + (flag[3] * flag[7] + flag[9])) == 4301
solver.add((flag[2] + (flag[3] * flag[7] + flag[9])) == 4301)

# Condition 13: ((flag[10] + flag[14] - flag[13]) ^ flag[13]) == 91
solver.add(((flag[10] + flag[14] - flag[13]) ^ flag[13]) == 91)

# Condition 14: ((flag[8] + flag[14]) ^ flag[7] ^ flag[5]) == 169
solver.add(((flag[8] + flag[14]) ^ flag[7] ^ flag[5]) == 169)

# Condition 15: ((flag[2] + (flag[4] - flag[11])) & flag[9]) == 112
solver.add(((flag[2] + (flag[4] - flag[11])) & flag[9]) == 112)

# Condition 16: (flag[6] + (flag[6] - flag[3])) == 110
solver.add((flag[6] + (flag[6] - flag[3])) == 110)

# Condition 17: ((flag[9] + flag[6]) ^ (flag[9] * flag[2] + flag[8])) == 12519
solver.add(((flag[9] + flag[6]) ^ (flag[9] * flag[2] + flag[8])) == 12519)

# Condition 18: ((flag[16] + (flag[16] * flag[15]) - flag[4]) == 5314
solver.add(((flag[16] + (flag[16] * flag[15]) - flag[4]) == 5314)

# Condition 19: ((flag[16] * flag[6]) & flag[0] ^ (flag[1] & flag[3])) == 66
solver.add(((flag[16] * flag[6]) & flag[0] ^ (flag[1] & flag[3])) == 66)

# Condition 20: (flag[11] ^ flag[2] ^ flag[8]) == 80
solver.add((flag[11] ^ flag[2] ^ flag[8]) == 80)

# Check if the constraints are satisfiable
if solver.check() == sat:
    model = solver.model()
    # Extract the flag from the model
    flag_str = ''.join([chr(model[flag[i]].as_long()) for i in range(18)])
    print(f"Flag: {flag_str}")
else:
    print("No solution found.")
