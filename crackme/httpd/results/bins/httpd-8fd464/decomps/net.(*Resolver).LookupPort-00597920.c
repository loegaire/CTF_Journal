
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).LookupPort(net.Resolver * r, context.Context ctx,
   string network, string service, int port, error err) */

multireturn_int_error__conflict13
net___Resolver__LookupPort(net_Resolver *r,context_Context ctx,string network,string service)

{
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  void *pvVar1;
  int iVar2;
  uint8 *puVar3;
  uint8 *puVar4;
  int iVar5;
  long in_FS_OFFSET;
  string service_00;
  string network_00;
  multireturn_int_bool__conflict8 mVar6;
  multireturn_int_error__conflict10 mVar7;
  multireturn_int_error__conflict13 mVar8;
  multireturn_int_error__conflict13 mVar9;
  multireturn_int_error__conflict13 mVar10;
  multireturn_int_error__conflict13 mVar11;
  context_Context ctx_00;
  string service_01;
  net_Resolver *r_spill;
  context_Context ctx_spill;
  string network_spill;
  string service_spill;
  runtime_itab *local_50;
  ulong local_48;
  char local_40;
  long local_38;
  ulong local_20;
  void *local_18;
  
  iVar5 = service.len;
  puVar4 = service.str;
  service_00.len = ctx.tab;
  iVar2 = network.len;
  puVar3 = network.str;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_50 = (runtime_itab *)service_spill.len;
  service_00.str = service_spill.str;
  pvVar1 = (void *)service_spill.len;
  mVar6 = net_parsePort(service_00);
  ctx_00.tab = (runtime_itab *)CONCAT71(ctx.tab._1_7_,mVar6.needsLookup);
  if (local_40 != '\0') {
    if (network_spill.len != 0) {
      if (network_spill.len == 3) {
        if (((*(short *)network_spill.str != 0x6374) || (network_spill.str[2] != 0x70)) &&
           ((*(short *)network_spill.str != 0x6475 || (network_spill.str[2] != 0x70)))) {
LAB_00597afa:
          runtime_newobject((runtime__type *)&DAT_0024c8c0);
          local_50->_type = (runtime__type *)&DAT_0000000f;
          local_50->inter = (runtime_interfacetype *)&DAT_002991cc;
          local_50->fun[0] = network_spill.len;
          if (runtime_writeBarrier._0_4_ == 0) {
            *(uint8 **)&local_50->hash = network_spill.str;
          }
          else {
            runtime_gcWriteBarrierCX();
            local_50 = extraout_RAX;
          }
          mVar9.err.tab = ctx_00.tab;
          mVar9.port = (int)local_50;
          mVar9.err.data = go_itab__net_AddrError_error;
          return mVar9;
        }
      }
      else {
        if (network_spill.len != 4) goto LAB_00597afa;
        local_50 = (runtime_itab *)network_spill.len;
        runtime_cmpstring();
        if (local_38 < 1) {
          if ((*(int *)network_spill.str != 0x34706374) && (*(int *)network_spill.str != 0x36706374)
             ) goto LAB_00597afa;
        }
        else if ((*(int *)network_spill.str != 0x34706475) &&
                (*(int *)network_spill.str != 0x36706475)) goto LAB_00597afa;
      }
    }
    local_50 = ctx_spill.tab;
    network_00.len = iVar2;
    network_00.str = puVar3;
    ctx_00.data = (void *)service_spill.len;
    service_01.len = iVar5;
    service_01.str = puVar4;
    mVar7 = net___Resolver__lookupPort
                      ((net_Resolver *)service_spill.str,ctx_00,network_00,service_01);
    mVar8.err.tab = mVar7.~r4.tab;
    pvVar1 = (void *)0x0;
    local_48 = local_20;
    ctx_00.tab = mVar8.err.tab;
    if (local_18 != (void *)0x0) {
      mVar8.port = local_20;
      mVar8.err.data = local_18;
      return mVar8;
    }
  }
  if (local_48 < 0x10000) {
    mVar11.err.tab = ctx_00.tab;
    mVar11.port = local_48;
    mVar11.err.data = pvVar1;
    return mVar11;
  }
  runtime_newobject((runtime__type *)&DAT_0024c8c0);
  local_50->_type = (runtime__type *)&DAT_0000000c;
  local_50->inter = (runtime_interfacetype *)&DAT_002937c6;
  local_50->fun[0] = service_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)&local_50->hash = service_spill.str;
  }
  else {
    runtime_gcWriteBarrierCX();
    local_50 = extraout_RAX_00;
  }
  mVar10.err.tab = ctx_00.tab;
  mVar10.port = (int)local_50;
  mVar10.err.data = go_itab__net_AddrError_error;
  return mVar10;
}

