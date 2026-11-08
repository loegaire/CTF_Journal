set disable-randomization on
set pagination off
set confirm off
set debuginfod enabled off
starti

# Break right AFTER raw values are stored but BEFORE indirection (at mode load)
# 0x7bafe: movzbl -0x23a(%rbp),%eax  — loads mode byte
# At this point: -0x23c = raw v29, -0x23b = raw v40
break *0x5555555cfafe
commands
  silent
  printf "RAW: v29=0x%02x v40=0x%02x mode=0x%02x\n", *(unsigned char*)($rbp - 0x23c), *(unsigned char*)($rbp - 0x23b), *(unsigned char*)($rbp - 0x23a)
  continue
end

# Break at actual CMP — force match AND log post-indirection values  
break *0x5555555cfba8
commands
  silent
  printf "CMP: v1=0x%02x v2=0x%02x\n", (unsigned char)$al, *(unsigned char*)($rbp - 0x23b)
  set $al = *(unsigned char*)($rbp - 0x23b)
  continue
end

continue
quit
