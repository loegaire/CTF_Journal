
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.binuptime(bool abs, runtime.bintime bt) */

runtime_bintime runtime_binuptime(bool abs)

{
  uint uVar1;
  int iVar2;
  runtime_vdsoTimekeep *prVar3;
  ulong uVar4;
  runtime_vdsoTimehands *th;
  ulong uVar5;
  runtime_bintime rVar6;
  runtime_bintime rVar7;
  runtime_bintime rVar8;
  multireturn_uint32_bool__conflict mVar9;
  bool abs_spill;
  long lStack0000000000000010;
  ulong uStack0000000000000018;
  int local_28;
  char local_24;
  
  prVar3 = runtime_timekeepSharedPage;
  lStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  do {
    if (runtime_timekeepSharedPage->enabled == 0) {
      rVar8.frac = (uint64)runtime_timekeepSharedPage;
      rVar8.sec = runtime_zeroBintime.sec;
      return rVar8;
    }
    uVar1 = runtime_timekeepSharedPage->current;
    uVar4 = (ulong)uVar1;
    if (3 < uVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    th = (runtime_vdsoTimehands *)(uVar4 * 0x58);
    iVar2 = *(int *)((long)prVar3 + (long)th + 0x14);
    uStack0000000000000018 = *(ulong *)((long)(prVar3 + 3) + (long)th);
    lStack0000000000000010 = *(long *)((long)(prVar3 + 2) + uVar4 * 0x58 + 8);
                    /* Unresolved local var: uint32 tc@[???] */
    mVar9 = runtime___vdsoTimehands__getTimecounter(th);
    rVar7.frac._1_7_ = (undefined7)((ulong)((long)prVar3 + (long)th + 0x10) >> 8);
    rVar7.frac._0_1_ = mVar9.~r1;
    if (local_24 == '\0') {
      rVar7.sec = runtime_zeroBintime.sec;
      return rVar7;
    }
                    /* Unresolved local var: uint32 delta@[???] */
    rVar6.sec = (ulong)(local_28 - *(int *)((long)(prVar3 + 2) + (long)th) &
                       *(uint *)((long)(prVar3 + 2) + uVar4 * 0x58 + 4));
                    /* Unresolved local var: uint64 u@[???] */
    uVar5 = *(long *)((long)(prVar3 + 1) + uVar4 * 0x58 + 8) * rVar6.sec + uStack0000000000000018;
    if (uVar5 < uStack0000000000000018) {
      lStack0000000000000010 = lStack0000000000000010 + 1;
    }
    uStack0000000000000018 = uVar5;
    if (abs_spill) {
                    /* Unresolved local var: uint64 u@[???] */
      uStack0000000000000018 = *(long *)((long)(prVar3 + 4) + (long)th) + uVar5;
      if (uStack0000000000000018 < uVar5) {
        lStack0000000000000010 = lStack0000000000000010 + 1;
      }
      lStack0000000000000010 =
           lStack0000000000000010 + *(long *)((long)(prVar3 + 3) + uVar4 * 0x58 + 8);
    }
  } while (((runtime_timekeepSharedPage->current != uVar1) || (iVar2 == 0)) ||
          (*(int *)((long)(prVar3 + 1) + uVar4 * 0x58 + 4) != iVar2));
  rVar6.frac = (uint64)prVar3;
  return rVar6;
}

