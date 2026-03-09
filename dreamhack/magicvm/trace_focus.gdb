set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off

set $base = 0x555555554000

# Break at return of check() where it loads Stack[0]
# 7be32: movzbl -0x210(%rbp),%eax
break *($base + 0x7be32)
commands
  silent
  printf "CHECK_RETURN: Stack[0]=%d\n", (unsigned char)*(char*)($rbp - 0x210)
  # Dump full StackArray (32 bytes at -0x210)
  printf "Stack: "
  set $i = 0
  while $i < 32
    printf "%02x ", (unsigned char)*(char*)($rbp - 0x210 + $i)
    set $i = $i + 1
  end
  printf "\n"
  continue
end

# Also break at the dispatcher to count how many opcodes execute
# 7acce: mov %eax,%eax (right before dispatch jump)
set $op_count = 0
break *($base + 0x7acce)
commands
  silent
  set $op_count = $op_count + 1
  if $op_count % 100 == 0
    printf "OP %d: opcode=%d mode=%d PC=%d\n", $op_count, (unsigned char)*(char*)($rbp - 0x23a) >> 4, (unsigned char)*(char*)($rbp - 0x23a) & 0xf, *(unsigned short*)($rbp - 0x236)
  end
  continue
end

# Break at the exit handler (Opcode 9 stderr path)
# 7b8c7: call fwrite 
break *($base + 0x7b8c7)
commands
  silent
  printf "EXIT CALLED (stack overflow)! op_count=%d\n", $op_count
  continue
end

run <<< "0000000000000000000000000000000000000000000000000000000000000000"
quit
