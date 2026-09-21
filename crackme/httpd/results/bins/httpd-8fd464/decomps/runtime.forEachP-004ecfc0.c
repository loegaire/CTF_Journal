
/* WARNING: Unknown calling convention */

void runtime_forEachP(func__runtime_p_ **fn)

{
  int *piVar1;
  uint32 uVar2;
  int iVar3;
  runtime_mutex *l;
  runtime_p **pprVar4;
  int iVar5;
  int32 iVar6;
  runtime_puintptr rVar7;
  runtime_p *extraout_RAX;
  runtime_p *prVar8;
  int unaff_RBX;
  runtime_p *pp;
  long lVar9;
  runtime_p *in_RDI;
  long in_FS_OFFSET;
  bool bVar10;
  string s;
  string s_00;
  string s_01;
  func__runtime_p_ **fn_spill;
  char local_50;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.p * _p_@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)] */
  lVar9 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar9 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  pp = *(runtime_p **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  l = *(runtime_mutex **)(lVar9 + 0x30);
  runtime_lock2(l);
  if (runtime_sched.safePointWait != 0) {
    s_01.len = unaff_RBX;
    s_01.str = &DAT_002a3bf0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  runtime_sched.safePointWait = runtime_gomaxprocs + -1;
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_sched.safePointFn = fn_spill;
  }
  else {
    in_RDI = (runtime_p *)&runtime_sched.safePointFn;
    runtime_gcWriteBarrier();
  }
                    /* Unresolved local var: runtime.p * p@[???] */
  iVar5 = runtime_allp.len;
  pprVar4 = runtime_allp.array;
  for (lVar9 = 0; lVar9 < iVar5; lVar9 = lVar9 + 1) {
    in_RDI = pprVar4[lVar9];
    if (pp != in_RDI) {
      LOCK();
      in_RDI->runSafePointFn = 1;
      UNLOCK();
    }
  }
  runtime_preemptall();
                    /* Unresolved local var: runtime.p * p@[???] */
  for (rVar7 = runtime_sched.pidle; iVar6 = runtime_sched.safePointWait, rVar7 != 0;
      rVar7 = *(runtime_puintptr *)(rVar7 + 8)) {
    LOCK();
    bVar10 = *(int *)(rVar7 + 0x26d0) == 1;
    if (bVar10) {
      *(int *)(rVar7 + 0x26d0) = 0;
    }
    UNLOCK();
    if (bVar10) {
      (**fn_spill)(in_RDI);
      runtime_sched.safePointWait = runtime_sched.safePointWait + -1;
    }
    pp = (runtime_p *)0x0;
  }
  runtime_unlock2((runtime_mutex *)(ulong)(uint)runtime_sched.safePointWait);
  (**fn_spill)(in_RDI);
  iVar5 = runtime_allp.len;
  pprVar4 = runtime_allp.array;
                    /* Unresolved local var: runtime.p * p@[???] */
  for (lVar9 = 0; lVar9 < iVar5; lVar9 = lVar9 + 1) {
    pp = pprVar4[lVar9];
                    /* Unresolved local var: uint32 s@[???] */
    prVar8 = (runtime_p *)pprVar4;
    if (pp->status == 2) {
      if (pp->runSafePointFn == 1) {
        LOCK();
        uVar2 = pp->status;
        bVar10 = uVar2 == 2;
        if (bVar10) {
          pp->status = 0;
          uVar2 = 2;
        }
        UNLOCK();
        prVar8 = (runtime_p *)(ulong)uVar2;
      }
      else {
        bVar10 = false;
      }
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      if (runtime_trace.enabled != false) {
        runtime_traceGoSysBlock(prVar8);
        runtime_traceProcStop(pp);
        prVar8 = extraout_RAX;
      }
      pp->syscalltick = pp->syscalltick + 1;
      runtime_handoffp(prVar8);
    }
  }
  if (0 < iVar6) {
    while (runtime_notetsleep(&runtime_sched.safePointNote,(int64)pp), local_50 == '\0') {
      runtime_preemptall();
    }
    runtime_sched.safePointNote.key = 0;
  }
  if (runtime_sched.safePointWait != 0) {
    s_00.len = (int)pp;
    s_00.str = &DAT_0029ab72;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
                    /* Unresolved local var: runtime.p * p@[???] */
  lVar9 = 0;
  while( true ) {
    if (runtime_allp.len <= lVar9) {
      runtime_lock2(&runtime_sched.lock);
      if (runtime_writeBarrier._0_4_ == 0) {
        runtime_sched.safePointFn = (func__runtime_p_ **)0x0;
      }
      else {
        runtime_gcWriteBarrier();
      }
      runtime_unlock2(&runtime_sched.lock);
                    /* Unresolved local var: runtime.g * _g_@[???] */
      lVar9 = *(long *)(in_FS_OFFSET + -8);
      iVar3 = (int)l[0x22].key;
      *(int *)&l[0x22].key = iVar3 + -1;
      if ((iVar3 == 1) && (*(char *)(lVar9 + 0xb1) != '\0')) {
        *(undefined8 *)(lVar9 + 0x10) = 0xfffffffffffffade;
      }
      return;
    }
    if (runtime_allp.array[lVar9]->runSafePointFn != 0) break;
    lVar9 = lVar9 + 1;
  }
  s.len = (int)runtime_allp.array[lVar9];
  s.str = &DAT_0029f4a5;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

