
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Dialer).DialContext-fm(context.Context ctx, string network,
   string address, net.Conn ~r3, error ~r4) */

multireturn_net_Conn_error_
net___Dialer__DialContext_fm(context_Context ctx,string network,string address)

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
  string address_00;
  multireturn_net_Conn_error_ mVar6;
  context_Context ctx_spill;
  string network_spill;
  string address_spill;
  undefined8 local_60;
  runtime_itab *local_58;
  void *local_50;
  runtime_itab *local_28;
  runtime_itab *local_18;
  void *local_10;
  
  puVar5 = (uint8 *)address.len;
  puVar3 = address.str;
  puVar4 = (uint8 *)network.len;
  puVar2 = network.str;
  ctx_00.tab = ctx.data;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((context_Context *)*plVar1 == &ctx_spill)) {
    *plVar1 = (long)&local_60;
  }
  local_60 = *(undefined8 *)(in_RDX + 8);
  local_58 = ctx_spill.tab;
  local_50 = ctx_spill.data;
  network_00.len = (int)puVar3;
  network_00.str = puVar4;
  ctx_00.data = puVar2;
  address_00.len = in_R9;
  address_00.str = puVar5;
  mVar6 = net___Dialer__DialContext((net_Dialer *)address_spill.len,ctx_00,network_00,address_00);
  mVar6.~r3.data = local_10;
  mVar6.~r3.tab = local_28;
  mVar6.~r4.tab = local_18;
  return mVar6;
}

