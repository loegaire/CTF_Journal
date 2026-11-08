
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.addspecial(void * p, runtime.special * s, bool ~r2) */

bool runtime_addspecial(void *p,runtime_special *s)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  runtime_special *prVar5;
  long lVar6;
  runtime_mutex *l;
  ulong uVar7;
  ulong uVar8;
  runtime_special *prVar9;
  ulong uVar10;
  runtime_mutex *prVar11;
  long in_FS_OFFSET;
  string s_00;
  void *p_spill;
  runtime_special *s_spill;
  runtime_mspan *local_38;
  
                    /* Unresolved local var: runtime.mspan * span@[???]
                       Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uintptr offset@[???]
                       Unresolved local var: uint8 kind@[???]
                       Unresolved local var: runtime.special * * t@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_spanOfHeap((uintptr)p_spill);
  if (local_38 == (runtime_mspan *)0x0) {
    s_00.len = (int)s;
    s_00.str = (uint8 *)0x2a0c23;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar4 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar4 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  lVar4 = *(long *)(lVar4 + 0x30);
  runtime___mspan__ensureSwept(local_38);
  l = (runtime_mutex *)((long)p_spill - local_38->startAddr);
  bVar2 = s_spill->kind;
  runtime_lock2(l);
  prVar5 = (runtime_special *)&local_38->specials;
  while (prVar9 = prVar5, prVar5 = prVar9->next, prVar5 != (runtime_special *)0x0) {
    prVar11 = (runtime_mutex *)(ulong)prVar5->offset;
    if ((prVar11 == l) && (prVar5->kind == bVar2)) {
      runtime_unlock2(&local_38->speciallock);
                    /* Unresolved local var: runtime.g * _g_@[???] */
      lVar6 = *(long *)(in_FS_OFFSET + -8);
      iVar3 = *(int *)(lVar4 + 0x110);
      *(int *)(lVar4 + 0x110) = iVar3 + -1;
      if ((iVar3 == 1) && (*(char *)(lVar6 + 0xb1) != '\0')) {
        *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffade;
      }
      return SUB81(lVar6,0);
    }
    if ((l < prVar11) || ((prVar11 == l && (bVar2 < prVar5->kind)))) break;
  }
  s_spill->offset = (uint16)l;
  s_spill->next = prVar9->next;
  prVar9->next = s_spill;
                    /* Unresolved local var: uintptr arenaPage@[???]
                       Unresolved local var: runtime.heapArena * ha@[???] */
  uVar10 = local_38->startAddr + 0x800000000000 >> 0x1a;
  if (0x3fffff < uVar10) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  uVar7 = local_38->startAddr >> 0xd;
  uVar8 = (uVar7 & 0x1fff) >> 3;
  if (0x3ff < uVar8) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  LOCK();
  "*asn1.stringEncoder"[(long)((*runtime_mheap_.arenas[0])[uVar10]->bitmap + uVar8 + 8)] =
       "*asn1.stringEncoder"[(long)((*runtime_mheap_.arenas[0])[uVar10]->bitmap + uVar8 + 8)] |
       (byte)(1 << ((byte)uVar7 & 7));
  UNLOCK();
  runtime_unlock2(&local_38->speciallock);
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar6 = *(long *)(in_FS_OFFSET + -8);
  iVar3 = *(int *)(lVar4 + 0x110);
  *(int *)(lVar4 + 0x110) = iVar3 + -1;
  if ((iVar3 == 1) && (*(char *)(lVar6 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffade;
  }
  return SUB81(lVar6,0);
}

