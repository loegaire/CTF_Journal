
/* WARNING: Unknown calling convention */

void reflect_memmove(void *to,void *from,uintptr n)

{
  long in_FS_OFFSET;
  void *to_spill;
  void *from_spill;
  uintptr n_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memmove();
  return;
}

