
/* WARNING: Unknown calling convention */

void runtime_mexit(bool osStack)

{
  runtime_m *prVar1;
  runtime_m *extraout_RAX;
  runtime_m *prVar2;
  runtime_p *prVar3;
  runtime_m **pprVar4;
  uintptr unaff_RBX;
  long in_FS_OFFSET;
  runtime_stack stk;
  string s;
  string s_00;
  bool osStack_spill;
  
                    /* Unresolved local var: runtime.g * g@[DW_OP_reg0(RAX)]
                       Unresolved local var: runtime.m * m@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = *(runtime_m **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  if (prVar1 == &runtime_m0) {
    prVar3 = runtime_releasep();
    runtime_handoffp(prVar3);
    runtime_lock2(&runtime_sched.lock);
    runtime_sched.nmfreed = runtime_sched.nmfreed + 1;
    runtime_checkdead();
    runtime_unlock2(&runtime_sched.lock);
    runtime_mPark();
    s_00.len = unaff_RBX;
    s_00.str = (uint8 *)((long)&DAT_0029a227 + 2);
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  runtime_sigblock(SUB81(prVar1,0));
  runtime_unminitSignals();
  if (prVar1->gsignal != (runtime_g *)0x0) {
    stk.hi = unaff_RBX;
    stk.lo = (prVar1->gsignal->stack).hi;
    runtime_stackfree(stk);
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar1->gsignal = (runtime_g *)0x0;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
  }
  runtime_lock2(&runtime_sched.lock);
  pprVar4 = &runtime_allm;
  while( true ) {
    prVar2 = *pprVar4;
    if (prVar2 == (runtime_m *)0x0) {
      s.len = unaff_RBX;
      s.str = &DAT_0029b5d6;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    if (prVar2 == prVar1) break;
                    /* Unresolved local var: runtime.m * * pprev@[???] */
    pprVar4 = &prVar2->alllink;
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    *pprVar4 = prVar1->alllink;
    prVar2 = prVar1;
  }
  else {
    runtime_gcWriteBarrierDX();
    prVar2 = extraout_RAX;
  }
  if (!osStack_spill) {
    LOCK();
    prVar2->freeWait = 1;
    UNLOCK();
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar2->freelink = runtime_sched.freem;
      runtime_sched.freem = prVar2;
    }
    else {
      runtime_gcWriteBarrierDX();
      runtime_gcWriteBarrier();
    }
  }
  runtime_unlock2(&runtime_sched.lock);
  LOCK();
  runtime_ncgocall = runtime_ncgocall + prVar1->ncgocall;
  UNLOCK();
  prVar3 = runtime_releasep();
  runtime_handoffp(prVar3);
  runtime_lock2(&runtime_sched.lock);
  runtime_sched.nmfreed = runtime_sched.nmfreed + 1;
  runtime_checkdead();
  runtime_unlock2(&runtime_sched.lock);
  if (osStack_spill) {
    return;
  }
  runtime_exitThread();
  return;
}

