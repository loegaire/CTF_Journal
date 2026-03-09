
/* WARNING: Unknown calling convention */

void runtime___mheap__setSpans(runtime_mheap *h,uintptr base,uintptr npage,runtime_mspan *s)

{
  ulong uVar1;
  ulong uVar2;
  runtime_heapArena *prVar3;
  ulong uVar4;
  runtime_mheap *h_spill;
  uintptr base_spill;
  uintptr npage_spill;
  runtime_mspan *s_spill;
  
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
  uVar1 = base_spill + 0x800000000000 >> 0x1a;
  if (0x3fffff < uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  prVar3 = (*h_spill->arenas[0])[uVar1];
                    /* Unresolved local var: uintptr n@[???] */
  uVar1 = 0;
  do {
    if (npage_spill <= uVar1) {
      return;
    }
    uVar4 = (base_spill >> 0xd) + uVar1 & 0x1fff;
    if (uVar4 == 0) {
      uVar2 = uVar1 * 0x2000 + base_spill + 0x800000000000 >> 0x1a;
      if (0x3fffff < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      prVar3 = (*h_spill->arenas[0])[uVar2];
    }
                    /* Unresolved local var: uintptr i@[???] */
    prVar3->spans[uVar4] = s_spill;
    uVar1 = uVar1 + 1;
  } while( true );
}

