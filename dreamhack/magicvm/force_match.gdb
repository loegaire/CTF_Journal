set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

# Force every CMP to match by patching al to equal -0x23b(rbp)
break *0x5555555cfba8
commands
  silent
  set $al = *(unsigned char*)($rbp - 0x23b)
  continue
end
continue
quit
