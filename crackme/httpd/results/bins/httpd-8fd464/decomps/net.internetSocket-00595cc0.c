
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.internetSocket(context.Context ctx, string net, net.sockaddr
   laddr, net.sockaddr raddr, int sotype, int proto, string mode,
   func(string,_string,_syscall.RawConn)_error * * ctrlFn, net.netFD * fd, error err) */

multireturn_net_netFD___error__conflict
net_internetSocket(context_Context ctx,string net,net_sockaddr laddr,net_sockaddr raddr,int sotype,
                  int proto,string mode,func_string__string__syscall_RawConn__error **ctrlFn)

{
  net_sockaddr laddr_00;
  net_sockaddr raddr_00;
  runtime_itab *proto_00;
  void *pvVar1;
  long in_FS_OFFSET;
  string network;
  context_Context ctx_00;
  net_sockaddr laddr_01;
  string net_00;
  multireturn_net_netFD___error__conflict mVar2;
  multireturn_int_bool__conflict7 mVar3;
  net_sockaddr raddr_01;
  string mode_00;
  context_Context ctx_spill;
  string net_spill;
  net_sockaddr laddr_spill;
  net_sockaddr raddr_spill;
  int sotype_spill;
  byte local_40;
  undefined8 local_20;
  void *local_18;
  
  pvVar1 = raddr.data;
  proto_00 = raddr.tab;
                    /* Unresolved local var: int family@[???]
                       Unresolved local var: bool ipv6only@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  network.len = (int)ctx_spill.data;
  network.str = (uint8 *)mode.len;
  laddr_01.data = (void *)net_spill.len;
  laddr_01.tab = (runtime_itab *)ctrlFn;
  raddr_01.data = raddr_spill.data;
  raddr_01.tab = (runtime_itab *)net_spill.str;
  mode_00.len = (int)pvVar1;
  mode_00.str = (uint8 *)proto_00;
  mVar3 = net_favoriteAddrFamily(network,laddr_01,raddr_01,mode_00);
  ctx_00.data._1_7_ = (undefined7)((ulong)ctx_spill.data >> 8);
  ctx_00.data._0_1_ = mVar3.ipv6only;
  net_00.str = (uint8 *)(ulong)local_40;
  laddr_00.data = mode.str;
  laddr_00.tab = (runtime_itab *)proto;
  raddr_00.data = ctrlFn;
  raddr_00.tab = (runtime_itab *)mode.len;
  ctx_00.tab = (runtime_itab *)sotype_spill;
  net_00.len = net_spill.len;
  mVar2 = net_socket(ctx_00,net_00,(int)net_spill.str,(int)raddr_spill.data,(int)proto_00,
                     SUB81(pvVar1,0),laddr_00,raddr_00,
                     (func_string__string__syscall_RawConn__error **)sotype);
  mVar2.fd = (net_netFD *)local_20;
  mVar2.err.data = local_18;
  return mVar2;
}

