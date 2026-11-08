
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).lookupIP-fm(context.Context ctx, string network,
   string host, []net.IPAddr addrs, error err) */

multireturn___net_IPAddr_error_
net___Resolver__lookupIP_fm(context_Context ctx,string network,string host)

{
  long *plVar1;
  uint8 *puVar2;
  long in_RDX;
  long extraout_RDX;
  uint8 *puVar3;
  uint8 *puVar4;
  uint8 *puVar5;
  int in_R9;
  long in_FS_OFFSET;
  string network_00;
  context_Context ctx_00;
  multireturn___net_IPAddr_error_ mVar6;
  string host_00;
  context_Context ctx_spill;
  string network_spill;
  string host_spill;
  undefined8 local_68;
  runtime_itab *local_60;
  void *local_58;
  undefined8 local_30;
  undefined8 local_20;
  int local_18;
  void *local_10;
  
  puVar5 = (uint8 *)host.len;
  puVar3 = host.str;
  puVar4 = (uint8 *)network.len;
  puVar2 = network.str;
  ctx_00.tab = ctx.data;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((context_Context *)*plVar1 == &ctx_spill)) {
    *plVar1 = (long)&local_68;
  }
  local_68 = *(undefined8 *)(in_RDX + 8);
  local_60 = ctx_spill.tab;
  local_58 = ctx_spill.data;
  network_00.len = (int)puVar3;
  network_00.str = puVar4;
  ctx_00.data = puVar2;
  host_00.len = in_R9;
  host_00.str = puVar5;
  mVar6 = net___Resolver__lookupIP((net_Resolver *)host_spill.len,ctx_00,network_00,host_00);
  mVar6.addrs.len = local_20;
  mVar6.addrs.array = (net_IPAddr *)local_30;
  mVar6.addrs.cap = local_18;
  mVar6.err.data = local_10;
  return mVar6;
}

