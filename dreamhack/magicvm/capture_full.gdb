set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

# Capture RAW and post-indirection at CMP - NO force match
break *0x5555555cfafe
commands
  silent
  printf "RAW: v29=0x%02x v40=0x%02x mode=0x%02x\n", *(unsigned char*)($rbp - 0x23c), *(unsigned char*)($rbp - 0x23b), *(unsigned char*)($rbp - 0x23a)
  continue
end

break *0x5555555cfba8
commands
  silent
  printf "CMP: v1=0x%02x v2=0x%02x | STACK="
  set $i = 0
  while $i < 32
    printf "%02x", *(unsigned char*)($rbp - 0x210 + $i)
    set $i = $i + 1
  end
  printf "\n"
  continue
end

continue
quit
