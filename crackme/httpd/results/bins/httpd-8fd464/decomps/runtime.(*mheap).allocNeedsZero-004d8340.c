
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mheap).allocNeedsZero(runtime.mheap * h, uintptr base,
   uintptr npage, bool needZero) */

bool runtime___mheap__allocNeedsZero(runtime_mheap *h,uintptr base,uintptr npage)

{
  runtime_heapArena *prVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  long in_FS_OFFSET;
  bool bVar5;
  string s;
  runtime_mheap *h_spill;
  uintptr base_spill;
  uintptr npage_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  bVar4 = false;
  do {
    if (npage_spill == 0) {
      return bVar4;
    }
    uVar3 = base_spill + 0x800000000000 >> 0x1a;
    if (0x3fffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    prVar1 = (*h_spill->arenas[0])[uVar3];
    uVar3 = *(ulong *)("*norm.reorderBuffer" + (long)(prVar1->bitmap + 0xb));
    s.len = base_spill & 0x3ffffff;
    uVar2 = npage_spill * 0x2000 + s.len;
    bVar4 = (bool)(s.len < uVar3 | bVar4);
    if (0x4000000 < uVar2) {
      uVar2 = 0x4000000;
    }
    while (uVar3 < uVar2) {
      LOCK();
      bVar5 = uVar3 == *(ulong *)("*norm.reorderBuffer" + (long)(prVar1->bitmap + 0xb));
      if (bVar5) {
        *(ulong *)("*norm.reorderBuffer" + (long)(prVar1->bitmap + 0xb)) = uVar2;
      }
      UNLOCK();
      if (bVar5) break;
      uVar3 = *(ulong *)("*norm.reorderBuffer" + (long)(prVar1->bitmap + 0xb));
      if ((uVar3 <= uVar2) && (s.len < uVar3)) {
        s.str = &DAT_002a9a33;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
    }
                    /* Unresolved local var: runtime.heapArena * ha@[???]
                       Unresolved local var: uintptr zeroedBase@[???]
                       Unresolved local var: uintptr arenaBase@[???]
                       Unresolved local var: uintptr arenaLimit@[???] */
    base_spill = (uVar2 - s.len) + base_spill;
    npage_spill = npage_spill - (uVar2 - s.len >> 0xd);
  } while( true );
}

