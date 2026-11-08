
/* WARNING: Unknown calling convention */

void runtime_mput(runtime_m *mp)

{
  long in_FS_OFFSET;
  runtime_m *mp_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mp_spill->schedlink = runtime_sched.midle;
  runtime_sched.midle = (runtime_muintptr)mp_spill;
  runtime_sched.nmidle = runtime_sched.nmidle + 1;
  runtime_checkdead();
  return;
}

