set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off

set $base = 0x555555554000

# I need to find where StackArray gets written.
# Opcode 0 with mode >= 4 writes to StackArray.
# The write happens around:
# 7b098: mov %dl, (%rax) - for Handler 2 (Opcode 2)
# 7ad90-7ada3: Handler 0 sets dest to StackArray[-0x210]
# Let me break at the general write location.

# Actually, let me find the actual write instruction for Opcode 0 (Handler 0):
# After setting dest pointer at -0x228, it writes:
# The write to -0x228 target happens later, likely after the handler jump table
# Let me find where *(-0x228) is actually written to

# Approach: break at every write to dest ptr (-0x228)
# 7adac: movzbl -0x23c(%rbp),%eax  (mode 0 branch: input write)
# Need to find the actual store after all mode checks

# Actually, simpler approach: break where the dest write happens
# and check if the dest is within Stack range

# Let me look for patterns like mov %?l, (%rax) after -0x228/%rax load
# There should be a common store path

# I'll break at the beginning of the dispatcher and check the state sampled
# Let me instead use a different approach: run with non-trivial input and trace
# more carefully what changes

# Break at 0x7be32 (return path)
break *($base + 0x7be32)
commands
  silent
  printf "RETURN: Stack[0]=%d\n", (unsigned char)*(char*)($rbp - 0x210)
  # Dump first 4 stack bytes
  set $s0 = (unsigned char)*(char*)($rbp - 0x210)
  set $s1 = (unsigned char)*(char*)($rbp - 0x20f)
  set $s2 = (unsigned char)*(char*)($rbp - 0x20e)
  set $s3 = (unsigned char)*(char*)($rbp - 0x20d)
  printf "Stack[0..3]: %02x %02x %02x %02x\n", $s0, $s1, $s2, $s3
  continue
end

# Break at handler 9 comparison check (0x7b8a7: jbe 0x7b8d6)
# This is the call-stack depth limit 
break *($base + 0x7b89e)
commands
  silent
  set $depth = *(unsigned short*)($rbp - 0x234)
  printf "HANDLER9: depth=%d\n", $depth
  continue
end

# Break at handler 15's return path (0x7bde3..7be13)
# 7bde3: loads prev frame
break *($base + 0x7bde3)
commands
  silent
  printf "FRAME_POP: depth=%d\n", *(unsigned short*)($rbp - 0x234)
  continue
end

# Break at handler 15's call path (7bdbe-7bdc4: call 7a87c)
# 7a87c is likely malloc_frame
break *($base + 0x7bdc4)
commands
  silent
  printf "FRAME_PUSH\n"
  continue
end

run <<< "0000000000000000000000000000000000000000000000000000000000000000"
quit
