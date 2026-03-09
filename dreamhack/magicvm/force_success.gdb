set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off

# Break at the return of check() where it loads Stack[0]
# 7be32: movzbl -0x210(%rbp),%eax
set $base = 0x555555554000
break *($base + 0x7be32)
commands
  silent
  printf "Stack[0] before patch = %d\n", $eax
  set $eax = 1
  printf "Stack[0] after patch = %d\n", $eax
  continue
end

run <<< "0000000000000000000000000000000000000000000000000000000000000000"
quit
