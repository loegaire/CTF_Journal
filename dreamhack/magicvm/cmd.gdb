
set pagination off
set style enabled off
set confirm off
set disable-randomization on
file ./main
break *0x5555555cfba8
run < input.txt
commands
  silent
  # Print the values: "HIT: <AL_Hex> : <Target_Hex>"
  printf "HIT:%02x:%02x\n", $al, *(unsigned char*)($rbp - 0x23B)
  # Force success so loop continues
  set $eflags |= 0x40
  continue
end
quit
