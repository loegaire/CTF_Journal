
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_entersyscall_gcwait(void)

{
  int iVar1;
  uint uVar2;
  runtime_p *pp;
  runtime_p *extraout_RAX;
  runtime_p *pp_00;
  long in_FS_OFFSET;
  bool bVar3;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.p * _p_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  pp = *(runtime_p **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xe8);
  runtime_lock2((runtime_mutex *)pp);
  if (runtime_sched.stopwait < 1) {
    bVar3 = false;
    pp_00 = extraout_RAX;
  }
  else {
    pp_00 = (runtime_p *)0x2;
    LOCK();
    uVar2 = pp->status;
    bVar3 = uVar2 == 2;
    if (bVar3) {
      pp->status = 3;
    }
    else {
      pp_00 = (runtime_p *)(ulong)uVar2;
    }
    UNLOCK();
  }
  if (bVar3) {
    if (runtime_trace.enabled != false) {
      runtime_traceGoSysBlock(pp_00);
      runtime_traceProcStop(pp);
    }
    pp->syscalltick = pp->syscalltick + 1;
    iVar1 = runtime_sched.stopwait + -1;
    bVar3 = runtime_sched.stopwait == 1;
    runtime_sched.stopwait = iVar1;
    if (bVar3) {
      runtime_notewakeup(&runtime_sched.stopnote);
    }
  }
  runtime_unlock2(&runtime_sched.lock);
  return;
}

