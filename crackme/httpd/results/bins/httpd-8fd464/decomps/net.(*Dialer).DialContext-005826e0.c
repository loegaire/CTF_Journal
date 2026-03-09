
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Dialer).DialContext(net.Dialer * d, context.Context ctx,
   string network, string address, net.Conn ~r3, error ~r4) */

multireturn_net_Conn_error_
net___Dialer__DialContext(net_Dialer *d,context_Context ctx,string network,string address)

{
  code *pcVar1;
  uint64 uVar2;
  net_Addr hint;
  net_sysDialer *pnVar3;
  undefined8 *extraout_RAX;
  undefined8 *extraout_RAX_00;
  undefined8 *puVar4;
  runtime_itab *prVar5;
  long extraout_RAX_01;
  long extraout_RAX_02;
  long lVar6;
  net_sysDialer *pnVar7;
  runtime_itab *prVar8;
  runtime_itab *extraout_RAX_03;
  time_Duration *ptVar9;
  undefined **ppuVar10;
  func_net_Addr__bool **ppfVar11;
  net_netFD *pnVar12;
  time_Duration *extraout_RDX;
  uint8 *extraout_RDX_00;
  uint8 *extraout_RDX_01;
  uint8 *puVar13;
  net_sysDialer *pnVar14;
  net_Resolver *pnVar15;
  net_sysDialer *pnVar16;
  runtime__type *prVar17;
  uint8 *puVar18;
  net_sysDialer *pnVar19;
  func_net_Addr__bool **strategy;
  time_Location *ptVar21;
  uint8 *puVar22;
  uint8 *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  context_Context parent;
  context_Context parent_00;
  context_Context parent_01;
  error eVar24;
  interface___ e;
  string op;
  time_Time t;
  net_addrList addrs;
  context_Context ctx_00;
  context_Context ctx_01;
  context_Context ctx_02;
  context_Context ctx_03;
  time_Time d_00;
  interface___ key;
  time_Time now;
  time_Time u;
  net_addrList primaries;
  net_addrList ras;
  string network_00;
  multireturn_net_Conn_error_ mVar25;
  multireturn_net_Conn_error_ mVar26;
  multireturn_net_Conn_error__conflict1 mVar27;
  multireturn_net_Conn_error_ mVar28;
  multireturn_net_Conn_error_ mVar29;
  multireturn_net_addrList_error_ mVar30;
  string addr;
  multireturn_net_addrList_net_addrList_ mVar31;
  net_addrList fallbacks;
  interface___ val;
  net_Dialer *d_spill;
  context_Context ctx_spill;
  string network_spill;
  string address_spill;
  net_netFD *pnStack0000000000000040;
  uint8 *puStack0000000000000048;
  undefined **ppuStack0000000000000050;
  net_netFD *pnStack0000000000000058;
  undefined4 in_stack_fffffffffffffeb8;
  undefined4 in_stack_fffffffffffffebc;
  char in_stack_fffffffffffffec0;
  undefined1 uVar32;
  undefined7 in_stack_fffffffffffffec1;
  undefined7 uVar33;
  net_sysDialer *local_138;
  net_sysDialer *local_130;
  net_sysDialer *local_128;
  net_sysDialer *local_120;
  net_sysDialer *local_118;
  net_sysDialer *local_110;
  net_sysDialer *local_108;
  long local_f0;
  net_netFD *local_e8;
  void *local_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [6];
  byte local_c2;
  byte local_c1;
  net_sysDialer *local_c0;
  net_sysDialer *local_b8;
  net_netFD *local_b0;
  net_netFD *local_a8;
  net_netFD *local_a0;
  void *local_98;
  net_sysDialer *local_90;
  net_sysDialer *local_88;
  net_sysDialer *local_80;
  uint8 *local_78;
  net_sysDialer *local_70;
  func_net_Addr__bool **local_68;
  net_sysDialer *local_60;
  <_chan_struct___ local_58;
  undefined8 local_50;
  long local_48;
  uint8 *local_40;
  net_sysDialer *local_38;
  net_sysDialer *local_18;
  net_sysDialer *pnStack_10;
  void *pvVar20;
  int iVar23;
  
  local_120 = local_138;
  ptVar21 = (time_Location *)address.str;
  prVar8 = ctx.data;
  e.data = ctx.tab;
  puVar18 = network.str;
                    /* Unresolved local var: net.sysDialer * sd@[???]
                       Unresolved local var: context.Context resolveCtx@[???]
                       Unresolved local var: net.addrList addrs@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: net.addrList primaries@[???]
                       Unresolved local var: net.addrList fallbacks@[???]
                       Unresolved local var: net.Conn c@[???] */
  while (local_c8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = (net_sysDialer *)0x0;
  pnStack_10 = (net_sysDialer *)0x0;
  local_c1 = 0;
  pnStack0000000000000040 = (net_netFD *)0x0;
  puStack0000000000000048 = (uint8 *)0x0;
  ppuStack0000000000000050 = (undefined **)0x0;
  pnStack0000000000000058 = (net_netFD *)0x0;
  if (ctx_spill.tab == (runtime_itab *)0x0) {
    e._type = (runtime__type *)net_http__stmp_203;
    runtime_gopanic(e);
    runtime_deferreturn();
    mVar26.~r3.data = e.data;
    mVar26.~r3.tab = extraout_RAX_03;
    mVar26.~r4.data = puVar18;
    mVar26.~r4.tab = prVar8;
    return mVar26;
  }
  time_Now();
  pnVar7 = (net_sysDialer *)CONCAT44(in_stack_fffffffffffffebc,in_stack_fffffffffffffeb8);
  local_128 = (net_sysDialer *)CONCAT71(in_stack_fffffffffffffec1,in_stack_fffffffffffffec0);
  uVar32 = SUB81(ctx_spill.tab,0);
  uVar33 = (undefined7)((ulong)ctx_spill.tab >> 8);
  local_138 = ctx_spill.data;
  ctx_00.data = local_128;
  ctx_00.tab = (runtime_itab *)d_spill;
  now.ext = (int64)ctx_spill.tab;
  now.wall = (uint64)ctx_spill.data;
  now.loc = ptVar21;
  pnVar19 = ctx_spill.data;
  net___Dialer__deadline((net_Dialer *)pnVar7,ctx_00,now);
                    /* Unresolved local var: context.CancelFunc * * cancel@[???]
                       Unresolved local var: context.Context subCtx@[???] */
  pnVar14 = local_110;
  if ((long)local_118 < 0) {
    pnVar19 = (net_sysDialer *)0xdd7b17f80;
    pnVar14 = (net_sysDialer *)(((ulong)((long)local_118 << 1) >> 0x1f) + 0xdd7b17f80);
  }
  local_88 = local_118;
  local_38 = local_108;
  local_90 = local_110;
  pnVar16 = local_118;
  if ((pnVar14 == (net_sysDialer *)0x0) &&
     (pnVar16 = (net_sysDialer *)((ulong)local_118 & 0x3fffffff), (int)pnVar16 == 0)) {
                    /* Unresolved local var: <-chan_struct_{} oldCancel@[???]
                       Unresolved local var: context.CancelFunc * * cancel@[???]
                       Unresolved local var: context.Context subCtx@[???] */
    prVar8 = (runtime_itab *)0x0;
    local_130 = pnVar7;
  }
  else {
    (*(code *)(ctx_spill.tab)->fun[0])();
    pnVar3 = local_88;
    local_130 = (net_sysDialer *)CONCAT71(uVar33,uVar32);
    pvVar20 = ctx_spill.data;
    if (in_stack_fffffffffffffec0 != '\0') {
      local_138 = local_38;
      local_128 = ctx_spill.data;
      t.ext = (int64)local_88;
      t.wall = (uint64)local_130;
      t.loc = ctx_spill.data;
      u.ext = (int64)local_90;
      u.wall = (uint64)local_38;
      u.loc = ptVar21;
      pnVar16 = local_90;
      pnVar19 = local_38;
      time_Time_Before(t,u);
      pnVar14 = pnVar3;
      local_120 = pnVar7;
      if ((char)local_118 == '\0') {
        prVar8 = (runtime_itab *)0x0;
        goto LAB_00582921;
      }
    }
    local_138 = local_88;
    local_130 = local_90;
    local_128 = local_38;
    parent.data = pnVar14;
    parent.tab = (runtime_itab *)local_38;
    d_00.ext = (int64)pnVar19;
    d_00.wall = (uint64)pvVar20;
    d_00.loc = (time_Location *)pnVar16;
    context_WithDeadline(parent,d_00);
    pnStack_10 = local_110;
    local_c1 = 1;
    prVar8 = (runtime_itab *)0x1;
    ctx_spill.tab = (runtime_itab *)local_120;
    ctx_spill.data = local_118;
  }
LAB_00582921:
  pnVar7 = local_128;
  if (d_spill->Cancel != (<_chan_struct___)0x0) {
    local_c2 = (byte)prVar8;
    parent_00.data = d_spill;
    parent_00.tab = prVar8;
    local_58 = d_spill->Cancel;
    context_WithCancel(parent_00);
    local_70 = local_130;
    local_c0 = local_138;
    local_18 = local_128;
    local_c2 = local_c2 | 2;
    local_130 = local_128;
    local_128 = local_138;
    local_c1 = local_c2;
    runtime_newproc((int32)pnVar7,(runtime_funcval *)local_138);
    prVar8 = (runtime_itab *)(ulong)local_c2;
    ctx_spill.tab = (runtime_itab *)local_c0;
    ctx_spill.data = local_70;
  }
  local_c2 = (byte)prVar8;
                    /* Unresolved local var: internal/nettrace.Trace * trace@[???] */
  pcVar1 = *(code **)&(((net_sysDialer *)ctx_spill.tab)->Dialer).DualStack;
  prVar17 = (runtime__type *)&DAT_002378e0;
  uVar32 = 0xe0;
  uVar33 = 0x2378;
  local_b8 = (net_sysDialer *)ctx_spill.tab;
  local_60 = ctx_spill.data;
  (*pcVar1)();
  if (local_130 != (net_sysDialer *)&DAT_0021c920) {
    local_128 = (net_sysDialer *)0x0;
  }
  pnVar7 = local_b8;
  if (local_128 != (net_sysDialer *)0x0) {
    local_80 = local_128;
                    /* Unresolved local var: internal/nettrace.Trace * &shadow@[???] */
    runtime_newobject((runtime__type *)&DAT_00262da0);
    ptVar9 = (time_Duration *)CONCAT71(uVar33,uVar32);
    uVar2 = (local_80->Dialer).Deadline.wall;
    if (runtime_writeBarrier._0_4_ == 0) {
      *ptVar9 = (time_Duration)(local_80->Dialer).Timeout;
      ptVar9[1] = uVar2;
    }
    else {
      runtime_gcWriteBarrierCX();
      runtime_gcWriteBarrier();
      ptVar9 = extraout_RDX;
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      ptVar9[2] = 0;
      ptVar9[3] = 0;
    }
    else {
      runtime_gcWriteBarrierDX();
      runtime_gcWriteBarrier();
    }
    parent_01.data = pcVar1;
    parent_01.tab = (runtime_itab *)local_b8;
    key.data = ptVar9;
    key._type = (runtime__type *)local_60;
    val.data = ptVar21;
    val._type = prVar17;
    context_WithValue(parent_01,key,val);
    pnVar7 = local_118;
  }
  pnVar15 = d_spill->Resolver;
  if (d_spill->Resolver == (net_Resolver *)0x0) {
    pnVar15 = net_DefaultResolver;
  }
  pnVar12 = (net_netFD *)(d_spill->LocalAddr).tab;
  puVar18 = (d_spill->LocalAddr).data;
  uVar32 = SUB81(pnVar7,0);
  uVar33 = (undefined7)((ulong)pnVar7 >> 8);
  hint.data._0_1_ = uVar32;
  hint.tab = (runtime_itab *)pnVar15;
  hint.data._1_7_ = uVar33;
  op.len = (int)pnVar12;
  op.str = puVar18;
  ctx_01.data = &DAT_002881ad;
  ctx_01.tab = (runtime_itab *)network_spill.len;
  network_00.len = address_spill.len;
  network_00.str = address_spill.str;
  addr.len = in_R11;
  addr.str = in_R10;
  puVar22 = address_spill.str;
  iVar23 = address_spill.len;
  mVar30 = net___Resolver__resolveAddrList((net_Resolver *)d_spill,ctx_01,op,network_00,addr,hint);
  prVar8 = mVar30.~r6.tab;
  if (local_d8 != (void *)0x0) {
    local_40 = local_d8;
    local_50 = local_d0;
    runtime_newobject((runtime__type *)&DAT_0026a420);
    puVar4 = (undefined8 *)CONCAT71(uVar33,uVar32);
    puVar4[1] = 4;
    *puVar4 = &DAT_002881ad;
    puVar4[3] = network_spill.len;
    if (runtime_writeBarrier._0_4_ == 0) {
      puVar4[2] = network_spill.str;
    }
    else {
      prVar8 = (runtime_itab *)(puVar4 + 2);
      runtime_gcWriteBarrierCX();
      puVar4 = extraout_RAX;
    }
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = local_40;
    if (runtime_writeBarrier._0_4_ == 0) {
      puVar4[9] = local_50;
    }
    else {
      prVar8 = (runtime_itab *)(puVar4 + 9);
      runtime_gcWriteBarrierCX();
      puVar4 = extraout_RAX_00;
    }
    pnStack0000000000000040 = (net_netFD *)0x0;
    puStack0000000000000048 = (uint8 *)0x0;
    ppuVar10 = &go_itab__net_OpError_error;
    ppuStack0000000000000050 = &go_itab__net_OpError_error;
    pnStack0000000000000058 = (net_netFD *)puVar4;
    if ((local_c2 & 2) != 0) {
      local_c2 = local_c2 & 0xfd;
      ppuVar10 = (undefined **)(local_18->Dialer).Timeout;
      local_c1 = local_c2;
      (*(code *)ppuVar10)();
    }
    prVar5 = (runtime_itab *)(ulong)local_c2;
    if ((local_c2 & 1) != 0) {
      local_c1 = local_c2 & 0xfe;
      prVar5 = (runtime_itab *)(*(code *)(pnStack_10->Dialer).Timeout)();
    }
    mVar25.~r3.data = local_e0;
    mVar25.~r3.tab = prVar5;
    mVar25.~r4.data = prVar8;
    mVar25.~r4.tab = (runtime_itab *)ppuVar10;
    return mVar25;
  }
  local_48 = local_f0;
  local_98 = local_e0;
  local_a0 = local_e8;
  runtime_newobject((runtime__type *)&DAT_002579a0);
  strategy = (func_net_Addr__bool **)CONCAT71(uVar33,uVar32);
  local_68 = strategy;
  if (runtime_writeBarrier._0_4_ == 0) {
    FUN_0051a4ec(strategy,d_spill);
  }
  else {
    runtime_typedmemmove((runtime__type *)d_spill,local_e0,local_d8);
  }
  local_68[0xd] = (func_net_Addr__bool *)network_spill.len;
  ppfVar11 = local_68;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_68[0xc] = (func_net_Addr__bool *)network_spill.str;
    lVar6 = network_spill.len;
    puVar13 = network_spill.str;
  }
  else {
    strategy = local_68 + 0xc;
    runtime_gcWriteBarrierDX();
    lVar6 = extraout_RAX_01;
    puVar13 = extraout_RDX_00;
  }
  ppfVar11[0xf] = (func_net_Addr__bool *)address_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    ppfVar11[0xe] = (func_net_Addr__bool *)address_spill.str;
  }
  else {
    strategy = ppfVar11 + 0xe;
    runtime_gcWriteBarrierBX();
    lVar6 = extraout_RAX_02;
    puVar13 = extraout_RDX_01;
  }
  if ((((d_spill->FallbackDelay < 0) || (lVar6 != 3)) || (*(short *)puVar13 != 0x6374)) ||
     (puVar13[2] != 0x70)) {
    pvVar20 = (void *)0x0;
    pnVar7 = (net_sysDialer *)0x0;
    network_spill.str = (uint8 *)local_a0;
  }
  else {
    addrs.len = (int)d_spill;
    addrs.array = (net_Addr *)&PTR_net_isIPv4_002b34f0;
    addrs.cap = (int)ppfVar11;
    mVar31 = net_addrList_partition(addrs,strategy);
    puVar22 = mVar31.fallbacks.cap;
    local_48 = 4;
    pnVar7 = (net_sysDialer *)address_spill.str;
    pvVar20 = (void *)address_spill.len;
    local_98 = (void *)network_spill.len;
  }
  if ((long)pvVar20 < 1) {
    ctx_03.data = pvVar20;
    ctx_03.tab = (runtime_itab *)network_spill.str;
    ras.len = local_48;
    ras.array = local_98;
    ras.cap = (int)puVar22;
    mVar27 = net___sysDialer__dialSerial(local_60,ctx_03,ras);
    pvVar20 = mVar27.~r3.data;
    local_f0 = address_spill.len;
    local_e8 = pnVar12;
  }
  else {
    ctx_02.data = pvVar20;
    ctx_02.tab = (runtime_itab *)network_spill.str;
    primaries.len = local_48;
    primaries.array = local_98;
    primaries.cap = (int)local_60;
    fallbacks.len = (int)in_R10;
    fallbacks.array = (net_Addr *)iVar23;
    fallbacks.cap = in_R11;
    mVar26 = net___sysDialer__dialParallel(pnVar7,ctx_02,primaries,fallbacks);
    pvVar20 = mVar26.~r4.data;
    network_spill.len = (int)pnVar12;
    address_spill.str = puVar18;
                    /* Unresolved local var: net.TCPConn * tc@[???] */
  }
  if (local_f0 != 0) {
    pnStack0000000000000040 = (net_netFD *)0x0;
    puStack0000000000000048 = (uint8 *)0x0;
    pnVar12 = local_e8;
    pnStack0000000000000058 = local_e8;
    if ((local_c2 & 2) != 0) {
      local_c2 = local_c2 & 0xfd;
      pnVar12 = (net_netFD *)(local_18->Dialer).Timeout;
      local_c1 = local_c2;
      (*(code *)pnVar12)();
    }
    prVar8 = (runtime_itab *)(ulong)local_c2;
    if ((local_c2 & 1) != 0) {
      local_c1 = local_c2 & 0xfe;
      prVar8 = (runtime_itab *)(*(code *)(pnStack_10->Dialer).Timeout)();
    }
    mVar28.~r3.data = address_spill.str;
    mVar28.~r3.tab = prVar8;
    mVar28.~r4.data = pvVar20;
    mVar28.~r4.tab = (runtime_itab *)pnVar12;
    return mVar28;
  }
  puVar18 = address_spill.str;
  if ((undefined1 *)network_spill.len == go_itab__net_TCPConn_net_Conn) {
    if (-1 < d_spill->KeepAlive) {
                    /* Unresolved local var: time.Duration ka@[???] */
      local_a8 = (net_netFD *)network_spill.len;
      local_78 = address_spill.str;
      local_40 = address_spill.str;
      eVar24 = net_setKeepAlive(*(net_netFD **)address_spill.str,SUB81(address_spill.str,0));
      local_b0 = (net_netFD *)d_spill->KeepAlive;
      if (local_b0 == (net_netFD *)0x0) {
        local_b0 = (net_netFD *)0x37e11d600;
      }
      eVar24 = net_setKeepAlivePeriod(local_b0,(time_Duration)eVar24.data);
      address_spill.str = eVar24.data;
      d_spill = (net_Dialer *)local_b0;
      (**net_testHookSetKeepAlive)((time_Duration)pvVar20);
      puVar18 = local_40;
      network_spill.len = (int)local_a8;
    }
  }
  else {
    d_spill = (net_Dialer *)local_e8;
    address_spill.str = (uint8 *)0x0;
  }
  ppuStack0000000000000050 = (undefined **)0x0;
  pnStack0000000000000058 = (net_netFD *)0x0;
  pnStack0000000000000040 = (net_netFD *)network_spill.len;
  puStack0000000000000048 = puVar18;
  if ((local_c2 & 2) != 0) {
    local_c2 = local_c2 & 0xfd;
    d_spill = (net_Dialer *)(local_18->Dialer).Timeout;
    local_c1 = local_c2;
    (*(code *)d_spill)();
  }
  prVar8 = (runtime_itab *)(ulong)local_c2;
  if ((local_c2 & 1) != 0) {
    local_c1 = local_c2 & 0xfe;
    prVar8 = (runtime_itab *)(*(code *)(pnStack_10->Dialer).Timeout)();
  }
  mVar29.~r3.data = address_spill.str;
  mVar29.~r3.tab = prVar8;
  mVar29.~r4.data = pvVar20;
  mVar29.~r4.tab = (runtime_itab *)d_spill;
  return mVar29;
}

