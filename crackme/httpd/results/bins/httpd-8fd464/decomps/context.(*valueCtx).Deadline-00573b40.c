
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*valueCtx).Deadline(time.Time deadline, bool ok) */

multireturn_time_Time_bool_ context___valueCtx__Deadline(void)

{
  long *plVar1;
  undefined1 in_DIL;
  long in_FS_OFFSET;
  multireturn_time_Time_bool_ mVar2;
  long *in_stack_00000008;
  long local_30;
  undefined8 local_28;
  undefined8 local_18;
  byte local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((long **)*plVar1 == &stack0x00000008)) {
    *plVar1 = (long)&local_30;
  }
  local_30 = in_stack_00000008[1];
  (**(code **)(*in_stack_00000008 + 0x18))();
  mVar2.deadline.loc = (ulong)local_10;
  mVar2.deadline.ext = local_18;
  mVar2.deadline.wall = local_28;
  mVar2.ok = (bool)in_DIL;
  return mVar2;
}

