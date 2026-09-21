
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.NewTimer(time.Duration d, time.Timer * ~r1) */

time_Timer * time_NewTimer(time_Duration d)

{
  void *extraout_RAX;
  time_Timer *extraout_RDX;
  int unaff_RBX;
  time_Timer *ptVar1;
  long in_FS_OFFSET;
  time_Duration d_spill;
  void *local_28;
  
                    /* Unresolved local var: chan_time.Time c@[???]
                       Unresolved local var: time.Timer * t@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_makechan((runtime_chantype *)&DAT_00222ee0,unaff_RBX);
  time_when((time_Duration)local_28);
  runtime_newobject((runtime__type *)0x1);
  ptVar1 = (time_Timer *)0x1;
  if (runtime_writeBarrier._0_4_ == 0) {
    pvRam0000000000000001 = local_28;
  }
  else {
    runtime_gcWriteBarrier();
    local_28 = extraout_RAX;
  }
  (ptVar1->r).when = 1;
  (ptVar1->r).f = (func_interface_____uintptr_ **)&PTR_time_sendTime_002b3b60;
  (ptVar1->r).arg._type = (runtime__type *)&DAT_00222ee0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (ptVar1->r).arg.data = local_28;
  }
  else {
    runtime_gcWriteBarrier();
    ptVar1 = extraout_RDX;
  }
  time_startTimer((runtime_timer *)&ptVar1->r);
  return ptVar1;
}

