
/* WARNING: Unknown calling convention */

void runtime_printstring(string s)

{
  long in_FS_OFFSET;
  __uint8 b;
  string s_spill;
  
  b.len = s.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  b.array = (uint8 *)s_spill.len;
  b.cap = s_spill.len;
  runtime_gwrite(b);
  return;
}

