
/* WARNING: Removing unreachable block (ram,0x004d1b87) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void
   runtime.(*gcControllerState).findRunnableGCWorker(runtime.gcControllerState * c, runtime.p * _p_,
   runtime.g * ~r1) */

runtime_g *
runtime___gcControllerState__findRunnableGCWorker(runtime_gcControllerState *c,runtime_p *_p_)

{
  float64 *pfVar1;
  runtime_workbuf *prVar2;
  runtime_g *prVar3;
  runtime_gcControllerState *node;
  runtime_g *prVar4;
  long lVar5;
  runtime_g *extraout_RAX;
  runtime_g *extraout_RAX_00;
  runtime_lfstack *head;
  long in_FS_OFFSET;
  bool bVar6;
  string s;
  runtime_gcControllerState *c_spill;
  runtime_p *_p__spill;
  long local_28;
  
                    /* Unresolved local var: runtime.gcBgMarkWorkerNode * node@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_gcBlackenEnabled == 0) {
    s.len = (int)_p_;
    s.str = &DAT_002aa0f8;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  if (((_p__spill == (runtime_p *)0x0) ||
      (prVar2 = (_p__spill->gcw).wbuf1, prVar2 == (runtime_workbuf *)0x0)) ||
     (((prVar2->workbufhdr).nobj == 0 && ((((_p__spill->gcw).wbuf2)->workbufhdr).nobj == 0)))) {
    if (runtime_work.full == 0) {
      if (runtime_work.markrootNext < runtime_work.markrootJobs) {
        prVar4 = (runtime_g *)0x1;
      }
      else {
        prVar4 = (runtime_g *)0x0;
      }
    }
    else {
      prVar4 = (runtime_g *)0x1;
    }
  }
  else {
    prVar4 = (runtime_g *)0x1;
  }
  if ((char)prVar4 == '\0') {
    return prVar4;
  }
  if (runtime_gcBgMarkWorkerPool == 0) {
    head = (runtime_lfstack *)0x0;
  }
  else {
    head = (runtime_lfstack *)(((long)runtime_gcBgMarkWorkerPool >> 0x13) << 3);
    LOCK();
    UNLOCK();
    prVar4 = (runtime_g *)runtime_gcBgMarkWorkerPool;
    runtime_gcBgMarkWorkerPool = *head;
  }
  if (head == (runtime_lfstack *)0x0) {
    return prVar4;
  }
  do {
    prVar3 = (runtime_g *)c_spill->dedicatedMarkWorkersNeeded;
    if ((long)prVar3 < 1) break;
    LOCK();
    prVar4 = (runtime_g *)c_spill->dedicatedMarkWorkersNeeded;
    bVar6 = prVar3 == prVar4;
    if (bVar6) {
      c_spill->dedicatedMarkWorkersNeeded = (int64)((long)&prVar3[-1].gcAssistBytes + 7);
      prVar4 = prVar3;
    }
    UNLOCK();
  } while (!bVar6);
  if ((long)prVar3 < 1) {
    if (((double)c_spill->fractionalUtilizationGoal == 0.0) &&
       (!NAN((double)c_spill->fractionalUtilizationGoal))) {
      runtime___lfstack__push((runtime_lfstack *)prVar4,(runtime_lfnode *)c_spill);
      return extraout_RAX_00;
    }
    runtime_nanotime1();
                    /* Unresolved local var: int64 delta@[???] */
    lVar5 = local_28 - c_spill->markStartTime;
    if ((0 < lVar5) &&
       (node = (runtime_gcControllerState *)_p__spill->gcFractionalMarkTime,
       pfVar1 = &c_spill->fractionalUtilizationGoal, c_spill = node,
       (double)*pfVar1 < (double)(long)node / (double)lVar5)) {
      runtime___lfstack__push(head,(runtime_lfnode *)node);
      return extraout_RAX;
    }
    _p__spill->gcMarkWorkerMode = 2;
  }
  else {
    _p__spill->gcMarkWorkerMode = 1;
  }
  prVar4 = (runtime_g *)head[2];
  runtime_casgstatus(prVar4,(uint32)c_spill,4);
  if (runtime_trace.enabled != false) {
    runtime_traceGoUnpark(prVar4,(int)c_spill);
  }
  return prVar4;
}

