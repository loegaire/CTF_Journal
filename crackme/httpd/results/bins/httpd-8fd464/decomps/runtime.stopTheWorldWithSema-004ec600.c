
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_stopTheWorldWithSema(void)

{
  uint32 uVar1;
  runtime_p **pprVar2;
  int iVar3;
  int32 iVar4;
  long lVar5;
  runtime_p *unaff_RBX;
  runtime_p *prVar6;
  long in_FS_OFFSET;
  bool bVar7;
  string s;
  string s_00;
  runtime_p *local_60;
  char local_50;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: string bad@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar5 = *(long *)(in_FS_OFFSET + -8);
  if (0 < *(int *)(*(long *)(lVar5 + 0x30) + 0x110)) {
    s_00.len = (int)unaff_RBX;
    s_00.str = (uint8 *)0x29ffcf;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  local_60 = (runtime_p *)&runtime_sched.lock;
  runtime_lock2(&runtime_sched.lock);
  runtime_sched.stopwait = runtime_gomaxprocs;
  LOCK();
  runtime_sched.gcwaiting = 1;
  UNLOCK();
  runtime_preemptall();
  *(undefined4 *)(*(long *)(*(long *)(lVar5 + 0x30) + 0xd8) + 4) = 3;
  iVar3 = runtime_allp.len;
  pprVar2 = runtime_allp.array;
  runtime_sched.stopwait = runtime_sched.stopwait + -1;
                    /* Unresolved local var: runtime.p * p@[???] */
  for (lVar5 = 0; lVar5 < iVar3; lVar5 = lVar5 + 1) {
    unaff_RBX = pprVar2[lVar5];
                    /* Unresolved local var: uint32 s@[???] */
    if (unaff_RBX->status == 2) {
      LOCK();
      uVar1 = unaff_RBX->status;
      bVar7 = uVar1 == 2;
      if (bVar7) {
        unaff_RBX->status = 3;
        uVar1 = 2;
      }
      UNLOCK();
      prVar6 = (runtime_p *)(ulong)uVar1;
    }
    else {
      bVar7 = false;
      prVar6 = (runtime_p *)pprVar2;
    }
    if (bVar7) {
      if (runtime_trace.enabled != false) {
        runtime_traceGoSysBlock(prVar6);
        runtime_traceProcStop(unaff_RBX);
        local_60 = unaff_RBX;
      }
      unaff_RBX->syscalltick = unaff_RBX->syscalltick + 1;
      runtime_sched.stopwait = runtime_sched.stopwait + -1;
    }
  }
  while (runtime_pidleget(), iVar4 = runtime_sched.stopwait, local_60 != (runtime_p *)0x0) {
                    /* Unresolved local var: runtime.p * p@[???] */
    local_60->status = 3;
    runtime_sched.stopwait = runtime_sched.stopwait + -1;
  }
  runtime_unlock2((runtime_mutex *)(ulong)(uint)runtime_sched.stopwait);
  if (0 < iVar4) {
    while (runtime_notetsleep(&runtime_sched.stopnote,(int64)unaff_RBX), local_50 == '\0') {
      runtime_preemptall();
    }
    runtime_sched.stopnote.key = 0;
  }
  if (runtime_sched.stopwait == 0) {
    prVar6 = (runtime_p *)0x0;
                    /* Unresolved local var: runtime.p * p@[???] */
    for (lVar5 = 0; unaff_RBX = prVar6, lVar5 < runtime_allp.len; lVar5 = lVar5 + 1) {
      if (runtime_allp.array[lVar5]->status != 3) {
        prVar6 = (runtime_p *)&DAT_0000002e;
      }
    }
  }
  else {
    prVar6 = (runtime_p *)&DAT_00000029;
  }
  if (runtime_freezing != 0) {
    runtime_lock2(&runtime_deadlock);
    runtime_lock2(&runtime_deadlock);
  }
  if (prVar6 == (runtime_p *)0x0) {
    return;
  }
  s.len = (int)unaff_RBX;
  s.str = (uint8 *)prVar6;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

