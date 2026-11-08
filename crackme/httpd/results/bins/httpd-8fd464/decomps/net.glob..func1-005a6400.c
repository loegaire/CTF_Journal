
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.glob..func1(context.Context ctx,
   func(context.Context,_string,_string)_([]net.IPAddr,_error) * * fn, string network, string host,
   []net.IPAddr ~r4, error ~r5) */

multireturn___net_IPAddr_error__conflict1
net_glob__func1(context_Context ctx,func_context_Context__string__string_____net_IPAddr__error_ **fn
               ,string network,string host)

{
  void *pvVar1;
  runtime_itab *prVar2;
  uint8 *puVar3;
  int iVar4;
  long in_FS_OFFSET;
  context_Context cVar5;
  string sVar6;
  multireturn___net_IPAddr_error__conflict1 mVar7;
  string sVar8;
  context_Context ctx_spill;
  func_context_Context__string__string_____net_IPAddr__error_ **fn_spill;
  string network_spill;
  string host_spill;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar4 = host.len;
  puVar3 = host.str;
  pvVar1 = (void *)network.len;
  prVar2 = (runtime_itab *)network.str;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  cVar5.data = pvVar1;
  cVar5.tab = prVar2;
  sVar6.len = iVar4;
  sVar6.str = puVar3;
  sVar8.len = host_spill.len;
  sVar8.str = (uint8 *)fn_spill;
  (**fn_spill)(cVar5,sVar8,sVar6,(__net_IPAddr *)ctx_spill.tab,ctx_spill.data);
  mVar7.~r4.len = local_28;
  mVar7.~r4.array = (net_IPAddr *)local_30;
  mVar7.~r4.cap = local_18;
  mVar7.~r5.data = local_20;
  mVar7.~r5.tab = local_10;
  return mVar7;
}

