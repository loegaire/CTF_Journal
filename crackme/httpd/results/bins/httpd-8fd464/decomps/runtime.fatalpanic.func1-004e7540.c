
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_fatalpanic_func1(void)

{
  runtime_g *gp;
  undefined1 *puVar1;
  runtime__panic *p;
  uintptr sp;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  undefined1 local_50;
  undefined1 local_38;
  
                    /* Unresolved local var: runtime._panic * msgs@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: bool * &docrash@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  sp = *(uintptr *)(in_RDX + 0x18);
  gp = *(runtime_g **)(in_RDX + 0x20);
  puVar1 = *(undefined1 **)(in_RDX + 0x28);
  p = *(runtime__panic **)(in_RDX + 8);
  runtime_startpanic_m();
  if ((local_50 != '\0') && (p != (runtime__panic *)0x0)) {
    LOCK();
    sp = (uintptr)runtime_runningPanicDefers;
    UNLOCK();
    runtime_runningPanicDefers = runtime_runningPanicDefers - 1;
    runtime_printpanics(p);
  }
  runtime_dopanic_m(gp,(uintptr)gp,sp);
  *puVar1 = local_38;
  return;
}

