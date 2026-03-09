
/* WARNING: Removing unreachable block (ram,0x004ef8b2) */
/* WARNING: Removing unreachable block (ram,0x004ef8d3) */
/* WARNING: Removing unreachable block (ram,0x004ef8e5) */
/* WARNING: Removing unreachable block (ram,0x004ef8f1) */
/* WARNING: Removing unreachable block (ram,0x004ef928) */
/* WARNING: Removing unreachable block (ram,0x004ef945) */
/* WARNING: Removing unreachable block (ram,0x004efc41) */
/* WARNING: Removing unreachable block (ram,0x004ef98d) */
/* WARNING: Removing unreachable block (ram,0x004efc11) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.findrunnable(runtime.g * gp, bool inheritTime) */

multireturn_runtime_g___bool_ runtime_findrunnable(void)

{
  char cVar1;
  runtime_workbuf *prVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  runtime_p *extraout_RAX;
  runtime_p *prVar6;
  runtime_g *prVar7;
  runtime_p *prVar8;
  runtime_p *prVar9;
  runtime_p *prVar10;
  runtime_lfstack *prVar11;
  runtime_p *unaff_RBX;
  int iVar12;
  uint64 uVar13;
  int iVar14;
  uint32 *puVar15;
  int pollUntil;
  long in_FS_OFFSET;
  bool bVar16;
  multireturn_runtime_p___runtime_g___ mVar17;
  string s;
  string s_00;
  string s_01;
  string s_02;
  ___runtime_p allpSnapshot;
  ___runtime_p allpSnapshot_00;
  multireturn_runtime_g___bool_ mVar18;
  multireturn_runtime_g___bool_ mVar19;
  multireturn_runtime_g___bool_ mVar20;
  multireturn_runtime_g___bool_ mVar21;
  multireturn_runtime_g___bool_ mVar22;
  multireturn_int64_int64_bool_ mVar23;
  runtime_pMask idlepMaskSnapshot;
  runtime_pMask timerpMaskSnapshot;
  runtime_p *local_f0;
  runtime_g *local_e8;
  runtime_p *local_e0;
  runtime_p *local_d8;
  runtime_p *local_d0;
  runtime_p *local_c8;
  runtime_p *local_c0;
  runtime_p *local_b8;
  runtime_gList local_80;
  runtime_p *local_78;
  runtime_p *local_70;
  runtime_g *local_68;
  runtime_p *local_60;
  runtime_p *local_58;
  runtime_p *local_50;
  runtime_p *local_48;
  runtime_p *local_40;
  runtime_p *local_38;
  runtime_p *local_30;
  runtime_p *local_28;
  runtime_p *local_20;
  runtime_g *local_18;
  runtime_p *local_10;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.p * _p_@[???]
                       Unresolved local var: int64 now@[???]
                       Unresolved local var: int64 pollUntil@[???]
                       Unresolved local var: uint32 procs@[???]
                       Unresolved local var: bool otherReady@[???]
                       Unresolved local var: bool wasSpinning@[???]
                       Unresolved local var: []*runtime.p allpSnapshot@[???]
                       Unresolved local var: runtime.pMask idlepMaskSnapshot@[???]
                       Unresolved local var: runtime.pMask timerpMaskSnapshot@[???] */
  while (&local_70 <= *(runtime_p ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_20 = *(runtime_p **)(in_FS_OFFSET + -8);
LAB_004ef180:
  while (prVar10 = local_e0, prVar8 = *(runtime_p **)((local_20->sysmontick).syscallwhen + 0xd8),
        runtime_sched.gcwaiting != 0) {
    runtime_gcstopm();
  }
  prVar6 = local_20;
  local_10 = prVar8;
  if (prVar8->runSafePointFn != 0) {
    runtime_runSafePointFn();
    prVar6 = extraout_RAX;
  }
  prVar8 = local_10;
  mVar23 = runtime_checkTimers(prVar6,(int64)unaff_RBX);
  if (((runtime_fingwait != false) && (runtime_fingwake != false)) &&
     (prVar6 = local_e0, prVar7 = runtime_wakefing(), prVar8 != (runtime_p *)0x0)) {
    local_e0 = (runtime_p *)CONCAT71(local_e0._1_7_,1);
    runtime_ready(prVar7,mVar23.pollUntil,SUB81(prVar6,0));
  }
  if (*runtime_cgo_yield != (void *)0x0) {
    runtime_asmcgocall();
  }
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: bool inheritTime@[???] */
  mVar18 = runtime_runqget(local_10);
  if (runtime_sched.runqsize != 0) {
    runtime_lock2(&runtime_sched.lock);
    runtime_globrunqget(local_10,(int32)CONCAT71(mVar23.pollUntil._1_7_,mVar18.inheritTime));
    local_40 = local_e0;
    runtime_unlock2((runtime_mutex *)local_e0);
    if (local_40 != (runtime_p *)0x0) {
      mVar18.gp = (runtime_g *)local_40;
      return mVar18;
    }
  }
  local_e8 = (runtime_g *)0x0;
  if (runtime_netpollInited == 0) {
    bVar16 = false;
  }
  else if (runtime_netpollWaiters == 0) {
    bVar16 = false;
  }
  else {
    bVar16 = runtime_sched.lastpoll != 0;
  }
  if (bVar16) {
                    /* Unresolved local var: runtime.gList list@[???] */
    runtime_netpoll(0);
  }
  prVar8 = local_d8;
  if (*(char *)((local_20->sysmontick).syscallwhen + 0x11c) != '\0' ||
      runtime_sched.nmspinning << 1 < runtime_gomaxprocs - runtime_sched.npidle) goto LAB_004ef373;
  goto LAB_004ef3fe;
LAB_004ef373:
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: bool inheritTime@[???]
                       Unresolved local var: int64 tnow@[???]
                       Unresolved local var: int64 w@[???] */
  lVar3 = (local_20->sysmontick).syscallwhen;
  if (*(char *)(lVar3 + 0x11c) == '\0') {
    *(undefined1 *)(lVar3 + 0x11c) = 1;
    LOCK();
    runtime_sched.nmspinning = runtime_sched.nmspinning + 1;
    UNLOCK();
  }
  runtime_stealWork((int64)prVar10);
  unaff_RBX = local_d8;
  if ((char)local_c8 == '\0') {
    prVar10 = local_d8;
    if ((local_d0 == (runtime_p *)0x0) ||
       ((prVar8 = local_d0, local_d8 != (runtime_p *)0x0 && ((long)local_d8 <= (long)local_d0)))) {
      prVar8 = local_d8;
    }
LAB_004ef3fe:
    iVar5 = runtime_timerpMask.cap;
    iVar4 = runtime_timerpMask.len;
    unaff_RBX = (runtime_p *)runtime_idlepMask.array;
    if (runtime_gcBlackenEnabled == 0) {
                    /* Unresolved local var: runtime.gcBgMarkWorkerNode * node@[???]
                       Unresolved local var: runtime.g * gp@[???] */
      bVar16 = false;
    }
    else {
      prVar2 = (local_10->gcw).wbuf1;
      if ((prVar2 == (runtime_workbuf *)0x0) ||
         (((prVar2->workbufhdr).nobj == 0 && ((((local_10->gcw).wbuf2)->workbufhdr).nobj == 0)))) {
        if (runtime_work.full == 0) {
          if (runtime_work.markrootNext < runtime_work.markrootJobs) {
            bVar16 = true;
          }
          else {
            bVar16 = false;
          }
        }
        else {
          bVar16 = true;
        }
      }
      else {
        bVar16 = true;
      }
    }
    if (bVar16) {
      if (runtime_gcBgMarkWorkerPool == 0) {
        prVar11 = (runtime_lfstack *)0x0;
      }
      else {
        prVar11 = (runtime_lfstack *)(((long)runtime_gcBgMarkWorkerPool >> 0x13) << 3);
        runtime_gcBgMarkWorkerPool = *prVar11;
        LOCK();
        UNLOCK();
      }
      if (prVar11 != (runtime_lfstack *)0x0) {
        local_10->gcMarkWorkerMode = 3;
        local_10 = (runtime_p *)prVar11[2];
        runtime_casgstatus((runtime_g *)local_10,(uint32)prVar10,4);
        if (runtime_trace.enabled != false) {
          runtime_traceGoUnpark((runtime_g *)local_10,(int)prVar10);
        }
        mVar22.inheritTime = SUB81(prVar10,0);
        mVar22.gp = (runtime_g *)local_10;
        return mVar22;
      }
    }
    local_30 = (runtime_p *)runtime_allp.array;
    local_68 = (runtime_g *)runtime_allp.len;
    local_60 = (runtime_p *)runtime_allp.cap;
    local_48 = (runtime_p *)runtime_idlepMask.array;
    local_78 = (runtime_p *)runtime_idlepMask.len;
    local_70 = (runtime_p *)runtime_idlepMask.cap;
    local_50 = (runtime_p *)runtime_timerpMask.array;
    iVar12 = runtime_idlepMask.len;
    iVar14 = runtime_idlepMask.cap;
    puVar15 = runtime_timerpMask.array;
    pollUntil = runtime_timerpMask.len;
    runtime_lock2((runtime_mutex *)runtime_allp.array);
    if ((runtime_sched.gcwaiting != 0) || (local_10->runSafePointFn != 0)) {
      runtime_unlock2(&runtime_sched.lock);
      goto LAB_004ef180;
    }
    if (runtime_sched.runqsize != 0) {
                    /* Unresolved local var: runtime.g * gp@[???] */
      runtime_globrunqget(local_10,(int32)unaff_RBX);
      local_38 = local_e0;
      runtime_unlock2((runtime_mutex *)local_e0);
      mVar21.inheritTime = SUB81(unaff_RBX,0);
      mVar21.gp = (runtime_g *)local_38;
      return mVar21;
    }
    runtime_releasep();
    if (local_10 != (runtime_p *)&runtime_sched.lock) {
      s_02.len = (int)unaff_RBX;
      s_02.str = &DAT_0029c8b6;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_02);
    }
    runtime_pidleput((runtime_p *)&runtime_sched.lock);
    local_f0 = (runtime_p *)&runtime_sched.lock;
    runtime_unlock2(&runtime_sched.lock);
    prVar6 = local_30;
    prVar7 = local_68;
    unaff_RBX = local_70;
    lVar3 = (local_20->sysmontick).syscallwhen;
    cVar1 = *(char *)(lVar3 + 0x11c);
    prVar9 = prVar8;
    if (cVar1 != '\0') {
      *(undefined1 *)(lVar3 + 0x11c) = 0;
      LOCK();
      UNLOCK();
      if ((int)(runtime_sched.nmspinning - 1) < 0) {
        s_01.len = 0x7a13fc;
        s_01.str = (uint8 *)0x2a2fec;
        runtime_sched.nmspinning = runtime_sched.nmspinning - 1;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_01);
      }
      local_e0 = local_60;
      local_d8 = local_48;
      local_d0 = local_78;
      local_c8 = local_70;
      allpSnapshot.len = (int)local_70;
      allpSnapshot.array = (runtime_p **)local_30;
      allpSnapshot.cap = (int)local_68;
      idlepMaskSnapshot.len = iVar12;
      idlepMaskSnapshot.array = (uint32 *)iVar14;
      idlepMaskSnapshot.cap = (int)puVar15;
      runtime_sched.nmspinning = runtime_sched.nmspinning - 1;
      runtime_checkRunqsNoP(allpSnapshot,idlepMaskSnapshot);
      if (local_c0 != (runtime_p *)0x0) {
        runtime_acquirep(local_c0);
        *(undefined1 *)((local_20->sysmontick).syscallwhen + 0x11c) = 1;
        LOCK();
        runtime_sched.nmspinning = runtime_sched.nmspinning + 1;
        UNLOCK();
        goto LAB_004ef180;
      }
      mVar17 = runtime_checkIdleGCNoP();
      allpSnapshot_00.len = mVar17.~r1;
      if (prVar6 != (runtime_p *)0x0) {
        local_28 = prVar6;
        local_18 = prVar7;
        runtime_acquirep(prVar6);
        *(undefined1 *)((local_20->sysmontick).syscallwhen + 0x11c) = 1;
        LOCK();
        runtime_sched.nmspinning = runtime_sched.nmspinning + 1;
        UNLOCK();
        local_28->gcMarkWorkerMode = 3;
        runtime_casgstatus(local_18,(uint32)mVar17.~r1,4);
        if (runtime_trace.enabled != false) {
          runtime_traceGoUnpark(local_18,(int)allpSnapshot_00.len);
        }
        mVar19.inheritTime = mVar17.~r1._0_1_;
        mVar19.gp = local_18;
        return mVar19;
      }
      local_f0 = local_30;
      local_e8 = local_68;
      local_e0 = local_60;
      local_d8 = local_50;
      local_d0 = (runtime_p *)iVar4;
      local_c8 = (runtime_p *)iVar5;
      allpSnapshot_00.array = (runtime_p **)prVar8;
      allpSnapshot_00.cap = (int)prVar7;
      timerpMaskSnapshot.len = iVar12;
      timerpMaskSnapshot.array = (uint32 *)iVar14;
      timerpMaskSnapshot.cap = (int)puVar15;
      runtime_checkTimersNoP(allpSnapshot_00,timerpMaskSnapshot,pollUntil);
      prVar9 = local_b8;
      local_c0 = prVar8;
                    /* Unresolved local var: int64 delay@[???]
                       Unresolved local var: runtime.gList list@[???] */
    }
    uVar13 = runtime_sched.lastpoll;
    if (runtime_netpollInited == 0) {
      unaff_RBX = (runtime_p *)0x0;
    }
    else if ((runtime_netpollWaiters == 0) && (prVar9 == (runtime_p *)0x0)) {
      unaff_RBX = (runtime_p *)0x0;
    }
    else {
      LOCK();
      runtime_sched.lastpoll = 0;
      UNLOCK();
      unaff_RBX = (runtime_p *)CONCAT71((int7)(uVar13 >> 8),uVar13 != 0);
    }
    if ((char)unaff_RBX == '\0') {
                    /* Unresolved local var: int64 pollerPollUntil@[???] */
      if ((prVar9 != (runtime_p *)0x0 && runtime_netpollInited != 0) &&
         ((runtime_sched.pollUntil == 0 || ((long)prVar9 < (long)runtime_sched.pollUntil)))) {
        runtime_netpollBreak();
      }
    }
    else {
      LOCK();
      UNLOCK();
      lVar3 = (local_20->sysmontick).syscallwhen;
      runtime_sched.pollUntil = (uint64)prVar9;
      if (*(long *)(lVar3 + 0xd8) != 0) {
        s_00.len = 0x7a13b0;
        s_00.str = (uint8 *)0x2a0498;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_00);
      }
      if (*(char *)(lVar3 + 0x11c) != '\0') {
        s.len = 0x7a13b0;
        s.str = &DAT_002a4359;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
      if (prVar9 == (runtime_p *)0x0) {
        uVar13 = 0xffffffffffffffff;
      }
      else {
        if (prVar10 == (runtime_p *)0x0) {
          local_58 = prVar9;
          runtime_nanotime1();
          prVar10 = local_f0;
          prVar9 = local_58;
        }
        uVar13 = (long)prVar9 - (long)prVar10;
        if ((long)uVar13 < 0) {
          uVar13 = 0;
        }
      }
      unaff_RBX = (runtime_p *)&runtime_sched.pollUntil;
      if (runtime_faketime != 0) {
        uVar13 = 0;
      }
      runtime_netpoll((int64)local_20);
      local_80.head = (runtime_guintptr)local_e8;
      LOCK();
      runtime_sched.pollUntil = 0;
      UNLOCK();
      runtime_nanotime1();
      LOCK();
      UNLOCK();
      runtime_sched.lastpoll = uVar13;
      if ((runtime_faketime != 0) && ((runtime_g *)local_80.head == (runtime_g *)0x0)) {
        runtime_stopm();
        goto LAB_004ef180;
      }
      runtime_lock2(&runtime_sched.lock);
      runtime_pidleget();
      local_28 = (runtime_p *)&runtime_sched.lock;
      runtime_unlock2(&runtime_sched.lock);
      if (local_28 != (runtime_p *)0x0) {
        runtime_acquirep(local_28);
        if ((runtime_g *)local_80.head != (runtime_g *)0x0) {
          local_10 = (runtime_p *)local_80.head;
          if ((runtime_g *)local_80.head != (runtime_g *)0x0) {
            local_80.head = *(runtime_guintptr *)(local_80.head + 0xa0);
          }
          runtime_injectglist(&local_80);
          runtime_casgstatus((runtime_g *)local_10,0x7a13b0,4);
          if (runtime_trace.enabled != false) {
            runtime_traceGoUnpark((runtime_g *)local_10,0x7a13b0);
          }
          mVar20.inheritTime = true;
          mVar20.gp = (runtime_g *)local_10;
          return mVar20;
        }
        if (cVar1 != '\0') {
          *(undefined1 *)((local_20->sysmontick).syscallwhen + 0x11c) = 1;
          LOCK();
          runtime_sched.nmspinning = runtime_sched.nmspinning + 1;
          UNLOCK();
        }
        goto LAB_004ef180;
      }
      runtime_injectglist(&local_80);
    }
    runtime_stopm();
  }
  goto LAB_004ef180;
}

