
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).resolveAddrList(net.Resolver * r, context.Context
   ctx, string op, string network, string addr, net.Addr hint, net.addrList ~r5, error ~r6) */

multireturn_net_addrList_error_
net___Resolver__resolveAddrList
          (net_Resolver *r,context_Context ctx,string op,string network,string addr,net_Addr hint)

{
  uint32 uVar1;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar2;
  runtime__type *prVar3;
  undefined1 auVar4 [24];
  undefined1 auVar5 [24];
  undefined1 auVar6 [24];
  undefined1 *puVar7;
  runtime__type *extraout_RAX;
  runtime__type *extraout_RAX_00;
  runtime__type *extraout_RAX_01;
  net_TCPAddr *pnVar8;
  runtime__type *prVar9;
  long lVar10;
  char cVar11;
  int iVar12;
  runtime__type *prVar13;
  uint8 *puVar14;
  runtime__type *prVar15;
  char cVar16;
  uint8 *puVar17;
  int iVar18;
  net_TCPAddr *pnVar19;
  net_TCPAddr *pnVar20;
  long in_FS_OFFSET;
  context_Context ctx_00;
  string val;
  context_Context ctx_01;
  string net;
  net_IP ip;
  net_IP ip_00;
  net_IP ip_01;
  net_IP ip_02;
  net_IP ip_03;
  net_IP ip_04;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  net_IP x;
  net_IP x_00;
  net_IP x_01;
  string network_00;
  multireturn_string_int_error_ mVar21;
  multireturn_net_addrList_error_ mVar22;
  multireturn_net_addrList_error_ mVar23;
  multireturn_net_addrList_error_ mVar24;
  multireturn_net_addrList_error_ mVar25;
  multireturn_net_addrList_error__conflict1 mVar26;
  multireturn_net_addrList_error_ mVar27;
  multireturn_net_addrList_error_ mVar28;
  multireturn_net_addrList_error_ mVar29;
  multireturn_net_addrList_error_ mVar30;
  multireturn_net_addrList_error_ mVar31;
  string addr_00;
  net_Resolver *r_spill;
  context_Context ctx_spill;
  string op_spill;
  string network_spill;
  runtime__type *in_stack_00000050;
  net_TCPAddr *tcp;
  runtime__type *local_110;
  runtime__type *local_108;
  runtime__type *local_100;
  runtime__type *local_f0;
  runtime__type *local_e8;
  runtime__type *local_e0;
  long local_d8;
  runtime__type *local_d0;
  long local_c8;
  void *local_c0;
  runtime__type *local_98;
  long local_90;
  runtime__type *local_88;
  runtime_interfacetype *local_80;
  runtime__type *local_78;
  runtime__type *local_70;
  runtime__type *local_68;
  runtime_itab *local_60;
  net_TCPAddr *local_58;
  net_TCPAddr *local_50;
  runtime__type *local_48;
  net_TCPAddr *local_40;
  runtime__type *local_38;
  runtime__type *local_30;
  runtime__type *local_28;
  runtime__type *local_20;
  runtime__type *local_18;
  runtime__type *local_10;
  
  prVar13 = local_f0;
  iVar18 = network.len;
  puVar17 = network.str;
  iVar12 = op.len;
  puVar14 = op.str;
  ctx_00.data = ctx.tab;
                    /* Unresolved local var: bool wildcard@[???]
                       Unresolved local var: string afnet@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: net.addrList addrs@[???]
                       Unresolved local var: net.addrList naddrs@[???] */
  while (&local_98 <= *(runtime__type ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_110 = (runtime__type *)r_spill;
  local_108 = (runtime__type *)op_spill.str;
  ctx_00.tab = hint.data;
  network_00.len = (int)puVar14;
  network_00.str = &r_spill->PreferGo;
  mVar21 = net_parseNetwork(ctx_00,network_00,SUB81(iVar12,0));
  mVar22.~r6.tab = mVar21.err.tab;
  if (local_d8 != 0) {
    mVar28.~r5.len = (int)local_e8;
    mVar28.~r5.array = (net_Addr *)local_d8;
    mVar28.~r5.cap = (int)local_d0;
    mVar28.~r6 = mVar21.err;
    return mVar28;
  }
  if (((ctx_spill.data == &DAT_00000004) && (*(int *)&(ctx_spill.tab)->inter == 0x6c616964)) &&
     (network_spill.len == 0)) {
    mVar22.~r5.len = (int)local_e8;
    mVar22.~r5.array = (net_Addr *)net_errMissingAddress.tab;
    mVar22.~r5.cap = (int)net_errMissingAddress.data;
    mVar22.~r6.data = (void *)0x0;
    return mVar22;
  }
  if (local_e8 == (runtime__type *)&DAT_00000004) {
                    /* Unresolved local var: net.UnixAddr * addr@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: net.UnixAddr * ~R0@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
    if (*(int *)&local_f0->size != 0x78696e75) goto LAB_00581a22;
  }
  else if (local_e8 == (runtime__type *)&DAT_00000008) {
    mVar22.~r6.tab = (runtime_itab *)0x6d61726778696e75;
    if ((runtime_interfacetype *)local_f0->size != (runtime_interfacetype *)0x6d61726778696e75) {
LAB_00581a22:
      local_110 = hint.data;
      local_108 = (runtime__type *)r_spill;
      local_100 = local_f0;
      local_f0 = (runtime__type *)network_spill.str;
      ctx_01.data = ctx_spill.tab;
      ctx_01.tab = (runtime_itab *)local_e8;
      net.len = network_spill.len;
      net.str = (uint8 *)mVar22.~r6.tab;
      addr_00.len = iVar18;
      addr_00.str = puVar17;
      mVar26 = net___Resolver__internetAddrList
                         ((net_Resolver *)network_spill.str,ctx_01,net,addr_00);
      mVar22.~r6.tab = mVar26.~r4.tab;
      if (((local_c8 != 0) || (mVar22.~r6.tab = ctx_spill.data, ctx_spill.data != &DAT_00000004)) ||
         ((mVar22.~r6.tab = ctx_spill.tab, *(int *)&(ctx_spill.tab)->inter != 0x6c616964 ||
          (mVar22.~r6.tab = (runtime_itab *)0x0, in_stack_00000050 == (runtime__type *)0x0)))) {
        mVar27.~r5.len = (int)local_d0;
        mVar27.~r5.array = (net_Addr *)local_e0;
        mVar27.~r5.cap = local_c8;
        mVar27.~r6.data = local_c0;
        mVar27.~r6.tab = mVar22.~r6.tab;
        return mVar27;
      }
      local_90 = local_d8;
      local_30 = local_e0;
      if (in_stack_00000050 == (runtime__type *)0x0) {
        pnVar8 = (net_TCPAddr *)0x0;
        pnVar19 = (net_TCPAddr *)0x0;
        cVar16 = '\0';
        pnVar20 = (net_TCPAddr *)0x0;
        goto LAB_00581d4b;
      }
      local_88 = local_d0;
      uVar1 = in_stack_00000050->hash;
      local_100._0_1_ = (byte)prVar13;
      if (uVar1 != 0x103a77be) {
        cVar16 = (byte)local_100;
        if (uVar1 != 0xd7d15deb) {
          if ((uVar1 != 0xff2d2c4c) ||
             (in_stack_00000050 != (runtime__type *)go_itab__net_IPAddr_net_Addr))
          goto LAB_00581d25;
          if (tcp == (net_TCPAddr *)0x0) {
LAB_00581d02:
            cVar16 = '\x01';
          }
          else {
            prVar9 = (runtime__type *)(tcp->IP).len;
            prVar15 = (runtime__type *)(tcp->IP).cap;
            if ((tcp->IP).array == (uint8 *)0x0) goto LAB_00581d02;
            ip_01.len = (int)local_d0;
            ip_01.array = (uint8 *)local_e0;
            ip_01.cap = (int)tcp;
            net_IP_IsUnspecified(ip_01);
            local_110 = prVar9;
            local_108 = prVar15;
          }
          pnVar8 = (net_TCPAddr *)0x0;
          pnVar19 = (net_TCPAddr *)0x0;
          local_d0 = local_88;
          pnVar20 = tcp;
          goto LAB_00581d4b;
        }
        if (in_stack_00000050 != (runtime__type *)go_itab__net_UDPAddr_net_Addr) {
LAB_00581d25:
          pnVar8 = (net_TCPAddr *)0x0;
          cVar16 = '\0';
          local_d0 = local_d0;
          pnVar19 = (net_TCPAddr *)0x0;
          pnVar20 = (net_TCPAddr *)0x0;
          goto LAB_00581d4b;
        }
        if (tcp == (net_TCPAddr *)0x0) {
LAB_00581c42:
          cVar16 = '\x01';
        }
        else {
          prVar9 = (runtime__type *)(tcp->IP).len;
          prVar15 = (runtime__type *)(tcp->IP).cap;
          if ((tcp->IP).array == (uint8 *)0x0) goto LAB_00581c42;
          ip_00.len = (int)local_d0;
          ip_00.array = (uint8 *)local_e0;
          ip_00.cap = (int)tcp;
          net_IP_IsUnspecified(ip_00);
          local_110 = prVar9;
          local_108 = prVar15;
        }
        pnVar8 = (net_TCPAddr *)0x0;
        local_d0 = local_88;
        pnVar19 = tcp;
        pnVar20 = (net_TCPAddr *)0x0;
        goto LAB_00581d4b;
      }
      if (in_stack_00000050 != (runtime__type *)go_itab__net_TCPAddr_net_Addr) goto LAB_00581d25;
      if (tcp == (net_TCPAddr *)0x0) {
LAB_00581b92:
        local_100._0_1_ = '\x01';
      }
      else {
        prVar9 = (runtime__type *)(tcp->IP).len;
        prVar15 = (runtime__type *)(tcp->IP).cap;
        if ((tcp->IP).array == (uint8 *)0x0) goto LAB_00581b92;
        ip.len = (int)local_d0;
        ip.array = (uint8 *)local_e0;
        ip.cap = (int)tcp;
        net_IP_IsUnspecified(ip);
        local_110 = prVar9;
        local_108 = prVar15;
                    /* Unresolved local var: net.Addr addr@[???] */
      }
      pnVar8 = tcp;
      local_d0 = local_88;
      pnVar19 = (net_TCPAddr *)0x0;
      pnVar20 = (net_TCPAddr *)0x0;
      cVar16 = (byte)local_100;
LAB_00581d4b:
      if (local_90 < 1) {
        prVar9 = (runtime__type *)0x0;
        prVar13 = (runtime__type *)go_itab__net_TCPAddr_net_Addr;
LAB_00581df0:
        if (prVar9 != (runtime__type *)0x0) {
          mVar30.~r5.len = (int)local_d0;
          mVar30.~r5.array = (net_Addr *)local_30;
          mVar30.~r5.cap = (int)prVar9;
          mVar30.~r6.data = prVar13;
          mVar30.~r6.tab = (runtime_itab *)in_stack_00000050;
          return mVar30;
        }
        (*(code *)(net_errNoSuitableAddress.tab)->fun[0])();
        local_10 = local_110;
        local_70 = local_108;
        (*(code *)in_stack_00000050->gcdata)();
        local_18 = local_110;
        local_78 = local_108;
        runtime_newobject(local_110);
        local_110->ptrdata = (uintptr)local_70;
        if (runtime_writeBarrier._0_4_ == 0) {
          local_110->size = (uintptr)local_10;
        }
        else {
          runtime_gcWriteBarrier();
        }
        local_110->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)local_78;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(runtime__type **)&local_110->hash = local_18;
        }
        else {
          runtime_gcWriteBarrierDX();
          local_108 = local_110;
        }
        mVar29.~r5.len = (int)tcp;
        mVar29.~r5.array = (net_Addr *)go_itab__net_AddrError_error;
        mVar29.~r5.cap = (int)local_108;
        mVar29.~r6.data = prVar13;
        mVar29.~r6.tab = (runtime_itab *)local_110;
        return mVar29;
      }
      lVar10 = 0;
      prVar9 = (runtime__type *)0x0;
      local_20 = local_30;
      prVar15 = in_stack_00000050;
      local_100 = prVar13;
      local_58 = pnVar19;
      local_50 = pnVar8;
      local_40 = pnVar20;
      while( true ) {
        local_80 = (runtime_interfacetype *)local_20->size;
        local_28 = (runtime__type *)local_20->ptrdata;
        local_70 = (runtime__type *)lVar10;
        local_48 = local_30;
        (*(code *)(local_80->typ).equal)();
        local_78 = local_108;
        local_10 = local_110;
        ppfVar2 = in_stack_00000050->equal;
        pnVar8 = tcp;
        (*(code *)ppfVar2)();
        if (local_108 != local_78) break;
        local_108 = local_78;
        runtime_memequal();
        if ((byte)local_100 == '\0') break;
        local_30 = local_48;
        if (local_80 != (runtime_interfacetype *)0x0) {
          uVar1 = (local_80->typ).hash;
          local_e8._0_1_ = (byte)network_spill.len;
          local_30 = local_48;
          if (uVar1 == 0x103a77be) {
            if (local_80 != (runtime_interfacetype *)go_itab__net_TCPAddr_net_Addr)
            goto LAB_005825d3;
            if (cVar16 == '\0') {
              if (local_28 == (runtime__type *)0x0) {
LAB_005820b5:
                cVar11 = '\x01';
              }
              else {
                prVar13 = (runtime__type *)local_28->ptrdata;
                prVar3 = *(runtime__type **)&local_28->hash;
                if (local_28->size == 0) goto LAB_005820b5;
                auVar4._8_8_ = go_itab__net_TCPAddr_net_Addr;
                auVar4._0_8_ = local_28->size;
                auVar4._16_8_ = 0;
                net_IP_IsUnspecified((net_IP)(auVar4 << 0x40));
                cVar11 = (byte)local_100;
                local_110 = prVar13;
                local_108 = prVar3;
              }
              if (cVar11 == '\0') {
                local_110 = (runtime__type *)local_28->ptrdata;
                local_108 = *(runtime__type **)&local_28->hash;
                local_100 = (runtime__type *)(local_50->IP).array;
                local_f0 = (runtime__type *)(local_50->IP).cap;
                ip_02.len = (int)local_108;
                ip_02.array = (uint8 *)local_28->size;
                ip_02.cap = (int)local_110;
                x.len = (int)local_50;
                x.array = (uint8 *)local_100;
                x.cap = (local_50->IP).len;
                prVar15 = local_100;
                net_IP_matchAddrFamily(ip_02,x);
                local_e8._0_1_ = (byte)local_e8 ^ 1;
              }
              else {
                local_e8._0_1_ = 0;
              }
            }
            else {
              local_e8._0_1_ = 0;
            }
            local_30 = local_48;
            if ((byte)local_e8 == 0) {
              prVar13 = (runtime__type *)((long)&prVar9->size + 1);
              prVar3 = local_d0;
              if (local_d0 < prVar13) {
                local_110 = local_48;
                old.len = (int)local_48;
                old.array = prVar9;
                old.cap = (int)prVar15;
                runtime_growslice((runtime__type *)&DAT_0023e7c0,old,(int)prVar13);
                prVar13 = (runtime__type *)(network_spill.len + 1);
                prVar3 = local_e0;
                local_30 = local_f0;
                local_108 = prVar9;
                local_100 = local_d0;
              }
              local_d0 = prVar3;
              (&local_30->size)[(long)prVar9 * 2] = (uintptr)go_itab__net_TCPAddr_net_Addr;
              if (runtime_writeBarrier._0_4_ == 0) {
                (&local_30->ptrdata)[(long)prVar9 * 2] = (uintptr)local_28;
                prVar9 = prVar13;
              }
              else {
                runtime_gcWriteBarrierDX();
                prVar9 = prVar13;
              }
            }
          }
          else {
            if (uVar1 != 0xd7d15deb) {
              if ((uVar1 != 0xff2d2c4c) ||
                 (local_80 != (runtime_interfacetype *)go_itab__net_IPAddr_net_Addr))
              goto LAB_005825d3;
              if (cVar16 == '\0') {
                if (local_28 == (runtime__type *)0x0) {
LAB_00582455:
                  cVar11 = '\x01';
                }
                else {
                  prVar13 = (runtime__type *)local_28->ptrdata;
                  prVar3 = *(runtime__type **)&local_28->hash;
                  if (local_28->size == 0) goto LAB_00582455;
                  auVar6._8_8_ = go_itab__net_IPAddr_net_Addr;
                  auVar6._0_8_ = local_28->size;
                  auVar6._16_8_ = 0;
                  net_IP_IsUnspecified((net_IP)(auVar6 << 0x40));
                  cVar11 = (byte)local_100;
                  local_110 = prVar13;
                  local_108 = prVar3;
                }
                if (cVar11 == '\0') {
                  local_110 = (runtime__type *)local_28->ptrdata;
                  local_108 = *(runtime__type **)&local_28->hash;
                  local_100 = (runtime__type *)(local_40->IP).array;
                  local_f0 = (runtime__type *)(local_40->IP).cap;
                  ip_04.len = (int)local_108;
                  ip_04.array = (uint8 *)local_28->size;
                  ip_04.cap = (int)local_110;
                  x_01.len = (int)local_40;
                  x_01.array = (uint8 *)local_100;
                  x_01.cap = (local_40->IP).len;
                  prVar15 = local_100;
                  net_IP_matchAddrFamily(ip_04,x_01);
                  local_e8._0_1_ = (byte)local_e8 ^ 1;
                }
                else {
                  local_e8._0_1_ = 0;
                }
              }
              else {
                local_e8._0_1_ = 0;
              }
              local_30 = local_48;
              if ((byte)local_e8 == 0) {
                prVar13 = (runtime__type *)((long)&prVar9->size + 1);
                prVar3 = local_d0;
                local_30 = local_48;
                if (local_d0 < prVar13) {
                  local_110 = local_48;
                  old_01.len = (int)local_48;
                  old_01.array = prVar9;
                  old_01.cap = (int)prVar15;
                  runtime_growslice((runtime__type *)&DAT_0023e7c0,old_01,(int)prVar13);
                  prVar13 = (runtime__type *)(network_spill.len + 1);
                  prVar3 = local_e0;
                  local_30 = local_f0;
                  local_108 = prVar9;
                  local_100 = local_d0;
                }
                local_d0 = prVar3;
                (&local_30->size)[(long)prVar9 * 2] = (uintptr)go_itab__net_IPAddr_net_Addr;
                if (runtime_writeBarrier._0_4_ == 0) {
                  (&local_30->ptrdata)[(long)prVar9 * 2] = (uintptr)local_28;
                  prVar9 = prVar13;
                }
                else {
                  runtime_gcWriteBarrierDX();
                  prVar9 = prVar13;
                }
              }
              goto LAB_005825d3;
            }
            if (local_80 != (runtime_interfacetype *)go_itab__net_UDPAddr_net_Addr)
            goto LAB_005825d3;
            if (cVar16 == '\0') {
              if (local_28 == (runtime__type *)0x0) {
LAB_00582285:
                cVar11 = '\x01';
              }
              else {
                prVar13 = (runtime__type *)local_28->ptrdata;
                prVar3 = *(runtime__type **)&local_28->hash;
                if (local_28->size == 0) goto LAB_00582285;
                auVar5._8_8_ = go_itab__net_UDPAddr_net_Addr;
                auVar5._0_8_ = local_28->size;
                auVar5._16_8_ = 0;
                net_IP_IsUnspecified((net_IP)(auVar5 << 0x40));
                cVar11 = (byte)local_100;
                local_110 = prVar13;
                local_108 = prVar3;
              }
              if (cVar11 == '\0') {
                local_110 = (runtime__type *)local_28->ptrdata;
                local_108 = *(runtime__type **)&local_28->hash;
                local_100 = (runtime__type *)(local_58->IP).array;
                local_f0 = (runtime__type *)(local_58->IP).cap;
                ip_03.len = (int)local_108;
                ip_03.array = (uint8 *)local_28->size;
                ip_03.cap = (int)local_110;
                x_00.len = (int)local_58;
                x_00.array = (uint8 *)local_100;
                x_00.cap = (local_58->IP).len;
                prVar15 = local_100;
                net_IP_matchAddrFamily(ip_03,x_00);
                local_e8._0_1_ = (byte)local_e8 ^ 1;
              }
              else {
                local_e8._0_1_ = 0;
              }
            }
            else {
              local_e8._0_1_ = 0;
            }
            local_30 = local_48;
            if ((byte)local_e8 == 0) {
              prVar13 = (runtime__type *)((long)&prVar9->size + 1);
              prVar3 = local_d0;
              if (local_d0 < prVar13) {
                local_110 = local_48;
                old_00.len = (int)local_48;
                old_00.array = prVar9;
                old_00.cap = (int)prVar15;
                runtime_growslice((runtime__type *)&DAT_0023e7c0,old_00,(int)prVar13);
                prVar13 = (runtime__type *)(network_spill.len + 1);
                prVar3 = local_e0;
                local_30 = local_f0;
                local_108 = prVar9;
                local_100 = local_d0;
              }
              local_d0 = prVar3;
              (&local_30->size)[(long)prVar9 * 2] = (uintptr)go_itab__net_UDPAddr_net_Addr;
              if (runtime_writeBarrier._0_4_ == 0) {
                (&local_30->ptrdata)[(long)prVar9 * 2] = (uintptr)local_28;
                prVar9 = prVar13;
              }
              else {
                runtime_gcWriteBarrierDX();
                prVar9 = prVar13;
              }
            }
          }
        }
LAB_005825d3:
        lVar10 = (long)local_70 + 1;
        prVar13 = prVar9;
        if (local_90 <= lVar10) goto LAB_00581df0;
        local_20 = (runtime__type *)&local_20->hash;
        prVar15 = local_20;
      }
      (*(code *)in_stack_00000050->gcdata)();
      local_10 = local_110;
      local_70 = local_108;
      runtime_newobject(local_110);
      local_110->ptrdata = 0x1d;
      local_110->size =
           (uintptr)
           "mismatched local address typeoperation already in progresspadding contained in alphabetpkcs12: odd-length BMP stringprotocol family not supportedreflect: Elem of invalid typereflect: In of non-func type reflect: Key of non-map type runtime: impossible type kindruntime: levelShift[level] = runtime: marking free object runtime: p.gcMarkWorkerMode= runtime: split stack overflowruntime: sudog with non-nil cruntime: summary max pages = runtime: unknown pc in defer semacquire not on the G stackskipping TypeExtendedMlpsFlowskipping TypeExtendedVlanFlowstring concatenation too longsyntax error scanning booleantls: invalid NextProtos valuetls: invalid server key sharetls: too many ignored recordstoo many open files in systemunknown IP protocol specifiedunknown certificate authorityx509: cannot parse URI %q: %sx509: cannot parse dnsName %qx509: malformed serial numberx509: unsupported time formatzero length OBJECT IDENTIFIER (types from different scopes) in prepareForSweep; sweepgen  locals stack map entries for , wire length %d cap length %d227373675443232059478759765625802.1Q tag length %d too shortAlteon Application Switch 2208Alteon Application Switch 2216Alteon Application Switch 2224Alteon Application Switch 2424Alteon Application Switch 3408Alteon Application Switch 3416BCMCSControlServersAddressListCollocated Interference ReportControl Detection Time ExpiredE.164 (SMDS, Frame Relay, ATM)Ethernet Routing Switch 4526FXEthernet Routing Switch 4548GTFine Tuning Measure ParametersFragmentReassemblyTimeExceededGODEBUG: unknown cpu feature \"GTP packet too small: %d bytesHEADERS frame with stream ID 0HT Information (802.11n D1.10)Invalid TCP data offset %d < 5MapIter.Key called before NextMeasurement Pilot TransmissionMesh Channel Switch ParametersName Exists when it should notNeighbor Signaled Session DownNot enough bytes to decode: %dReverse Concatenated Path DownSIGPROF: profiling alarm clockSIGUSR1: user-defined signal 1SIGUSR2: user-defined signal 2SIGVTALRM: virtual alarm clockUDP packet too small: %d bytesUnable to ..." /* TRUNCATED STRING LITERAL */
      ;
      local_110->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)local_70;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(runtime__type **)&local_110->hash = local_10;
      }
      else {
        prVar15 = (runtime__type *)&local_110->hash;
        runtime_gcWriteBarrierCX();
        local_110 = extraout_RAX_01;
      }
      mVar31.~r5.len = (int)ppfVar2;
      mVar31.~r5.array = (net_Addr *)local_110;
      mVar31.~r5.cap = (int)go_itab__net_AddrError_error;
      mVar31.~r6.data = pnVar8;
      mVar31.~r6.tab = (runtime_itab *)prVar15;
      return mVar31;
    }
  }
  else if (((local_e8 != (runtime__type *)&DAT_0000000a) ||
           (mVar22.~r6.tab = (runtime_itab *)0x6b63617078696e75,
           (runtime_interfacetype *)local_f0->size != (runtime_interfacetype *)0x6b63617078696e75))
          || (*(short *)&local_f0->ptrdata != 0x7465)) goto LAB_00581a22;
  local_38 = local_f0;
  local_98 = local_e8;
  if (local_e8 == (runtime__type *)&DAT_00000004) {
    if (*(int *)&local_f0->size == 0x78696e75) goto LAB_00581735;
  }
  else if (local_e8 == (runtime__type *)&DAT_00000008) {
    if ((runtime_interfacetype *)local_f0->size == (runtime_interfacetype *)0x6d61726778696e75) {
LAB_00581735:
      pnVar8 = (net_TCPAddr *)network_spill.len;
      runtime_newobject((runtime__type *)&DAT_0024cc80);
      r_spill->Dial = (func_context_Context__string__string___net_Conn__error_ **)network_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(uint8 **)r_spill = network_spill.str;
        network_spill.len = (int)pnVar8;
      }
      else {
        runtime_gcWriteBarrier();
        network_spill.len = (int)pnVar8;
      }
      ((runtime_itab *)r_spill)->fun[0] = (uintptr)local_98;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(runtime__type **)&((runtime_itab *)r_spill)->hash = local_38;
      }
      else {
        runtime_gcWriteBarrierDX();
      }
      puVar7 = (undefined1 *)0x0;
      puVar14 = (uint8 *)0x0;
      goto LAB_005817e0;
    }
  }
  else if (((local_e8 == (runtime__type *)&DAT_0000000a) &&
           ((runtime_interfacetype *)local_f0->size == (runtime_interfacetype *)0x6b63617078696e75))
          && (*(short *)&local_f0->ptrdata == 0x7465)) goto LAB_00581735;
  local_110 = local_e8;
  val.len = (int)local_e8;
  val.str = ctx_spill.data;
  runtime_convTstring(val);
  r_spill = (net_Resolver *)0x0;
  puVar7 = go_itab_net_UnknownNetworkError_error;
  puVar14 = op_spill.str;
LAB_005817e0:
  if (puVar7 != (undefined1 *)0x0) {
    mVar25.~r5.len = (int)local_e8;
    mVar25.~r5.array = (net_Addr *)puVar7;
    mVar25.~r5.cap = (int)puVar14;
    mVar25.~r6.data = (void *)network_spill.len;
    mVar25.~r6.tab = (runtime_itab *)r_spill;
    return mVar25;
  }
  local_60 = (runtime_itab *)r_spill;
  if (((ctx_spill.data == &DAT_00000004) && (*(int *)&(ctx_spill.tab)->inter == 0x6c616964)) &&
     (in_stack_00000050 != (runtime__type *)0x0)) {
    ppfVar2 = (func_unsafe_Pointer__unsafe_Pointer__bool **)((runtime_itab *)r_spill)->fun[0];
    local_e8 = *(runtime__type **)&((runtime_itab *)r_spill)->hash;
    local_68 = local_e8;
    (*(code *)in_stack_00000050->equal)();
    if ((func_unsafe_Pointer__unsafe_Pointer__bool **)op_spill.str == ppfVar2) {
      runtime_memequal();
      local_100._0_1_ = (byte)op_spill.len;
      local_100._0_1_ = (byte)local_100 ^ 1;
      local_108 = (runtime__type *)ppfVar2;
    }
    else {
      local_100._0_1_ = 1;
    }
    network_spill.len = (int)tcp;
    if ((byte)local_100 != 0) {
      (*(code *)in_stack_00000050->gcdata)();
      local_10 = local_110;
      local_70 = local_108;
      runtime_newobject(local_110);
      local_110->ptrdata = 0x1d;
      local_110->size =
           (uintptr)
           "mismatched local address typeoperation already in progresspadding contained in alphabetpkcs12: odd-length BMP stringprotocol family not supportedreflect: Elem of invalid typereflect: In of non-func type reflect: Key of non-map type runtime: impossible type kindruntime: levelShift[level] = runtime: marking free object runtime: p.gcMarkWorkerMode= runtime: split stack overflowruntime: sudog with non-nil cruntime: summary max pages = runtime: unknown pc in defer semacquire not on the G stackskipping TypeExtendedMlpsFlowskipping TypeExtendedVlanFlowstring concatenation too longsyntax error scanning booleantls: invalid NextProtos valuetls: invalid server key sharetls: too many ignored recordstoo many open files in systemunknown IP protocol specifiedunknown certificate authorityx509: cannot parse URI %q: %sx509: cannot parse dnsName %qx509: malformed serial numberx509: unsupported time formatzero length OBJECT IDENTIFIER (types from different scopes) in prepareForSweep; sweepgen  locals stack map entries for , wire length %d cap length %d227373675443232059478759765625802.1Q tag length %d too shortAlteon Application Switch 2208Alteon Application Switch 2216Alteon Application Switch 2224Alteon Application Switch 2424Alteon Application Switch 3408Alteon Application Switch 3416BCMCSControlServersAddressListCollocated Interference ReportControl Detection Time ExpiredE.164 (SMDS, Frame Relay, ATM)Ethernet Routing Switch 4526FXEthernet Routing Switch 4548GTFine Tuning Measure ParametersFragmentReassemblyTimeExceededGODEBUG: unknown cpu feature \"GTP packet too small: %d bytesHEADERS frame with stream ID 0HT Information (802.11n D1.10)Invalid TCP data offset %d < 5MapIter.Key called before NextMeasurement Pilot TransmissionMesh Channel Switch ParametersName Exists when it should notNeighbor Signaled Session DownNot enough bytes to decode: %dReverse Concatenated Path DownSIGPROF: profiling alarm clockSIGUSR1: user-defined signal 1SIGUSR2: user-defined signal 2SIGVTALRM: virtual alarm clockUDP packet too small: %d bytesUnable to ..." /* TRUNCATED STRING LITERAL */
      ;
      local_110->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)local_70;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(runtime__type **)&local_110->hash = local_10;
      }
      else {
        r_spill = (net_Resolver *)&local_110->hash;
        runtime_gcWriteBarrierCX();
        local_110 = extraout_RAX;
      }
      mVar23.~r5.len = (int)local_e8;
      mVar23.~r5.array = (net_Addr *)local_110;
      mVar23.~r5.cap = (int)go_itab__net_AddrError_error;
      mVar23.~r6.data = tcp;
      mVar23.~r6.tab = (runtime_itab *)r_spill;
      return mVar23;
    }
  }
  runtime_newobject((runtime__type *)&DAT_00226680);
  local_110->size = (uintptr)go_itab__net_UnixAddr_net_Addr;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_110->ptrdata = (uintptr)local_60;
  }
  else {
    r_spill = (net_Resolver *)&local_110->ptrdata;
    runtime_gcWriteBarrierCX();
    local_110 = extraout_RAX_00;
  }
  mVar24.~r5.len = (int)local_e8;
  mVar24.~r5.array = (net_Addr *)local_110;
  mVar24.~r5.cap = (int)local_60;
  mVar24.~r6.data = (void *)network_spill.len;
  mVar24.~r6.tab = (runtime_itab *)r_spill;
  return mVar24;
}

