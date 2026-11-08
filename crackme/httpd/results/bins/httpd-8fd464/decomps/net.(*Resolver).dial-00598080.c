
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).dial(net.Resolver * r, context.Context ctx, string
   network, string server, net.Conn ~r3, error ~r4) */

multireturn_net_Conn_error_
net___Resolver__dial(net_Resolver *r,context_Context ctx,string network,string server)

{
  func_context_Context__string__string___net_Conn__error_ **ppfVar1;
  undefined1 auVar2 [32];
  runtime_itab *prVar3;
  void *pvVar4;
  runtime_itab *prVar5;
  void *pvVar6;
  runtime_itab *prVar7;
  runtime_itab **pprVar8;
  uint8 *puVar9;
  int iVar10;
  long in_FS_OFFSET;
  context_Context cVar11;
  string network_00;
  context_Context ctx_00;
  string sVar12;
  string address;
  multireturn_net_Conn_error_ mVar13;
  string sVar14;
  net_Resolver *r_spill;
  context_Context ctx_spill;
  string network_spill;
  string server_spill;
  char local_b8;
  void *local_a0;
  void *local_98;
  runtime_itab *local_90;
  runtime_itab *local_88;
  runtime_itab *local_80;
  runtime_itab *local_78;
  runtime_itab *local_70;
  undefined1 local_50 [72];
  
  iVar10 = server.len;
  puVar9 = server.str;
  pvVar4 = ctx.data;
  ctx_00.tab = ctx.tab;
  pvVar6 = (void *)network.len;
  prVar7 = (runtime_itab *)network.str;
                    /* Unresolved local var: net.Conn c@[???]
                       Unresolved local var: error err@[???] */
  while (local_50 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((r_spill == (net_Resolver *)0x0) ||
     (ppfVar1 = r_spill->Dial,
     ppfVar1 == (func_context_Context__string__string___net_Conn__error_ **)0x0)) {
                    /* Unresolved local var: net.Dialer d@[???] */
    pprVar8 = &local_88;
    FUN_0051a18b();
    local_b8 = (char)network_spill.str;
    network_00.len = (int)pvVar6;
    network_00.str = (uint8 *)pprVar8;
    ctx_00.data = pvVar4;
    address.len = iVar10;
    address.str = puVar9;
    mVar13 = net___Dialer__DialContext((net_Dialer *)server_spill.len,ctx_00,network_00,address);
    prVar7 = mVar13.~r4.data;
    local_90 = local_88;
    local_88 = local_80;
    local_a0 = local_98;
  }
  else {
    local_b8 = (char)network_spill.len;
    cVar11.data = pvVar6;
    cVar11.tab = prVar7;
    sVar12.len = iVar10;
    sVar12.str = puVar9;
    sVar14.len = server_spill.len;
    sVar14.str = (uint8 *)ppfVar1;
    (**ppfVar1)(cVar11,sVar14,sVar12,(net_Conn *)ctx_spill.tab,ctx_spill.data);
  }
  if (local_90 != (runtime_itab *)0x0) {
    local_78 = local_90;
    local_70 = local_88;
    if ((((context_Canceled.tab != local_90) ||
         (runtime_ifaceeq(local_90,local_a0,local_88), prVar3 = net_errCanceled.tab,
         prVar5 = net_errCanceled.data, local_b8 == '\0')) &&
        (prVar3 = local_78, prVar5 = local_70, context_DeadlineExceeded.tab == local_78)) &&
       (runtime_ifaceeq(local_78,local_a0,local_70), prVar3 = local_78, prVar5 = local_70,
       local_b8 != '\0')) {
      prVar3 = net_errTimeout.tab;
      prVar5 = net_errTimeout.data;
    }
    mVar13.~r3.data = local_a0;
    mVar13.~r3.tab = prVar3;
    mVar13.~r4.data = prVar7;
    mVar13.~r4.tab = prVar5;
    return mVar13;
  }
  auVar2._16_8_ = prVar7;
  auVar2._8_8_ = local_88;
  auVar2._0_8_ = local_a0;
  auVar2._24_8_ = 0;
  return (multireturn_net_Conn_error_)(auVar2 << 0x40);
}

