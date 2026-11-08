
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_freemcache_func1(void)

{
  runtime_mcache *c;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.mcache * c@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  c = *(runtime_mcache **)(in_RDX + 8);
  runtime___mcache__releaseAll(c);
  runtime_stackcache_clear(c);
  runtime_lock2(&runtime_mheap_.lock);
                    /* Unresolved local var: runtime.mlink * v@[???] */
  runtime_mheap_.cachealloc.inuse = runtime_mheap_.cachealloc.inuse - runtime_mheap_.cachealloc.size
  ;
  c->nextSample = (uintptr)runtime_mheap_.cachealloc.list;
  runtime_mheap_.cachealloc.list = (runtime_mlink *)c;
  runtime_unlock2(&runtime_mheap_.lock);
  return;
}

