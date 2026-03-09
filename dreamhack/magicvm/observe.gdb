set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

# CMP breakpoint - DON'T force match, just observe
break *0x5555555cfba8
commands
  silent
  printf "CMP: v1=0x%02x v2=0x%02x mode=0x%02x | STACK[0:8]="
  set $i = 0
  while $i < 8
    printf "%02x", *(unsigned char*)($rbp - 0x210 + $i)
    set $i = $i + 1
  end
  printf "\n"
  continue
end

continue
quit
