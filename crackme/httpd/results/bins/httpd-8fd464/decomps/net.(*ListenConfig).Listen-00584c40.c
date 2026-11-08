
/* WARNING: Removing unreachable block (ram,0x00584ef7) */
/* WARNING: Removing unreachable block (ram,0x00584f5b) */
/* WARNING: Removing unreachable block (ram,0x00584fa1) */
/* WARNING: Removing unreachable block (ram,0x00584faa) */
/* WARNING: Removing unreachable block (ram,0x00585004) */
/* WARNING: Removing unreachable block (ram,0x00584ffe) */
/* WARNING: Removing unreachable block (ram,0x0058500d) */
/* WARNING: Removing unreachable block (ram,0x00585039) */
/* WARNING: Removing unreachable block (ram,0x0058502b) */
/* WARNING: Removing unreachable block (ram,0x0058504a) */
/* WARNING: Removing unreachable block (ram,0x0058506d) */
/* WARNING: Removing unreachable block (ram,0x0058505f) */
/* WARNING: Removing unreachable block (ram,0x0058507e) */
/* WARNING: Removing unreachable block (ram,0x005850b2) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*ListenConfig).Listen(net.ListenConfig * lc, context.Context
   ctx, string network, string address, net.Listener ~r3, error ~r4) */

multireturn_net_Listener_error_
net___ListenConfig__Listen(net_ListenConfig *lc,context_Context ctx,string network,string address)

{
  net_Addr hint;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime__type *extraout_RAX_01;
  runtime__type *extraout_RAX_02;
  runtime_itab *extraout_RAX_03;
  func_unsafe_Pointer__unsafe_Pointer__bool ***pppfVar2;
  int iVar3;
  uint8 *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  string op;
  net_addrList addrs;
  context_Context ctx_00;
  multireturn_net_addrList_error_ mVar4;
  string network_00;
  string addr;
  multireturn_net_Listener_error_ mVar5;
  multireturn_net_Listener_error_ mVar6;
  net_ListenConfig *lc_spill;
  context_Context ctx_spill;
  string network_spill;
  string address_spill;
  runtime__type *local_80;
  runtime_interfacetype *local_70;
  runtime__type *local_68;
  undefined1 local_60 [8];
  uint8 *local_58;
  runtime__type *local_50;
  runtime__type *local_48;
  runtime_interfacetype *local_40;
  func_string__string__syscall_RawConn__error **local_38;
  time_Duration tStack_30;
  uint8 *local_28;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfStack_20;
  runtime_itab *prVar1;
  
  iVar3 = address.len;
                    /* Unresolved local var: net.addrList addrs@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: net.Listener l@[???]
                       Unresolved local var: net.Addr la@[???] */
  while (local_60 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  hint.data = ctx_spill.tab;
  hint.tab = (runtime_itab *)net_DefaultResolver;
  op.len = network_spill.len;
  op.str = address_spill.str;
  ctx_00.data = ctx_spill.data;
  ctx_00.tab = (runtime_itab *)network_spill.str;
  network_00.len = iVar3;
  network_00.str = (uint8 *)address_spill.len;
  addr.len = in_R11;
  addr.str = in_R10;
  mVar4 = net___Resolver__resolveAddrList
                    ((net_Resolver *)ctx_spill.tab,ctx_00,op,network_00,addr,hint);
  prVar1 = mVar4.~r6.tab;
  if (local_70 != (runtime_interfacetype *)0x0) {
    local_40 = local_70;
    local_50 = local_68;
    runtime_newobject((runtime__type *)&DAT_0026a420);
    (ctx_spill.tab)->_type = (runtime__type *)&DAT_00000006;
    (ctx_spill.tab)->inter = (runtime_interfacetype *)&DAT_00289c48;
    (ctx_spill.tab)->fun[0] = network_spill.len;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)&(ctx_spill.tab)->hash = network_spill.str;
    }
    else {
      prVar1 = (runtime_itab *)&(ctx_spill.tab)->hash;
      runtime_gcWriteBarrierCX();
      ctx_spill.tab = extraout_RAX;
    }
    ctx_spill.tab[1].inter = (runtime_interfacetype *)0x0;
    ctx_spill.tab[1]._type = (runtime__type *)0x0;
    ctx_spill.tab[1].hash = 0;
    ctx_spill.tab[1]._[0] = 0;
    ctx_spill.tab[1]._[1] = 0;
    ctx_spill.tab[1]._[2] = 0;
    ctx_spill.tab[1]._[3] = 0;
    ctx_spill.tab[1].fun[0] = 0;
    ctx_spill.tab[2].inter = local_40;
    if (runtime_writeBarrier._0_4_ == 0) {
      ctx_spill.tab[2]._type = local_50;
    }
    else {
      prVar1 = (runtime_itab *)&ctx_spill.tab[2]._type;
      runtime_gcWriteBarrierCX();
      ctx_spill.tab = extraout_RAX_00;
    }
    mVar5.~r3.data = local_80;
    mVar5.~r3.tab = ctx_spill.tab;
    mVar5.~r4.data = prVar1;
    mVar5.~r4.tab = (runtime_itab *)&go_itab__net_OpError_error;
    return mVar5;
  }
  local_38 = lc_spill->Control;
  tStack_30 = lc_spill->KeepAlive;
  local_28 = network_spill.str;
  ppfStack_20 = (func_unsafe_Pointer__unsafe_Pointer__bool **)network_spill.len;
  addrs.len = (int)local_80;
  addrs.array = (net_Addr *)&local_38;
  addrs.cap = (int)address_spill.str;
  pppfVar2 = (func_unsafe_Pointer__unsafe_Pointer__bool ***)address_spill.len;
  net_addrList_first(addrs,(func_net_Addr__bool **)address_spill.len);
                    /* Unresolved local var: net.TCPAddr * la@[???] */
                    /* Unresolved local var: net.UnixAddr * la@[???] */
  local_40 = (runtime_interfacetype *)0x6;
  local_58 = network_spill.str;
                    /* Unresolved local var: net.Addr la@[???] */
  runtime_newobject((runtime__type *)&DAT_0024c8c0);
  local_80->ptrdata = 0x17;
  local_80->size = (uintptr)&DAT_0029e0d4;
  local_80->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)address_spill.len;
  local_48 = local_80;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)&local_80->hash = address_spill.str;
  }
  else {
    pppfVar2 = (func_unsafe_Pointer__unsafe_Pointer__bool ***)&local_80->hash;
    runtime_gcWriteBarrierCX();
  }
  runtime_newobject((runtime__type *)&DAT_0026a420);
  local_80->ptrdata = 6;
  local_80->size = (uintptr)&DAT_00289c48;
  local_80->equal = ppfStack_20;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)&local_80->hash = local_28;
  }
  else {
    pppfVar2 = (func_unsafe_Pointer__unsafe_Pointer__bool ***)&local_80->hash;
    runtime_gcWriteBarrierCX();
    local_80 = extraout_RAX_01;
  }
  local_80->gcdata = (uint8 *)0x0;
  local_80->str = 0;
  local_80->ptrToThis = 0;
  *(runtime_interfacetype **)(local_80 + 1) = local_40;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)((long)(local_80 + 1) + 8) = local_58;
  }
  else {
    pppfVar2 = (func_unsafe_Pointer__unsafe_Pointer__bool ***)((long)(local_80 + 1) + 8);
    runtime_gcWriteBarrierCX();
    local_80 = extraout_RAX_02;
  }
  ((runtime_itab *)((long)(local_80 + 1) + 0x10))->inter =
       (runtime_interfacetype *)go_itab__net_AddrError_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    ((runtime_itab *)((long)(local_80 + 1) + 0x18))->inter = (runtime_interfacetype *)local_48;
  }
  else {
    pppfVar2 = (func_unsafe_Pointer__unsafe_Pointer__bool ***)((long)(local_80 + 1) + 0x18);
    runtime_gcWriteBarrierCX();
    local_80 = (runtime__type *)extraout_RAX_03;
  }
  mVar6.~r3.data = &DAT_00000006;
  mVar6.~r3.tab = (runtime_itab *)local_80;
  mVar6.~r4.data = pppfVar2;
  mVar6.~r4.tab = (runtime_itab *)&go_itab__net_OpError_error;
  return mVar6;
}

