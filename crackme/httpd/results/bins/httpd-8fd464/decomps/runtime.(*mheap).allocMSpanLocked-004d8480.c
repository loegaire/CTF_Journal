
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mheap).allocMSpanLocked(runtime.mheap * h, runtime.mspan
   * ~r0) */

runtime_mspan * runtime___mheap__allocMSpanLocked(runtime_mheap *h)

{
  runtime_mspan *prVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  runtime_mheap *h_spill;
  runtime_mspan *local_20;
  
                    /* Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: runtime.mspan * s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  if (lVar2 == 0) {
    runtime___fixalloc__alloc(&h_spill->spanalloc);
    return local_20;
  }
  if (*(long *)(lVar2 + 0x1228) == 0) {
    for (lVar3 = 0; lVar3 < 0x40; lVar3 = lVar3 + 1) {
                    /* Unresolved local var: int i@[???] */
      runtime___fixalloc__alloc(&h_spill->spanalloc);
      *(runtime_mspan **)(lVar2 + 0x1230 + lVar3 * 8) = local_20;
    }
    *(undefined8 *)(lVar2 + 0x1228) = 0x40;
  }
  prVar1 = (runtime_mspan *)(*(long *)(lVar2 + 0x1228) - 1);
  if (prVar1 < (runtime_mspan *)0x80) {
    *(runtime_mspan **)(lVar2 + 0x1228) = prVar1;
    return prVar1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

