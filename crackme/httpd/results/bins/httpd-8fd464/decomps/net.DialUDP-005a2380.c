
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.DialUDP(string network, net.UDPAddr * laddr, net.UDPAddr *
   raddr, net.UDPConn * ~r3, error ~r4) */

multireturn_net_UDPConn___error_ net_DialUDP(string network,net_UDPAddr *laddr,net_UDPAddr *raddr)

{
  void *pvVar1;
  uint8 *extraout_RAX;
  uint8 *extraout_RAX_00;
  uint8 *extraout_RAX_01;
  undefined **extraout_RAX_02;
  undefined **extraout_RAX_03;
  undefined **extraout_RAX_04;
  undefined **extraout_RAX_05;
  undefined **ppuVar2;
  uint8 *extraout_RAX_06;
  uint8 *extraout_RAX_07;
  uint8 *extraout_RAX_08;
  undefined1 *puVar3;
  net_UDPAddr *in_RSI;
  net_UDPAddr *laddr_00;
  undefined1 *puVar4;
  long in_FS_OFFSET;
  string val;
  multireturn_net_UDPConn___error_ mVar5;
  multireturn_net_UDPConn___error_ mVar6;
  multireturn_net_UDPConn___error_ mVar7;
  multireturn_net_UDPConn___error_ mVar8;
  context_Context ctx;
  string network_spill;
  net_UDPAddr *laddr_spill;
  net_UDPAddr *raddr_spill;
  uint8 *local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_a0;
  uint8 *local_98;
  undefined *local_90;
  net_UDPAddr local_88 [2];
  undefined8 local_18;
  
                    /* Unresolved local var: net.UDPConn * c@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: uint8 * ~R0.data@[???]
                       Unresolved local var: uintptr ~R0.itab@[???] */
  while (&local_a0 <= *(undefined ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (network_spill.len == 3) {
    if ((*(short *)network_spill.str == 0x6475) && (network_spill.str[2] == 0x70)) {
LAB_005a240b:
      if (raddr_spill == (net_UDPAddr *)0x0) {
        if (laddr_spill == (net_UDPAddr *)0x0) {
          laddr_spill = (net_UDPAddr *)0x0;
          puVar3 = (undefined1 *)0x0;
        }
        else {
          puVar3 = go_itab__net_UDPAddr_net_Addr;
        }
        runtime_newobject((runtime__type *)&DAT_0026a420);
        local_118[8] = 4;
        local_118[9] = 0;
        local_118[10] = 0;
        local_118[0xb] = 0;
        local_118[0xc] = 0;
        local_118[0xd] = 0;
        local_118[0xe] = 0;
        local_118[0xf] = 0;
        *(undefined **)local_118 = &DAT_002881ad;
        *(int *)(local_118 + 0x18) = network_spill.len;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uint8 **)(local_118 + 0x10) = network_spill.str;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_118 = extraout_RAX;
        }
        *(undefined1 **)(local_118 + 0x20) = puVar3;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(net_UDPAddr **)(local_118 + 0x28) = laddr_spill;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_118 = extraout_RAX_00;
        }
        local_118[0x30] = 0;
        local_118[0x31] = 0;
        local_118[0x32] = 0;
        local_118[0x33] = 0;
        local_118[0x34] = 0;
        local_118[0x35] = 0;
        local_118[0x36] = 0;
        local_118[0x37] = 0;
        local_118[0x38] = 0;
        pvVar1 = net_errMissingAddress.data;
        local_118[0x39] = 0;
        local_118[0x3a] = 0;
        local_118[0x3b] = 0;
        local_118[0x3c] = 0;
        local_118[0x3d] = 0;
        local_118[0x3e] = 0;
        local_118[0x3f] = 0;
        *(runtime_itab **)(local_118 + 0x40) = net_errMissingAddress.tab;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(void **)(local_118 + 0x48) = pvVar1;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_118 = extraout_RAX_01;
        }
        mVar5.~r4.tab = (runtime_itab *)puVar3;
        mVar5.~r3 = (net_UDPConn *)local_118;
        mVar5.~r4.data = &go_itab__net_OpError_error;
        return mVar5;
      }
      net___UDPAddr__String((net_UDPAddr *)network_spill.len);
      laddr_00 = local_88;
      local_18 = FUN_0051a182();
      ctx.data = raddr_spill;
      ctx.tab = (runtime_itab *)network_spill.len;
      mVar5 = net___sysDialer__dialUDP((net_sysDialer *)laddr_spill,ctx,laddr_00,in_RSI);
      mVar7.~r4.tab = mVar5.~r4.tab;
      if (local_f0 == (undefined *)0x0) {
        mVar7.~r3 = (net_UDPConn *)local_f8;
        mVar7.~r4.data = local_e8;
        return mVar7;
      }
      local_a0 = local_e8;
      local_90 = local_f0;
      if (laddr_spill == (net_UDPAddr *)0x0) {
        laddr_spill = (net_UDPAddr *)0x0;
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = go_itab__net_UDPAddr_net_Addr;
      }
      runtime_newobject((runtime__type *)laddr_spill);
      ppuVar2 = &go_itab__context_emptyCtx_context_Context;
      PTR_DAT_002ff7d8 = &DAT_00000004;
      go_itab__context_emptyCtx_context_Context = &DAT_002881ad;
      PTR_context___emptyCtx__Deadline_002ff7e8 = (undefined *)network_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        DAT_002ff7e0 = network_spill.str;
      }
      else {
        runtime_gcWriteBarrierCX();
        ppuVar2 = extraout_RAX_02;
      }
      ppuVar2[4] = puVar3;
      if (runtime_writeBarrier._0_4_ == 0) {
        ppuVar2[5] = (undefined *)laddr_spill;
      }
      else {
        runtime_gcWriteBarrierCX();
        ppuVar2 = extraout_RAX_03;
      }
      ppuVar2[6] = go_itab__net_UDPAddr_net_Addr;
      if (runtime_writeBarrier._0_4_ == 0) {
        ppuVar2[7] = (undefined *)raddr_spill;
      }
      else {
        runtime_gcWriteBarrierCX();
        ppuVar2 = extraout_RAX_04;
      }
      ppuVar2[8] = local_90;
      if (runtime_writeBarrier._0_4_ == 0) {
        ppuVar2[9] = local_a0;
      }
      else {
        runtime_gcWriteBarrierCX();
        ppuVar2 = extraout_RAX_05;
      }
      mVar6.~r4.tab = (runtime_itab *)puVar3;
      mVar6.~r3 = (net_UDPConn *)ppuVar2;
      mVar6.~r4.data = &go_itab__net_OpError_error;
      return mVar6;
    }
  }
  else if ((network_spill.len == 4) &&
          ((*(int *)network_spill.str == 0x34706475 || (*(int *)network_spill.str == 0x36706475))))
  goto LAB_005a240b;
  if (laddr_spill == (net_UDPAddr *)0x0) {
    laddr_spill = (net_UDPAddr *)0x0;
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = go_itab__net_UDPAddr_net_Addr;
  }
  if (raddr_spill == (net_UDPAddr *)0x0) {
    raddr_spill = (net_UDPAddr *)0x0;
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = go_itab__net_UDPAddr_net_Addr;
  }
  runtime_newobject((runtime__type *)&DAT_0026a420);
  local_118[8] = 4;
  local_118[9] = 0;
  local_118[10] = 0;
  local_118[0xb] = 0;
  local_118[0xc] = 0;
  local_118[0xd] = 0;
  local_118[0xe] = 0;
  local_118[0xf] = 0;
  *(undefined **)local_118 = &DAT_002881ad;
  *(int *)(local_118 + 0x18) = network_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)(local_118 + 0x10) = network_spill.str;
  }
  else {
    runtime_gcWriteBarrierDX();
    local_118 = extraout_RAX_06;
  }
  *(undefined1 **)(local_118 + 0x20) = puVar3;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(net_UDPAddr **)(local_118 + 0x28) = laddr_spill;
  }
  else {
    runtime_gcWriteBarrierBX();
    local_118 = extraout_RAX_07;
  }
  *(undefined1 **)(local_118 + 0x30) = puVar4;
  local_98 = local_118;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(net_UDPAddr **)(local_118 + 0x38) = raddr_spill;
  }
  else {
    runtime_gcWriteBarrierBX();
    local_118 = extraout_RAX_08;
  }
  val.len = (int)raddr_spill;
  val.str = local_118;
  runtime_convTstring(val);
  puVar3 = go_itab_net_UnknownNetworkError_error;
  *(undefined1 **)(local_98 + 0x40) = go_itab_net_UnknownNetworkError_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined8 *)(local_98 + 0x48) = local_110;
  }
  else {
    runtime_gcWriteBarrier();
  }
  mVar8.~r4.tab = (runtime_itab *)raddr_spill;
  mVar8.~r3 = (net_UDPConn *)&go_itab__net_OpError_error;
  mVar8.~r4.data = puVar3;
  return mVar8;
}

