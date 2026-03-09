
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.cgoLookupServicePort(net._Ctype_struct_addrinfo * hints,
   string network, string service, int port, error err) */

multireturn_int_error__conflict13
net_cgoLookupServicePort(net__Ctype_struct_addrinfo *hints,string network,string service)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uintptr uVar4;
  runtime__type *prVar5;
  void *pvVar6;
  runtime__type *extraout_RDX;
  runtime__type *extraout_RDX_00;
  runtime__type *typ;
  long lVar7;
  net__Ctype_struct_addrinfo **_res;
  net__Ctype_struct_addrinfo *hints_00;
  runtime__type *prVar8;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  bool bVar9;
  __uint8 cservice;
  multireturn_int_error__conflict13 mVar10;
  multireturn_int_error__conflict13 mVar11;
  multireturn_int_error__conflict13 mVar12;
  multireturn_int_error__conflict13 mVar13;
  string a1;
  string a1_00;
  string a0;
  string sVar14;
  string a2;
  string a2_00;
  multireturn_net__Ctype_int_error__conflict mVar15;
  net__Ctype_struct_addrinfo *hints_spill;
  string network_spill;
  string service_spill;
  ulong uStack0000000000000030;
  undefined1 *puStack0000000000000038;
  runtime__type *prStack0000000000000040;
  long local_78;
  int local_70;
  undefined1 *local_68;
  runtime__type *local_60;
  void *local_58;
  runtime__type *local_18;
  runtime__type *local_10;
  
  _res = (net__Ctype_struct_addrinfo **)service.len;
  hints_00 = (net__Ctype_struct_addrinfo *)service.str;
                    /* Unresolved local var: net._Ctype_struct_addrinfo * * &res@[???]
                       Unresolved local var: net._Ctype_int gerrno@[???]
                       Unresolved local var: []uint8 cservice@[???] */
  while (&local_18 <= *(runtime__type ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_10 = (runtime__type *)0x0;
  uStack0000000000000030 = 0;
  puStack0000000000000038 = (undefined1 *)0x0;
  prStack0000000000000040 = (runtime__type *)0x0;
  typ = (runtime__type *)(service_spill.len + 1);
  runtime_makeslicecopy((runtime__type *)service_spill.len,(int)network.str,(int)typ,hints_00);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 b@[???] */
  if (typ < (ulong)service_spill.len) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  for (lVar7 = 0; lVar7 < service_spill.len; lVar7 = lVar7 + 1) {
    bVar1 = *(byte *)(local_78 + lVar7);
    _res = (net__Ctype_struct_addrinfo **)(ulong)bVar1;
    hints_00 = (net__Ctype_struct_addrinfo *)(ulong)(bVar1 - 0x41);
    if ((byte)(bVar1 - 0x41) < 0x1a) {
      _res = (net__Ctype_struct_addrinfo **)(ulong)(bVar1 + 0x20);
    }
    *(char *)(local_78 + lVar7) = (char)_res;
  }
  runtime_newobject((runtime__type *)&DAT_0021d120);
  cservice.len = lVar7;
  cservice.array = (uint8 *)typ;
  cservice.cap = (int)hints_spill;
  local_18 = typ;
  mVar15 = net_cgoLookupServicePort_func1(cservice,hints_00,_res);
  sVar14.str = mVar15.~r1.tab;
  puStack0000000000000038 = local_68;
  prStack0000000000000040 = local_60;
  if (local_70 == 0) {
    net_cgoLookupServicePort_func2((net__Ctype_struct_addrinfo **)local_18);
                    /* Unresolved local var: net._Ctype_struct_addrinfo * r@[???] */
    uVar4 = local_18->size;
    while( true ) {
      local_10 = typ;
      if (uVar4 == 0) {
        runtime_newobject((runtime__type *)&DAT_0026dea0);
        *(undefined8 *)(service_spill.len + 9) = 0xc;
        typ->size = (uintptr)FUN_00294336;
        a1_00.len = (int)_res;
        a1_00.str = (uint8 *)hints_00;
        a0.len = service_spill.len;
        a0.str = (uint8 *)sVar14.str;
        a2_00.len = in_R9;
        a2_00.str = in_R8;
        sVar14 = runtime_concatstring3((runtime_tmpBuf *)typ,a0,a1_00,a2_00);
        mVar13.err.tab = sVar14.len;
        *(void **)(service_spill.len + 0x19) = local_58;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(runtime__type **)(service_spill.len + 0x11) = local_60;
        }
        else {
          runtime_gcWriteBarrier();
          typ = extraout_RDX_00;
        }
        uStack0000000000000030 = 0;
        puStack0000000000000038 = go_itab__net_DNSError_error;
        prStack0000000000000040 = typ;
        mVar13.port = (*(code *)local_10->size)();
        mVar13.err.data = local_58;
        return mVar13;
      }
      uVar3 = *(uint *)(uVar4 + 4);
      pvVar6 = (void *)(ulong)uVar3;
                    /* Unresolved local var: syscall.RawSockaddrInet4 * sa@[???] */
      if (uVar3 == 2) break;
                    /* Unresolved local var: syscall.RawSockaddrInet6 * sa@[???] */
      if (uVar3 == 0x1c) {
        uVar2 = *(ushort *)(*(long *)(uVar4 + 0x20) + 2);
        uStack0000000000000030 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
        puStack0000000000000038 = (undefined1 *)0x0;
        prStack0000000000000040 = (runtime__type *)0x0;
        mVar11.port = (*(code *)typ->size)();
        mVar11.err.tab = sVar14.str;
        mVar11.err.data = pvVar6;
        return mVar11;
      }
      uVar4 = *(uintptr *)(uVar4 + 0x28);
    }
    uVar2 = *(ushort *)(*(long *)(uVar4 + 0x20) + 2);
    uStack0000000000000030 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
    puStack0000000000000038 = (undefined1 *)0x0;
    prStack0000000000000040 = (runtime__type *)0x0;
    mVar12.port = (*(code *)typ->size)();
    mVar12.err.tab = sVar14.str;
    mVar12.err.data = pvVar6;
    return mVar12;
  }
                    /* Unresolved local var: bool isTemporary@[???] */
  if (local_70 == 0xb) {
    if (local_68 == (undefined1 *)0x0) {
      puStack0000000000000038 = go_itab_syscall_Errno_error;
      prStack0000000000000040 = (runtime__type *)&net__stmp_94;
    }
    bVar9 = false;
  }
  else {
    runtime_convT64((long)local_70);
    puStack0000000000000038 = go_itab_net_addrinfoErrno_error;
    bVar9 = (long)local_70 == 2;
    prStack0000000000000040 = typ;
  }
  (**(code **)(puStack0000000000000038 + 0x18))();
  prVar5 = typ;
  runtime_newobject(typ);
  *(runtime__type **)(service_spill.len + 9) = typ;
  prVar8 = typ;
  if (runtime_writeBarrier._0_4_ == 0) {
    typ->size = (uintptr)typ;
  }
  else {
    runtime_gcWriteBarrier();
  }
  a1.len = (int)_res;
  a1.str = (uint8 *)prVar8;
  sVar14.len = (int)prVar5;
  a2.len = in_R9;
  a2.str = in_R8;
  sVar14 = runtime_concatstring3((runtime_tmpBuf *)service_spill.len,sVar14,a1,a2);
  mVar10.err.tab = sVar14.len;
  *(void **)(service_spill.len + 0x19) = local_58;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(runtime__type **)(service_spill.len + 0x11) = local_60;
  }
  else {
    runtime_gcWriteBarrier();
    typ = extraout_RDX;
  }
  *(bool *)((long)&typ[1].size + 1) = bVar9;
  mVar10.port = (int)go_itab__net_DNSError_error;
  mVar10.err.data = local_58;
  return mVar10;
}

