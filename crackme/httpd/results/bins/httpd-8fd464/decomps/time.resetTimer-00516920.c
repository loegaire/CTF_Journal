
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.resetTimer(runtime.timer * t, int64 when, bool ~r2) */

bool time_resetTimer(runtime_timer *t,int64 when)

{
  void *in_R8;
  uintptr in_R9;
  long in_FS_OFFSET;
  interface___ arg;
  runtime_timer *t_spill;
  int64 when_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  arg.data = in_R8;
  arg._type = (t_spill->arg).data;
  runtime_modtimer((runtime_timer *)when_spill,(int64)(t_spill->arg)._type,t_spill->period,
                   (func_interface_____uintptr_ **)t_spill->seq,arg,in_R9);
  return (bool)local_10;
}

