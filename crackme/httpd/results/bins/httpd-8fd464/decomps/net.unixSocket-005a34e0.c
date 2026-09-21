
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.unixSocket(context.Context ctx, string net, net.sockaddr
   laddr, net.sockaddr raddr, string mode, func(string,_string,_syscall.RawConn)_error * * ctrlFn,
   net.netFD * ~r6, error ~r7) */

multireturn_net_netFD___error__conflict1
net_unixSocket(context_Context ctx,string net,net_sockaddr laddr,net_sockaddr raddr,string mode,
              func_string__string__syscall_RawConn__error **ctrlFn)

{
  net_sockaddr raddr_00;
  long lVar1;
  uint8 *puVar2;
  undefined1 uVar3;
  long in_FS_OFFSET;
  context_Context ctx_00;
  string sVar5;
  string a1;
  multireturn_net_netFD___error__conflict1 mVar6;
  multireturn_net_netFD___error__conflict mVar7;
  multireturn_net_netFD___error__conflict1 mVar8;
  multireturn_net_netFD___error__conflict1 mVar9;
  multireturn_net_netFD___error__conflict1 mVar10;
  multireturn_net_netFD___error__conflict1 mVar11;
  string a0;
  string net_00;
  context_Context ctx_spill;
  string net_spill;
  net_sockaddr laddr_spill;
  net_sockaddr raddr_spill;
  func_string__string__syscall_RawConn__error **ctrlFn_spill;
  char in_stack_ffffffffffffff58;
  undefined7 uVar12;
  undefined8 in_stack_ffffffffffffff60;
  runtime__type *local_88;
  void *local_80;
  undefined8 local_48;
  void *local_40;
  void *local_30;
  long local_28;
  uint8 *local_20;
  runtime__type *local_18;
  int local_10;
  void *pvVar4;
  
  pvVar4 = raddr.data;
  puVar2 = (uint8 *)net.len;
  sVar5.len = ctx.data;
                    /* Unresolved local var: int sotype@[???]
                       Unresolved local var: net.netFD * fd@[???]
                       Unresolved local var: error err@[???] */
  while (uVar3 = SUB81(pvVar4,0), &local_30 <= *(void ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (ctx_spill.data == &DAT_00000004) {
    if (*(int *)&(ctx_spill.tab)->inter != 0x78696e75) goto LAB_005a3940;
    lVar1 = 1;
  }
  else if (ctx_spill.data == &DAT_00000008) {
    if ((ctx_spill.tab)->inter != (runtime_interfacetype *)0x6d61726778696e75) {
LAB_005a3940:
      sVar5.str = ctx_spill.data;
      runtime_convTstring(sVar5);
      mVar11.~r7.tab = sVar5.len;
      mVar11.~r6 = (net_netFD *)in_stack_ffffffffffffff60;
      mVar11.~r7.data = go_itab_net_UnknownNetworkError_error;
      return mVar11;
    }
    lVar1 = 2;
  }
  else {
    if (((ctx_spill.data != &DAT_0000000a) ||
        ((ctx_spill.tab)->inter != (runtime_interfacetype *)0x6b63617078696e75)) ||
       (*(short *)&(ctx_spill.tab)->_type != 0x7465)) goto LAB_005a3940;
    lVar1 = 5;
  }
  if (raddr_spill.data == &DAT_00000004) {
    if (*(int *)&(raddr_spill.tab)->inter != 0x6c616964) {
LAB_005a3875:
      uVar3 = 0xbd;
      uVar12 = 0x2982;
      a1.len = (int)raddr_spill.tab;
      a1.str = puVar2;
      a0.len = (int)ctx_spill.tab;
      a0.str = raddr_spill.data;
      sVar5 = runtime_concatstring2((runtime_tmpBuf *)&DAT_002982bd,a0,a1);
      mVar10.~r7.tab = sVar5.len;
      local_18 = local_88;
      local_30 = local_80;
      runtime_newobject(local_88);
      ((undefined8 *)CONCAT71(uVar12,uVar3))[1] = local_30;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(undefined8 *)CONCAT71(uVar12,uVar3) = local_18;
      }
      else {
        runtime_gcWriteBarrier();
      }
      mVar10.~r6 = (net_netFD *)&go_itab__errors_errorString_error;
      mVar10.~r7.data = local_80;
      return mVar10;
    }
    local_28 = lVar1;
    if ((net_spill.str != (uint8 *)0x0) &&
       ((**(code **)(net_spill.str + 0x30))(), in_stack_ffffffffffffff58 != '\0')) {
      net_spill.str = (uint8 *)0x0;
      net_spill.len = 0;
    }
    if ((laddr_spill.tab != (runtime_itab *)0x0) &&
       (local_20 = net_spill.str, local_10 = net_spill.len, (**(code **)&laddr_spill.tab[1].hash)(),
       net_spill.str = local_20, net_spill.len = local_10, in_stack_ffffffffffffff58 != '\0')) {
      laddr_spill.tab = (runtime_itab *)0x0;
      laddr_spill.data = (void *)0x0;
    }
    if ((laddr_spill.tab == (runtime_itab *)0x0) &&
       ((local_28 != 2 || (net_spill.str == (uint8 *)0x0)))) {
      mVar6.~r7.tab = (runtime_itab *)net_spill.str;
      mVar6.~r6 = (net_netFD *)net_errMissingAddress.tab;
      mVar6.~r7.data = net_errMissingAddress.data;
      return mVar6;
    }
  }
  else if (((raddr_spill.data != &DAT_00000006) || (*(int *)&(raddr_spill.tab)->inter != 0x7473696c)
           ) || (*(short *)((long)&(raddr_spill.tab)->inter + 4) != 0x6e65)) goto LAB_005a3875;
  raddr_00.data = ctx_spill.data;
  raddr_00.tab = ctx_spill.tab;
  ctx_00.data = net_spill.str;
  ctx_00.tab = (runtime_itab *)ctrlFn_spill;
  net_00.len = (int)laddr_spill.tab;
  net_00.str = (uint8 *)ctx_spill.tab;
  mVar7 = net_socket(ctx_00,net_00,net_spill.len,(int)laddr_spill.data,mode.len,(bool)uVar3,
                     (net_sockaddr)mode,raddr_00,ctrlFn);
  mVar8.~r7.tab = mVar7.err.tab;
  if (local_40 == (void *)0x0) {
    mVar9.~r7.tab = mVar8.~r7.tab;
    mVar9.~r6 = (net_netFD *)local_48;
    mVar9.~r7.data = (void *)0x0;
    return mVar9;
  }
  mVar8.~r6 = (net_netFD *)local_48;
  mVar8.~r7.data = local_40;
  return mVar8;
}

