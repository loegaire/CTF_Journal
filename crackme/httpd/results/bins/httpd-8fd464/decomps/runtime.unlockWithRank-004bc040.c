
/* WARNING: Unknown calling convention */

void runtime_unlockWithRank(runtime_mutex *l)

{
  long in_FS_OFFSET;
  runtime_mutex *l_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_unlock2(l_spill);
  return;
}

