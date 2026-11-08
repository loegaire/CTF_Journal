
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*timerCtx).Deadline(context.timerCtx * c, time.Time
   deadline, bool ok) */

multireturn_time_Time_bool_ context___timerCtx__Deadline(context_timerCtx *c)

{
  undefined8 unaff_RBX;
  undefined1 in_DIL;
  multireturn_time_Time_bool_ mVar1;
  context_timerCtx *c_spill;
  
  mVar1.deadline.ext = unaff_RBX;
  mVar1.deadline.wall = (uint64)(c_spill->deadline).loc;
  mVar1.ok = (bool)in_DIL;
  mVar1.deadline.loc = (time_Location *)(c_spill->deadline).wall;
  return mVar1;
}

