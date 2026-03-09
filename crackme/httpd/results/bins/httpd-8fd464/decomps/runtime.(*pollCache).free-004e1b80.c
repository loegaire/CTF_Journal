
/* WARNING: Unknown calling convention */

void runtime___pollCache__free(runtime_pollCache *c,runtime_pollDesc *pd)

{
  long in_FS_OFFSET;
  runtime_pollCache *c_spill;
  runtime_pollDesc *pd_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&c_spill->lock);
  pd_spill->link = c_spill->first;
  c_spill->first = pd_spill;
  runtime_unlock2(&c_spill->lock);
  return;
}

