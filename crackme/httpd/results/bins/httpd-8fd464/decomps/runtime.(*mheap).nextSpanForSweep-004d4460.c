
/* WARNING: Removing unreachable block (ram,0x004d4588) */
/* WARNING: Removing unreachable block (ram,0x004d45c2) */
/* WARNING: Removing unreachable block (ram,0x004d45a7) */
/* WARNING: Removing unreachable block (ram,0x004d456d) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mheap).nextSpanForSweep(runtime.mheap * h, runtime.mspan
   * ~r0) */

runtime_mspan * runtime___mheap__nextSpanForSweep(runtime_mheap *h)

{
  uint uVar1;
  runtime_sweepClass rVar2;
  ulong uVar3;
  ulong uVar4;
  runtime_mheap *extraout_RAX;
  uint uVar5;
  long in_FS_OFFSET;
  runtime_mheap *h_spill;
  runtime_mspan *local_18;
  
                    /* Unresolved local var: uint32 sg@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    h = extraout_RAX;
  }
  uVar1 = h_spill->sweepgen;
  uVar5 = runtime_sweep.centralIndex;
                    /* Unresolved local var: runtime.sweepClass sc@[???] */
  while( true ) {
    rVar2 = runtime_sweep.centralIndex;
    if (0x10f < uVar5) {
      if (runtime_sweep.centralIndex != 0xffffffff) {
        LOCK();
        runtime_sweep.centralIndex = 0xffffffff;
        h = (runtime_mheap *)(ulong)rVar2;
        UNLOCK();
      }
      return (runtime_mspan *)h;
    }
    uVar3 = (ulong)(uVar5 >> 1 & 0xff);
    if (0x87 < uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if ((uVar5 & 1) == 0) {
      uVar4 = (ulong)-((uVar1 >> 1 & 1) - 1);
      if (1 < uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      runtime___spanSet__pop(h_spill->central[uVar3].mcentral.full + uVar4);
    }
    else {
      uVar4 = (ulong)-((uVar1 >> 1 & 1) - 1);
      if (1 < uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      runtime___spanSet__pop(h_spill->central[uVar3].mcentral.partial + uVar4);
    }
    if (local_18 != (runtime_mspan *)0x0) break;
    uVar5 = uVar5 + 1;
    h = (runtime_mheap *)0x0;
  }
  if (runtime_sweep.centralIndex < uVar5) {
    LOCK();
    local_18 = (runtime_mspan *)(ulong)runtime_sweep.centralIndex;
    UNLOCK();
    runtime_sweep.centralIndex = uVar5;
  }
  return local_18;
}

