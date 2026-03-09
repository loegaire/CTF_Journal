
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).internetAddrList(net.Resolver * r, context.Context
   ctx, string net, string addr, net.addrList ~r3, error ~r4) */

multireturn_net_addrList_error__conflict1
net___Resolver__internetAddrList(net_Resolver *r,context_Context ctx,string net,string addr)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *typ;
  runtime_itab *extraout_RAX;
  runtime__type *prVar6;
  ulong uVar7;
  runtime_itab *extraout_RDX;
  runtime__type *extraout_RDX_00;
  runtime__type *extraout_RDX_01;
  runtime_itab *prVar8;
  void *pvVar9;
  runtime__type *prVar10;
  runtime_itab *prVar11;
  code *pcVar12;
  undefined **ppuVar13;
  int iVar14;
  long in_FS_OFFSET;
  string val;
  string sVar15;
  string val_00;
  interface___ e;
  string network;
  string network_00;
  string a1;
  multireturn_int_error__conflict13 mVar16;
  net_IP ip;
  runtime_slice old;
  __net_IPAddr ips;
  context_Context ctx_00;
  context_Context ctx_01;
  string a0;
  string service;
  string host;
  string originalAddr;
  multireturn_net_addrList_error__conflict1 mVar17;
  multireturn___net_IPAddr_error__conflict mVar18;
  multireturn_net_addrList_error__conflict mVar19;
  multireturn_net_addrList_error__conflict1 mVar20;
  multireturn_net_addrList_error__conflict1 mVar21;
  multireturn_net_addrList_error__conflict1 mVar22;
  multireturn_net_addrList_error__conflict1 mVar23;
  multireturn_net_addrList_error__conflict1 mVar24;
  net_IP x;
  net_Resolver *r_spill;
  context_Context ctx_spill;
  string net_spill;
  string addr_spill;
  runtime_itab *local_128;
  runtime__type *local_120;
  runtime_itab *local_118;
  runtime_itab *local_110;
  runtime__type *local_108;
  long local_100;
  runtime__type *local_f8;
  long local_f0;
  runtime__type *local_e8;
  long local_e0;
  void *local_d8;
  runtime_itab *local_b0;
  runtime__type *local_a8;
  runtime__type *local_a0;
  runtime__type *local_98;
  runtime__type *local_90;
  runtime__type *local_88;
  runtime__type *local_80;
  code *local_78;
  runtime__type *local_60;
  runtime_interfacetype *local_58;
  runtime__type *local_50;
  undefined8 uStack_48;
  uint8 *local_40;
  runtime_interfacetype *prStack_38;
  uint8 *local_30;
  uintptr local_28;
  int iStack_20;
  func_unsafe_Pointer__unsafe_Pointer__bool **local_18;
  uint8 *puStack_10;
  
  prVar6 = local_108;
  prVar8 = local_110;
  iVar14 = addr.len;
  val_00.len = addr.str;
  sVar15.len = ctx.tab;
  pvVar9 = (void *)net.len;
  prVar11 = (runtime_itab *)net.str;
                    /* Unresolved local var: int portnum@[???]
                       Unresolved local var: func(net.IPAddr)_net.Addr * * inetaddr@[???]
                       Unresolved local var: func(net.IPAddr)_bool * * filter@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: string host@[???]
                       Unresolved local var: string port@[???]
                       Unresolved local var: []net.IPAddr ips@[???]
                       Unresolved local var: uint8 * ~R0.data@[???]
                       Unresolved local var: uintptr ~R0.itab@[???] */
  while (&local_b0 <= *(runtime_itab ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (net_spill.len == 2) {
    if (*(short *)net_spill.str != 0x7069) goto LAB_00595257;
LAB_00594925:
    prVar8 = (runtime_itab *)0x0;
    if (addr_spill.len != 0) {
      prVar8 = (runtime_itab *)addr_spill.len;
    }
    prVar6 = (runtime__type *)0x0;
    if (addr_spill.len != 0) {
      prVar6 = (runtime__type *)addr_spill.str;
    }
    prVar10 = (runtime__type *)0x0;
  }
  else {
    if (net_spill.len == 3) {
      local_128 = (runtime_itab *)net_spill.len;
      local_120 = (runtime__type *)&DAT_00287b85;
      local_118 = (runtime_itab *)0x3;
      runtime_cmpstring();
      if ((long)local_110 < 1) {
        if (((*(short *)net_spill.str != 0x7069) || (net_spill.str[2] != 0x34)) &&
           ((*(short *)net_spill.str != 0x7069 || (net_spill.str[2] != 0x36)))) {
LAB_00595257:
          val.len = (int)sVar15.len;
          val.str = (uint8 *)net_spill.len;
          runtime_convTstring(val);
          mVar24.~r3.len = (int)sVar15.len;
          mVar24.~r3.array = (net_Addr *)local_120;
          mVar24.~r3.cap = (int)go_itab_net_UnknownNetworkError_error;
          mVar24.~r4.data = pvVar9;
          mVar24.~r4.tab = prVar11;
          return mVar24;
        }
        goto LAB_00594925;
      }
      if (((*(short *)net_spill.str != 0x6374) || (net_spill.str[2] != 0x70)) &&
         ((*(short *)net_spill.str != 0x6475 || (net_spill.str[2] != 0x70)))) goto LAB_00595257;
    }
    else {
      if (net_spill.len != 4) goto LAB_00595257;
      local_120 = (runtime__type *)&DAT_00288785;
      local_118 = (runtime_itab *)&DAT_00000004;
      runtime_cmpstring();
      if ((long)local_110 < 1) {
        if ((*(int *)net_spill.str != 0x34706374) && (*(int *)net_spill.str != 0x36706374))
        goto LAB_00595257;
      }
      else if ((*(int *)net_spill.str != 0x34706475) && (*(int *)net_spill.str != 0x36706475))
      goto LAB_00595257;
    }
    local_128 = (runtime_itab *)net_spill.len;
    if (addr_spill.len == 0) {
      prVar6 = (runtime__type *)0x0;
      prVar8 = (runtime_itab *)0x0;
      prVar10 = (runtime__type *)0x0;
    }
    else {
      sVar15.str = addr_spill.str;
      net_SplitHostPort(sVar15);
      if (local_100 != 0) {
        mVar23.~r3.len = (int)local_108;
        mVar23.~r3.array = (net_Addr *)local_100;
        mVar23.~r3.cap = (int)local_f8;
        mVar23.~r4.data = local_120;
        mVar23.~r4.tab = local_118;
        return mVar23;
      }
      local_b0 = local_118;
      local_88 = local_120;
      local_128 = ctx_spill.tab;
      local_110 = (runtime_itab *)net_spill.len;
      local_108 = (runtime__type *)prVar8;
      network.len = (int)ctx_spill.data;
      network.str = net_spill.str;
      ctx_00.data = ctx_spill.tab;
      ctx_00.tab = (runtime_itab *)prVar6;
      service.len = iVar14;
      service.str = (uint8 *)net_spill.len;
      pvVar9 = ctx_spill.data;
      prVar11 = (runtime_itab *)net_spill.str;
      val_00.len = (uint8 *)net_spill.len;
      mVar16 = net___Resolver__LookupPort(r_spill,ctx_00,network,service);
      mVar22.~r3.len = mVar16.err.tab;
      prVar6 = local_88;
      prVar8 = local_b0;
      prVar10 = local_f8;
      if (local_f0 != 0) {
        mVar22.~r3.array = (net_Addr *)local_f8;
        mVar22.~r3.cap = local_f0;
        mVar22.~r4.data = pvVar9;
        mVar22.~r4.tab = prVar11;
        return mVar22;
      }
    }
  }
  pcVar12 = net___Resolver__internetAddrList_func1;
  local_78 = net___Resolver__internetAddrList_func1;
  local_60 = prVar10;
  if (prVar8 != (runtime_itab *)0x0) {
    network_00.len = (int)ctx_spill.data;
    network_00.str = (uint8 *)net___Resolver__internetAddrList_func1;
    ctx_01.data = net_spill.str;
    ctx_01.tab = prVar8;
    host.len = iVar14;
    host.str = val_00.len;
    local_b0 = prVar8;
    local_88 = prVar6;
    mVar18 = net___Resolver__lookupIPAddr((net_Resolver *)net_spill.len,ctx_01,network_00,host);
    mVar21.~r4.tab = mVar18.~r4.tab;
    if (local_e0 == 0) {
      if (local_f0 == 1) {
        local_90 = local_f8;
        uVar1 = local_f8->hash;
        uVar2 = local_f8->tflag;
        uVar3 = local_f8->align;
        uVar4 = local_f8->fieldAlign;
        uVar5 = local_f8->kind;
        ip.len._7_1_ = uVar5;
        ip.len._6_1_ = uVar4;
        ip.len._5_1_ = uVar3;
        ip.len._4_1_ = uVar2;
        ip.len._0_4_ = uVar1;
        local_108 = (runtime__type *)net_IPv6unspecified.cap;
        ip.array = (uint8 *)local_f8->size;
        ip.cap = local_f8->ptrdata;
        x.len = (int)net_IPv6unspecified.array;
        x.array = (uint8 *)net_IPv6unspecified.len;
        x.cap = net_IPv6unspecified.cap;
        val_00.len = (uint8 *)net_IPv6unspecified.cap;
        net_IP_Equal(ip,x);
        local_100._0_1_ = (char)prVar8;
      }
      else {
        local_100._0_1_ = '\0';
        local_90 = local_f8;
        local_108 = prVar6;
      }
      local_a8 = local_e8;
      if ((char)local_100 != '\0') {
        local_18 = (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0;
        puStack_10 = (uint8 *)0x0;
        local_30 = net_IPv4zero.array;
        local_28 = net_IPv4zero.len;
        iStack_20 = net_IPv4zero.cap;
        prVar6 = (runtime__type *)(local_f0 + 1);
        if (local_e8 < prVar6) {
          old.len = (int)&DAT_0024c960;
          old.array = (void *)local_f0;
          old.cap = net_IPv4zero.cap;
          runtime_growslice(prVar6,old,(int)local_e8);
          prVar6 = (runtime__type *)((long)&prVar8->inter + 1);
          local_90 = local_108;
          local_a8 = local_f8;
        }
        if (runtime_writeBarrier._0_4_ == 0) {
          (&local_90->size)[local_f0 * 5] = (uintptr)local_30;
          (&local_90->ptrdata)[local_f0 * 5] = local_28;
          *(int *)(&local_90->hash + local_f0 * 10) = iStack_20;
          (&local_90->equal)[local_f0 * 5] = local_18;
          (&local_90->gcdata)[local_f0 * 5] = puStack_10;
        }
        else {
          local_a0 = prVar6;
          local_80 = local_90;
          runtime_typedmemmove
                    ((runtime__type *)&local_30,&local_90->size + local_f0 * 5,
                     (void *)(local_f0 * 5));
        }
      }
      if ((net_spill.len == 0) || (net_spill.str[net_spill.len + -1] != 0x34)) {
        ppuVar13 = (undefined **)0x0;
      }
      else {
        ppuVar13 = &PTR_net_ipv4only_002b34e0;
      }
      uVar7 = 0;
      if ((net_spill.len != 0) &&
         (uVar7 = (ulong)net_spill.str[net_spill.len + -1],
         net_spill.str[net_spill.len + -1] == 0x36)) {
        ppuVar13 = &PTR_net_ipv6only_002b34e8;
      }
      ips.len = uVar7;
      ips.array = (net_IPAddr *)net_spill.str;
      ips.cap = (int)ppuVar13;
      originalAddr.len = iVar14;
      originalAddr.str = val_00.len;
      mVar19 = net_filterAddrList((func_net_IPAddr__bool **)local_b0,ips,
                                  (func_net_IPAddr__net_Addr **)local_a8,originalAddr);
      mVar20.~r4.tab = mVar19.~r5.tab;
      mVar20.~r3.len = (int)local_e8;
      mVar20.~r3.array = (net_Addr *)local_f8;
      mVar20.~r3.cap = 0;
      mVar20.~r4.data = local_d8;
      return mVar20;
    }
    mVar21.~r3.len = local_f0;
    mVar21.~r3.array = (net_Addr *)local_e0;
    mVar21.~r3.cap = (int)local_d8;
    mVar21.~r4.data = local_e8;
    return mVar21;
  }
  local_58 = (runtime_interfacetype *)0x0;
  local_50 = (runtime__type *)0x0;
  uStack_48 = 0;
  local_40 = (uint8 *)0x0;
  prStack_38 = (runtime_interfacetype *)0x0;
  val_00.len = (uint8 *)0x0;
  prVar6 = prVar10;
  if (net_spill.len == 2) {
    if (*(short *)net_spill.str != 0x7069) goto LAB_005952aa;
LAB_00594c15:
    runtime_newobject((runtime__type *)&DAT_0024c960);
    local_128->_type = local_50;
    local_128->hash = (undefined4)uStack_48;
    local_128->_[0] = uStack_48._4_1_;
    local_128->_[1] = uStack_48._5_1_;
    local_128->_[2] = uStack_48._6_1_;
    local_128->_[3] = uStack_48._7_1_;
    net_spill.len = (int)local_128;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_128->inter = local_58;
    }
    else {
      runtime_gcWriteBarrier();
    }
    ((runtime_itab *)(net_spill.len + 0x20))->inter = prStack_38;
    if (runtime_writeBarrier._0_4_ == 0) {
      ((runtime_itab *)net_spill.len)->fun[0] = (uintptr)local_40;
    }
    else {
      runtime_gcWriteBarrier();
      net_spill.len = (int)extraout_RDX;
    }
    typ = go_itab__net_IPAddr_net_Addr;
  }
  else {
    if (net_spill.len == 3) {
      local_128 = (runtime_itab *)net_spill.len;
      runtime_cmpstring();
      if ((long)local_110 < 1) {
        if (((*(short *)net_spill.str != 0x7069) || (net_spill.str[2] != 0x34)) &&
           ((*(short *)net_spill.str != 0x7069 || (net_spill.str[2] != 0x36)))) goto LAB_005952aa;
        goto LAB_00594c15;
      }
      if ((*(short *)net_spill.str != 0x6374) || (net_spill.str[2] != 0x70)) {
        if ((*(short *)net_spill.str != 0x6475) || (net_spill.str[2] != 0x70)) goto LAB_005952aa;
        goto LAB_00594d70;
      }
    }
    else {
      if (net_spill.len != 4) {
LAB_005952aa:
        do {
          a1.len = (int)prVar6;
          a1.str = (uint8 *)pcVar12;
          a0.len = (int)&DAT_0029c1ee;
          a0.str = val_00.len;
          sVar15 = runtime_concatstring2((runtime_tmpBuf *)net_spill.len,a0,a1);
          val_00.len = (uint8 *)sVar15.len;
          val_00.str = (uint8 *)local_108;
          runtime_convTstring(val_00);
          e.data = val_00.len;
          e._type = (runtime__type *)&DAT_00000014;
          runtime_gopanic(e);
        } while( true );
      }
      runtime_cmpstring();
      if (0 < (long)local_110) {
        if ((*(int *)net_spill.str != 0x34706475) && (*(int *)net_spill.str != 0x36706475))
        goto LAB_005952aa;
LAB_00594d70:
        local_128 = (runtime_itab *)net_spill.len;
        runtime_newobject((runtime__type *)&DAT_00257520);
        *(runtime__type **)(net_spill.len + 8) = local_50;
        *(undefined8 *)(net_spill.len + 0x10) = uStack_48;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(runtime_interfacetype **)net_spill.len = local_58;
        }
        else {
          runtime_gcWriteBarrier();
        }
        ((runtime__type *)net_spill.len)->equal =
             (func_unsafe_Pointer__unsafe_Pointer__bool **)prVar10;
        *(runtime_interfacetype **)&((runtime__type *)net_spill.len)->str = prStack_38;
        if (runtime_writeBarrier._0_4_ == 0) {
          ((runtime__type *)net_spill.len)->gcdata = local_40;
        }
        else {
          runtime_gcWriteBarrier();
          net_spill.len = (int)extraout_RDX_01;
        }
        typ = go_itab__net_UDPAddr_net_Addr;
        goto LAB_00594e02;
      }
      if ((*(int *)net_spill.str != 0x34706374) && (*(int *)net_spill.str != 0x36706374))
      goto LAB_005952aa;
    }
    local_128 = (runtime_itab *)net_spill.len;
    runtime_newobject((runtime__type *)&DAT_00257460);
    *(runtime__type **)(net_spill.len + 8) = local_50;
    *(undefined8 *)(net_spill.len + 0x10) = uStack_48;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(runtime_interfacetype **)net_spill.len = local_58;
    }
    else {
      runtime_gcWriteBarrier();
    }
    ((runtime__type *)net_spill.len)->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)prVar10;
    *(runtime_interfacetype **)&((runtime__type *)net_spill.len)->str = prStack_38;
    if (runtime_writeBarrier._0_4_ == 0) {
      ((runtime__type *)net_spill.len)->gcdata = local_40;
    }
    else {
      runtime_gcWriteBarrier();
      net_spill.len = (int)extraout_RDX_00;
    }
    typ = go_itab__net_TCPAddr_net_Addr;
  }
LAB_00594e02:
  local_98 = (runtime__type *)net_spill.len;
  runtime_newobject((runtime__type *)typ);
  local_128->inter = (runtime_interfacetype *)typ;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_128->_type = local_98;
  }
  else {
    net_spill.len = (int)&local_128->_type;
    runtime_gcWriteBarrierCX();
    local_128 = extraout_RAX;
  }
  mVar17.~r3.len = 0;
  mVar17.~r3.array = (net_Addr *)local_128;
  mVar17.~r3.cap = (int)local_98;
  mVar17.~r4.data = prVar6;
  mVar17.~r4.tab = (runtime_itab *)net_spill.len;
  return mVar17;
}

