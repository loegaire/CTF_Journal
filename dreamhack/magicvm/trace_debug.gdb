set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

set $base = 0x555555554000
set $checked = 0

# Break at Check Prologue (End) to see pointers
break *($base + 0x7a9ce)
commands
  silent
  if $checked == 0
    printf "Check RBP: 0x%lx\n", $rbp
    printf "Bytecode Ptr (from stack): 0x%lx\n", $rax
    printf "Input Buffer (Stack): 0x%lx\n", $rdi
    printf "Calculated Bytecode Ptr (via Input): 0x%lx\n", *(unsigned long*)$rdi
    set $checked = 1
  end
  continue
end

continue
quit
