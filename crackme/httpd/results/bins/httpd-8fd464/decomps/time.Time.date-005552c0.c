
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.date(time.Time t, bool full, int year, time.Month month,
   int day, int yday) */

multireturn_int_time_Month_int_int_ time_Time_date(time_Time t,bool full)

{
  time_Location *ptVar1;
  long in_FS_OFFSET;
  time_Time t_00;
  multireturn_int_time_Month_int_int_ mVar2;
  time_Time t_spill;
  bool full_spill;
  undefined8 local_20;
  undefined8 local_10;
  
  ptVar1 = t.loc;
  t_00.ext = t.ext;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  t_00.wall = (uint64)t_spill.loc;
  t_00.loc = ptVar1;
  time_Time_abs(t_00);
  mVar2 = time_absDate((ulong)full_spill,t.ext._0_1_);
  mVar2.month = local_10;
  mVar2.year = (int)t_spill.loc;
  mVar2.day = local_20;
  return mVar2;
}

