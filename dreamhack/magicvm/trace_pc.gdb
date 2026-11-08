set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

set $base = 0x555555554000

# Break at Dispatch Loop Start (Read PC)
break *($base + 0x7ac8e)
commands
  silent
  printf "PC: %d\n", $eax
  continue
end

continue
quit
