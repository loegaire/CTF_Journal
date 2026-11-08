
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.vdsoClockGettime(int32 clockID, runtime.bintime ~r1) */

runtime_bintime runtime_vdsoClockGettime(int32 clockID)

{
  uint64 unaff_RBX;
  runtime_bintime rVar1;
  runtime_bintime rVar2;
  runtime_bintime rVar3;
  int32 clockID_spill;
  int64 local_18;
  
  if ((runtime_timekeepSharedPage == (runtime_vdsoTimekeep *)0x0) ||
     (runtime_timekeepSharedPage->ver != 1)) {
    rVar3.frac = unaff_RBX;
    rVar3.sec = runtime_zeroBintime.sec;
    return rVar3;
  }
  if ((clockID_spill != 0) && (clockID_spill != 4)) {
    rVar1.frac = unaff_RBX;
    rVar1.sec = runtime_zeroBintime.sec;
    return rVar1;
  }
  rVar1 = runtime_binuptime(SUB41(clockID_spill,0));
  rVar2.frac = rVar1.frac;
  rVar2.sec = local_18;
  return rVar2;
}

