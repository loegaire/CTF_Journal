
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).goLookupIPCNAMEOrder.func4(string fqdn,
   vendor/golang.org/x/net/dns/dnsmessage.Type qtype, net.result.2 ~r2) */

net_result_2
net___Resolver__goLookupIPCNAMEOrder_func4
          (string fqdn,vendor_golang_org_x_net_dns_dnsmessage_Type qtype)

{
  net_result_2 nVar1;
  long in_FS_OFFSET;
  net_result_2 return_value_alias_variable;
  string fqdn_spill;
  vendor_golang_org_x_net_dns_dnsmessage_Type qtype_spill;
  undefined8 local_188;
  undefined8 local_180;
  runtime_hchan *local_178;
  runtime_hchan local_170;
  undefined1 local_100 [248];
  
                    /* Unresolved local var: chan_net.result.2 lane@[???] */
  while (local_100 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
  }
  return_value_alias_variable.p.header.id = 0;
  return_value_alias_variable.p.header.bits = 0;
  return_value_alias_variable.p.header.questions = 0;
  return_value_alias_variable.p.header.answers = 0;
  local_188 = 0x58ab2f;
  FUN_0051a12f(&return_value_alias_variable);
  local_170.qcount = 0;
  local_188 = 0x58ab58;
  local_180 = FUN_0051a12f(&local_188);
  local_178 = &local_170;
  local_188 = 0x58ab6f;
  runtime_chanrecv1(local_178,(void *)fqdn.len);
  return_value_alias_variable.p.header.id = (undefined2)local_170.qcount;
  return_value_alias_variable.p.header.bits = local_170.qcount._2_2_;
  return_value_alias_variable.p.header.questions = local_170.qcount._4_2_;
  return_value_alias_variable.p.header.answers = local_170.qcount._6_2_;
  local_188 = 0x58ab98;
  FUN_0051a40c(&return_value_alias_variable.p.header.authorities,&local_170.dataqsiz);
  nVar1.p.header.id = return_value_alias_variable.p.header.id;
  nVar1.p.header.bits = return_value_alias_variable.p.header.bits;
  nVar1.p.header.questions = return_value_alias_variable.p.header.questions;
  nVar1.p.header.answers = return_value_alias_variable.p.header.answers;
  nVar1.p.msg = return_value_alias_variable.p.msg;
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
  nVar1.error = return_value_alias_variable.error;
  return nVar1;
}

