
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.cgoLookupIPCNAME(string network, string name, []net.IPAddr
   addrs, string cname, error err) */

multireturn___net_IPAddr_string_error_ net_cgoLookupIPCNAME(string network,string name)

{
  sync_Mutex *psVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined8 extraout_RAX;
  long lVar7;
  undefined8 extraout_RAX_00;
  uint8 uVar8;
  sync_Mutex typ;
  sync_Mutex sVar9;
  sync_Mutex sVar10;
  net_ipv6ZoneCache *in_RSI;
  net__Ctype_struct_addrinfo *_hints;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  bool bVar11;
  string sVar12;
  __uint8 h;
  net_IP x;
  runtime_slice rVar13;
  net_IP x_00;
  runtime_slice old;
  string a0;
  multireturn___net_IPAddr_string_error_ mVar14;
  multireturn___net_IPAddr_string_error_ mVar15;
  multireturn_net__Ctype_int_error__conflict mVar16;
  string network_spill;
  string name_spill;
  long lStack0000000000000028;
  int32 iStack0000000000000030;
  uint32 uStack0000000000000034;
  int32 iStack0000000000000038;
  uint32 uStack000000000000003c;
  int32 iStack0000000000000040;
  uint32 uStack0000000000000044;
  int32 iStack0000000000000048;
  uint32 uStack000000000000004c;
  undefined1 *puStack0000000000000050;
  int32 iStack0000000000000058;
  uint32 uStack000000000000005c;
  sync_Mutex local_100;
  sync_Mutex local_f0;
  sync_Mutex local_e8;
  int local_e0;
  uint uStack_dc;
  sync_Mutex local_d8;
  sync_Mutex local_d0;
  sync_Mutex local_88 [2];
  sync_Mutex local_78;
  sync_Mutex local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  undefined8 local_18;
  undefined **ppuStack_10;
  
  _hints = (net__Ctype_struct_addrinfo *)name.len;
  h.len = network.len;
                    /* Unresolved local var: net._Ctype_struct_addrinfo * &hints@[???]
                       Unresolved local var: net._Ctype_struct_addrinfo * * &res@[???]
                       Unresolved local var: net._Ctype_int gerrno@[???]
                       Unresolved local var: []uint8 h@[???] */
  while (local_88 <= *(sync_Mutex **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  ppuStack_10 = (undefined **)0x0;
                    /* Unresolved local var: uint8 n@[???] */
  lStack0000000000000028 = 0;
  iStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  iStack0000000000000038 = 0;
  uStack000000000000003c = 0;
  iStack0000000000000040 = 0;
  uStack0000000000000044 = 0;
  iStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  puStack0000000000000050 = (undefined1 *)0x0;
  _iStack0000000000000058 = (sync_Mutex)0x0;
  net_acquireThread();
  ppuStack_10 = &PTR_net_releaseThread_002b3510;
  runtime_newobject((runtime__type *)&DAT_00272e80);
  *(undefined4 *)local_100 = 0x902;
  *(undefined8 *)((long)local_100 + 4) = 0x100000000;
  if (network_spill.len == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = network_spill.str[network_spill.len + -1];
    if ((uVar8 != 0x34) && (uVar8 != 0x36)) {
      uVar8 = 0;
    }
  }
  local_70 = local_100;
  if (uVar8 == 0x34) {
    *(uint32 *)((long)local_100 + 4) = 2;
  }
  else if (uVar8 == 0x36) {
    *(uint32 *)((long)local_100 + 4) = 0x1c;
  }
  typ = (sync_Mutex)(name_spill.len + 1);
  runtime_makeslicecopy((runtime__type *)name_spill.len,h.len,(int)typ,_hints);
  runtime_newobject((runtime__type *)local_e8);
  local_f0 = local_70;
  h.array = (uint8 *)typ;
  h.cap._0_4_ = local_70.state;
  h.cap._4_4_ = local_70.sema;
  local_78 = typ;
  mVar16 = net_cgoLookupIPCNAME_func1(h,_hints,(net__Ctype_struct_addrinfo **)in_RSI);
  sVar10 = mVar16.~r1.tab;
  puStack0000000000000050 = (undefined1 *)local_d8;
  _iStack0000000000000058 = local_d0;
  if (local_e0 != 0) {
                    /* Unresolved local var: bool isErrorNoSuchHost@[???]
                       Unresolved local var: bool isTemporary@[???] */
    if (local_e0 == 8) {
      puStack0000000000000050 = (undefined1 *)net_errNoSuchHost.tab;
      _iStack0000000000000058 = (sync_Mutex)net_errNoSuchHost.data;
      uVar6 = 1;
      bVar11 = false;
    }
    else if (local_e0 == 0xb) {
      if (local_d8 == (sync_Mutex)0x0) {
        puStack0000000000000050 = go_itab_syscall_Errno_error;
        _iStack0000000000000058 = (sync_Mutex)&net__stmp_94;
      }
      uVar6 = 0;
      bVar11 = false;
    }
    else {
      runtime_convT64((long)local_e0);
      puStack0000000000000050 = go_itab_net_addrinfoErrno_error;
      bVar11 = (long)local_e0 == 2;
      uVar6 = 0;
      _iStack0000000000000058 = typ;
    }
    sVar10 = _iStack0000000000000058;
    (*(code *)((time_Time *)((long)puStack0000000000000050 + 0x18))->wall)();
    sVar9 = typ;
    local_88[0] = typ;
    runtime_newobject((runtime__type *)typ);
    *(sync_Mutex *)(name_spill.len + 9) = typ;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(sync_Mutex *)typ = local_88[0];
    }
    else {
      runtime_gcWriteBarrier();
    }
    ((time_Time *)((long)typ + 0x18))->wall = name_spill.len;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)((long)typ + 0x10) = name_spill.str;
    }
    else {
      runtime_gcWriteBarrierDX();
      sVar9 = typ;
    }
    *(undefined1 *)((long)typ + 0x32) = uVar6;
    *(bool *)((long)typ + 0x31) = bVar11;
    lStack0000000000000028 = 0;
    _iStack0000000000000030 = (sync_Mutex)0x0;
    _iStack0000000000000038 = (sync_Mutex)0x0;
    _iStack0000000000000040 = (sync_Mutex)0x0;
    _iStack0000000000000048 = (sync_Mutex)0x0;
    puStack0000000000000050 = go_itab__net_DNSError_error;
    _iStack0000000000000058 = typ;
    net_releaseThread();
    iStack0000000000000058 = sVar10.state;
    uStack000000000000005c = sVar10.sema;
    mVar14.addrs.len._0_4_ = iStack0000000000000058;
    mVar14.addrs.len._4_4_ = uStack000000000000005c;
    mVar14.addrs.array = (net_IPAddr *)extraout_RAX;
    mVar14.cname.str = (uint8 *)typ;
    mVar14.addrs.cap._0_4_ = sVar9.state;
    mVar14.addrs.cap._4_4_ = sVar9.sema;
    mVar14.err.tab = (runtime_itab *)in_R8;
    mVar14.cname.len = (int)in_RSI;
    mVar14.err.data = (void *)in_R9;
    return mVar14;
  }
  net_cgoLookupIPCNAME_func2((net__Ctype_struct_addrinfo **)local_78);
  sVar9.state = 0;
  sVar9.sema = 0;
  local_e8 = typ;
  local_18 = typ;
  if (*(long *)local_78 != 0) {
    sVar12 = runtime_gostring(*(uint8 **)(*(long *)local_78 + 0x18));
    sVar10 = (sync_Mutex)sVar12.len;
    _iStack0000000000000040 = typ;
    _iStack0000000000000048 = typ;
    if (typ == (sync_Mutex)0x0) {
      _iStack0000000000000040 = (sync_Mutex)name_spill.str;
      _iStack0000000000000048 = (sync_Mutex)name_spill.len;
    }
    sVar9 = _iStack0000000000000040;
    if ((0 < (long)_iStack0000000000000048) &&
       (bVar2 = ((undefined1 *)
                ((long)&((net_ipv6ZoneCache *)((long)_iStack0000000000000048 + -0x40))->toName + 7))
                [(long)_iStack0000000000000040], sVar10._1_7_ = 0, sVar10.state._0_1_ = bVar2,
       bVar2 != 0x2e)) {
      local_f0 = (sync_Mutex)((long)&go_string__ + 4);
      local_e8.state = 1;
      local_e8.sema = 0;
      sVar12.len = (int)in_RSI;
      sVar12.str = (uint8 *)_hints;
      a0.len._0_4_ = iStack0000000000000040;
      a0.len._4_4_ = uStack0000000000000044;
      a0.str = (uint8 *)sVar10;
      sVar12 = runtime_concatstring2((runtime_tmpBuf *)((long)&go_string__ + 4),a0,sVar12);
      sVar10 = (sync_Mutex)sVar12.len;
      _iStack0000000000000040 = (sync_Mutex)((ulong)uStack_dc << 0x20);
      _iStack0000000000000048 = local_d8;
      sVar9 = local_d8;
    }
  }
  for (lVar7 = *(long *)local_78; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x28)) {
    if (*(int *)(lVar7 + 8) == 1) {
      uVar3 = *(uint *)(lVar7 + 4);
      sVar9.sema = 0;
      sVar9.state = uVar3;
                    /* Unresolved local var: syscall.RawSockaddrInet4 * sa@[???]
                       Unresolved local var: net.IPAddr addr@[???] */
      if (uVar3 == 2) {
        x_00.cap = *(long *)(lVar7 + 0x20) + 4;
        x_00.len._0_4_ = sVar10.state;
        x_00.len._4_4_ = sVar10.sema;
        x_00.array = (uint8 *)lVar7;
        net_copyIP(x_00);
        local_40._16_8_ = (ulong)uStack_dc << 0x20;
        local_40._24_8_ = (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0;
        local_40._32_8_ = (uint8 *)0x0;
        local_40._0_4_ = local_f0.state;
        local_40._4_4_ = local_f0.sema;
        local_40._8_4_ = local_e8.state;
        local_40._12_4_ = local_e8.sema;
        puVar5 = (undefined1 *)((long)_iStack0000000000000030 + 1);
        sVar10 = _iStack0000000000000038;
        if ((ulong)_iStack0000000000000038 < puVar5) {
          in_RSI = (net_ipv6ZoneCache *)&DAT_0024c960;
          local_f0 = _iStack0000000000000038;
          rVar13.len = (int)puVar5;
          rVar13.array = (void *)_iStack0000000000000038;
          rVar13.cap = (int)_hints;
          rVar13 = runtime_growslice((runtime__type *)_iStack0000000000000030,rVar13,0x24c960);
          sVar10 = (sync_Mutex)rVar13.len;
          lStack0000000000000028 = (ulong)uStack_dc << 0x20;
          _iStack0000000000000038 = local_d0;
          _iStack0000000000000030 = local_d8;
          local_e8 = (sync_Mutex)puVar5;
        }
        sVar9 = (sync_Mutex)(lStack0000000000000028 + (long)_iStack0000000000000030 * 0x28);
        if (runtime_writeBarrier._0_4_ == 0) {
          psVar1 = (sync_Mutex *)(lStack0000000000000028 + (long)_iStack0000000000000030 * 0x28);
          psVar1->state = local_40._0_4_;
          psVar1->sema = local_40._4_4_;
          lVar4 = lStack0000000000000028 + (long)_iStack0000000000000030 * 0x28;
          ((sync_Mutex *)(lVar4 + 8))->state = local_40._8_4_;
          ((sync_Mutex *)(lVar4 + 8))->sema = local_40._12_4_;
          *(undefined8 *)(lVar4 + 0x10) = local_40._16_8_;
          *(undefined8 *)(lVar4 + 0x18) = local_40._24_8_;
          *(undefined8 *)(lVar4 + 0x20) = local_40._32_8_;
          sVar9 = (sync_Mutex)local_40._0_8_;
          _iStack0000000000000030 = (sync_Mutex)((long)_iStack0000000000000030 + 1);
        }
        else {
          _iStack0000000000000030 = (sync_Mutex)((long)_iStack0000000000000030 + 1);
          runtime_typedmemmove((runtime__type *)local_40,(void *)sVar10,(void *)sVar9);
        }
      }
      else {
                    /* Unresolved local var: syscall.RawSockaddrInet6 * sa@[???]
                       Unresolved local var: net.IPAddr addr@[???] */
        if (uVar3 == 0x1c) {
          lVar4 = *(long *)(lVar7 + 0x20);
          x.len._0_4_ = sVar10.state;
          x.len._4_4_ = sVar10.sema;
          x.array = (uint8 *)lVar7;
          x.cap = lVar4;
          net_copyIP(x);
          in_RSI = &net_zoneCache;
          net___ipv6ZoneCache__name((net_ipv6ZoneCache *)local_f0,(ulong)*(uint *)(lVar4 + 0x18));
          local_68._0_4_ = local_f0.state;
          local_68._4_4_ = local_f0.sema;
          local_68._8_4_ = local_e8.state;
          local_68._12_4_ = local_e8.sema;
          local_68._24_8_ = &DAT_00000010;
          local_68._32_4_ = local_f0.state;
          local_68._36_4_ = local_f0.sema;
          puVar5 = (undefined1 *)((long)_iStack0000000000000030 + 1);
          sVar10 = _iStack0000000000000038;
          local_68._16_8_ = (ulong)uStack_dc << 0x20;
          if ((ulong)_iStack0000000000000038 < puVar5) {
            in_RSI = (net_ipv6ZoneCache *)&DAT_0024c960;
            local_f0 = _iStack0000000000000038;
            old.len = (int)puVar5;
            old.array = (void *)_iStack0000000000000038;
            old.cap = (int)_hints;
            rVar13 = runtime_growslice((runtime__type *)_iStack0000000000000030,old,0x24c960);
            sVar10 = (sync_Mutex)rVar13.len;
            lStack0000000000000028 = (ulong)uStack_dc << 0x20;
            _iStack0000000000000038 = local_d0;
            _iStack0000000000000030 = local_d8;
            local_e8 = (sync_Mutex)puVar5;
          }
          sVar9 = (sync_Mutex)(lStack0000000000000028 + (long)_iStack0000000000000030 * 0x28);
          if (runtime_writeBarrier._0_4_ == 0) {
            psVar1 = (sync_Mutex *)(lStack0000000000000028 + (long)_iStack0000000000000030 * 0x28);
            psVar1->state = local_68._0_4_;
            psVar1->sema = local_68._4_4_;
            lVar4 = lStack0000000000000028 + (long)_iStack0000000000000030 * 0x28;
            ((sync_Mutex *)(lVar4 + 8))->state = local_68._8_4_;
            ((sync_Mutex *)(lVar4 + 8))->sema = local_68._12_4_;
            *(undefined8 *)(lVar4 + 0x10) = local_68._16_8_;
            *(undefined8 *)(lVar4 + 0x18) = local_68._24_8_;
            ((sync_Mutex *)(lVar4 + 0x20))->state = local_68._32_4_;
            ((sync_Mutex *)(lVar4 + 0x20))->sema = local_68._36_4_;
            sVar9 = (sync_Mutex)local_68._0_8_;
            _iStack0000000000000030 = (sync_Mutex)((long)_iStack0000000000000030 + 1);
          }
          else {
            _iStack0000000000000030 = (sync_Mutex)((long)_iStack0000000000000030 + 1);
            runtime_typedmemmove((runtime__type *)local_68,(void *)sVar10,(void *)sVar9);
          }
        }
      }
    }
  }
  puStack0000000000000050 = (undefined1 *)0x0;
  _iStack0000000000000058 = (sync_Mutex)0x0;
  (**(code **)local_18)();
  net_releaseThread();
  mVar15.addrs.len._0_4_ = sVar10.state;
  mVar15.addrs.len._4_4_ = sVar10.sema;
  mVar15.addrs.array = (net_IPAddr *)extraout_RAX_00;
  mVar15.cname.str = (uint8 *)_hints;
  mVar15.addrs.cap._0_4_ = sVar9.state;
  mVar15.addrs.cap._4_4_ = sVar9.sema;
  mVar15.err.tab = (runtime_itab *)in_R8;
  mVar15.cname.len = (int)in_RSI;
  mVar15.err.data = (void *)in_R9;
  return mVar15;
}

