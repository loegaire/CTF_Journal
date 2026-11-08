
/* WARNING: Unknown calling convention */

void runtime_printuintptr(uintptr p)

{
  long in_FS_OFFSET;
  uintptr p_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_printhex(p_spill);
  return;
}

