set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

# Break at every opcode dispatch point to see all operations
# The switch/jump table dispatch is after the opcode is decoded 
# Let's break at the opcode switch and the stack write instruction
# From earlier analysis, stack writes happen via:
#   movzbl 0x2(%rdx,%rax,1) → reads from input
#   mov to -0x210(%rbp,...) → writes to stack

# Actually, simpler: break at the Opcode 0 handler and any writes to stack area
# But let's just capture the stack state after each VM step

# The main VM loop goes back to base+0x7ac7d after each opcode
# Let's break there to see the opcode and stack

# Opcode fetch at base+0x7ac7d
break *0x5555555cec7d
commands
  silent
  # Print the PC value
  set $pc_val = *(unsigned short*)($rbp - 0x236)
  # Print current opcode (from the switch value)
  printf "."
  continue
end

# CMP with force match and stack+input dump
break *0x5555555cfba8
commands
  silent
  printf "\nCMP: v1=0x%02x v2=0x%02x\n", (unsigned char)$al, *(unsigned char*)($rbp - 0x23b)
  printf "STACK: "
  set $i = 0
  while $i < 32
    printf "%02x", *(unsigned char*)($rbp - 0x210 + $i)
    set $i = $i + 1
  end
  printf "\n"
  # Force match
  set $al = *(unsigned char*)($rbp - 0x23b)
  continue
end

continue
quit
