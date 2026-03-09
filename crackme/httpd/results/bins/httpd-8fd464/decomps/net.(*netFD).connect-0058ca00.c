
/* WARNING: Removing unreachable block (ram,0x0058cb67) */
/* WARNING: Removing unreachable block (ram,0x0058cd60) */
/* WARNING: Removing unreachable block (ram,0x0058d14a) */
/* WARNING: Removing unreachable block (ram,0x0058d158) */
/* WARNING: Removing unreachable block (ram,0x0058d249) */
/* WARNING: Removing unreachable block (ram,0x0058d111) */
/* WARNING: Removing unreachable block (ram,0x0058d11b) */
/* WARNING: Removing unreachable block (ram,0x0058d197) */
/* WARNING: Removing unreachable block (ram,0x0058d1fe) */
/* WARNING: Removing unreachable block (ram,0x0058d1f0) */
/* WARNING: Removing unreachable block (ram,0x0058d20f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*netFD).connect(net.netFD * fd, context.Context ctx,
   syscall.Sockaddr la, syscall.Sockaddr ra, syscall.Sockaddr rsa, error ret) */

multireturn_syscall_Sockaddr_error__conflict1
net___netFD__connect(net_netFD *fd,context_Context ctx,syscall_Sockaddr la,syscall_Sockaddr ra)

{
  undefined *puVar1;
  runtime__defer *d;
  int extraout_EAX;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  runtime_itab *extraout_RAX_02;
  runtime_itab *extraout_RAX_03;
  runtime_itab *extraout_RAX_04;
  runtime_itab *extraout_RAX_05;
  undefined8 extraout_RAX_06;
  undefined8 uVar2;
  runtime_itab *extraout_RAX_07;
  void *pvVar3;
  runtime_itab *extraout_RAX_08;
  runtime_itab *extraout_RAX_09;
  runtime__defer *prVar4;
  undefined1 *puVar5;
  runtime_interfacetype *prVar6;
  runtime_itab *prVar7;
  runtime_itab *prVar8;
  uintptr *puVar9;
  bool bVar10;
  runtime_itab *prVar11;
  uintptr *puVar12;
  error *peVar13;
  long in_FS_OFFSET;
  error eVar14;
  string net;
  string net_00;
  multireturn_syscall_Sockaddr_error__conflict1 mVar15;
  multireturn_syscall_Sockaddr_error__conflict1 mVar16;
  multireturn_syscall_Sockaddr_error__conflict1 mVar17;
  multireturn_syscall_Sockaddr_error__conflict1 mVar18;
  multireturn_syscall_Sockaddr_error__conflict1 mVar19;
  multireturn_syscall_Sockaddr_error__conflict1 mVar20;
  multireturn_syscall_Sockaddr_error__conflict mVar21;
  multireturn_syscall_Sockaddr_error__conflict1 mVar22;
  multireturn_syscall_Sockaddr_error__conflict1 mVar23;
  multireturn_syscall_Sockaddr_error__conflict1 mVar24;
  multireturn_syscall_Sockaddr_error__conflict1 mVar25;
  syscall_Sockaddr sVar26;
  multireturn_bool_bool_ mVar27;
  net_netFD *fd_spill;
  context_Context ctx_spill;
  syscall_Sockaddr la_spill;
  syscall_Sockaddr ra_spill;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined1 *puStack0000000000000050;
  net_netFD *pnStack0000000000000058;
  runtime_itab *local_180;
  uintptr *local_178;
  net_netFD *local_170;
  runtime__defer *local_168;
  undefined4 local_148 [6];
  undefined **local_130;
  undefined1 local_110 [16];
  runtime__defer *local_100;
  runtime__defer *local_f8;
  undefined1 *local_f0;
  net_netFD *local_68;
  runtime__defer *local_60;
  net_netFD *local_50;
  runtime_itab *local_48;
  runtime_itab *local_40;
  runtime_itab *local_38;
  runtime__defer *local_30;
  runtime__defer *local_28;
  runtime_itab *local_18;
  net_netFD *local_10;
  
  puVar9 = local_178;
  prVar8 = la.data;
  prVar11 = la.tab;
                    /* Unresolved local var: uint8 * ~R0.data@[???] */
  while (local_110 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  puStack0000000000000050 = (undefined1 *)0x0;
  pnStack0000000000000058 = (net_netFD *)0x0;
                    /* Unresolved local var: error err@[???] */
  sVar26.data = net_connectFunc;
  sVar26.tab = prVar8;
  (**net_connectFunc)((int)prVar11,sVar26,(error *)fd_spill);
  bVar10 = SUB81(local_178,0);
  if (local_178 != (uintptr *)0x0) {
    puVar1 = (undefined *)local_178[1];
    peVar13 = (error *)&DAT_002463a0;
    if (((puVar1 == &DAT_002463a0) && ((local_170->pfd).fdmu.state == 0x24)) ||
       ((local_178 != (uintptr *)0x0 &&
        (((puVar1 == &DAT_002463a0 && ((local_170->pfd).fdmu.state == 0x25)) ||
         ((local_178 != (uintptr *)0x0 &&
          ((puVar1 == &DAT_002463a0 && ((local_170->pfd).fdmu.state == 4)))))))))) {
                    /* Unresolved local var: error err@[???] */
      d = (runtime__defer *)(fd_spill->net).len;
      local_178 = (uintptr *)CONCAT71(local_178._1_7_,1);
      net.len = (int)(fd_spill->net).str;
      net.str = (uint8 *)local_170;
      puVar12 = puVar9;
      eVar14 = internal_poll___FD__Init(&fd_spill->pfd,net,bVar10);
      mVar16.rsa.data = eVar14.data;
      if (local_170 != (net_netFD *)0x0) {
        uStack0000000000000040 = 0;
        uStack0000000000000048 = 0;
        runtime_deferreturn();
        mVar16.rsa.tab = extraout_RAX_00;
        mVar16.ret.data = puVar12;
        mVar16.ret.tab = (runtime_itab *)local_168;
        return mVar16;
      }
      (*(code *)(ctx_spill.tab)->fun[0])();
      if (ctx_spill.tab == (runtime_itab *)&go_itab__context_emptyCtx_context_Context) {
        local_180 = (runtime_itab *)context_background;
        runtime_ifaceeq((runtime_itab *)context_background,mVar16.rsa.data,ctx_spill.data);
      }
      else {
                    /* Unresolved local var: chan_struct_{} done@[???]
                       Unresolved local var: chan_error interruptRes@[???] */
        runtime_makechan((runtime_chantype *)&DAT_00222ea0,(int)mVar16.rsa.data);
        local_28 = d;
        runtime_makechan((runtime_chantype *)d,(int)mVar16.rsa.data);
        local_148[0] = 0x20;
        local_130 = &PTR_net___netFD__connect_func1_002b3448;
        local_100 = local_28;
        local_f0 = (undefined1 *)&stack0x00000050;
        prVar4 = local_28;
        local_f8 = d;
        local_60 = d;
        runtime_deferprocStack(d);
        mVar16.rsa.data = local_28;
        if (extraout_EAX != 0) {
          runtime_deferreturn();
          mVar15.rsa.data = local_148;
          mVar15.rsa.tab = extraout_RAX;
          mVar15.ret.data = puVar12;
          mVar15.ret.tab = (runtime_itab *)prVar4;
          return mVar15;
        }
        local_180 = ctx_spill.tab;
        local_178 = ctx_spill.data;
        local_170 = fd_spill;
        local_168 = local_60;
        runtime_newproc((int32)ctx_spill.tab,(runtime_funcval *)local_28);
      }
      bVar10 = (fd_spill->pfd).isFile;
      local_180 = (runtime_itab *)CONCAT71(local_180._1_7_,bVar10);
      eVar14 = internal_poll___pollDesc__wait
                         ((internal_poll_pollDesc *)fd_spill,(int)mVar16.rsa.data,
                          (bool)((char)fd_spill + '\x18'));
                    /* Unresolved local var: int nerr@[???]
                       Unresolved local var: error err@[???] */
      if (local_178 == (void *)0x0) {
        (**net_getsockoptIntFunc)
                  ((int)puVar12,(int)puVar9,(int)net_getsockoptIntFunc,(int *)fd_spill,peVar13);
        if (local_170 != (net_netFD *)0x0) {
          local_10 = local_170;
          local_30 = local_168;
          runtime_newobject((runtime__type *)&DAT_0024d4a0);
          uVar2 = 0xffff;
          _DAT_00010007 = 10;
          _DAT_0000ffff = &DAT_0028f872;
          _DAT_0001000f = local_10;
          if (runtime_writeBarrier._0_4_ == 0) {
            _DAT_00010017 = local_30;
          }
          else {
            puVar12 = (uintptr *)&DAT_00010017;
            runtime_gcWriteBarrierCX();
            uVar2 = extraout_RAX_06;
          }
          uStack0000000000000040 = 0;
          uStack0000000000000048 = 0;
          puVar5 = go_itab__os_SyscallError_error;
          puStack0000000000000050 = go_itab__os_SyscallError_error;
          pnStack0000000000000058 = (net_netFD *)uVar2;
          runtime_deferreturn();
          mVar23.rsa.data = local_170;
          mVar23.rsa.tab = extraout_RAX_07;
          mVar23.ret.data = puVar12;
          mVar23.ret.tab = (runtime_itab *)puVar5;
          return mVar23;
        }
                    /* Unresolved local var: syscall.Errno err@[???] */
                    /* Unresolved local var: syscall.Sockaddr rsa@[???] */
        mVar21 = syscall_Getpeername((int)fd_spill);
        pvVar3 = mVar21.err.data;
        mVar22.rsa.data = mVar21.sa.data;
        prVar8 = (runtime_itab *)0x1007;
        uStack0000000000000040 = 0xffff;
        uStack0000000000000048 = 0x1007;
        puStack0000000000000050 = (undefined1 *)0x0;
        pnStack0000000000000058 = (net_netFD *)0x0;
        runtime_deferreturn();
        mVar22.rsa.tab = extraout_RAX_05;
        mVar22.ret.data = pvVar3;
        mVar22.ret.tab = prVar8;
        return mVar22;
      }
      local_10 = (net_netFD *)local_178;
      local_68 = local_170;
      prVar6 = ctx_spill.tab[1].inter;
      pvVar3 = (void *)(*(code *)prVar6)();
      mVar27 = runtime_selectnbrecv(pvVar3,eVar14.data);
      mVar25.rsa.data._1_7_ = eVar14.data._1_7_;
      mVar25.rsa.data._0_1_ = mVar27.received;
      if (bVar10 == false) {
        uStack0000000000000040 = 0;
        uStack0000000000000048 = 0;
        puStack0000000000000050 = (undefined1 *)local_10;
        pnStack0000000000000058 = local_68;
        runtime_deferreturn();
        mVar25.rsa.tab = extraout_RAX_09;
        mVar25.ret.data = puVar12;
        mVar25.ret.tab = (runtime_itab *)prVar6;
        return mVar25;
      }
      (*(code *)ctx_spill.tab[1]._type)();
      pvVar3 = context_Canceled.data;
      local_38 = local_180;
      prVar8 = (runtime_itab *)0x77;
      if (context_Canceled.tab == (runtime_itab *)0x77) {
        local_18 = (runtime_itab *)0x77;
        local_40 = local_180;
        runtime_ifaceeq((runtime_itab *)0x77,context_Canceled.data,local_180);
        prVar11 = net_errCanceled.tab;
        prVar7 = net_errCanceled.data;
        prVar8 = local_18;
        if ((char)local_178 != '\0') goto LAB_0058d451;
      }
      pvVar3 = context_DeadlineExceeded.data;
      prVar11 = (runtime_itab *)0x77;
      prVar7 = local_38;
      if ((context_DeadlineExceeded.tab == prVar8) &&
         (runtime_ifaceeq((runtime_itab *)0x77,context_DeadlineExceeded.data,local_38),
         prVar11 = net_errTimeout.tab, prVar7 = net_errTimeout.data, (char)local_178 == '\0')) {
        prVar11 = (runtime_itab *)0x77;
        prVar7 = local_38;
      }
LAB_0058d451:
      uStack0000000000000040 = 0;
      uStack0000000000000048 = 0;
      puStack0000000000000050 = (undefined1 *)prVar11;
      pnStack0000000000000058 = (net_netFD *)prVar7;
      runtime_deferreturn();
      mVar24.rsa.data = pvVar3;
      mVar24.rsa.tab = extraout_RAX_08;
      mVar24.ret.data = puVar12;
      mVar24.ret.tab = prVar7;
      return mVar24;
    }
  }
  if (local_178 != (uintptr *)0x0) {
    local_10 = (net_netFD *)local_178;
    local_50 = local_170;
    if (((local_178 == (uintptr *)0x0) || ((undefined *)local_178[1] != &DAT_002463a0)) ||
       ((local_170->pfd).fdmu.state != 0x38)) {
      runtime_newobject((runtime__type *)&DAT_0024d4a0);
      (ra_spill.tab)->_type = (runtime__type *)&DAT_00000007;
      (ra_spill.tab)->inter = (runtime_interfacetype *)&DAT_0028a9e8;
      *(net_netFD **)&(ra_spill.tab)->hash = local_10;
      if (runtime_writeBarrier._0_4_ == 0) {
        (ra_spill.tab)->fun[0] = (uintptr)local_50;
      }
      else {
        local_178 = (ra_spill.tab)->fun;
        runtime_gcWriteBarrierCX();
      }
      uStack0000000000000040 = 0;
      uStack0000000000000048 = 0;
      puVar5 = go_itab__os_SyscallError_error;
      puStack0000000000000050 = go_itab__os_SyscallError_error;
      runtime_deferreturn();
      mVar17.rsa.data = local_170;
      mVar17.rsa.tab = extraout_RAX_01;
      mVar17.ret.data = local_178;
      mVar17.ret.tab = (runtime_itab *)puVar5;
      return mVar17;
    }
  }
  pvVar3 = (void *)(*(code *)ctx_spill.tab[1].inter)();
  mVar27 = runtime_selectnbrecv(pvVar3,(runtime_hchan *)local_170);
  net_00.str._1_7_ = (undefined7)((ulong)local_170 >> 8);
  net_00.str._0_1_ = mVar27.received;
  local_180._0_1_ = (char)ra_spill.data;
  if ((char)local_180 == '\0') {
                    /* Unresolved local var: error err@[???] */
    net_00.len = (int)(fd_spill->net).str;
    eVar14 = internal_poll___FD__Init(&fd_spill->pfd,net_00,SUB81(local_178,0));
    mVar19.rsa.data = eVar14.data;
    if (local_170 == (net_netFD *)0x0) {
      uStack0000000000000040 = 0;
      uStack0000000000000048 = 0;
      puStack0000000000000050 = (undefined1 *)0x0;
      pnStack0000000000000058 = (net_netFD *)0x0;
      runtime_deferreturn();
      mVar20.rsa.data = mVar19.rsa.data;
      mVar20.rsa.tab = extraout_RAX_04;
      mVar20.ret.data = local_178;
      mVar20.ret.tab = (runtime_itab *)local_168;
      return mVar20;
    }
    uStack0000000000000040 = 0;
    uStack0000000000000048 = 0;
    runtime_deferreturn();
    mVar19.rsa.tab = extraout_RAX_03;
    mVar19.ret.data = local_178;
    mVar19.ret.tab = (runtime_itab *)local_168;
    return mVar19;
  }
  (*(code *)ctx_spill.tab[1]._type)();
  pvVar3 = context_Canceled.data;
  local_48 = ra_spill.data;
  local_18 = ra_spill.tab;
  if (context_Canceled.tab == ra_spill.tab) {
    runtime_ifaceeq(ra_spill.tab,context_Canceled.data,ra_spill.data);
    prVar8 = net_errCanceled.tab;
    prVar11 = net_errCanceled.data;
    if (bVar10 != false) goto LAB_0058cfa9;
  }
  pvVar3 = context_DeadlineExceeded.data;
  prVar8 = ra_spill.tab;
  prVar11 = local_48;
  if ((context_DeadlineExceeded.tab == local_18) &&
     (runtime_ifaceeq(ra_spill.tab,context_DeadlineExceeded.data,local_48), prVar11 = local_48,
     bVar10 != false)) {
    prVar8 = net_errTimeout.tab;
    prVar11 = net_errTimeout.data;
  }
LAB_0058cfa9:
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  puStack0000000000000050 = (undefined1 *)prVar8;
  pnStack0000000000000058 = (net_netFD *)prVar11;
  runtime_deferreturn();
  mVar18.rsa.data = pvVar3;
  mVar18.rsa.tab = extraout_RAX_02;
  mVar18.ret.data = local_178;
  mVar18.ret.tab = prVar11;
  return mVar18;
}

