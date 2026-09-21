
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime___mheap__freeSpan_func1(void)

{
  runtime_mheap *h;
  undefined8 uVar1;
  long in_RDX;
  long extraout_RDX;
  runtime_mspan *unaff_RBX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.mheap * h@[???]
                       Unresolved local var: runtime.mspan * s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  h = *(runtime_mheap **)(in_RDX + 8);
  uVar1 = *(undefined8 *)(in_RDX + 0x10);
  runtime_lock2(&h->lock);
  runtime___mheap__freeSpanLocked(h,unaff_RBX,(runtime_spanAllocType)uVar1);
  runtime_unlock2(&h->lock);
  return;
}

