set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off

set $base = 0x555555554000
set $call_num = 0

# Break at return of transform function (0x7a96c: ret)
break *($base + 0x7a96c)
commands
  silent
  set $call_num = $call_num + 1
  # At this point, al = return value
  printf "XFORM %d: ret=%d\n", $call_num, (unsigned char)$al
  continue
end

# Break at the rand() call inside transform (0x7a8ef)
break *($base + 0x7a8ef)
commands
  silent
  # esi has the bytecode index argument
  printf "XFORM_CALL: bytecode_idx=%d\n", (unsigned char)$sil
  continue
end

# Break right after rand() returns (0x7a8f4)
break *($base + 0x7a8f4)
commands
  silent
  # eax has the rand() return value
  set $rv = $eax
  set $i0 = $rv & 0x1f
  set $i1 = ($rv >> 5) & 0x1f
  set $i2 = ($rv >> 10) & 0x1f
  printf "RAND: val=%d idx0=%d idx1=%d idx2=%d\n", $rv, $i0, $i1, $i2
  continue
end

# Break at check() return to see final result
break *($base + 0x7be32)
commands
  silent
  printf "CHECK_RETURN: Stack[0]=%d\n", *(unsigned char*)($rbp - 0x210)
  continue
end

run <<< "0000000000000000000000000000000000000000000000000000000000000000"
quit
