
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*sysDialer).doDialTCP(net.sysDialer * sd, context.Context
   ctx, net.TCPAddr * laddr, net.TCPAddr * raddr, net.TCPConn * ~r3, error ~r4) */

multireturn_net_TCPConn___error_
net___sysDialer__doDialTCP
          (net_sysDialer *sd,context_Context ctx,net_TCPAddr *laddr,net_TCPAddr *raddr)

{
  long *plVar1;
  string mode;
  string mode_00;
  net_netFD *extraout_RAX;
  undefined **ppuVar2;
  uint uVar3;
  void *in_R10;
  void *pvVar4;
  int in_R11;
  ulong sotype;
  long in_FS_OFFSET;
  context_Context ctx_00;
  context_Context ctx_01;
  error eVar5;
  string net;
  string net_00;
  multireturn_net_TCPConn___error_ mVar6;
  multireturn_net_TCPConn___error_ mVar7;
  net_sockaddr laddr_00;
  net_sockaddr laddr_01;
  net_sockaddr raddr_00;
  net_sockaddr raddr_01;
  net_sysDialer *sd_spill;
  context_Context ctx_spill;
  net_TCPAddr *laddr_spill;
  net_TCPAddr *raddr_spill;
  undefined1 uVar8;
  undefined7 uVar9;
  undefined7 uVar10;
  char cVar11;
  func_string__string__syscall_RawConn__error **ctrlFn;
  net_netFD *local_48;
  undefined **local_40;
  long *local_38;
  void *local_30;
  undefined **local_28;
  undefined8 *local_20;
  net_netFD *local_18;
  long *local_10;
  
                    /* Unresolved local var: net.netFD * fd@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: net.TCPConn * ~R0@[???] */
  while (&local_30 <= *(void ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  ctrlFn = (func_string__string__syscall_RawConn__error **)(sd_spill->network).len;
  uVar9 = (undefined7)((ulong)ctx_spill.data >> 8);
  mode.len = (int)(sd_spill->network).str;
  mode.str = ctx_spill.data;
  ctx_00.data = (sd_spill->Dialer).Control;
  ctx_00.tab = (runtime_itab *)sd_spill;
  net.len = (int)ctx_spill.data;
  net.str = go_itab__net_TCPAddr_net_sockaddr;
  laddr_00.data = raddr_spill;
  laddr_00.tab = ctx_spill.tab;
  raddr_00.data = in_R10;
  raddr_00.tab = (runtime_itab *)&DAT_002881ad;
  uVar8 = (char)ctx_spill.data;
  uVar10 = uVar9;
  net_internetSocket(ctx_00,net,laddr_00,raddr_00,in_R11,(int)ctx_spill.tab,mode,ctrlFn);
                    /* Unresolved local var: int i@[???] */
  local_30 = (void *)0x0;
  while( true ) {
    cVar11 = (char)ctrlFn;
    local_18 = local_48;
    ppuVar2 = local_40;
    if ((long)local_30 < 2) {
      if ((laddr_spill == (net_TCPAddr *)0x0) || (laddr_spill->Port == 0)) {
        local_10 = local_38;
        local_28 = local_40;
        uVar8 = SUB81(local_40,0);
        uVar10 = (undefined7)((ulong)local_40 >> 8);
        eVar5.data = local_40;
        eVar5.tab = ctx_spill.tab;
        net_selfConnect(local_48,eVar5);
        if (cVar11 == '\0') {
                    /* Unresolved local var: bool ok@[???] */
          ppuVar2 = local_28;
          if (local_28 == &go_itab__net_OpError_error) {
            plVar1 = local_10 + 8;
            local_10 = (long *)local_10[9];
            ppuVar2 = (undefined **)*plVar1;
          }
          if (ppuVar2 == (undefined **)go_itab__os_SyscallError_error) {
            ppuVar2 = (undefined **)local_10[2];
            local_10 = (long *)local_10[3];
          }
          if ((ppuVar2 == (undefined **)0x0) || (ppuVar2[1] != &DAT_002463a0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = (uint)CONCAT71((int7)((ulong)local_10 >> 8),*local_10 == 0x31);
          }
        }
        else {
          uVar3 = 1;
        }
        sotype = (ulong)uVar3;
        ppuVar2 = local_28;
      }
      else {
        sotype = 0;
      }
    }
    else {
      sotype = 0;
    }
    if ((char)sotype == '\0') break;
    pvVar4 = local_30;
    if (ppuVar2 == (undefined **)0x0) {
      net___netFD__Close(local_18);
    }
    ctrlFn = (func_string__string__syscall_RawConn__error **)(sd_spill->network).len;
    mode_00.len = (int)(sd_spill->network).str;
    mode_00.str = ctx_spill.data;
    ctx_01.data = ctx_spill.tab;
    ctx_01.tab = (runtime_itab *)go_itab__net_TCPAddr_net_sockaddr;
    net_00.len = (int)laddr_spill;
    net_00.str = &DAT_002881ad;
    laddr_01.data = sd_spill;
    laddr_01.tab = (runtime_itab *)raddr_spill;
    raddr_01.data = pvVar4;
    raddr_01.tab = ctx_spill.data;
    uVar8 = (char)ctx_spill.data;
    uVar10 = uVar9;
    net_internetSocket(ctx_01,net_00,laddr_01,raddr_01,sotype,(int)ctx_spill.tab,mode_00,ctrlFn);
    local_30 = (void *)((long)local_30 + 1);
  }
  if (ppuVar2 != (undefined **)0x0) {
    mVar7.~r4.tab = ctx_spill.tab;
    mVar7.~r3 = (net_TCPConn *)local_18;
    mVar7.~r4.data = ppuVar2;
    return mVar7;
  }
                    /* Unresolved local var: net.TCPConn * c@[???] */
  runtime_newobject((runtime__type *)&DAT_00243920);
  local_20 = (undefined8 *)CONCAT71(uVar10,uVar8);
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_20 = local_18;
  }
  else {
    runtime_gcWriteBarrier();
    local_18 = extraout_RAX;
  }
  eVar5 = net_setNoDelay(local_18,SUB81(ctx_spill.tab,0));
  mVar6.~r4.tab = eVar5.data;
  mVar6.~r3 = (net_TCPConn *)local_20;
  mVar6.~r4.data = ppuVar2;
  return mVar6;
}

