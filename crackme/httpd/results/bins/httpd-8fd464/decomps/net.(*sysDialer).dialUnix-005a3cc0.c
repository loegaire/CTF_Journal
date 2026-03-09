
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*sysDialer).dialUnix(net.sysDialer * sd, context.Context ctx,
   net.UnixAddr * laddr, net.UnixAddr * raddr, net.UnixConn * ~r3, error ~r4) */

multireturn_net_UnixConn___error_
net___sysDialer__dialUnix
          (net_sysDialer *sd,context_Context ctx,net_UnixAddr *laddr,net_UnixAddr *raddr)

{
  string mode;
  undefined8 extraout_RAX;
  void *in_R8;
  runtime_itab *in_R9;
  void *in_R10;
  func_string__string__syscall_RawConn__error **in_R11;
  long in_FS_OFFSET;
  context_Context ctx_00;
  multireturn_net_netFD___error__conflict1 mVar1;
  multireturn_net_UnixConn___error_ mVar2;
  multireturn_net_UnixConn___error_ mVar3;
  string net;
  net_sockaddr laddr_00;
  net_sockaddr raddr_00;
  net_sysDialer *sd_spill;
  context_Context ctx_spill;
  net_UnixAddr *laddr_spill;
  net_UnixAddr *raddr_spill;
  undefined8 local_28;
  void *local_20;
  
                    /* Unresolved local var: net.netFD * fd@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mode.len = (int)ctx_spill.data;
  mode.str = (uint8 *)ctx_spill.tab;
  ctx_00.data = ctx_spill.data;
  ctx_00.tab = (runtime_itab *)(sd_spill->Dialer).Control;
  net.len = (int)laddr;
  net.str = &DAT_002881ad;
  laddr_00.data = in_R8;
  laddr_00.tab = (runtime_itab *)raddr;
  raddr_00.data = in_R10;
  raddr_00.tab = in_R9;
  mVar1 = net_unixSocket(ctx_00,net,laddr_00,raddr_00,mode,in_R11);
  mVar2.~r4.tab = mVar1.~r7.tab;
  if (local_20 == (void *)0x0) {
    runtime_newobject((runtime__type *)&DAT_00243a20);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)ctx_spill.data = local_28;
    }
    else {
      runtime_gcWriteBarrier();
      local_28 = extraout_RAX;
    }
    mVar2.~r3 = (net_UnixConn *)local_28;
    mVar2.~r4.data = local_20;
    return mVar2;
  }
  mVar3.~r4.tab = mVar2.~r4.tab;
  mVar3.~r3 = (net_UnixConn *)local_28;
  mVar3.~r4.data = local_20;
  return mVar3;
}

