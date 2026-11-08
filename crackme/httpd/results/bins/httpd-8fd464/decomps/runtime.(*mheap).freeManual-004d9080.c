
/* WARNING: Unknown calling convention */

void runtime___mheap__freeManual(runtime_mheap *h,runtime_mspan *s,runtime_spanAllocType typ)

{
  long in_FS_OFFSET;
  runtime_mheap *h_spill;
  runtime_mspan *s_spill;
  runtime_spanAllocType typ_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  s_spill->needzero = 1;
  runtime_lock2((runtime_mutex *)s_spill);
  runtime___mheap__freeSpanLocked(h_spill,s,typ_spill);
  runtime_unlock2(&h_spill->lock);
  return;
}

