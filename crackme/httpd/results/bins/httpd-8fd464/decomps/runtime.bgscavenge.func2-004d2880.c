
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_bgscavenge_func2(void)

{
  runtime_mutex *l;
  long *plVar1;
  long in_RDX;
  long extraout_RDX;
  uintptr unaff_RBX;
  long in_FS_OFFSET;
  long local_28;
  
                    /* Unresolved local var: uintptr * &released@[???]
                       Unresolved local var: float64 * &crit@[???]
                       Unresolved local var: uint64 retained@[???]
                       Unresolved local var: uint64 goal@[???]
                       Unresolved local var: int64 start@[???]
                       Unresolved local var: int64 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  l = *(runtime_mutex **)(in_RDX + 0x10);
  plVar1 = *(long **)(in_RDX + 8);
  runtime_lock2(l);
  if (runtime_memstats.heap_sys - runtime_memstats.heap_released <= runtime_mheap_.scavengeGoal) {
    runtime_unlock2(&runtime_mheap_.lock);
    return;
  }
  runtime_nanotime1();
  runtime___pageAlloc__scavenge((runtime_pageAlloc *)runtime_physPageSize,unaff_RBX,true);
  *plVar1 = local_28;
  runtime_mheap_.pages.scav.released = runtime_mheap_.pages.scav.released + local_28;
  runtime_nanotime1();
  l->key = 0x4020000000000000;
  runtime_unlock2(&runtime_mheap_.lock);
  return;
}

