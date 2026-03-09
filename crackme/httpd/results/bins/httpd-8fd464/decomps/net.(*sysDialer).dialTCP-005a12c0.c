
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*sysDialer).dialTCP(net.sysDialer * sd, context.Context ctx,
   net.TCPAddr * laddr, net.TCPAddr * raddr, net.TCPConn * ~r3, error ~r4) */

multireturn_net_TCPConn___error_
net___sysDialer__dialTCP
          (net_sysDialer *sd,context_Context ctx,net_TCPAddr *laddr,net_TCPAddr *raddr)

{
  void *pvVar1;
  net_TCPAddr *in_R8;
  net_TCPAddr *in_R9;
  long in_FS_OFFSET;
  context_Context cVar2;
  multireturn_net_TCPConn___error_ mVar3;
  multireturn_net_TCPConn___error_ mVar4;
  context_Context ctx_00;
  string sVar5;
  net_sysDialer *sd_spill;
  context_Context ctx_spill;
  net_TCPAddr *laddr_spill;
  net_TCPAddr *raddr_spill;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  pvVar1 = ctx.data;
  ctx_00.tab = ctx.tab;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (net_testHookDialTCP !=
      (func_context_Context__string___net_TCPAddr___net_TCPAddr____net_TCPConn__error_ **)0x0) {
    cVar2.data = ctx_spill.data;
    cVar2.tab = (runtime_itab *)laddr;
    sVar5.len = (int)raddr_spill;
    sVar5.str = (uint8 *)net_testHookDialTCP;
    (**net_testHookDialTCP)(cVar2,sVar5,in_R8,in_R9,(net_TCPConn **)ctx_spill.tab,ctx_spill.data);
    mVar3.~r4.tab = (runtime_itab *)local_10;
    mVar3.~r3 = local_20;
    mVar3.~r4.data = local_18;
    return mVar3;
  }
  ctx_00.data = pvVar1;
  mVar4 = net___sysDialer__doDialTCP((net_sysDialer *)raddr_spill,ctx_00,laddr,raddr);
  mVar4.~r3 = (net_TCPConn *)local_28;
  mVar4.~r4.data = local_20;
  return mVar4;
}

