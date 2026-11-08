
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).lookupIP(net.Resolver * r, context.Context ctx,
   string network, string host, []net.IPAddr addrs, error err) */

multireturn___net_IPAddr_error_
net___Resolver__lookupIP(net_Resolver *r,context_Context ctx,string network,string host)

{
  void *pvVar1;
  void *pvVar2;
  uint8 *puVar3;
  int iVar4;
  net_hostLookupOrder in_R10;
  long in_FS_OFFSET;
  context_Context ctx_00;
  context_Context ctx_01;
  context_Context ctx_02;
  string network_00;
  string network_01;
  string hostname;
  string network_02;
  multireturn___net_IPAddr_error_ mVar5;
  multireturn___net_IPAddr_error_ mVar6;
  multireturn___net_IPAddr_error_ mVar7;
  string host_00;
  string name;
  string name_00;
  multireturn___net_IPAddr_error_bool_ mVar8;
  net_Resolver *r_spill;
  context_Context ctx_spill;
  string network_spill;
  string host_spill;
  net_Resolver *local_150;
  undefined8 local_140;
  undefined8 local_138;
  runtime_itab *local_130;
  int local_128;
  void *local_120;
  char local_118;
  undefined7 uStack_117;
  undefined1 local_f0 [216];
  int local_18;
  void *local_10;
  
  iVar4 = host.len;
  puVar3 = host.str;
  pvVar2 = (void *)network.len;
  mVar5.err.tab = (runtime_itab *)network.str;
  pvVar1 = ctx.data;
  ctx_01.tab = ctx.tab;
                    /* Unresolved local var: net.hostLookupOrder order@[???]
                       Unresolved local var: []net.IPAddr ips@[???] */
  while (local_f0 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((r_spill != (net_Resolver *)0x0) && (r_spill->PreferGo != false)) {
    ctx_01.data = pvVar1;
    network_00.len = (int)pvVar2;
    network_00.str = (uint8 *)mVar5.err.tab;
    host_00.len = iVar4;
    host_00.str = puVar3;
    mVar5 = net___Resolver__goLookupIP((net_Resolver *)host_spill.len,ctx_01,network_00,host_00);
    mVar6.err.tab = mVar5.err.tab;
    mVar6.err.data._1_7_ = uStack_117;
    mVar6.err.data._0_1_ = local_118;
    mVar6.addrs.len = local_128;
    mVar6.addrs.array = (net_IPAddr *)local_138;
    mVar6.addrs.cap = (int)local_120;
    return mVar6;
  }
  if (net_confOnce.done == 0) {
    sync___Once__doSlow((sync_Once *)&PTR_net_initConfVal_002b34d8,(func__ **)ctx_01.tab);
  }
  hostname.len = (int)mVar5.err.tab;
  hostname.str = host_spill.str;
  net___conf__hostLookupOrder((net_conf *)r_spill,(net_Resolver *)ctx_01.tab,hostname);
  if (local_150 == (net_Resolver *)0x0) {
    ctx_00.data = (void *)network_spill.len;
    ctx_00.tab = ctx_spill.tab;
    network_02.len = host_spill.len;
    network_02.str = ctx_spill.data;
    name_00.len = (int)puVar3;
    name_00.str = host_spill.str;
                    /* Unresolved local var: []net.IPAddr addrs@[???]
                       Unresolved local var: error err@[???] */
    mVar8 = net_cgoLookupIP(ctx_00,network_02,name_00);
    puVar3 = (uint8 *)CONCAT71((int7)((ulong)puVar3 >> 8),mVar8.completed);
    mVar5.err.tab = mVar8.err.tab;
    if (local_118 != '\0') {
      mVar5.addrs.len = (int)local_130;
      mVar5.addrs.array = (net_IPAddr *)local_140;
      mVar5.addrs.cap = local_128;
      mVar5.err.data = local_120;
      return mVar5;
    }
    local_150 = (net_Resolver *)0x1;
    ctx_01.tab = local_130;
    pvVar2 = local_120;
  }
  ctx_02.data = (void *)host_spill.len;
  ctx_02.tab = ctx_01.tab;
  network_01.len = (int)pvVar2;
  network_01.str = (uint8 *)mVar5.err.tab;
  name.len = iVar4;
  name.str = puVar3;
  net___Resolver__goLookupIPCNAMEOrder(local_150,ctx_02,network_01,name,in_R10);
  mVar7.addrs.len = (int)local_120;
  mVar7.addrs.array = (net_IPAddr *)local_130;
  mVar7.addrs.cap = local_18;
  mVar7.err.data = local_10;
  mVar7.err.tab = mVar5.err.tab;
  return mVar7;
}

