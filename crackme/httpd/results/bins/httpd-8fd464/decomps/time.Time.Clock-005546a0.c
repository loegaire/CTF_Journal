
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.Clock(time.Time t, int hour, int min, int sec) */

multireturn_int_int_int_ time_Time_Clock(time_Time t)

{
  ulong uVar1;
  time_Location *ptVar2;
  long in_FS_OFFSET;
  time_Time t_00;
  multireturn_int_int_int_ mVar3;
  time_Time t_spill;
  undefined8 local_10;
  
  ptVar2 = t.loc;
  t_00.ext = t.ext;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  t_00.wall = (uint64)t_spill.loc;
  t_00.loc = ptVar2;
  time_Time_abs(t_00);
  uVar1 = (local_10 % 0x15180) % 0xe10;
  mVar3.hour = ((long)(SUB168(SEXT816(-0x7777777777777777) * SEXT816((long)uVar1),8) + uVar1) >> 5)
               * 0x3c;
  mVar3.min = t_00.ext;
  mVar3.sec = 0;
  return mVar3;
}

