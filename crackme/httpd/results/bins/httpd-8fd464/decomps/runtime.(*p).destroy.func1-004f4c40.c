
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime___p__destroy_func1(void)

{
  long lVar1;
  ulong uVar2;
  long in_RDX;
  long extraout_RDX;
  runtime_pageAlloc *unaff_RBX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.p * pp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  lVar1 = *(long *)(in_RDX + 8);
  uVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  while( true ) {
    if (*(long *)(lVar1 + 0x1228) <= (long)uVar2) {
      *(undefined8 *)(lVar1 + 0x1228) = 0;
      runtime_lock2(&runtime_mheap_.lock);
      runtime___pageCache__flush((runtime_pageCache *)&runtime_mheap_.pages,unaff_RBX);
      runtime_unlock2(&runtime_mheap_.lock);
      return;
    }
    if (0x7f < uVar2) break;
    unaff_RBX = *(runtime_pageAlloc **)(lVar1 + 0x1230 + uVar2 * 8);
                    /* Unresolved local var: runtime.mlink * v@[???] */
    runtime_mheap_.spanalloc.inuse = runtime_mheap_.spanalloc.inuse - runtime_mheap_.spanalloc.size;
    unaff_RBX->summary[0].array = (runtime_pallocSum *)runtime_mheap_.spanalloc.list;
    uVar2 = uVar2 + 1;
    runtime_mheap_.spanalloc.list = (runtime_mlink *)unaff_RBX;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

