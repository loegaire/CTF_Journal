
/* WARNING: Unknown calling convention */

void runtime_printpointer(void *p)

{
  long in_FS_OFFSET;
  void *p_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_printhex((uint64)p_spill);
  return;
}

