
/* WARNING: Unknown calling convention */

void runtime___p__destroy(runtime_p *pp)

{
  runtime_guintptr rVar1;
  runtime_mutex *l;
  runtime_p *extraout_RAX;
  runtime_p *extraout_RAX_00;
  long lVar2;
  runtime_p *prVar3;
  long extraout_RAX_01;
  uint uVar4;
  runtime_p *extraout_RDX;
  uintptr unaff_RBX;
  int in_RDI;
  long in_FS_OFFSET;
  ___runtime_timer timers;
  runtime_p *pp_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  while (pp_spill->runqhead != pp_spill->runqtail) {
                    /* Unresolved local var: runtime.g * gp@[???] */
    uVar4 = pp_spill->runqtail - 1;
    pp_spill->runqtail = uVar4;
    rVar1 = pp_spill->runq[uVar4 & 0xff];
    *(runtime_guintptr *)(rVar1 + 0xa0) = runtime_sched.runq.head;
    if (runtime_sched.runq.tail == 0) {
      runtime_sched.runq.tail = rVar1;
    }
    runtime_sched.runqsize = runtime_sched.runqsize + 1;
    runtime_sched.runq.head = rVar1;
  }
  rVar1 = pp_spill->runnext;
  if (rVar1 != 0) {
    *(runtime_guintptr *)(rVar1 + 0xa0) = runtime_sched.runq.head;
    if (runtime_sched.runq.tail == 0) {
      runtime_sched.runq.tail = rVar1;
    }
    runtime_sched.runqsize = runtime_sched.runqsize + 1;
    runtime_sched.runq.head = rVar1;
    pp_spill->runnext = 0;
  }
  if (0 < (pp_spill->timers).len) {
                    /* Unresolved local var: runtime.p * plocal@[???] */
    l = *(runtime_mutex **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
    runtime_lock2(l);
    runtime_lock2((runtime_mutex *)pp_spill);
    unaff_RBX = (pp_spill->timers).cap;
    timers.len = (int)(pp_spill->timers).array;
    timers.array = (runtime_timer **)unaff_RBX;
    timers.cap = in_RDI;
    runtime_moveTimers(pp_spill,timers);
    (pp_spill->timers).len = 0;
    (pp_spill->timers).cap = 0;
    if (runtime_writeBarrier._0_4_ == 0) {
      (pp_spill->timers).array = (runtime_timer **)0x0;
      prVar3 = pp_spill;
    }
    else {
      runtime_gcWriteBarrierCX();
      prVar3 = extraout_RAX;
    }
    prVar3->numTimers = 0;
    prVar3->deletedTimers = 0;
    LOCK();
    prVar3->timer0When = 0;
    UNLOCK();
    runtime_unlock2((runtime_mutex *)prVar3);
    runtime_unlock2(l + 0x4db);
  }
  if (runtime_gcphase != 0) {
    runtime_wbBufFlush1(pp_spill);
    runtime___gcWork__dispose((runtime_gcWork *)pp_spill);
  }
  runtime_memclrHasPointers(pp_spill,unaff_RBX);
  (pp_spill->sudogcache).len = 0;
  (pp_spill->sudogcache).cap = 0x80;
  if (runtime_writeBarrier._0_4_ == 0) {
    (pp_spill->sudogcache).array = pp_spill->sudogbuf;
    prVar3 = pp_spill;
  }
  else {
    runtime_gcWriteBarrierCX();
    prVar3 = extraout_RAX_00;
  }
                    /* Unresolved local var: int i@[???] */
  for (lVar2 = 0; lVar2 < 5; lVar2 = lVar2 + 1) {
    runtime_memclrHasPointers(prVar3,(uintptr)(prVar3->deferpoolbuf + lVar2));
    pp_spill->deferpool[lVar2].len = 0;
    pp_spill->deferpool[lVar2].cap = 0x20;
    if (runtime_writeBarrier._0_4_ == 0) {
      pp_spill->deferpool[lVar2].array = pp_spill->deferpoolbuf[lVar2];
      prVar3 = pp_spill;
    }
    else {
      runtime_gcWriteBarrierBX();
      lVar2 = extraout_RAX_01;
      prVar3 = extraout_RDX;
    }
  }
  runtime_systemstack();
  runtime_freemcache((runtime_mcache *)pp_spill);
  pp_spill->mcache = (runtime_mcache *)0x0;
  runtime_gfpurge(pp_spill);
  runtime_traceProcFree(pp_spill);
  pp_spill->gcAssistTime = 0;
  pp_spill->status = 4;
  return;
}

