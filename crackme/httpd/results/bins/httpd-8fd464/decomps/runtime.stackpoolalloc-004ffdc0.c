
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.stackpoolalloc(uint8 order, runtime.gclinkptr ~r1) */

runtime_gclinkptr runtime_stackpoolalloc(uint8 order)

{
  runtime_mSpanList *span;
  ulong uVar1;
  runtime_mspan *prVar2;
  runtime_mspan *extraout_RAX;
  undefined8 in_RCX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  uint8 order_spill;
  runtime_mspan *local_28;
  
                    /* Unresolved local var: runtime.mSpanList * list@[???]
                       Unresolved local var: runtime.mspan * s@[???]
                       Unresolved local var: runtime.gclinkptr x@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = (ulong)order_spill;
  if (3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  span = &runtime_stackpool[uVar1].item.span;
  prVar2 = runtime_stackpool[uVar1].item.span.first;
  if (prVar2 == (runtime_mspan *)0x0) {
    runtime___mheap__allocManual(&runtime_mheap_,(uintptr)span,(runtime_spanAllocType)in_RCX);
    if (local_28 == (runtime_mspan *)0x0) {
      s_02.len = (int)span;
      s_02.str = &DAT_00295b8f;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_02);
    }
    if (local_28->allocCount != 0) {
      s_01.len = (int)span;
      s_01.str = &DAT_00296b01;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_01);
    }
    if (local_28->manualFreeList != 0) {
      s_00.len = (int)span;
      s_00.str = &DAT_0029aaac;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
    local_28->elemsize = 0x800L << (order_spill & 0x3f);
    prVar2 = (runtime_mspan *)span;
                    /* Unresolved local var: uintptr i@[???] */
    for (uVar1 = 0; uVar1 < 0x8000; uVar1 = local_28->elemsize + uVar1) {
                    /* Unresolved local var: runtime.gclinkptr x@[???] */
      prVar2 = (runtime_mspan *)(local_28->startAddr + uVar1);
      prVar2->next = (runtime_mspan *)local_28->manualFreeList;
      local_28->manualFreeList = (runtime_gclinkptr)prVar2;
    }
    runtime___mSpanList__insert((runtime_mSpanList *)local_28,prVar2);
    prVar2 = local_28;
  }
  if ((runtime_gclinkptr *)prVar2->manualFreeList != (runtime_gclinkptr *)0x0) {
    prVar2->manualFreeList = *(runtime_gclinkptr *)prVar2->manualFreeList;
    prVar2->allocCount = prVar2->allocCount + 1;
    if (prVar2->manualFreeList == 0) {
      runtime___mSpanList__remove((runtime_mSpanList *)prVar2,(runtime_mspan *)span);
      prVar2 = extraout_RAX;
    }
    return (runtime_gclinkptr)prVar2;
  }
  s.len = (int)span;
  s.str = &DAT_0029e01c;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

