
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*sysListener).listenTCP(net.sysListener * sl, context.Context
   ctx, net.TCPAddr * laddr, net.TCPListener * ~r2, error ~r3) */

multireturn_net_TCPListener___error_
net___sysListener__listenTCP(net_sysListener *sl,context_Context ctx,net_TCPAddr *laddr)

{
  string mode;
  time_Duration extraout_RAX;
  time_Duration tVar1;
  func_string__string__syscall_RawConn__error **ppfVar2;
  void *in_R8;
  runtime_itab *in_R9;
  void *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  context_Context ctx_00;
  string net;
  net_sockaddr raddr;
  multireturn_net_netFD___error__conflict mVar3;
  multireturn_net_TCPListener___error_ mVar4;
  multireturn_net_TCPListener___error_ mVar5;
  net_sockaddr laddr_00;
  net_sysListener *sl_spill;
  context_Context ctx_spill;
  net_TCPAddr *laddr_spill;
  undefined8 local_28;
  void *local_20;
  undefined8 local_10;
  
                    /* Unresolved local var: net.netFD * fd@[???]
                       Unresolved local var: error err@[???] */
  while (&local_10 <= *(undefined8 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mode.len = (int)(sl_spill->network).str;
  mode.str = ctx_spill.data;
  ctx_00.data = (sl_spill->ListenConfig).Control;
  ctx_00.tab = (runtime_itab *)sl_spill;
  net.len = (int)laddr;
  net.str = &DAT_00289c48;
  raddr.data = in_R10;
  raddr.tab = in_R9;
  laddr_00.data = in_R8;
  laddr_00.tab = ctx_spill.data;
  mVar3 = net_internetSocket(ctx_00,net,laddr_00,raddr,in_R11,(int)ctx_spill.tab,mode,
                             (func_string__string__syscall_RawConn__error **)(sl_spill->network).len
                            );
  mVar4.~r3.tab = mVar3.err.tab;
  if (local_20 == (void *)0x0) {
    local_10 = local_28;
    runtime_newobject((runtime__type *)&DAT_0024cbe0);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)ctx_spill.data = local_10;
    }
    else {
      runtime_gcWriteBarrier();
    }
    ppfVar2 = (sl_spill->ListenConfig).Control;
    tVar1 = (sl_spill->ListenConfig).KeepAlive;
    *(time_Duration *)((long)ctx_spill.data + 0x10) = tVar1;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(func_string__string__syscall_RawConn__error ***)((long)ctx_spill.data + 8) = ppfVar2;
    }
    else {
      runtime_gcWriteBarrierCX();
      tVar1 = extraout_RAX;
    }
    mVar4.~r2 = (net_TCPListener *)tVar1;
    mVar4.~r3.data = ppfVar2;
    return mVar4;
  }
  mVar5.~r3.tab = mVar4.~r3.tab;
  mVar5.~r2 = (net_TCPListener *)local_28;
  mVar5.~r3.data = local_20;
  return mVar5;
}

