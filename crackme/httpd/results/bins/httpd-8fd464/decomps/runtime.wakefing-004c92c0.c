
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.wakefing(runtime.g * ~r0) */

runtime_g * runtime_wakefing(void)

{
  runtime_g *l;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * res@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_finlock);
  if ((runtime_fingwait == false) || (runtime_fingwake == false)) {
    l = (runtime_g *)0x0;
  }
  else {
    runtime_fingwait = false;
    runtime_fingwake = false;
    l = runtime_fing;
  }
  runtime_unlock2((runtime_mutex *)l);
  return l;
}

