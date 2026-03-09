
/* WARNING: Unknown calling convention */

void runtime_lock(runtime_mutex *l)

{
  runtime_lockRank unaff_RBX;
  long in_FS_OFFSET;
  runtime_mutex *l_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lockWithRank(l_spill,unaff_RBX);
  return;
}

