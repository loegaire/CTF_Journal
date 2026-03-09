
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_printsp(void)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s.len = unaff_RBX;
  s.str = (uint8 *)&syscall__stmp_16;
  runtime_printstring(s);
  return;
}

