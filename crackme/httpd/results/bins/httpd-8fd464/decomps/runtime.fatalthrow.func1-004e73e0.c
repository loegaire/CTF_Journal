
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_fatalthrow_func1(void)

{
  runtime_g *gp;
  runtime_g *sp;
  long in_RDX;
  long extraout_RDX;
  uintptr unaff_RBX;
  long in_FS_OFFSET;
  undefined1 local_28;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uintptr sp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  gp = *(runtime_g **)(in_RDX + 0x18);
  sp = gp;
  runtime_startpanic_m();
  runtime_dopanic_m(gp,unaff_RBX,(uintptr)sp);
  if (local_28 != '\0') {
    runtime_crash();
  }
  runtime_exit();
  return;
}

