
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_freeSomeWbufs_func1(void)

{
  char cVar1;
  long lVar2;
  runtime_mspan *s;
  long in_RDX;
  long lVar3;
  long extraout_RDX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200);
  cVar1 = *(char *)(in_RDX + 8);
  lVar3 = 0;
                    /* Unresolved local var: int i@[???] */
  while ((s = runtime_work.wbufSpans.free.first, lVar3 < 0x40 &&
         (((cVar1 == '\0' || (*(char *)(lVar2 + 0xb1) == '\0')) &&
          (runtime_work.wbufSpans.free.first != (runtime_mspan *)0x0))))) {
                    /* Unresolved local var: runtime.mspan * span@[???] */
    runtime___mSpanList__remove(&runtime_work.wbufSpans.free,runtime_work.wbufSpans.free.first);
    runtime___mheap__freeManual(&runtime_mheap_,s,(runtime_spanAllocType)s);
    lVar3 = lVar3 + 1;
  }
  return;
}

