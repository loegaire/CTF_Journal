
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_allocmcache_func1(void)

{
  runtime_mutex *l;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  uintptr local_18;
  
                    /* Unresolved local var: runtime.mcache * * &c@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  l = *(runtime_mutex **)(in_RDX + 8);
  runtime_lock2(l);
  runtime___fixalloc__alloc(&runtime_mheap_.cachealloc);
  l->key = local_18;
  *(uint32 *)(local_18 + 0x4a8) = runtime_mheap_.sweepgen;
  runtime_unlock2(&runtime_mheap_.lock);
  return;
}

