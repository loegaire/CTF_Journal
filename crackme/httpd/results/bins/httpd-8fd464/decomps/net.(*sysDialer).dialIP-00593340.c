
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*sysDialer).dialIP(net.sysDialer * sd, context.Context ctx,
   net.IPAddr * laddr, net.IPAddr * raddr, net.IPConn * ~r3, error ~r4) */

multireturn_net_IPConn___error_
net___sysDialer__dialIP(net_sysDialer *sd,context_Context ctx,net_IPAddr *laddr,net_IPAddr *raddr)

{
  context_Context ctx_00;
  string mode;
  undefined8 extraout_RAX;
  void *in_R8;
  runtime_itab *in_R9;
  void *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  multireturn_net_netFD___error__conflict mVar1;
  multireturn_net_IPConn___error_ mVar2;
  multireturn_net_IPConn___error_ mVar3;
  multireturn_net_IPConn___error_ mVar4;
  multireturn_net_IPConn___error_ mVar5;
  context_Context ctx_01;
  string val;
  string network;
  string net;
  net_sockaddr laddr_00;
  multireturn_string_int_error_ mVar6;
  net_sockaddr raddr_00;
  net_sysDialer *sd_spill;
  context_Context ctx_spill;
  net_IPAddr *laddr_spill;
  net_IPAddr *raddr_spill;
  uint8 *puVar7;
  short *local_68;
  runtime_itab *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_28;
  void *local_20;
  undefined8 local_10;
  
                    /* Unresolved local var: int proto@[???]
                       Unresolved local var: net.netFD * fd@[???]
                       Unresolved local var: string network@[???]
                       Unresolved local var: error err@[???] */
  while (&local_10 <= *(undefined8 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar7 = (sd_spill->network).str;
  ctx_00.data = ctx_spill.tab;
  ctx_00.tab = (runtime_itab *)sd_spill;
  network.len = (int)laddr;
  network.str = puVar7;
  mVar6 = net_parseNetwork(ctx_00,network,SUB81(ctx_spill.data,0));
  net.len = mVar6.err.tab;
  if (local_50 != (void *)0x0) {
    mVar5.~r4.tab = (runtime_itab *)local_68;
    mVar5.~r3 = (net_IPConn *)local_58;
    mVar5.~r4.data = local_50;
    return mVar5;
  }
  if (local_60 == (runtime_itab *)0x2) {
    if (*local_68 == 0x7069) {
LAB_00593415:
      mode.len = (int)local_68;
      mode.str = ctx_spill.data;
      ctx_01.data = laddr_spill;
      ctx_01.tab = (runtime_itab *)&DAT_002881ad;
      net.str = (uint8 *)(sd_spill->Dialer).Control;
      laddr_00.data = in_R8;
      laddr_00.tab = local_60;
      raddr_00.data = in_R10;
      raddr_00.tab = in_R9;
      mVar1 = net_internetSocket(ctx_01,net,laddr_00,raddr_00,in_R11,(int)ctx_spill.tab,mode,
                                 (func_string__string__syscall_RawConn__error **)local_60);
      mVar2.~r4.tab = mVar1.err.tab;
      if (local_20 != (void *)0x0) {
        mVar3.~r4.tab = mVar2.~r4.tab;
        mVar3.~r3 = (net_IPConn *)local_28;
        mVar3.~r4.data = local_20;
        return mVar3;
      }
      local_10 = local_28;
      runtime_newobject((runtime__type *)&DAT_00243820);
      if (runtime_writeBarrier._0_4_ == 0) {
        *(undefined8 *)ctx_spill.data = local_10;
      }
      else {
        runtime_gcWriteBarrier();
        local_10 = extraout_RAX;
      }
      mVar2.~r3 = (net_IPConn *)local_10;
      mVar2.~r4.data = local_20;
      return mVar2;
    }
  }
  else if ((local_60 == (runtime_itab *)0x3) &&
          (((*local_68 == 0x7069 && ((char)local_68[1] == '4')) ||
           ((*local_68 == 0x7069 && ((char)local_68[1] == '6')))))) goto LAB_00593415;
  val.len = (int)local_68;
  val.str = (uint8 *)(sd_spill->network).len;
  runtime_convTstring(val);
  mVar4.~r4.tab = (runtime_itab *)local_68;
  mVar4.~r3 = (net_IPConn *)puVar7;
  mVar4.~r4.data = go_itab_net_UnknownNetworkError_error;
  return mVar4;
}

