
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*sysDialer).dialSerial(net.sysDialer * sd, context.Context
   ctx, net.addrList ras, net.Conn ~r2, error ~r3) */

multireturn_net_Conn_error__conflict1
net___sysDialer__dialSerial(net_sysDialer *sd,context_Context ctx,net_addrList ras)

{
  time_zone *ptVar1;
  time_Location *ptVar2;
  time_zoneTrans *ptVar3;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar4;
  int extraout_EAX;
  time_Location *extraout_RAX;
  time_Location *extraout_RAX_00;
  undefined **ppuVar5;
  runtime_itab *extraout_RAX_01;
  void *pvVar6;
  time_Location *ptVar7;
  runtime_itab *extraout_RAX_02;
  runtime_itab *extraout_RAX_03;
  time_Location *extraout_RAX_04;
  time_Location *extraout_RAX_05;
  time_Location *extraout_RAX_06;
  time_Location *extraout_RAX_07;
  time_Location *ptVar8;
  time_Location *extraout_RAX_08;
  time_Location *extraout_RAX_09;
  time_Location *extraout_RAX_10;
  time_Location *extraout_RAX_11;
  runtime_itab *extraout_RAX_12;
  time_Location *ptVar9;
  time_Location *ptVar10;
  long lVar11;
  net_sysDialer *pnVar12;
  time_Location *ptVar13;
  runtime_interfacetype *addrsRemaining;
  long in_FS_OFFSET;
  bool bVar14;
  context_Context parent;
  net_Addr ra;
  context_Context ctx_00;
  time_Time deadline;
  time_Time u;
  time_Time now;
  time_Time t;
  multireturn_context_Context_context_CancelFunc______conflict mVar15;
  multireturn_time_Time_error__conflict1 mVar16;
  time_Time d;
  multireturn_net_Conn_error__conflict1 mVar17;
  multireturn_net_Conn_error__conflict2 mVar18;
  multireturn_net_Conn_error__conflict1 mVar19;
  multireturn_net_Conn_error__conflict1 mVar20;
  multireturn_net_Conn_error__conflict1 mVar21;
  multireturn_bool_bool_ mVar22;
  net_sysDialer *sd_spill;
  context_Context ctx_spill;
  net_addrList ras_spill;
  time_Location *ptStack0000000000000038;
  time_Location *ptStack0000000000000040;
  undefined **ppuStack0000000000000048;
  time_Location *ptStack0000000000000050;
  time_Location *local_110;
  time_Location *local_108;
  time_Location *local_100;
  net_sysDialer *local_f8;
  time_Location *local_f0;
  time_Location *local_e8;
  time_Location *local_e0;
  time_Location *local_d8;
  time_Location *local_d0;
  runtime_sudog *local_c8;
  int local_c0;
  time_Location *local_98;
  time_Location *local_90;
  time_Location *local_78;
  time_Location *local_70;
  time_Location *local_68;
  time_Location *local_60;
  net_sysDialer *local_58;
  time_Location *local_50;
  int local_48;
  time_Location *local_40;
  time_Location *local_38;
  time_Location *local_30;
  runtime_sudog *local_28;
  time_Location *local_18;
  net_Addr *local_10;
  
  u.wall = (time_Location *)ras.array;
                    /* Unresolved local var: error firstErr@[???] */
  while (&local_98 <= *(time_Location ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: net.Addr ra@[???] */
  ptStack0000000000000038 = (time_Location *)0x0;
  ptStack0000000000000040 = (time_Location *)0x0;
  ppuStack0000000000000048 = (undefined **)0x0;
  ptStack0000000000000050 = (time_Location *)0x0;
  if (ras_spill.len < 1) {
    ppuVar5 = (undefined **)0x0;
    ptVar8 = (time_Location *)0x0;
    ptVar9 = (time_Location *)ctx.tab;
LAB_00583c30:
    if ((time_Location *)ppuVar5 == (time_Location *)0x0) {
      runtime_newobject((runtime__type *)&DAT_0026a420);
      (local_110->name).len = (int)&DAT_00000004;
      (local_110->name).str = &DAT_002881ad;
      ptVar1 = (time_zone *)(sd_spill->network).str;
      (local_110->zone).len = (int)(sd_spill->network).len;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_110->zone).array = ptVar1;
      }
      else {
        u.wall = (time_Location *)&local_110->zone;
        runtime_gcWriteBarrierDX();
        local_110 = extraout_RAX;
      }
      (local_110->zone).cap = 0;
      (local_110->tx).array = (time_zoneTrans *)0x0;
      (local_110->tx).len = 0;
      ((runtime_waitq *)&(local_110->tx).cap)->first = (runtime_sudog *)0x0;
      pvVar6 = net_errMissingAddress.data;
      (local_110->extend).str = (uint8 *)net_errMissingAddress.tab;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_110->extend).len = (int)pvVar6;
      }
      else {
        u.wall = (time_Location *)&(local_110->extend).len;
        runtime_gcWriteBarrierCX();
        local_110 = extraout_RAX_00;
      }
      ppuVar5 = &go_itab__net_OpError_error;
      ptVar8 = local_110;
    }
    ptStack0000000000000038 = (time_Location *)0x0;
    ptStack0000000000000040 = (time_Location *)0x0;
    ppuStack0000000000000048 = ppuVar5;
    ptStack0000000000000050 = ptVar8;
    runtime_deferreturn();
    mVar17.~r2.data = ptVar9;
    mVar17.~r2.tab = extraout_RAX_01;
    mVar17.~r3.data = u.wall;
    mVar17.~r3.tab = (runtime_itab *)ptVar8;
    return mVar17;
  }
  lVar11 = 0;
  ppuVar5 = (undefined **)0x0;
  ptVar8 = (time_Location *)0x0;
  while( true ) {
    ptVar9 = local_110;
    local_58 = (ras_spill.array)->data;
    ptVar2 = (time_Location *)(ras_spill.array)->tab;
    addrsRemaining = ctx_spill.tab[1].inter;
    u.wall = ptVar2;
    ptVar13 = (time_Location *)ctx_spill.tab;
    local_50 = ptVar8;
    local_10 = ras_spill.array;
    pvVar6 = (void *)(*(code *)addrsRemaining)();
    mVar22 = runtime_selectnbrecv(pvVar6,(runtime_hchan *)ppuVar5);
    mVar20.~r2.data = (time_Location *)CONCAT71((int7)((ulong)ppuVar5 >> 8),mVar22.received);
    if ((char)local_108 != '\0') break;
    (*(code *)(ctx_spill.tab)->fun[0])();
                    /* Unresolved local var: error err@[???] */
    ptVar7 = (time_Location *)ctx_spill.tab;
    ptVar10 = ctx_spill.data;
    if ((char)local_f8 != '\0') {
      local_70 = local_110;
      local_18 = local_100;
      local_78 = local_108;
      time_Now();
      now.ext = (time_Location *)(ras_spill.len - lVar11);
      deadline.ext = lVar11;
      deadline.wall = (uint64)u.wall;
      deadline.loc = ptVar13;
      now.wall = (uint64)local_70;
      now.loc = local_78;
      mVar16 = net_partialDeadline(now,deadline,(int)addrsRemaining);
      ptVar9 = local_18;
      u.wall = mVar16.~r4.tab;
                    /* Unresolved local var: context.CancelFunc * * cancel@[???] */
      if (local_c8 != (runtime_sudog *)0x0) {
        ptVar8 = local_50;
        ptVar9 = local_e0;
        if ((time_Location *)ppuVar5 == (time_Location *)0x0) {
          local_28 = local_c8;
          local_48 = local_c0;
          runtime_newobject((runtime__type *)&DAT_0026a420);
          (local_110->name).len = 4;
          (local_110->name).str = &DAT_002881ad;
          ptVar1 = (time_zone *)(sd_spill->network).str;
          (local_110->zone).len = (int)(sd_spill->network).len;
          pnVar12 = sd_spill;
          if (runtime_writeBarrier._0_4_ == 0) {
            (local_110->zone).array = ptVar1;
            ptVar8 = local_110;
          }
          else {
            u.wall = (time_Location *)&local_110->zone;
            runtime_gcWriteBarrierDX();
            ptVar8 = extraout_RAX_04;
          }
          ptVar3 = (pnVar12->Dialer).LocalAddr.data;
          ptVar9 = (time_Location *)(pnVar12->Dialer).LocalAddr.tab;
          (ptVar8->zone).cap = (int)ptVar9;
          if (runtime_writeBarrier._0_4_ == 0) {
            (ptVar8->tx).array = ptVar3;
          }
          else {
            u.wall = (time_Location *)&ptVar8->tx;
            runtime_gcWriteBarrierDX();
            ptVar8 = extraout_RAX_05;
          }
          (ptVar8->tx).len = (int)ptVar2;
          if (runtime_writeBarrier._0_4_ == 0) {
            ((runtime_waitq *)&(ptVar8->tx).cap)->first = (runtime_sudog *)local_58;
          }
          else {
            u.wall = (time_Location *)&(ptVar8->tx).cap;
            runtime_gcWriteBarrierDX();
            ptVar8 = extraout_RAX_06;
          }
          (ptVar8->extend).str = (uint8 *)local_28;
          if (runtime_writeBarrier._0_4_ == 0) {
            (ptVar8->extend).len = local_48;
          }
          else {
            u.wall = (time_Location *)&(ptVar8->extend).len;
            runtime_gcWriteBarrierDX();
            ptVar8 = extraout_RAX_07;
          }
          ppuVar5 = &go_itab__net_OpError_error;
        }
        goto LAB_00583c30;
      }
      local_f0 = local_18;
      u.ext = (int64)local_d0;
      u.loc = ptVar13;
      t.ext = (int64)local_e0;
      t.wall = (uint64)local_18;
      t.loc = (time_Location *)0x0;
      ptVar8 = local_d0;
      time_Time_Before(t,u);
      local_e8._0_1_ = (char)now.ext;
      bVar14 = (char)local_e8 != '\0';
      mVar20.~r2.data = local_e0;
      local_e8 = now.ext;
      if (bVar14) {
        parent.data = local_e0;
        parent.tab = ctx_spill.tab;
        d.ext = (int64)u.wall;
        d.wall = (uint64)ctx_spill.data;
        d.loc = ptVar8;
        mVar15 = context_WithDeadline(parent,d);
        mVar20.~r2.data = mVar15.~r2.data;
        local_90 = ptVar9;
        local_38 = now.ext;
        runtime_deferproc((int32)local_e0,(runtime_funcval *)mVar20.~r2.data);
        ptVar7 = local_90;
        ptVar10 = local_38;
        if (extraout_EAX != 0) {
          runtime_deferreturn();
          mVar20.~r2.tab = extraout_RAX_03;
          mVar20.~r3.data = u.wall;
          mVar20.~r3.tab = (runtime_itab *)ptVar9;
          return mVar20;
        }
      }
    }
    local_f8 = local_58;
    ra.data = ptVar8;
    ra.tab = (runtime_itab *)u.wall;
    ctx_00.data = ptVar10;
    ctx_00.tab = (runtime_itab *)mVar20.~r2.data;
    mVar18 = net___sysDialer__dialSingle(local_58,ctx_00,ra);
    u.wall = mVar18.err.data;
    if (local_e0 == (time_Location *)0x0) {
      ptStack0000000000000038 = local_f0;
      ptStack0000000000000040 = local_e8;
      ppuStack0000000000000048 = (undefined **)0x0;
      ptStack0000000000000050 = (time_Location *)0x0;
      runtime_deferreturn();
      mVar19.~r2.data = local_d8;
      mVar19.~r2.tab = extraout_RAX_02;
      mVar19.~r3.data = u.wall;
      mVar19.~r3.tab = (runtime_itab *)local_f0;
      return mVar19;
    }
    ptVar8 = local_d8;
    ptVar9 = local_e0;
    if ((time_Location *)ppuVar5 != (time_Location *)0x0) {
      ptVar8 = local_50;
      ptVar9 = (time_Location *)ppuVar5;
    }
    ppuVar5 = (undefined **)ptVar9;
    lVar11 = lVar11 + 1;
    ptVar9 = ptVar8;
    local_110 = ptVar7;
    if (ras_spill.len <= lVar11) goto LAB_00583c30;
    ras_spill.array = local_10 + 1;
                    /* Unresolved local var: context.Context dialCtx@[???]
                       Unresolved local var: net.Conn c@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: uint8 * ~R0.data@[???]
                       Unresolved local var: void * ~R0.data@[???]
                       Unresolved local var: uintptr ~R0.itab@[???] */
    local_108 = ptVar10;
    local_100 = ptVar2;
  }
  (*(code *)ctx_spill.tab[1]._type)();
  local_98 = local_110;
  local_40 = local_108;
  if ((time_Location *)context_Canceled.tab == local_110) {
    local_30 = local_110;
    local_68 = local_108;
    local_110 = local_108;
    runtime_ifaceeq((runtime_itab *)ptVar9,context_Canceled.data,local_108);
    ptVar8 = (time_Location *)net_errCanceled.tab;
    local_60 = net_errCanceled.data;
    ptVar9 = local_30;
    local_108 = local_68;
    if ((char)local_100 != '\0') goto LAB_00584237;
  }
  ptVar8 = local_98;
  local_60 = local_40;
  if (((time_Location *)context_DeadlineExceeded.tab == ptVar9) &&
     (runtime_ifaceeq((runtime_itab *)local_98,context_DeadlineExceeded.data,local_40),
     ptVar8 = local_98, local_60 = local_40, local_110 = local_108, (char)local_100 != '\0')) {
    ptVar8 = (time_Location *)net_errTimeout.tab;
    local_60 = net_errTimeout.data;
  }
LAB_00584237:
  runtime_newobject((runtime__type *)ptVar8);
  (local_110->name).len = 4;
  (local_110->name).str = &DAT_002881ad;
  ptVar1 = (time_zone *)(sd_spill->network).str;
  ppfVar4 = (func_unsafe_Pointer__unsafe_Pointer__bool **)(sd_spill->network).len;
  (local_110->zone).len = (int)ppfVar4;
  if (runtime_writeBarrier._0_4_ == 0) {
    (local_110->zone).array = ptVar1;
  }
  else {
    u.wall = (time_Location *)&local_110->zone;
    runtime_gcWriteBarrierDX();
    local_110 = extraout_RAX_08;
  }
  ptVar3 = (sd_spill->Dialer).LocalAddr.data;
  (local_110->zone).cap = (int)(sd_spill->Dialer).LocalAddr.tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    (local_110->tx).array = ptVar3;
  }
  else {
    u.wall = (time_Location *)&local_110->tx;
    runtime_gcWriteBarrierDX();
    local_110 = extraout_RAX_09;
  }
  (local_110->tx).len = (int)ptVar2;
  if (runtime_writeBarrier._0_4_ == 0) {
    ((runtime_waitq *)&(local_110->tx).cap)->first = (runtime_sudog *)local_58;
  }
  else {
    u.wall = (time_Location *)&(local_110->tx).cap;
    runtime_gcWriteBarrierCX();
    local_110 = extraout_RAX_10;
  }
  (local_110->extend).str = (uint8 *)ptVar8;
  if (runtime_writeBarrier._0_4_ == 0) {
    (local_110->extend).len = (int)local_60;
  }
  else {
    u.wall = (time_Location *)&(local_110->extend).len;
    runtime_gcWriteBarrierCX();
    local_110 = extraout_RAX_11;
  }
  ptStack0000000000000038 = (time_Location *)0x0;
  ptStack0000000000000040 = (time_Location *)0x0;
  ppuVar5 = &go_itab__net_OpError_error;
  ppuStack0000000000000048 = &go_itab__net_OpError_error;
  ptStack0000000000000050 = local_110;
  runtime_deferreturn();
  mVar21.~r2.data = ppfVar4;
  mVar21.~r2.tab = extraout_RAX_12;
  mVar21.~r3.data = u.wall;
  mVar21.~r3.tab = (runtime_itab *)ppuVar5;
  return mVar21;
}

