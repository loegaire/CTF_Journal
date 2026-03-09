
/* WARNING: Removing unreachable block (ram,0x004f05ba) */
/* WARNING: Removing unreachable block (ram,0x004f052b) */
/* WARNING: Removing unreachable block (ram,0x004f058f) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.checkIdleGCNoP(runtime.p * ~r0, runtime.g * ~r1) */

multireturn_runtime_p___runtime_g___ runtime_checkIdleGCNoP(void)

{
  undefined1 auVar1 [16];
  runtime_p *prVar2;
  runtime_p *extraout_RAX;
  runtime_p *extraout_RAX_00;
  runtime_lfstack *prVar3;
  runtime_g *unaff_RBX;
  long in_FS_OFFSET;
  multireturn_runtime_p___runtime_g___ mVar4;
  multireturn_runtime_p___runtime_g___ mVar5;
  multireturn_runtime_p___runtime_g___ mVar6;
  multireturn_runtime_p___runtime_g___ mVar7;
  
                    /* Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: runtime.gcBgMarkWorkerNode * node@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_gcBlackenEnabled == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = unaff_RBX;
    return (multireturn_runtime_p___runtime_g___)(auVar1 << 0x40);
  }
  if (runtime_work.full == 0) {
    if (runtime_work.markrootNext < runtime_work.markrootJobs) {
      prVar2 = (runtime_p *)0x1;
    }
    else {
      prVar2 = (runtime_p *)0x0;
    }
  }
  else {
    prVar2 = (runtime_p *)0x1;
  }
  if ((char)prVar2 != '\0') {
    runtime_lock2(&runtime_sched.lock);
    runtime_pidleget();
    prVar2 = (runtime_p *)&runtime_sched.lock;
    if (runtime_gcBlackenEnabled == 0) {
      runtime_pidleput((runtime_p *)&runtime_sched.lock);
      runtime_unlock2(&runtime_sched.lock);
      mVar4.~r1 = unaff_RBX;
      mVar4.~r0 = extraout_RAX;
      return mVar4;
    }
    if (runtime_gcBgMarkWorkerPool == 0) {
      prVar3 = (runtime_lfstack *)0x0;
    }
    else {
      prVar3 = (runtime_lfstack *)(((long)runtime_gcBgMarkWorkerPool >> 0x13) << 3);
      unaff_RBX = (runtime_g *)*prVar3;
      LOCK();
      UNLOCK();
      prVar2 = (runtime_p *)runtime_gcBgMarkWorkerPool;
      runtime_gcBgMarkWorkerPool = (runtime_lfstack)unaff_RBX;
    }
    if (prVar3 != (runtime_lfstack *)0x0) {
      runtime_unlock2(&runtime_sched.lock);
      mVar6.~r1 = unaff_RBX;
      mVar6.~r0 = (runtime_p *)prVar3[2];
      return mVar6;
    }
    runtime_pidleput(prVar2);
    runtime_unlock2(&runtime_sched.lock);
    mVar7.~r1 = unaff_RBX;
    mVar7.~r0 = extraout_RAX_00;
    return mVar7;
  }
  mVar5.~r1 = unaff_RBX;
  mVar5.~r0 = prVar2;
  return mVar5;
}

