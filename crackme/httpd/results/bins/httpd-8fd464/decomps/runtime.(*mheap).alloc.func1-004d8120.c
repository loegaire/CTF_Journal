
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime___mheap__alloc_func1(void)

{
  runtime_spanAllocType typ;
  runtime_mheap *h;
  undefined8 *npage;
  long in_RDX;
  long extraout_RDX;
  runtime_spanClass in_DIL;
  long in_FS_OFFSET;
  undefined8 local_30;
  
                    /* Unresolved local var: runtime.mheap * h@[???]
                       Unresolved local var: uintptr npages@[???]
                       Unresolved local var: runtime.spanClass spanclass@[???]
                       Unresolved local var: runtime.mspan * * &s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  h = *(runtime_mheap **)(in_RDX + 0x10);
  typ = *(runtime_spanAllocType *)(in_RDX + 0x18);
  npage = *(undefined8 **)(in_RDX + 0x20);
  if ((runtime_mheap_.sweepDrained == 0) || (runtime_mheap_.sweepers != 0)) {
    runtime___mheap__reclaim(h,(uintptr)npage);
  }
  runtime___mheap__allocSpan(h,(uintptr)npage,typ,in_DIL);
  *npage = local_30;
  return;
}

