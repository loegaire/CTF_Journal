
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.ipToSockaddr(int family, net.IP ip, int port, string zone,
   syscall.Sockaddr ~r4, error ~r5) */

multireturn_syscall_Sockaddr_error__conflict2
net_ipToSockaddr(int family,net_IP ip,int port,string zone)

{
  uint8 uVar1;
  uint8 uVar2;
  byte bVar3;
  uint8 uVar4;
  undefined1 auVar5 [24];
  uint32 *puVar6;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  uint32 *puVar10;
  uint8 *puVar11;
  long in_FS_OFFSET;
  string sVar12;
  net_IP ip_00;
  net_IP ip_01;
  net_IP ip_02;
  net_IP x;
  multireturn_syscall_Sockaddr_error__conflict2 mVar13;
  multireturn_syscall_Sockaddr_error__conflict2 mVar14;
  multireturn_syscall_Sockaddr_error__conflict2 mVar15;
  multireturn_syscall_Sockaddr_error__conflict2 mVar16;
  multireturn_syscall_Sockaddr_error__conflict2 mVar17;
  int family_spill;
  net_IP ip_spill;
  int port_spill;
  string zone_spill;
  runtime_itab *local_a8;
  runtime__type *local_98;
  uintptr local_90;
  char local_80;
  uint8 local_48 [14];
  byte bStack_3a;
  uint8 uStack_39;
  uint8 *local_38;
  uint32 *local_30;
  runtime_itab *local_28;
  runtime_itab *local_20;
  uint8 *local_18;
  runtime__type *local_10;
  
  puVar11 = zone.str;
  puVar10 = (uint32 *)ip.cap;
  iVar7 = ip.len;
  ip_02.len = ip.array;
  while (&local_30 <= *(uint32 ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: syscall.SockaddrInet4 * sa@[???]
                       Unresolved local var: net.IP ip4@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  if (family_spill == 2) {
    if (ip_spill.len == 0) {
      ip_spill.array = net_IPv4zero.array;
      ip_spill.len = net_IPv4zero.len;
    }
    if ((runtime_itab *)ip_spill.len == (runtime_itab *)&DAT_00000004) {
      uVar8 = 4;
      local_30 = (uint32 *)ip_spill.array;
    }
    else {
      if ((runtime_itab *)ip_spill.len == (runtime_itab *)&DAT_00000010) {
                    /* Unresolved local var: int i@[???] */
        for (lVar9 = 0; lVar9 < 10; lVar9 = lVar9 + 1) {
          if (*(uint8 *)((long)ip_spill.array + lVar9) != 0) goto LAB_00596459;
        }
        if ((*(uint8 *)((long)ip_spill.array + 10) == 0xff) &&
           (*(uint8 *)((long)ip_spill.array + 0xb) == 0xff)) {
          puVar10 = (uint32 *)((long)ip_spill.array + 0xc);
          uVar8 = 4;
          local_30 = puVar10;
          goto LAB_005962ef;
        }
      }
LAB_00596459:
      uVar8 = 0;
      local_30 = (uint32 *)0x0;
    }
LAB_005962ef:
    if (local_30 == (uint32 *)0x0) {
      auVar5._8_8_ = uVar8;
      auVar5._0_8_ = ip_spill.array;
      auVar5._16_8_ = 0;
      sVar12 = net_IP_String((net_IP)(auVar5 << 0x40));
      mVar17.~r4.data = (void *)sVar12.len;
      local_10 = local_98;
      runtime_newobject(local_98);
      ((runtime_itab *)ip_spill.len)->_type = (runtime__type *)&DAT_00000010;
      ((runtime_itab *)ip_spill.len)->inter = (runtime_interfacetype *)&DAT_00299a35;
      ((runtime_itab *)ip_spill.len)->fun[0] = local_90;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(runtime__type **)&((runtime_itab *)ip_spill.len)->hash = local_10;
      }
      else {
        puVar10 = &((runtime_itab *)ip_spill.len)->hash;
        runtime_gcWriteBarrierCX();
        ip_spill.len = (int)extraout_RAX_01;
      }
      mVar17.~r4.tab = (runtime_itab *)ip_spill.len;
      mVar17.~r5.data = puVar10;
      mVar17.~r5.tab = (runtime_itab *)go_itab__net_AddrError_error;
      return mVar17;
    }
    runtime_newobject((runtime__type *)&DAT_00259260);
    puVar6 = local_30;
    local_a8->inter = (runtime_interfacetype *)port_spill;
    if ((runtime__type **)local_30 != &local_a8->_type) {
      local_20 = local_a8;
      runtime_memmove();
      local_a8 = local_20;
    }
    mVar16.~r4.data = puVar6;
    mVar16.~r4.tab = local_a8;
    mVar16.~r5.data = puVar10;
    mVar16.~r5.tab = (runtime_itab *)go_itab__syscall_SockaddrInet4_syscall_Sockaddr;
    return mVar16;
  }
                    /* Unresolved local var: syscall.SockaddrInet6 * sa@[???]
                       Unresolved local var: net.IP ip6@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  if (family_spill != 0x1c) {
    ip_02.array = (uint8 *)ip_spill.cap;
    ip_02.cap = iVar7;
    sVar12 = net_IP_String(ip_02);
    mVar15.~r4.data = (void *)sVar12.len;
    local_10 = local_98;
    runtime_newobject(local_98);
    *(undefined8 *)(ip_spill.len + 8) = 0x16;
    *(undefined **)ip_spill.len = &DAT_0029d2df;
    *(uintptr *)(ip_spill.len + 0x18) = local_90;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(runtime__type **)(ip_spill.len + 0x10) = local_10;
    }
    else {
      puVar10 = (uint32 *)(ip_spill.len + 0x10);
      runtime_gcWriteBarrierCX();
      ip_spill.len = (int)extraout_RAX_00;
    }
    mVar15.~r4.tab = (runtime_itab *)ip_spill.len;
    mVar15.~r5.data = puVar10;
    mVar15.~r5.tab = (runtime_itab *)go_itab__net_AddrError_error;
    return mVar15;
  }
  if (ip_spill.len != 0) {
    local_98 = (runtime__type *)net_IPv4zero.array;
    local_90 = net_IPv4zero.len;
    ip_00.len = net_IPv4zero.cap;
    ip_00.array = (uint8 *)ip_spill.len;
    ip_00.cap = (int)net_IPv4zero.array;
    x.len = (int)ip_spill.array;
    x.array = (uint8 *)ip_spill.cap;
    x.cap = (int)puVar11;
    net_IP_Equal(ip_00,x);
    puVar10 = (uint32 *)ip_spill.cap;
    if (local_80 == '\0') goto LAB_00595f9b;
  }
  ip_spill.array = net_IPv6zero.array;
  ip_spill.len = net_IPv6zero.len;
  ip_spill.cap = (int)puVar10;
LAB_00595f9b:
  if ((runtime_itab *)ip_spill.len == (runtime_itab *)&DAT_00000004) {
    uVar1 = *ip_spill.array;
    uVar2 = ip_spill.array[1];
    bVar3 = ip_spill.array[2];
    uVar4 = ip_spill.array[3];
                    /* Unresolved local var: net.IP p@[???] */
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = 0;
    local_48[6] = 0;
    local_48[7] = 0;
    stack0xffffffffffffffc0 = 0;
    if (net_v4InV6Prefix.array != local_48) {
      local_18 = ip_spill.array;
      runtime_memmove();
      ip_spill.array = local_18;
    }
    ip_spill.cap = (int)bVar3;
    stack0xffffffffffffffc0 =
         CONCAT17(uVar4,CONCAT16(bVar3,CONCAT15(uVar2,CONCAT14(uVar1,local_48._8_4_))));
    local_38 = local_48;
  }
  else {
    local_38 = ip_spill.array;
    if ((runtime_itab *)ip_spill.len != (runtime_itab *)&DAT_00000010) {
      local_38 = (uint8 *)0x0;
    }
  }
  if (local_38 == (uint8 *)0x0) {
    ip_01.len = 0;
    ip_01.array = ip_spill.array;
    ip_01.cap = ip_spill.len;
    sVar12 = net_IP_String(ip_01);
    mVar14.~r4.data = (void *)sVar12.len;
    local_10 = local_98;
    runtime_newobject(local_98);
    ((runtime_itab *)ip_spill.len)->_type = (runtime__type *)&DAT_00000010;
    ((runtime_itab *)ip_spill.len)->inter = (runtime_interfacetype *)&DAT_00299a45;
    ((runtime_itab *)ip_spill.len)->fun[0] = local_90;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(runtime__type **)&((runtime_itab *)ip_spill.len)->hash = local_10;
    }
    else {
      ip_spill.cap = (int)&((runtime_itab *)ip_spill.len)->hash;
      runtime_gcWriteBarrierCX();
      ip_spill.len = (int)extraout_RAX;
    }
    mVar14.~r4.tab = (runtime_itab *)ip_spill.len;
    mVar14.~r5.data = (void *)ip_spill.cap;
    mVar14.~r5.tab = (runtime_itab *)go_itab__net_AddrError_error;
    return mVar14;
  }
  sVar12.len = ip_spill.len;
  sVar12.str = local_38;
  net___ipv6ZoneCache__index((net_ipv6ZoneCache *)zone_spill.len,sVar12);
  runtime_newobject(local_98);
  puVar11 = local_38;
  *(int *)zone_spill.str = port_spill;
  *(int *)(zone_spill.str + 8) = (int)local_98;
  if (local_38 != zone_spill.str + 0xc) {
    local_28 = (runtime_itab *)zone_spill.str;
    runtime_memmove();
    zone_spill.str = (uint8 *)local_28;
  }
  mVar13.~r4.data = puVar11;
  mVar13.~r4.tab = (runtime_itab *)zone_spill.str;
  mVar13.~r5.data = (void *)ip_spill.cap;
  mVar13.~r5.tab = (runtime_itab *)go_itab__syscall_SockaddrInet6_syscall_Sockaddr;
  return mVar13;
}

