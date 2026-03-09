
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.AddDate(time.Time t, int years, int months, int days,
   time.Time ~r3) */

time_Time time_Time_AddDate(time_Time t,int years,int months,int days)

{
  time_Month hour;
  int in_R9;
  time_Location *in_R10;
  long in_FS_OFFSET;
  time_Time t_00;
  time_Time tVar1;
  time_Time tVar2;
  time_Time t_spill;
  int years_spill;
  int months_spill;
  int days_spill;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  
  tVar1.ext = t.ext;
                    /* Unresolved local var: int year@[???]
                       Unresolved local var: time.Month month@[???]
                       Unresolved local var: int day@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  tVar1.wall = t_spill.wall;
  tVar1.loc = (time_Location *)t_spill.ext;
  time_Time_date(tVar1,SUB81(years,0));
  t_00.ext = local_58;
  t_00.wall = t_spill.wall;
  t_00.loc = (time_Location *)t_spill.ext;
  hour = local_48;
  time_Time_Clock(t_00);
                    /* Unresolved local var: time.Location * l@[???] */
  if (t_spill.loc == (time_Location *)0x0) {
    t_spill.loc = time_UTC;
  }
  tVar1 = time_Date((int)t_spill.loc,local_48,(long)(int)((uint)t_spill.wall & 0x3fffffff),hour,
                    local_50,days,in_R9,in_R10);
  tVar2.ext = tVar1.ext;
  tVar2.wall = local_38;
  tVar2.loc = local_30;
  return tVar2;
}

