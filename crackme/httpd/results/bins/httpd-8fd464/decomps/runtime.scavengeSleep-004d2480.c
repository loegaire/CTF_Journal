
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.scavengeSleep(int64 ns, int64 ~r1) */

int64 runtime_scavengeSleep(int64 ns)

{
  func_interface_____uintptr_ **lock;
  runtime_waitReason reason;
  runtime__type *traceskip;
  func_interface_____uintptr_ **f;
  uintptr in_R9;
  long in_FS_OFFSET;
  interface___ arg;
  int64 ns_spill;
  
                    /* Unresolved local var: int64 start@[???]
                       Unresolved local var: int64 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_scavenge.lock);
  runtime_nanotime1();
  reason = 0xc0;
  lock = (runtime_scavenge.timer)->f;
  traceskip = ((runtime_scavenge.timer)->arg)._type;
  f = ((runtime_scavenge.timer)->arg).data;
  arg.data = (void *)(runtime_scavenge.timer)->seq;
  arg._type = traceskip;
  runtime_modtimer((runtime_timer *)((long)&runtime_scavenge.lock.key + ns_spill),(int64)lock,
                   0x79fec0,f,arg,in_R9);
  runtime_scavenge.parked = true;
  runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)&runtime_scavenge,lock,reason,(uint8)f,
                 (int)traceskip);
  runtime_nanotime1();
  return -0x4ec520;
}

