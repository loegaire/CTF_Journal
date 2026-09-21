
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*spanSet).pop(runtime.spanSet * b, runtime.mspan * ~r0)
    */

runtime_mspan * runtime___spanSet__pop(runtime_spanSet *b)

{
  uintptr *puVar1;
  runtime_mSpanList **pprVar2;
  int iVar3;
  runtime_mspan *extraout_RAX;
  runtime_mspan *extraout_RAX_00;
  uint uVar4;
  uint uVar5;
  runtime_mspan *prVar6;
  runtime_lfnode *node;
  ulong uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  runtime_spanSet *b_spill;
  runtime_mspan *prVar7;
  
                    /* Unresolved local var: uint32 head@[???]
                       Unresolved local var: uint32 tail@[???]
                       Unresolved local var: uint32 bottom@[???]
                       Unresolved local var: void * spine@[???]
                       Unresolved local var: void * blockp@[???]
                       Unresolved local var: runtime.spanSetBlock * block@[???]
                       Unresolved local var: runtime.mspan * s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    b = (runtime_spanSet *)extraout_RAX_00;
  }
  while( true ) {
                    /* Unresolved local var: runtime.headTailIndex headtail@[???]
                       Unresolved local var: uintptr spineLen@[???] */
    uVar8 = b_spill->index;
    prVar6 = (runtime_mspan *)(uVar8 >> 0x20);
    uVar4 = (uint)(uVar8 >> 0x20);
    if ((uint)uVar8 <= uVar4) {
      return (runtime_mspan *)b;
    }
    prVar7 = prVar6;
    if (b_spill->spineLen <= uVar8 >> 0x29) break;
    while (uVar5 = (uint)prVar7, b = (runtime_spanSet *)prVar6, uVar5 == uVar4) {
      LOCK();
      bVar9 = uVar8 == b_spill->index;
      if (bVar9) {
        b_spill->index = (ulong)(uVar4 + 1) << 0x20 | uVar8 & 0xffffffff;
      }
      UNLOCK();
      if (bVar9) {
        prVar6 = (runtime_mspan *)((long)b_spill->spine + (ulong)(uVar5 >> 9) * 8);
        prVar7 = prVar6->next;
        puVar1 = &prVar7->startAddr + (uVar5 & 0x1ff);
        node = (runtime_lfnode *)*puVar1;
        while (node == (runtime_lfnode *)0x0) {
          node = (runtime_lfnode *)*puVar1;
        }
        LOCK();
        *puVar1 = 0;
        UNLOCK();
        LOCK();
        pprVar2 = &prVar7->list;
        iVar3 = *(int *)pprVar2;
        *(int *)pprVar2 = *(int *)pprVar2 + 1;
        UNLOCK();
        if (iVar3 == 0x1ff) {
          LOCK();
          prVar6->next = (runtime_mspan *)0x0;
          UNLOCK();
          LOCK();
          *(undefined4 *)&prVar7->list = 0;
          UNLOCK();
          runtime___lfstack__push(&runtime_spanSetBlockPool.stack,node);
          prVar6 = extraout_RAX;
        }
        return prVar6;
      }
      uVar8 = b_spill->index;
      prVar7 = (runtime_mspan *)(uVar8 >> 0x20);
    }
  }
  return (runtime_mspan *)b;
}

