
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*sysDialer).dialSingle(net.sysDialer * sd, context.Context
   ctx, net.Addr ra, net.Conn c, error err) */

multireturn_net_Conn_error__conflict2
net___sysDialer__dialSingle(net_sysDialer *sd,context_Context ctx,net_Addr ra)

{
  uint uVar1;
  runtime__type *prVar2;
  runtime_interfacetype *prVar3;
  uint8 *puVar4;
  runtime_itab *prVar5;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  runtime_itab *extraout_RAX_02;
  runtime_itab *extraout_RAX_03;
  undefined8 *extraout_RAX_04;
  undefined8 *extraout_RAX_05;
  undefined8 *extraout_RAX_06;
  undefined8 *extraout_RAX_07;
  undefined8 *puVar6;
  runtime_itab *extraout_RAX_08;
  runtime_itab *prVar7;
  undefined1 *puVar8;
  net_sysDialer *pnVar9;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  bool bVar11;
  context_Context ctx_00;
  context_Context ctx_01;
  context_Context ctx_02;
  context_Context ctx_03;
  string raStr;
  string raStr_00;
  string raStr_01;
  multireturn_net_Conn_error__conflict2 mVar12;
  multireturn_net_Conn_error__conflict2 mVar13;
  multireturn_net_Conn_error__conflict2 mVar14;
  net_sysDialer *sd_spill;
  context_Context ctx_spill;
  undefined1 *in_stack_00000020;
  net_TCPAddr *ra_1;
  undefined1 *puStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined **ppuStack0000000000000040;
  runtime__type *prStack0000000000000048;
  undefined8 *local_a8;
  undefined *local_98;
  runtime_itab *local_90;
  runtime_interfacetype *local_80;
  runtime__type *local_78;
  net_sysDialer *local_38;
  net_sysDialer *pnStack_30;
  runtime_itab *local_28;
  undefined **ppuStack_20;
  internal_nettrace_Trace *local_18;
  error *peStack_10;
  
  puVar10 = (undefined1 *)ra.tab;
                    /* Unresolved local var: internal/nettrace.Trace * trace@[???]
                       Unresolved local var: net.Addr la@[???] */
  while (&pnStack_30 <= *(net_sysDialer ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_38 = (net_sysDialer *)0x0;
  pnStack_30 = (net_sysDialer *)0x0;
  local_28 = (runtime_itab *)0x0;
  ppuStack_20 = (undefined **)0x0;
  local_18 = (internal_nettrace_Trace *)0x0;
  peStack_10 = (error *)0x0;
  puStack0000000000000030 = (undefined1 *)0x0;
  uStack0000000000000038 = 0;
  ppuStack0000000000000040 = (undefined **)0x0;
  prStack0000000000000048 = (runtime__type *)0x0;
  local_a8 = &DAT_002378e0;
  (**(code **)&ctx_spill.tab[1].hash)();
  if (local_98 != &DAT_0021c920) {
    local_90 = (runtime_itab *)0x0;
  }
  if (local_90 == (runtime_itab *)0x0) {
    bVar11 = false;
  }
  else {
                    /* Unresolved local var: string raStr@[???] */
    (**(code **)(in_stack_00000020 + 0x20))();
    if (*(undefined8 **)&local_90->hash != (undefined8 *)0x0) {
      puVar10 = (sd_spill->network).str;
      local_a8 = (undefined8 *)(sd_spill->network).len;
      (*(code *)**(undefined8 **)&local_90->hash)();
    }
    bVar11 = local_90->fun[0] != 0;
    if (bVar11) {
      ppuStack_20 = &PTR_net___sysDialer__dialSingle_func1_002b3498;
      pnStack_30 = sd_spill;
      local_18 = (internal_nettrace_Trace *)&DAT_002378e0;
      peStack_10 = (error *)&runtime_zerobase;
      local_38 = (net_sysDialer *)&stack0x00000040;
      local_28 = local_90;
    }
  }
  prVar2 = (sd_spill->Dialer).LocalAddr.data;
  prVar3 = (runtime_interfacetype *)(sd_spill->Dialer).LocalAddr.tab;
  if (in_stack_00000020 == (undefined1 *)0x0) goto LAB_005849ca;
  uVar1 = *(uint *)(in_stack_00000020 + 0x10);
  if (uVar1 < 0x103a77bf) {
    if (uVar1 == 0x3e19b09) {
                    /* Unresolved local var: net.UnixAddr * la@[???] */
      puVar10 = go_itab__net_UnixAddr_net_Addr;
      if (in_stack_00000020 == go_itab__net_UnixAddr_net_Addr) {
        ctx_00.data = ra_1;
        ctx_00.tab = (runtime_itab *)prVar3;
        net___sysDialer__dialUnix
                  (sd_spill,ctx_00,(net_UnixAddr *)go_itab__net_UnixAddr_net_Addr,
                   (net_UnixAddr *)go_itab__net_UnixAddr_net_Addr);
        puVar8 = go_itab__net_UnixConn_net_Conn;
        puStack0000000000000030 = go_itab__net_UnixConn_net_Conn;
LAB_005847e3:
        prStack0000000000000048 = local_78;
        ppuStack0000000000000040 = (undefined **)local_80;
        if (local_80 != (runtime_interfacetype *)0x0) {
          runtime_newobject((runtime__type *)&DAT_0026a420);
          (ctx_spill.tab)->_type = (runtime__type *)&DAT_00000004;
          (ctx_spill.tab)->inter = (runtime_interfacetype *)&DAT_002881ad;
          puVar4 = (sd_spill->network).str;
          (ctx_spill.tab)->fun[0] = (sd_spill->network).len;
          if (runtime_writeBarrier._0_4_ == 0) {
            *(uint8 **)&(ctx_spill.tab)->hash = puVar4;
          }
          else {
            puVar10 = (undefined1 *)&(ctx_spill.tab)->hash;
            runtime_gcWriteBarrierDX();
            ctx_spill.tab = extraout_RAX_00;
          }
          ctx_spill.tab[1].inter = prVar3;
          if (runtime_writeBarrier._0_4_ == 0) {
            ctx_spill.tab[1]._type = prVar2;
          }
          else {
            puVar10 = (undefined1 *)&ctx_spill.tab[1]._type;
            runtime_gcWriteBarrierCX();
            ctx_spill.tab = extraout_RAX_01;
          }
          *(undefined1 **)&ctx_spill.tab[1].hash = in_stack_00000020;
          if (runtime_writeBarrier._0_4_ == 0) {
            ctx_spill.tab[1].fun[0] = (uintptr)ra_1;
          }
          else {
            puVar10 = (undefined1 *)ctx_spill.tab[1].fun;
            runtime_gcWriteBarrierCX();
            ctx_spill.tab = extraout_RAX_02;
          }
          ctx_spill.tab[2].inter = (runtime_interfacetype *)ppuStack0000000000000040;
          if (runtime_writeBarrier._0_4_ == 0) {
            ctx_spill.tab[2]._type = prStack0000000000000048;
          }
          else {
            puVar10 = (undefined1 *)&ctx_spill.tab[2]._type;
            runtime_gcWriteBarrierCX();
          }
          puStack0000000000000030 = (undefined1 *)0x0;
          uStack0000000000000038 = 0;
          ppuStack0000000000000040 = &go_itab__net_OpError_error;
          prVar5 = (runtime_itab *)(ulong)bVar11;
          prVar7 = (runtime_itab *)&go_itab__net_OpError_error;
          if (bVar11 != false) {
            raStr_00.len = (int)puVar10;
            raStr_00.str = (uint8 *)local_28;
            net___sysDialer__dialSingle_func1(local_18,local_38,raStr_00,peStack_10);
            prVar5 = extraout_RAX_03;
            prVar7 = local_28;
            puVar8 = (undefined1 *)local_38;
          }
          mVar13.c.data = puVar8;
          mVar13.c.tab = prVar5;
          mVar13.err.data = puVar10;
          mVar13.err.tab = prVar7;
          return mVar13;
        }
        ppuStack0000000000000040 = (undefined **)0x0;
        prStack0000000000000048 = (runtime__type *)0x0;
        prVar5 = (runtime_itab *)(ulong)bVar11;
        prVar7 = (runtime_itab *)0x0;
        if (bVar11 != false) {
          raStr.len = (int)puVar10;
          raStr.str = (uint8 *)local_28;
          net___sysDialer__dialSingle_func1(local_18,local_38,raStr,peStack_10);
          prVar5 = extraout_RAX;
          prVar7 = local_28;
          puVar8 = (undefined1 *)local_38;
        }
        mVar12.c.data = puVar8;
        mVar12.c.tab = prVar5;
        mVar12.err.data = puVar10;
        mVar12.err.tab = prVar7;
        return mVar12;
      }
    }
    else {
                    /* Unresolved local var: net.TCPAddr * la@[???] */
      if ((uVar1 == 0x103a77be) &&
         (puVar10 = go_itab__net_TCPAddr_net_Addr,
         in_stack_00000020 == go_itab__net_TCPAddr_net_Addr)) {
        ctx_01.data = ra_1;
        ctx_01.tab = (runtime_itab *)prVar3;
        net___sysDialer__dialTCP
                  (sd_spill,ctx_01,(net_TCPAddr *)go_itab__net_TCPAddr_net_Addr,
                   (net_TCPAddr *)go_itab__net_TCPAddr_net_Addr);
        puVar8 = go_itab__net_TCPConn_net_Conn;
        puStack0000000000000030 = go_itab__net_TCPConn_net_Conn;
        goto LAB_005847e3;
      }
    }
  }
  else if (uVar1 == 0xd7d15deb) {
                    /* Unresolved local var: net.UDPAddr * la@[???] */
    puVar10 = go_itab__net_UDPAddr_net_Addr;
    if (in_stack_00000020 == go_itab__net_UDPAddr_net_Addr) {
      ctx_02.data = ra_1;
      ctx_02.tab = (runtime_itab *)prVar3;
      net___sysDialer__dialUDP
                (sd_spill,ctx_02,(net_UDPAddr *)go_itab__net_UDPAddr_net_Addr,
                 (net_UDPAddr *)go_itab__net_UDPAddr_net_Addr);
      puVar8 = go_itab__net_UDPConn_net_Conn;
      puStack0000000000000030 = go_itab__net_UDPConn_net_Conn;
      goto LAB_005847e3;
    }
  }
  else {
                    /* Unresolved local var: net.IPAddr * la@[???] */
    if ((uVar1 == 0xff2d2c4c) &&
       (puVar10 = go_itab__net_IPAddr_net_Addr, in_stack_00000020 == go_itab__net_IPAddr_net_Addr))
    {
      ctx_03.data = ra_1;
      ctx_03.tab = (runtime_itab *)prVar3;
      net___sysDialer__dialIP
                (sd_spill,ctx_03,(net_IPAddr *)go_itab__net_IPAddr_net_Addr,
                 (net_IPAddr *)go_itab__net_IPAddr_net_Addr);
      puVar8 = go_itab__net_IPConn_net_Conn;
      puStack0000000000000030 = go_itab__net_IPConn_net_Conn;
      goto LAB_005847e3;
    }
  }
LAB_005849ca:
  runtime_newobject((runtime__type *)&DAT_0024c8c0);
  local_a8[1] = 0x17;
  *local_a8 = &DAT_0029e0d4;
  puVar4 = (sd_spill->address).str;
  pnVar9 = (net_sysDialer *)(sd_spill->address).len;
  local_a8[3] = pnVar9;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_a8[2] = puVar4;
  }
  else {
    puVar10 = (undefined1 *)(local_a8 + 2);
    runtime_gcWriteBarrierDX();
  }
  runtime_newobject((runtime__type *)&DAT_0026a420);
  local_a8[1] = 4;
  *local_a8 = &DAT_002881ad;
  puVar4 = (sd_spill->network).str;
  local_a8[3] = (sd_spill->network).len;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_a8[2] = puVar4;
    puVar6 = local_a8;
  }
  else {
    puVar10 = (undefined1 *)(local_a8 + 2);
    runtime_gcWriteBarrierDX();
    puVar6 = extraout_RAX_04;
  }
  puVar6[4] = prVar3;
  if (runtime_writeBarrier._0_4_ == 0) {
    puVar6[5] = prVar2;
  }
  else {
    puVar10 = (undefined1 *)(puVar6 + 5);
    runtime_gcWriteBarrierCX();
    puVar6 = extraout_RAX_05;
  }
  puVar6[6] = in_stack_00000020;
  if (runtime_writeBarrier._0_4_ == 0) {
    puVar6[7] = ra_1;
  }
  else {
    puVar10 = (undefined1 *)(puVar6 + 7);
    runtime_gcWriteBarrierCX();
    puVar6 = extraout_RAX_06;
  }
  puVar6[8] = go_itab__net_AddrError_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    puVar6[9] = local_a8;
  }
  else {
    puVar10 = (undefined1 *)(puVar6 + 9);
    runtime_gcWriteBarrierCX();
    puVar6 = extraout_RAX_07;
  }
  puStack0000000000000030 = (undefined1 *)0x0;
  uStack0000000000000038 = 0;
  ppuStack0000000000000040 = &go_itab__net_OpError_error;
  prVar5 = (runtime_itab *)(ulong)bVar11;
  prVar7 = (runtime_itab *)&go_itab__net_OpError_error;
  if (bVar11 != false) {
    raStr_01.len = (int)puVar10;
    raStr_01.str = (uint8 *)local_28;
    prStack0000000000000048 = (runtime__type *)puVar6;
    net___sysDialer__dialSingle_func1(local_18,local_38,raStr_01,peStack_10);
    prVar5 = extraout_RAX_08;
    prVar7 = local_28;
    pnVar9 = local_38;
  }
  mVar14.c.data = pnVar9;
  mVar14.c.tab = prVar5;
  mVar14.err.data = puVar10;
  mVar14.err.tab = prVar7;
  return mVar14;
}

