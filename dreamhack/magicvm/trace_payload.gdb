set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

set $base = 0x555555554000

# Break at Rand (7a8da)
break *($base + 0x7a8da)
commands
  silent
  printf "Rand Call. Input Index: %d (0x%x)\n", $rsi, $rsi
  continue
end

# Break at Opcode Dispatch to see PC
break *($base + 0x7acee)
commands
  silent
  printf "Dispatching Opcode at PC=%d\n", $rax
  continue
end

# Break at Check Return (Epilogue)
break *($base + 0x7be82)
commands
  silent
  printf "Check Return Value (EAX): 0x%x\n", $eax
  continue
end

continue
quit
