
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.ParseIP(string s, net.IP ~r1) */

net_IP net_ParseIP(string s)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  net_IP nVar4;
  net_IP nVar5;
  net_IP nVar6;
  string s_spill;
  undefined8 local_20;
  int local_18;
  
  uVar3 = s.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???] */
  lVar2 = 0;
  while( true ) {
    if (s_spill.len <= lVar2) {
      nVar4.len = uVar3;
      nVar4.array = (uint8 *)s_spill.len;
      nVar4.cap = (int)s_spill.str;
      return nVar4;
    }
    bVar1 = s_spill.str[lVar2];
    uVar3 = (ulong)bVar1;
    if (bVar1 == 0x2e) break;
    if (bVar1 == 0x3a) {
      s_00.len._0_1_ = 0x3a;
      s_00.str = (uint8 *)s_spill.len;
      s_00.len._1_7_ = 0;
      nVar4 = net_parseIPv6(s_00);
      nVar5.len = nVar4.len;
      nVar5.array = (uint8 *)local_20;
      nVar5.cap = local_18;
      return nVar5;
    }
    lVar2 = lVar2 + 1;
  }
  s_01.len._0_1_ = 0x2e;
  s_01.str = (uint8 *)s_spill.len;
  s_01.len._1_7_ = 0;
  nVar4 = net_parseIPv4(s_01);
  nVar6.len = nVar4.len;
  nVar6.array = (uint8 *)local_20;
  nVar6.cap = local_18;
  return nVar6;
}

