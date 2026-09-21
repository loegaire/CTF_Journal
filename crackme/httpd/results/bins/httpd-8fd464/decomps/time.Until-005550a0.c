
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Until(time.Time t, time.Duration ~r1) */

time_Duration time_Until(time_Time t)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  time_Location *in_R8;
  long in_FS_OFFSET;
  time_Time t_00;
  time_Time u;
  time_Time t_spill;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_10;
  
                    /* Unresolved local var: time.Time now@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((long)t_spill.wall < 0) {
    runtime_nanotime();
    local_38 = (long)local_40 - time_startNano;
    local_40 = (time_Location *)0x8000000000000000;
  }
  else {
    time_Now();
  }
  t_00.ext = (int64)t_spill.loc;
  t_00.wall = local_38;
  t_00.loc = local_40;
  u.ext = in_RSI;
  u.wall = in_RDI;
  u.loc = in_R8;
  time_Time_Sub(t_00,u);
  return local_10;
}

