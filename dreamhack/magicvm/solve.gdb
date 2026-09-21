set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

# Single breakpoint at CMP instruction - capture everything here
break *0x5555555cfba8
commands
  silent
  # -0x23c = raw v29 (pre-indirection first operand)
  # -0x23b = raw v40 (pre-indirection second operand) -- BUT gets overwritten by indirection
  # -0x23a = full mode byte from opcode decoder
  # -0x237 = mode & 0xf (processed mode)
  # $al = post-indirection first operand (v1)
  # *(rbp-0x23b) = post-indirection second operand (v2)
  # At this point, -0x23b may have been overwritten by indirection!
  # But -0x23a still has the original mode
  printf "CMP: mode=0x%02x v1=0x%02x v2=0x%02x\n", *(unsigned char*)($rbp - 0x23a), (unsigned char)$al, *(unsigned char*)($rbp - 0x23b)
  continue
end

continue
quit
