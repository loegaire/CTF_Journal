
/* WARNING: Unknown calling convention */

void runtime_lockWithRank(runtime_mutex *l,runtime_lockRank rank)

{
  long in_FS_OFFSET;
  runtime_mutex *l_spill;
  runtime_lockRank rank_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(l_spill);
  return;
}

