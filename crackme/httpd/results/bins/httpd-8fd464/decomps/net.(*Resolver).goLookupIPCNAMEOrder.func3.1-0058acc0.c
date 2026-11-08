
/* WARNING: Unknown calling convention */

void net___Resolver__goLookupIPCNAMEOrder_func3_1
               (net_Resolver *r,context_Context ctx,net_dnsConfig *conf,string fqdn,
               chan_net_result_2 lane,vendor_golang_org_x_net_dns_dnsmessage_Type qtype)

{
  void *pvVar1;
  uint8 *puVar2;
  net_dnsConfig *cfg;
  int iVar3;
  vendor_golang_org_x_net_dns_dnsmessage_Type qtype_00;
  long in_FS_OFFSET;
  context_Context ctx_00;
  string name;
  undefined1 auVar4 [16];
  net_Resolver *r_spill;
  context_Context ctx_spill;
  net_dnsConfig *conf_spill;
  string fqdn_spill;
  chan_net_result_2 lane_spill;
  vendor_golang_org_x_net_dns_dnsmessage_Type qtype_spill;
  uint local_568;
  undefined1 local_560 [64];
  undefined1 local_520 [272];
  undefined8 local_410;
  void *local_408;
  uint local_400;
  undefined1 local_3f8 [320];
  uint local_2b8;
  net_dnsConfig local_2b0;
  undefined1 local_188 [24];
  runtime_hchan local_170 [3];
  undefined8 local_28;
  undefined8 local_18;
  void *local_10;
  
  qtype_00 = (vendor_golang_org_x_net_dns_dnsmessage_Type)lane;
  iVar3 = fqdn.len;
  puVar2 = fqdn.str;
  pvVar1 = ctx.data;
  ctx_00.tab = ctx.tab;
                    /* Unresolved local var: string server@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: vendor/golang.org/x/net/dns/dnsmessage.Parser p@[???]
                        */
  while (local_520 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_2b8 = 0;
  cfg = &local_2b0;
  FUN_0051a13d();
  ctx_00.data = pvVar1;
  name.len = iVar3;
  name.str = puVar2;
  net___Resolver__tryOneName((net_Resolver *)(ulong)qtype_spill,ctx_00,cfg,name,qtype_00);
  local_2b8 = local_568;
  FUN_0051a428(&local_2b0,local_560,local_410);
  local_400 = local_2b8;
  FUN_0051a428(local_3f8,&local_2b0);
  local_170[0].qcount = 0;
  FUN_0051a12f(local_188);
  local_170[0].qcount = local_400;
  auVar4 = FUN_0051a428(&local_170[0].dataqsiz,local_3f8);
  local_18 = auVar4._8_8_;
  local_28 = auVar4._0_8_;
  local_10 = local_408;
  runtime_chansend1(local_170,local_408);
  sync___WaitGroup__Add(&net_dnsWaitGroup,(int)local_408);
  return;
}

