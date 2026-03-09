
/* WARNING: Unknown calling convention */

void time_startTimer(runtime_timer *t)

{
  long in_FS_OFFSET;
  runtime_timer *t_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_addtimer(t_spill);
  return;
}

