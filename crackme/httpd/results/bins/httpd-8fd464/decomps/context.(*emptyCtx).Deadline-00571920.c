
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*emptyCtx).Deadline(time.Time deadline, bool ok) */

multireturn_time_Time_bool_ context___emptyCtx__Deadline(void)

{
  undefined8 in_RAX;
  undefined8 in_RCX;
  undefined8 unaff_RBX;
  undefined1 in_DIL;
  multireturn_time_Time_bool_ mVar1;
  
  mVar1.deadline.ext = unaff_RBX;
  mVar1.deadline.wall = in_RAX;
  mVar1.ok = (bool)in_DIL;
  mVar1.deadline.loc = (time_Location *)in_RCX;
  return mVar1;
}

