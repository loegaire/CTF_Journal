
/* WARNING: Unknown calling convention */

void runtime_handoffp(runtime_p *_p_)

{
  int iVar1;
  uint uVar2;
  runtime_workbuf *prVar3;
  runtime_p *prVar4;
  runtime_p *extraout_RAX;
  runtime_p *prVar5;
  long in_FS_OFFSET;
  bool bVar6;
  bool bVar7;
  runtime_p *_p__spill;
  
                    /* Unresolved local var: int64 when@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    _p_ = extraout_RAX;
  }
  do {
    uVar2 = _p__spill->runqtail;
    prVar5 = (runtime_p *)(ulong)_p__spill->runqtail;
  } while (_p__spill->runqtail != uVar2);
  if (((uVar2 != _p__spill->runqhead) || (_p__spill->runnext != 0)) || (runtime_sched.runqsize != 0)
     ) {
    runtime_startm(_p_,SUB41(uVar2,0));
    return;
  }
  if (runtime_gcBlackenEnabled != 0) {
    prVar3 = (_p__spill->gcw).wbuf1;
    if ((prVar3 == (runtime_workbuf *)0x0) ||
       (((prVar3->workbufhdr).nobj == 0 && ((((_p__spill->gcw).wbuf2)->workbufhdr).nobj == 0)))) {
      if (runtime_work.full == 0) {
        if (runtime_work.markrootNext < runtime_work.markrootJobs) {
          prVar4 = (runtime_p *)0x1;
        }
        else {
          prVar4 = (runtime_p *)0x0;
        }
      }
      else {
        prVar4 = (runtime_p *)0x1;
      }
    }
    else {
      prVar4 = (runtime_p *)0x1;
    }
    if ((char)prVar4 != '\0') {
      runtime_startm(prVar4,SUB41(uVar2,0));
      return;
    }
  }
  if (runtime_sched.nmspinning + runtime_sched.npidle == 0) {
    prVar4 = (runtime_p *)0x0;
    LOCK();
    bVar6 = runtime_sched.nmspinning == 0;
    if (bVar6) {
      runtime_sched.nmspinning = 1;
    }
    else {
      prVar4 = (runtime_p *)(ulong)runtime_sched.nmspinning;
    }
    UNLOCK();
    if (bVar6) {
      runtime_startm(prVar4,true);
      return;
    }
  }
  runtime_lock2(&runtime_sched.lock);
  if (runtime_sched.gcwaiting != 0) {
    _p__spill->status = 3;
    iVar1 = runtime_sched.stopwait + -1;
    bVar6 = runtime_sched.stopwait == 1;
    runtime_sched.stopwait = iVar1;
    if (bVar6) {
      runtime_notewakeup(&runtime_sched.stopnote);
    }
    runtime_unlock2(&runtime_sched.lock);
    return;
  }
  if (_p__spill->runSafePointFn == 0) {
    bVar6 = false;
  }
  else {
    LOCK();
    bVar6 = _p__spill->runSafePointFn == 1;
    if (bVar6) {
      _p__spill->runSafePointFn = 0;
    }
    UNLOCK();
  }
  if (bVar6 != false) {
    (**runtime_sched.safePointFn)(prVar5);
    iVar1 = runtime_sched.safePointWait + -1;
    bVar7 = runtime_sched.safePointWait == 1;
    runtime_sched.safePointWait = iVar1;
    if (bVar7) {
      runtime_notewakeup(&runtime_sched.safePointNote);
    }
  }
  if (runtime_sched.runqsize != 0) {
    runtime_unlock2(&runtime_sched.lock);
    runtime_startm(_p__spill,bVar6);
    return;
  }
  if ((runtime_sched.npidle == runtime_gomaxprocs - 1U) && (runtime_sched.lastpoll != 0)) {
    runtime_unlock2(&runtime_sched.lock);
    runtime_startm(_p__spill,bVar6);
    return;
  }
  prVar5 = (runtime_p *)_p__spill->timer0When;
  prVar4 = (runtime_p *)_p__spill->timerModifiedEarliest;
  if ((prVar5 != (runtime_p *)0x0) &&
     ((prVar4 == (runtime_p *)0x0 || ((long)prVar5 <= (long)prVar4)))) {
    prVar4 = prVar5;
  }
  runtime_pidleput(prVar5);
  runtime_unlock2(&runtime_sched.lock);
  if (prVar4 != (runtime_p *)0x0) {
    runtime_wakeNetPoller((int64)prVar4);
  }
  return;
}

