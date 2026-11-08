
/* WARNING: Removing unreachable block (ram,0x00595c04) */
/* WARNING: Removing unreachable block (ram,0x00595c0e) */
/* WARNING: Removing unreachable block (ram,0x00595c36) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.favoriteAddrFamily(string network, net.sockaddr laddr,
   net.sockaddr raddr, string mode, int family, bool ipv6only) */

multireturn_int_bool__conflict7
net_favoriteAddrFamily(string network,net_sockaddr laddr,net_sockaddr raddr,string mode)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  char cVar4;
  long in_FS_OFFSET;
  multireturn_int_bool__conflict7 mVar5;
  multireturn_int_bool__conflict7 mVar6;
  multireturn_int_bool__conflict7 mVar7;
  multireturn_int_bool__conflict7 mVar8;
  multireturn_int_bool__conflict7 mVar9;
  string network_spill;
  net_sockaddr laddr_spill;
  net_sockaddr raddr_spill;
  string mode_spill;
  char local_18;
  char local_10;
  undefined7 uStack_f;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((ulong)network_spill.len <= network_spill.len - 1U) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  mVar5.ipv6only = network.len._0_1_;
  if (network_spill.str[network_spill.len + -1] == 0x34) {
    mVar9.ipv6only = mVar5.ipv6only;
    mVar9.family = 0x34;
    return mVar9;
  }
  if (network_spill.str[network_spill.len + -1] == 0x36) {
    mVar8.ipv6only = mVar5.ipv6only;
    mVar8.family = 0x36;
    return mVar8;
  }
  if (mode_spill.len == 6) {
    if (*(int *)mode_spill.str == 0x7473696c) {
      if (*(short *)(mode_spill.str + 4) == 0x6e65) {
        if (laddr_spill.tab == (runtime_itab *)0x0) {
          cVar4 = '\x01';
        }
        else {
          local_18 = (char)laddr_spill.data;
          (**(code **)&laddr_spill.tab[1].hash)();
          cVar4 = local_10;
        }
      }
      else {
        cVar4 = '\0';
      }
    }
    else {
      cVar4 = '\0';
    }
  }
  else {
    cVar4 = '\0';
  }
  if (cVar4 != '\0') {
    bVar1 = net_supportsIPv4map();
    iVar2 = CONCAT71(extraout_var,bVar1);
    if (local_18 == '\0') {
      bVar1 = net_supportsIPv4();
      iVar2 = CONCAT71(extraout_var_00,bVar1);
    }
    mVar7.ipv6only = mVar5.ipv6only;
    mVar7.family = iVar2;
    return mVar7;
  }
  if (laddr_spill.tab == (runtime_itab *)0x0) {
    iVar2 = 1;
  }
  else {
    uVar3 = (*(code *)laddr_spill.tab[1]._type)();
    iVar2 = CONCAT71((int7)((ulong)uVar3 >> 8),CONCAT71(uStack_f,local_10) == 2);
  }
  if ((char)iVar2 != '\0') {
    if (raddr_spill.tab == (runtime_itab *)0x0) {
      iVar2 = 1;
    }
    else {
      uVar3 = (*(code *)raddr_spill.tab[1]._type)();
      iVar2 = CONCAT71((int7)((ulong)uVar3 >> 8),CONCAT71(uStack_f,local_10) == 2);
    }
    if ((char)iVar2 != '\0') {
      mVar5.family = iVar2;
      return mVar5;
    }
  }
  mVar6.ipv6only = mVar5.ipv6only;
  mVar6.family = iVar2;
  return mVar6;
}

