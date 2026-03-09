set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

# We want to see the stack state at each CMP.
# Stack is at rbp - 0x210 (32 bytes)
# Input ptr is at rbp - 0x230

# Break at CMP, force match, dump stack and input
break *0x5555555cfba8
commands
  silent
  # Print CMP operands
  printf "CMP: v1=0x%02x v2=0x%02x mode=0x%02x\n", (unsigned char)$al, *(unsigned char*)($rbp - 0x23b), *(unsigned char*)($rbp - 0x237)
  
  # Dump first 4 bytes of stack
  printf "STACK: "
  set $i = 0
  while $i < 32
    printf "%02x", *(unsigned char*)($rbp - 0x210 + $i)
    set $i = $i + 1
  end
  printf "\n"
  
  # Dump input (via pointer)
  set $inp = *(unsigned long*)($rbp - 0x230)
  printf "INPUT: "
  set $i = 0
  while $i < 32
    printf "%02x", *(unsigned char*)($inp + $i)
    set $i = $i + 1
  end
  printf "\n"
  
  # Force match
  set $al = *(unsigned char*)($rbp - 0x23b)
  continue
end

continue
quit
