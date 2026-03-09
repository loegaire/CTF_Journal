
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_dropm(void)

{
  runtime_g *gp;
  bool nilokay;
  uint32 unaff_EBX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.m * mnext@[???]
                       Unresolved local var: runtime.sigset sigmask@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  gp = *(runtime_g **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  runtime_casgstatus(gp,unaff_EBX,3);
  *(undefined1 *)(gp->runnableTime + 0xb2) = 0;
  LOCK();
  runtime_sched.ngsys = runtime_sched.ngsys + 1;
  UNLOCK();
  runtime_sigblock(SUB81(gp,0));
  runtime_unminitSignals();
  runtime_lockextra(nilokay);
  runtime_extraMCount = runtime_extraMCount + 1;
  gp->labels = (void *)0x600000003;
  runtime_setg();
  LOCK();
  UNLOCK();
  runtime_extram = (uintptr)gp;
  runtime_sigprocmask();
  return;
}

