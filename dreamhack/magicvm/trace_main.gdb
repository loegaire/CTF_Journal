set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

set $base = 0x555555554000

# Break at main
break *($base + 0x7be84)
commands
  silent
  printf "Entered main\n"
  continue
end

# Break at call check
break *($base + 0x7c111)
commands
  silent
  printf "Calling check. Input Buffer Address (rax): 0x%lx\n", $rax
  # Content of Input Buffer
  printf "Input Buffer Content: 0x%lx\n", *(unsigned long*)$rax
  # Content of Input+8
  printf "Input Buffer+8: 0x%lx\n", *(unsigned long*)($rax+8)
  stepi
end

# Break inside check prologue
break *($base + 0x7a96d)
commands
  silent
  printf "Entered check\n"
  continue
end

continue
quit
