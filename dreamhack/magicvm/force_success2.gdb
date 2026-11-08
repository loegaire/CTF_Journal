set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off

set $base = 0x555555554000

# Break right after check() returns, where main compares result
# 7c11c: cmpb $0x0, -0xcb(%rbp)
break *($base + 0x7c11c)
commands
  silent
  printf "check() returned: %d\n", *(char*)($rbp - 0xcb)
  # Force it to non-zero
  set *(char*)($rbp - 0xcb) = 1
  continue
end

run <<< "0000000000000000000000000000000000000000000000000000000000000000"
quit
