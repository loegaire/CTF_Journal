
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.GOMAXPROCS(int n, int ~r1) */

int runtime_GOMAXPROCS(int n)

{
  runtime_mutex *l;
  int unaff_RBX;
  long in_FS_OFFSET;
  string reason;
  int n_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_sched.lock);
  l = (runtime_mutex *)(long)runtime_gomaxprocs;
  runtime_unlock2(l);
  if ((0 < n_spill) && ((runtime_mutex *)n_spill != l)) {
    reason.len = unaff_RBX;
    reason.str = &DAT_0028eeb8;
    runtime_stopTheWorldGC(reason);
    runtime_newprocs = (int32)n_spill;
    runtime_startTheWorldGC();
    return (int)l;
  }
  return n_spill;
}

