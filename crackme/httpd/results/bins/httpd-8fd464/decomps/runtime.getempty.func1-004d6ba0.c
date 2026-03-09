
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_getempty_func1(void)

{
  runtime_mheap *h;
  long in_RDX;
  long extraout_RDX;
  uintptr unaff_RBX;
  long in_FS_OFFSET;
  uintptr local_18;
  
                    /* Unresolved local var: runtime.mspan * * &s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  h = *(runtime_mheap **)(in_RDX + 8);
  runtime___mheap__allocManual(h,unaff_RBX,0x40);
  (h->lock).key = local_18;
  return;
}

