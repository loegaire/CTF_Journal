
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.now(int64 sec, int32 nsec, int64 mono) */

multireturn_int64_int32_int64_ time_now(void)

{
  long in_FS_OFFSET;
  multireturn_int64_int32_ mVar1;
  multireturn_int64_int32_int64_ mVar2;
  undefined8 local_28;
  undefined4 local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mVar1 = runtime_walltime();
  mVar2.nsec = mVar1.nsec;
  runtime_nanotime1();
  mVar2.sec = local_28;
  mVar2.mono._0_4_ = local_20;
  mVar2.mono._4_4_ = 0;
  return mVar2;
}

