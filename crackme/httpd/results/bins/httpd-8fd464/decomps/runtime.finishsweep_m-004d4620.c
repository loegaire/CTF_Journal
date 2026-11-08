
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_finishsweep_m(void)

{
  uint32 uVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_38;
  
                    /* Unresolved local var: uint32 sg@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  while (runtime_sweepone(), uVar1 = runtime_mheap_.sweepgen, local_38 != -1) {
    runtime_sweep.npausesweep = runtime_sweep.npausesweep + 1;
  }
  lVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  while( true ) {
    if (0x87 < lVar2) {
      runtime_wakeScavenger();
      runtime_nextMarkBitArenaEpoch();
      return;
    }
    uVar3 = (ulong)-((uVar1 >> 1 & 1) - 1);
    if (1 < uVar3) break;
    runtime___spanSet__reset((runtime_spanSet *)runtime_mheap_.central);
    runtime___spanSet__reset((runtime_spanSet *)(lVar2 * 0xc0 + 0x7f2de0 + uVar3 * 0x28));
    lVar2 = lVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

