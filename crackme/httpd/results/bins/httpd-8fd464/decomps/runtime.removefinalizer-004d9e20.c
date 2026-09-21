
/* WARNING: Unknown calling convention */

void runtime_removefinalizer(void *p)

{
  uint8 unaff_BL;
  long in_FS_OFFSET;
  void *p_spill;
  runtime_mlink *local_18;
  
                    /* Unresolved local var: runtime.specialfinalizer * s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_removespecial(p_spill,unaff_BL);
  if (local_18 != (runtime_mlink *)0x0) {
    runtime_lock2(&runtime_mheap_.speciallock);
                    /* Unresolved local var: runtime.mlink * v@[???] */
    runtime_mheap_.specialfinalizeralloc.inuse =
         runtime_mheap_.specialfinalizeralloc.inuse - runtime_mheap_.specialfinalizeralloc.size;
    local_18->next = runtime_mheap_.specialfinalizeralloc.list;
    runtime_mheap_.specialfinalizeralloc.list = local_18;
    runtime_unlock2(&runtime_mheap_.speciallock);
    return;
  }
  return;
}

