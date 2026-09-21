
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.Listen(string network, string address, net.Listener ~r2, error
   ~r3) */

multireturn_net_Listener_error__conflict net_Listen(string network,string address)

{
  int in_RSI;
  uint8 *puVar1;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string network_00;
  context_Context ctx;
  multireturn_net_Listener_error_ mVar2;
  multireturn_net_Listener_error__conflict mVar3;
  string address_00;
  string network_spill;
  string address_spill;
  runtime_itab *local_38;
  runtime_itab *local_28;
  void *local_20;
  net_ListenConfig lc;
  
  puVar1 = (uint8 *)address.len;
  ctx.tab = (runtime_itab *)network.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  network_00.len = in_RSI;
  network_00.str = puVar1;
  ctx.data = &go_itab__context_emptyCtx_context_Context;
  address_00.len = in_R9;
  address_00.str = in_R8;
  mVar2 = net___ListenConfig__Listen
                    ((net_ListenConfig *)address_spill.len,ctx,network_00,address_00);
  mVar3.~r3.data = mVar2.~r4.data;
  mVar3.~r2.data = local_20;
  mVar3.~r2.tab = local_38;
  mVar3.~r3.tab = local_28;
  return mVar3;
}

