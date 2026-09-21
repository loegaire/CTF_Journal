set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

# Calculate base address (Entry point is at base + 0x31e0)
# This assumes we are stopped at entry point
set $base = $rip - 0x31e0
printf "[*] Base address: %p\n", $base

# Breakpoint at Opcode Decode (after rand() call, before processing)
# Offset 0x7acb8: movzbl -0x23a(%rbp),%eax
break *($base + 0x7acb8)
commands
  silent
  # -0x236(%rbp) is the VM Program Counter (PC)
  # -0x23a(%rbp) is the random byte (Opcode | Mode)
  set $vm_pc = *(unsigned short*)($rbp - 0x236)
  set $rand_byte = *(unsigned char*)($rbp - 0x23a)
  set $opcode = ($rand_byte >> 4) & 0xF
  set $mode = $rand_byte & 0xF
  
  printf "VM_PC: 0x%04x | Raw: 0x%02x | Opcode: %d | Mode: 0x%x\n", $vm_pc, $rand_byte, $opcode, $mode
  continue
end

# Breakpoint at CMP instruction (to see when/if we hit checks)
break *($base + 0x7bba8)
commands
  silent
  printf "--> CMP HIT: v1=0x%02x v2=0x%02x\n", (unsigned char)$al, *(unsigned char*)($rbp - 0x23b)
  continue
end

# Run with limit
continue
quit
