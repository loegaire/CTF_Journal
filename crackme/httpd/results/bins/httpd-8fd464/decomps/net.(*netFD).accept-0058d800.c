
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*netFD).accept(net.netFD * fd, net.netFD * netfd, error err)
    */

multireturn_net_netFD___error_ net___netFD__accept(net_netFD *fd)

{
  int iVar1;
  uint8 *puVar2;
  long lVar3;
  runtime__type *prVar4;
  net_netFD *extraout_RAX;
  net_netFD *extraout_RAX_00;
  void *extraout_RAX_01;
  runtime__type *prVar5;
  void *pvVar6;
  undefined **ppuVar7;
  net_netFD *pnVar8;
  char pollable;
  void **ppvVar9;
  long in_FS_OFFSET;
  interface___ obj;
  error eVar10;
  multireturn_net_netFD___error_ mVar11;
  multireturn_net_netFD___error_ mVar12;
  multireturn_net_netFD___error_ mVar13;
  string net;
  interface___ finalizer;
  multireturn_syscall_Sockaddr_error__conflict mVar14;
  net_netFD *fd_spill;
  net_netFD *local_b8;
  void *local_a8;
  uint64 local_a0;
  void *local_98;
  undefined1 *local_90;
  net_netFD *local_88;
  internal_poll_pollDesc local_40;
  void *local_38;
  net_netFD *local_30;
  uint64 local_28;
  net_netFD *local_20;
  runtime__type *local_18;
  undefined1 *local_10;
  
                    /* Unresolved local var: int d@[???]
                       Unresolved local var: syscall.Sockaddr rsa@[???]
                       Unresolved local var: string errcall@[???]
                       Unresolved local var: syscall.Sockaddr lsa@[???]
                       Unresolved local var: uint8 * ~R0.data@[???] */
  while (&local_40 <= *(internal_poll_pollDesc **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  internal_poll___FD__Accept(&fd_spill->pfd);
                    /* Unresolved local var: bool ok@[???] */
  if (local_90 != (undefined1 *)0x0) {
    local_20 = local_b8;
    if ((local_98 != (void *)0x0) &&
       (local_20 = (net_netFD *)go_itab_syscall_Errno_error, local_90 == go_itab_syscall_Errno_error
       )) {
      local_10 = local_90;
      local_28 = local_a0;
      local_20 = local_88;
      runtime_newobject((runtime__type *)&DAT_0024d4a0);
      *(void **)&(local_b8->pfd).fdmu.rsema = local_98;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_b8->pfd).fdmu.state = local_28;
      }
      else {
        runtime_gcWriteBarrier();
      }
      (local_b8->pfd).Sysfd = (int)local_10;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_b8->pfd).pd.runtimeCtx = (uintptr)local_20;
      }
      else {
        runtime_gcWriteBarrierDX();
        local_20 = extraout_RAX;
      }
      local_90 = go_itab__os_SyscallError_error;
    }
    mVar11.err.tab = (runtime_itab *)local_88;
    mVar11.netfd = local_20;
    mVar11.err.data = local_90;
    return mVar11;
  }
  iVar1 = fd_spill->family;
  puVar2 = (uint8 *)fd_spill->sotype;
  local_40.runtimeCtx = (uintptr)(fd_spill->net).str;
  prVar5 = (runtime__type *)(fd_spill->net).len;
                    /* Unresolved local var: net.netFD * ret@[???] */
  pvVar6 = local_a8;
  runtime_newobject((runtime__type *)&DAT_00270cc0);
  pollable = (char)pvVar6;
  (local_b8->pfd).Sysfd = (int)local_b8;
  (local_b8->pfd).IsStream = puVar2 == (uint8 *)0x1;
  (local_b8->pfd).ZeroReadIsEOF = puVar2 != (uint8 *)0x2 && puVar2 != (uint8 *)0x3;
  local_b8->family = iVar1;
  local_b8->sotype = (int)puVar2;
  (local_b8->net).len = (int)prVar5;
  if (runtime_writeBarrier._0_4_ == 0) {
    (local_b8->net).str = (uint8 *)local_40.runtimeCtx;
  }
  else {
    pollable = (char)local_b8 + 'P';
    runtime_gcWriteBarrierDX();
    local_b8 = extraout_RAX_00;
  }
  local_a8 = (void *)CONCAT71(local_a8._1_7_,1);
  net.len = (int)prVar5;
  net.str = puVar2;
  local_30 = local_b8;
  internal_poll___FD__Init(&local_b8->pfd,net,(bool)pollable);
  if (local_a0 != 0) {
    pvVar6 = local_98;
    eVar10 = net___netFD__Close(local_30);
    mVar13.err.tab = eVar10.data;
    mVar13.netfd = local_98;
    mVar13.err.data = pvVar6;
    return mVar13;
  }
  mVar14 = syscall_Getsockname((int)local_30);
  ppvVar9 = mVar14.err.data;
  lVar3 = local_30->family;
  if (lVar3 == 1) {
    lVar3 = local_30->sotype;
    if (lVar3 == 1) {
      ppuVar7 = &PTR_net_sockaddrToUnix_002b3540;
    }
    else if (lVar3 == 2) {
      ppuVar7 = &PTR_net_sockaddrToUnixgram_002b3530;
    }
    else {
      if (lVar3 != 5) goto LAB_0058db0f;
      ppuVar7 = &PTR_net_sockaddrToUnixpacket_002b3538;
    }
  }
  else if ((lVar3 == 2) || (lVar3 == 0x1c)) {
    lVar3 = local_30->sotype;
    if (lVar3 == 1) {
      ppuVar7 = &PTR_net_sockaddrToTCP_002b3520;
    }
    else if (lVar3 == 2) {
      ppuVar7 = &PTR_net_sockaddrToUDP_002b3528;
    }
    else {
      if (lVar3 != 3) goto LAB_0058db0f;
      ppuVar7 = &PTR_net_sockaddrToIP_002b3518;
    }
  }
  else {
LAB_0058db0f:
    ppuVar7 = &PTR_net___netFD__accept_func1_002b3438;
  }
  (*(code *)*ppuVar7)(ppvVar9,*ppuVar7,ppuVar7);
  lVar3 = local_30->family;
  local_38 = local_a8;
  if (lVar3 == 1) {
    lVar3 = local_30->sotype;
    if (lVar3 == 1) {
      ppuVar7 = &PTR_net_sockaddrToUnix_002b3540;
      goto LAB_0058dbc9;
    }
    if (lVar3 == 2) {
      ppuVar7 = &PTR_net_sockaddrToUnixgram_002b3530;
      goto LAB_0058dbc9;
    }
    if (lVar3 == 5) {
      ppuVar7 = &PTR_net_sockaddrToUnixpacket_002b3538;
      goto LAB_0058dbc9;
    }
  }
  else if ((lVar3 == 2) || (lVar3 == 0x1c)) {
    lVar3 = local_30->sotype;
    if (lVar3 == 1) {
      ppuVar7 = &PTR_net_sockaddrToTCP_002b3520;
      goto LAB_0058dbc9;
    }
    if (lVar3 == 2) {
      ppuVar7 = &PTR_net_sockaddrToUDP_002b3528;
      goto LAB_0058dbc9;
    }
    if (lVar3 == 3) {
      ppuVar7 = &PTR_net_sockaddrToIP_002b3518;
      goto LAB_0058dbc9;
    }
  }
  ppuVar7 = &PTR_net___netFD__accept_func2_002b3440;
LAB_0058dbc9:
  local_18 = prVar5;
  (*(code *)*ppuVar7)();
  prVar4 = local_18;
  (local_30->laddr).tab = (runtime_itab *)local_18;
  pnVar8 = local_30;
  if (runtime_writeBarrier._0_4_ == 0) {
    (local_30->laddr).data = local_38;
  }
  else {
    ppvVar9 = &(local_30->laddr).data;
    runtime_gcWriteBarrierDX();
    local_a8 = extraout_RAX_01;
  }
  (pnVar8->raddr).tab = (runtime_itab *)prVar5;
  if (runtime_writeBarrier._0_4_ == 0) {
    (pnVar8->raddr).data = local_a8;
  }
  else {
    ppvVar9 = &(pnVar8->raddr).data;
    runtime_gcWriteBarrier();
  }
  obj.data = prVar4;
  obj._type = (runtime__type *)&PTR_net___netFD__Close_002b3430;
  finalizer.data = ppvVar9;
  finalizer._type = prVar5;
  runtime_SetFinalizer(obj,finalizer);
  mVar12.err.tab = (runtime_itab *)prVar4;
  mVar12.netfd = local_30;
  mVar12.err.data = prVar5;
  return mVar12;
}

