
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.schedEnabled(runtime.g * gp, bool ~r1) */

bool runtime_schedEnabled(runtime_g *gp)

{
  runtime_g *extraout_RAX;
  bool unaff_BL;
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    gp = extraout_RAX;
  }
  if (runtime_sched.disable.user != false) {
    runtime_isSystemGoroutine(gp_spill,unaff_BL);
    return (bool)local_10;
  }
  return SUB81(gp,0);
}

