
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.stopTimer(runtime.timer * t, bool ~r1) */

bool time_stopTimer(runtime_timer *t)

{
  long in_FS_OFFSET;
  runtime_timer *t_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_deltimer(t_spill);
  return (bool)local_10;
}

