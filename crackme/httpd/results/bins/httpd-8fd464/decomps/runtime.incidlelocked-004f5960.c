
/* WARNING: Unknown calling convention */

void runtime_incidlelocked(int32 v)

{
  long in_FS_OFFSET;
  int32 v_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_sched.lock);
  runtime_sched.nmidlelocked = runtime_sched.nmidlelocked + v_spill;
  if (0 < v_spill) {
    runtime_checkdead();
  }
  runtime_unlock2(&runtime_sched.lock);
  return;
}

