
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.checkTimersNoP([]*runtime.p allpSnapshot, runtime.pMask
   timerpMaskSnapshot, int64 pollUntil, int64 ~r3) */

int64 runtime_checkTimersNoP
                (___runtime_p allpSnapshot,runtime_pMask timerpMaskSnapshot,int64 pollUntil)

{
  uint64 uVar1;
  ulong uVar2;
  ulong uVar3;
  uint64 uVar4;
  ___runtime_p allpSnapshot_spill;
  runtime_pMask timerpMaskSnapshot_spill;
  int64 pollUntil_spill;
  
                    /* Unresolved local var: int id@[???]
                       Unresolved local var: runtime.p * p2@[???] */
  uVar2 = 0;
  while( true ) {
    if (allpSnapshot_spill.len <= (long)uVar2) {
      return uVar2;
    }
    uVar3 = uVar2 >> 5 & 0x7ffffff;
    if ((ulong)timerpMaskSnapshot_spill.len <= uVar3) break;
    uVar4 = pollUntil_spill;
    if ((timerpMaskSnapshot_spill.array[uVar3] >> ((uint)uVar2 & 0x1f) & 1) != 0) {
                    /* Unresolved local var: int64 next@[???]
                       Unresolved local var: int64 nextAdj@[???] */
      uVar1 = allpSnapshot_spill.array[uVar2]->timer0When;
      uVar4 = allpSnapshot_spill.array[uVar2]->timerModifiedEarliest;
      if ((uVar1 != 0) && ((uVar4 == 0 || ((long)uVar1 <= (long)uVar4)))) {
        uVar4 = uVar1;
      }
      if ((uVar4 == 0) || ((pollUntil_spill != 0 && (pollUntil_spill <= (long)uVar4)))) {
        uVar4 = pollUntil_spill;
      }
    }
    pollUntil_spill = uVar4;
    uVar2 = uVar2 + 1;
                    /* Unresolved local var: int64 w@[???] */
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

