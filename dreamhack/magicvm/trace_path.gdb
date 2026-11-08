set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

set $base = 0x555555554000
set $cnt = 0

# Break at Decode
break *($base + 0x7acb8)
commands
  silent
  if $cnt == 0
       printf "Bytecode Ptr: 0x%lx\n", *(unsigned long*)($rbp - 0x8)
       # Also print Input Buffer content (first 8 bytes)
       printf "Input[0..7]: 0x%lx\n", *(unsigned long*)($rbp - 0x248)
       set $cnt = 1
  end
  continue
end

continue
quit
