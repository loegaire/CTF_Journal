
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).goLookupIPCNAMEOrder.func2(string fqdn,
   vendor/golang.org/x/net/dns/dnsmessage.Type qtype, net.result.2 ~r2) */

net_result_2
net___Resolver__goLookupIPCNAMEOrder_func2
          (string fqdn,vendor_golang_org_x_net_dns_dnsmessage_Type qtype)

{
  runtime_itab *delta;
  net_result_2 nVar1;
  sync_WaitGroup *wg;
  void *pvVar2;
  long in_RDX;
  long extraout_RDX;
  sync_WaitGroup *psVar3;
  net_dnsConfig *cfg;
  int in_R8;
  vendor_golang_org_x_net_dns_dnsmessage_Type in_R9W;
  long in_FS_OFFSET;
  context_Context ctx;
  string name;
  net_result_2 return_value_alias_variable;
  string fqdn_spill;
  vendor_golang_org_x_net_dns_dnsmessage_Type qtype_spill;
  vendor_golang_org_x_net_dns_dnsmessage_header local_438 [6];
  undefined1 local_3f0 [272];
  undefined8 local_2e0;
  undefined1 local_2c9;
  undefined8 local_2c8;
  undefined8 local_2c0;
  void *local_2b8;
  runtime_itab *local_2b0;
  vendor_golang_org_x_net_dns_dnsmessage_header local_2a8 [27];
  undefined1 local_160 [328];
  sync_WaitGroup *local_18;
  undefined **ppuStack_10;
  
                    /* Unresolved local var: net.Resolver * r@[???]
                       Unresolved local var: net.dnsConfig * conf@[???]
                       Unresolved local var: context.Context ctx@[???]
                       Unresolved local var: string server@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: vendor/golang.org/x/net/dns/dnsmessage.Parser p@[???]
                        */
  while (local_3f0 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  local_18 = (sync_WaitGroup *)0x0;
  ppuStack_10 = (undefined **)0x0;
  local_2c9 = 0;
  local_2c8 = *(undefined8 *)(in_RDX + 0x10);
  pvVar2 = *(void **)(in_RDX + 0x18);
  delta = *(runtime_itab **)(in_RDX + 0x20);
  local_2c0 = *(undefined8 *)(in_RDX + 8);
  return_value_alias_variable.p.header.id = 0;
  return_value_alias_variable.p.header.bits = 0;
  return_value_alias_variable.p.header.questions = 0;
  return_value_alias_variable.p.header.answers = 0;
  local_2b8 = pvVar2;
  local_2b0 = delta;
  wg = (sync_WaitGroup *)FUN_0051a12f(&return_value_alias_variable);
  psVar3 = &net_dnsWaitGroup;
  sync___WaitGroup__Add(wg,(int)delta);
  ppuStack_10 = &PTR_sync___WaitGroup__Done_002b3ac0;
  local_18 = &net_dnsWaitGroup;
  local_2c9 = 1;
  local_160._0_8_ = 0;
  cfg = (net_dnsConfig *)(local_160 + 8);
  FUN_0051a13d();
  ctx.data = pvVar2;
  ctx.tab = delta;
  name.len = in_R8;
  name.str = (uint8 *)psVar3;
  net___Resolver__tryOneName
            ((net_Resolver *)(ulong)(ushort)return_value_alias_variable.p.msg.cap,ctx,cfg,name,
             in_R9W);
  local_160._0_8_ = local_438[0]._0_8_;
  FUN_0051a428(local_160 + 8,&local_438[0].authorities,local_2e0);
  local_2a8[0].id = local_160._0_2_;
  local_2a8[0].bits = local_160._2_2_;
  local_2a8[0].questions = local_160._4_2_;
  local_2a8[0].answers = local_160._6_2_;
  FUN_0051a428(&local_2a8[0].authorities,local_160 + 8);
  return_value_alias_variable.p.header.id = 0;
  return_value_alias_variable.p.header.bits = 0;
  return_value_alias_variable.p.header.questions = 0;
  return_value_alias_variable.p.header.answers = 0;
  FUN_0051a12f(&return_value_alias_variable);
  return_value_alias_variable.p.header.id = local_2a8[0].id;
  return_value_alias_variable.p.header.bits = local_2a8[0].bits;
  return_value_alias_variable.p.header.questions = local_2a8[0].questions;
  return_value_alias_variable.p.header.answers = local_2a8[0].answers;
  return_value_alias_variable.error.data =
       (void *)FUN_0051a428(&return_value_alias_variable.p.header.authorities,
                            &local_2a8[0].authorities);
  local_2c9 = 0;
  sync___WaitGroup__Done(local_18);
  nVar1.p.msg.len = return_value_alias_variable.p.msg.len;
  nVar1.p.msg.array = return_value_alias_variable.p.msg.array;
  nVar1.p.msg.cap._0_2_ = (ushort)return_value_alias_variable.p.msg.cap;
  nVar1.p.msg.cap._2_6_ = return_value_alias_variable.p.msg.cap._2_6_;
  nVar1.p.header.id = return_value_alias_variable.p.header.id;
  nVar1.p.header.bits = return_value_alias_variable.p.header.bits;
  nVar1.p.header.questions = return_value_alias_variable.p.header.questions;
  nVar1.p.header.answers = return_value_alias_variable.p.header.answers;
  nVar1.p.header.authorities = return_value_alias_variable.p.header.authorities;
  nVar1.p.header.additionals = return_value_alias_variable.p.header.additionals;
  nVar1.p.section = return_value_alias_variable.p.section;
  nVar1.p._37_3_ = return_value_alias_variable.p._37_3_;
  nVar1.p.off = return_value_alias_variable.p.off;
  nVar1.p.index = return_value_alias_variable.p.index;
  nVar1.p.resHeaderValid = return_value_alias_variable.p.resHeaderValid;
  nVar1.p._57_3_ = return_value_alias_variable.p._57_3_;
  nVar1.p.resHeader = return_value_alias_variable.p.resHeader;
  nVar1.server = return_value_alias_variable.server;
  nVar1.error.tab = return_value_alias_variable.error.tab;
  nVar1.error.data = return_value_alias_variable.error.data;
  return nVar1;
}

