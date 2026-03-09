
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_schedule(void)

{
  runtime_p *pp;
  long lVar1;
  runtime_p *prVar2;
  byte bVar3;
  runtime_p *prVar4;
  uint32 newval;
  bool fixed;
  uint max;
  ulong unaff_RBX;
  long in_FS_OFFSET;
  bool bVar5;
  string s;
  string s_00;
  string s_01;
  multireturn_int64_int64_bool_ mVar6;
  runtime_p *local_58;
  runtime_p *local_50;
  byte local_48;
  undefined7 uStack_47;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: bool inheritTime@[???]
                       Unresolved local var: bool tryWakeP@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  pp = *(runtime_p **)(in_FS_OFFSET + -8);
  lVar1 = (pp->sysmontick).syscallwhen;
  if (*(int *)(lVar1 + 0x110) != 0) {
    s_01.len = unaff_RBX;
    s_01.str = &DAT_0029dfa9;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  if (*(long *)(lVar1 + 0x170) != 0) {
    runtime_stoplockedm();
    runtime_execute((runtime_g *)pp,SUB81(unaff_RBX,0));
  }
  if (*(char *)((pp->sysmontick).syscallwhen + 0x120) != '\0') {
    s_00.len = unaff_RBX;
    s_00.str = &DAT_00299b05;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  do {
    while( true ) {
      while( true ) {
        local_58 = *(runtime_p **)((pp->sysmontick).syscallwhen + 0xd8);
        local_58->preempt = false;
        if (runtime_sched.gcwaiting == 0) break;
        runtime_gcstopm();
      }
      if (local_58->runSafePointFn != 0) {
        runtime_runSafePointFn();
      }
      if ((*(char *)((pp->sysmontick).syscallwhen + 0x11c) != '\0') &&
         ((local_58->runnext != 0 || (local_58->runqtail != local_58->runqhead)))) {
        s.len = unaff_RBX;
        s.str = &DAT_002a3e76;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
      prVar4 = local_58;
      mVar6 = runtime_checkTimers(pp,unaff_RBX);
      newval = (uint32)CONCAT71((int7)((ulong)prVar4 >> 8),mVar6.ran);
      if ((runtime_trace.enabled == false) && (runtime_trace.shutdown == false)) {
        prVar4 = (runtime_p *)0x0;
        bVar5 = false;
      }
      else {
        runtime_traceReader();
        if (local_58 != (runtime_p *)0x0) {
          runtime_casgstatus((runtime_g *)0x100000004,(uint32)mVar6.pollUntil,newval);
          runtime_traceGoUnpark((runtime_g *)local_58,(int)mVar6.pollUntil);
        }
        bVar5 = local_58 != (runtime_p *)0x0;
        prVar4 = local_58;
      }
      local_50 = (runtime_p *)0x0;
      if ((prVar4 == (runtime_p *)0x0) && (runtime_gcBlackenEnabled != 0)) {
        local_50 = *(runtime_p **)((pp->sysmontick).syscallwhen + 0xd8);
        local_58 = (runtime_p *)&runtime_gcController;
        runtime___gcControllerState__findRunnableGCWorker
                  ((runtime_gcControllerState *)pp,(runtime_p *)mVar6.pollUntil);
        prVar4 = (runtime_p *)CONCAT71(uStack_47,local_48);
        bVar5 = (bool)(prVar4 != (runtime_p *)0x0 | bVar5);
      }
      if (((prVar4 == (runtime_p *)0x0) &&
          (max = *(int *)(*(long *)((pp->sysmontick).syscallwhen + 0xd8) + 0x10) * -0x3ef368eb,
          max < 0x4325c54)) && (0 < runtime_sched.runqsize)) {
        runtime_lock2(&runtime_sched.lock);
        local_50 = (runtime_p *)CONCAT44(local_50._4_4_,1);
        runtime_globrunqget(pp,max);
        prVar4 = (runtime_p *)CONCAT71(uStack_47,local_48);
        local_58 = (runtime_p *)&runtime_sched.lock;
        runtime_unlock2((runtime_mutex *)prVar4);
      }
      if (prVar4 == (runtime_p *)0x0) {
        local_58 = *(runtime_p **)((pp->sysmontick).syscallwhen + 0xd8);
        runtime_runqget(local_58);
        unaff_RBX = (ulong)local_48;
        prVar4 = local_50;
      }
      else {
        unaff_RBX = 0;
      }
      if (prVar4 == (runtime_p *)0x0) {
        runtime_findrunnable();
        unaff_RBX = (ulong)local_50 & 0xff;
        prVar4 = local_58;
      }
      fixed = SUB81(unaff_RBX,0);
      if (*(char *)((pp->sysmontick).syscallwhen + 0x11c) != '\0') {
        runtime_resetspinning();
      }
      if (runtime_sched.disable.user == false) {
        bVar3 = 0;
      }
      else {
        runtime_isSystemGoroutine((runtime_g *)prVar4,fixed);
        bVar3 = local_48 ^ 1;
      }
      if (bVar3 != 0) break;
LAB_004f0ec2:
      if (bVar5) {
        runtime_wakep();
      }
      if (prVar4->deferpoolbuf[0][1] == (runtime__defer *)0x0) {
        runtime_execute((runtime_g *)prVar4,fixed);
        return;
      }
      runtime_startlockedm((runtime_g *)prVar4);
    }
    runtime_lock2(&runtime_sched.lock);
    if (runtime_sched.disable.user == false) {
      bVar3 = 1;
    }
    else {
      runtime_isSystemGoroutine((runtime_g *)prVar4,fixed);
      bVar3 = local_48;
    }
    if (bVar3 != 0) {
      runtime_unlock2(&runtime_sched.lock);
      goto LAB_004f0ec2;
    }
    prVar4->deferpool[2].len = 0;
    prVar2 = prVar4;
    if (runtime_sched.disable.runnable.tail != 0) {
      *(runtime_p **)(runtime_sched.disable.runnable.tail + 0xa0) = prVar4;
      prVar2 = (runtime_p *)runtime_sched.disable.runnable.head;
    }
    runtime_sched.disable.runnable.head = (runtime_guintptr)prVar2;
    runtime_sched.disable.n = runtime_sched.disable.n + 1;
    runtime_sched.disable.runnable.tail = (runtime_guintptr)prVar4;
    runtime_unlock2(&runtime_sched.lock);
  } while( true );
}

