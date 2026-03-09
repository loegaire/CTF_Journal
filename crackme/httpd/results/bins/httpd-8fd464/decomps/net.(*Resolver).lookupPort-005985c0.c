
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).lookupPort(net.Resolver * r, context.Context ctx,
   string network, string service, int ~r3, error ~r4) */

multireturn_int_error__conflict10
net___Resolver__lookupPort(net_Resolver *r,context_Context ctx,string network,string service)

{
  runtime_itab *r_00;
  uint8 *puVar1;
  uint8 *puVar2;
  long in_FS_OFFSET;
  bool bVar3;
  context_Context ctx_00;
  string network_00;
  string network_01;
  multireturn_int_error__conflict13 mVar4;
  multireturn_int_error__conflict10 mVar5;
  multireturn_int_error__conflict10 mVar6;
  multireturn_int_error__conflict10 mVar7;
  string service_00;
  string hostname;
  string network_02;
  string service_01;
  string service_02;
  multireturn_int_error_bool_ mVar8;
  net_Resolver *r_spill;
  context_Context ctx_spill;
  string network_spill;
  string service_spill;
  uint8 *local_50;
  void *local_48;
  undefined8 local_40;
  runtime_itab *local_38;
  char local_28;
  
  puVar2 = service.str;
  puVar1 = (uint8 *)network.len;
  service_01.len = network.str;
  mVar6.~r4.tab = ctx.data;
  r_00 = ctx.tab;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((r_spill == (net_Resolver *)0x0) || (r_spill->PreferGo == false)) {
    if (net_confOnce.done == 0) {
      sync___Once__doSlow((sync_Once *)&PTR_net_initConfVal_002b34d8,(func__ **)r_00);
    }
    hostname.len = (int)service_01.len;
    hostname.str = (uint8 *)mVar6.~r4.tab;
    net___conf__hostLookupOrder(net_confVal,(net_Resolver *)r_00,hostname);
    bVar3 = local_50 == (uint8 *)0x0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
                    /* Unresolved local var: int port@[???]
                       Unresolved local var: error err@[???] */
    local_50 = service_spill.str;
    local_48 = (void *)service_spill.len;
    ctx_00.data = (void *)service_spill.len;
    ctx_00.tab = (runtime_itab *)network_spill.str;
    service_00.len = (int)puVar2;
    service_00.str = puVar1;
    network_02.len = (int)service_01.len;
    network_02.str = (uint8 *)network_spill.len;
    mVar8 = net_cgoLookupPort(ctx_00,network_02,service_00);
    service_01.len = (uint8 *)CONCAT71((int7)((ulong)service_01.len >> 8),mVar8.completed);
    mVar6.~r4.tab = local_38;
    r_00 = local_38;
    if (local_28 != '\0') {
      mVar6.~r4.tab = (runtime_itab *)0x0;
      if (local_38 != (runtime_itab *)0x0) {
        network_00.len = (int)local_38;
        network_00.str = (uint8 *)service_spill.len;
        service_01.str = (uint8 *)local_38;
                    /* Unresolved local var: int port@[???] */
        mVar4 = net_goLookupPort(network_00,service_01);
        mVar6.~r4.data = mVar4.err.data;
        mVar6.~r4.tab = mVar4.err.tab;
        if (service_spill.len == 0) {
          mVar6.~r3 = (int)service_spill.str;
          return mVar6;
        }
      }
      mVar5.~r4.tab = mVar6.~r4.tab;
      mVar5.~r3 = local_40;
      mVar5.~r4.data = local_38;
      return mVar5;
    }
  }
  network_01.len = (int)r_00;
  network_01.str = (uint8 *)service_spill.len;
  service_02.len = (int)service_01.len;
  service_02.str = (uint8 *)mVar6.~r4.tab;
  mVar4 = net_goLookupPort(network_01,service_02);
  mVar7.~r4.tab = mVar4.err.tab;
  mVar7.~r3 = (int)local_50;
  mVar7.~r4.data = local_48;
  return mVar7;
}

