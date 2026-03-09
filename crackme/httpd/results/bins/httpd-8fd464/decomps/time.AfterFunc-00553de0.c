
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.AfterFunc(time.Duration d, func() * * f, time.Timer * ~r2) */

time_Timer * time_AfterFunc(time_Duration d,func__ **f)

{
  time_Timer *extraout_RAX;
  long in_FS_OFFSET;
  time_Duration d_spill;
  func__ **f_spill;
  time_Timer *local_20;
  
                    /* Unresolved local var: time.Timer * t@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  time_when(d_spill);
  runtime_newobject((runtime__type *)local_20);
  (local_20->r).when = (int64)local_20;
  ((interface___ *)&(local_20->r).f)->_type = (runtime__type *)&PTR_time_goFunc_002b3b50;
  (local_20->r).arg._type = (runtime__type *)&DAT_002225e0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (local_20->r).arg.data = f_spill;
  }
  else {
    runtime_gcWriteBarrierCX();
    local_20 = extraout_RAX;
  }
  time_startTimer((runtime_timer *)local_20);
  return local_20;
}

