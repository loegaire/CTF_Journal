
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).goLookupIP(net.Resolver * r, context.Context ctx,
   string network, string host, []net.IPAddr addrs, error err) */

multireturn___net_IPAddr_error_
net___Resolver__goLookupIP(net_Resolver *r,context_Context ctx,string network,string host)

{
  int iVar1;
  runtime_itab *prVar2;
  uint8 *puVar3;
  int iVar4;
  net_hostLookupOrder in_R10;
  long in_FS_OFFSET;
  context_Context ctx_00;
  string network_00;
  string hostname;
  multireturn___net_IPAddr_error_ mVar5;
  string name;
  net_Resolver *r_spill;
  context_Context ctx_spill;
  string network_spill;
  string host_spill;
  net_Resolver *local_150;
  undefined8 local_130;
  undefined8 local_120;
  undefined1 local_f0 [216];
  int local_18;
  void *local_10;
  
  iVar4 = host.len;
  puVar3 = host.str;
  iVar1 = network.len;
  prVar2 = (runtime_itab *)network.str;
  ctx_00.tab = ctx.tab;
                    /* Unresolved local var: net.hostLookupOrder order@[???] */
  while (local_f0 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (net_confOnce.done == 0) {
    sync___Once__doSlow((sync_Once *)&PTR_net_initConfVal_002b34d8,(func__ **)ctx_00.tab);
  }
  hostname.len = (int)prVar2;
  hostname.str = host_spill.str;
  net___conf__hostLookupOrder((net_conf *)r_spill,(net_Resolver *)ctx_00.tab,hostname);
  ctx_00.data = (void *)host_spill.len;
  network_00.len = iVar1;
  network_00.str = (uint8 *)prVar2;
  name.len = iVar4;
  name.str = puVar3;
  net___Resolver__goLookupIPCNAMEOrder(local_150,ctx_00,network_00,name,in_R10);
  mVar5.addrs.len = local_120;
  mVar5.addrs.array = (net_IPAddr *)local_130;
  mVar5.addrs.cap = local_18;
  mVar5.err.data = local_10;
  mVar5.err.tab = prVar2;
  return mVar5;
}

