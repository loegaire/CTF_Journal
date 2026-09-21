
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.walltime(int64 sec, int32 nsec) */

multireturn_int64_int32_ runtime_walltime(void)

{
  undefined1 auVar1 [12];
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  long in_FS_OFFSET;
  runtime_bintime rVar2;
  multireturn_int64_int32_ mVar3;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_RAX = extraout_RAX;
  }
  rVar2 = runtime_vdsoClockGettime((int32)in_RAX);
  mVar3.nsec = (int32)rVar2.frac;
  if ((runtime_zeroBintime.sec == CONCAT44(uStack_14,local_18)) &&
     (runtime_zeroBintime.frac == local_10)) {
    runtime_fallback_walltime();
    auVar1._4_4_ = mVar3.nsec;
    auVar1._0_4_ = uStack_1c;
    auVar1._8_4_ = 0;
    return (multireturn_int64_int32_)(auVar1 << 0x20);
  }
  mVar3.sec = (local_10 >> 0x20) * 1000000000 >> 0x20;
  return mVar3;
}

