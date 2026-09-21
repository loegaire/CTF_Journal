
/* WARNING: Unknown calling convention */

void net___Resolver__goLookupIPCNAMEOrder_func3
               (string fqdn,vendor_golang_org_x_net_dns_dnsmessage_Type qtype)

{
  runtime_funcval *fn;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  string fqdn_spill;
  vendor_golang_org_x_net_dns_dnsmessage_Type qtype_spill;
  
                    /* Unresolved local var: net.Resolver * r@[???]
                       Unresolved local var: chan_net.result.2 lane@[???]
                       Unresolved local var: net.dnsConfig * conf@[???]
                       Unresolved local var: context.Context ctx@[DW_OP_reg0(RAX); DW_OP_piece: 8;
                       DW_OP_piece: 8] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  fn = *(runtime_funcval **)(in_RDX + 0x20);
  sync___WaitGroup__Add(*(sync_WaitGroup **)(in_RDX + 0x10),(int)fn);
  runtime_newproc((uint)qtype_spill,fn);
  return;
}

