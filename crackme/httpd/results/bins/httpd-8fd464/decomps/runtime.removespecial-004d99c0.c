
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.removespecial(void * p, uint8 kind, runtime.special * ~r2)
    */

runtime_special * runtime_removespecial(void *p,uint8 kind)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  runtime_mutex *l;
  ulong uVar5;
  ulong uVar6;
  runtime_special *prVar7;
  undefined7 unaff_00000019;
  ulong uVar8;
  runtime_special *prVar9;
  long in_FS_OFFSET;
  string s;
  void *p_spill;
  uint8 kind_spill;
  runtime_mspan *local_38;
  
  s.len._1_7_ = unaff_00000019;
  s.len._0_1_ = kind;
                    /* Unresolved local var: runtime.mspan * span@[???]
                       Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uintptr offset@[???]
                       Unresolved local var: runtime.special * result@[???]
                       Unresolved local var: runtime.special * * t@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_spanOfHeap((uintptr)p_spill);
  if (local_38 == (runtime_mspan *)0x0) {
    s.str = (uint8 *)0x2a28f0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar3 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  lVar3 = *(long *)(lVar3 + 0x30);
  runtime___mspan__ensureSwept(local_38);
  l = (runtime_mutex *)((long)p_spill - local_38->startAddr);
  runtime_lock2(l);
  prVar9 = (runtime_special *)&local_38->specials;
  do {
    prVar7 = prVar9;
    prVar9 = prVar7->next;
    if (prVar9 == (runtime_special *)0x0) {
      prVar9 = (runtime_special *)0x0;
      goto LAB_004d9a89;
    }
  } while (((runtime_mutex *)(ulong)prVar9->offset != l) || (prVar9->kind != kind_spill));
  prVar7->next = prVar9->next;
LAB_004d9a89:
  if (local_38->specials == (runtime_special *)0x0) {
                    /* Unresolved local var: uintptr arenaPage@[???]
                       Unresolved local var: runtime.heapArena * ha@[???] */
    uVar8 = local_38->startAddr + 0x800000000000 >> 0x1a;
    if (0x3fffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    uVar5 = local_38->startAddr >> 0xd;
    uVar6 = (uVar5 & 0x1fff) >> 3;
    if (0x3ff < uVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    LOCK();
    "*asn1.stringEncoder"[(long)((*runtime_mheap_.arenas[0])[uVar8]->bitmap + uVar6 + 8)] =
         "*asn1.stringEncoder"[(long)((*runtime_mheap_.arenas[0])[uVar8]->bitmap + uVar6 + 8)] &
         ~(byte)(1 << ((byte)uVar5 & 7));
    UNLOCK();
  }
  runtime_unlock2(&local_38->speciallock);
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar4 = *(long *)(in_FS_OFFSET + -8);
  iVar2 = *(int *)(lVar3 + 0x110);
  *(int *)(lVar3 + 0x110) = iVar2 + -1;
  if ((iVar2 == 1) && (*(char *)(lVar4 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffade;
  }
  return prVar9;
}

