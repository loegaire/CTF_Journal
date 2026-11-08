
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.parseIPZone(string s, net.IP ~r1, string ~r2) */

multireturn_net_IP_string_ net_parseIPZone(string s)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  net_IP nVar4;
  multireturn_net_IP_string_ mVar5;
  multireturn_net_IP_string_ mVar6;
  multireturn_net_IP_string_ mVar7;
  string s_spill;
  undefined8 local_30;
  int local_28;
  undefined8 local_20;
  int local_18;
  int local_10;
  
  uVar3 = s.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???] */
  lVar2 = 0;
  while( true ) {
    if (s_spill.len <= lVar2) {
      mVar5.~r1.len = uVar3;
      mVar5.~r1.array = (uint8 *)s_spill.len;
      mVar5.~r1.cap = (int)s_spill.str;
      mVar5.~r2.len = in_RSI;
      mVar5.~r2.str = in_RDI;
      return mVar5;
    }
    bVar1 = s_spill.str[lVar2];
    uVar3 = (ulong)bVar1;
    if (bVar1 == 0x2e) break;
    if (bVar1 == 0x3a) {
      s_00.len._0_1_ = 0x3a;
      s_00.str = (uint8 *)s_spill.len;
      s_00.len._1_7_ = 0;
      mVar5 = net_parseIPv6Zone(s_00);
      mVar6.~r2.str = mVar5.~r2.str;
      mVar6.~r1.len = local_20;
      mVar6.~r1.array = (uint8 *)local_30;
      mVar6.~r1.cap = local_18;
      mVar6.~r2.len = local_10;
      return mVar6;
    }
    lVar2 = lVar2 + 1;
  }
  s_01.len._0_1_ = 0x2e;
  s_01.str = (uint8 *)s_spill.len;
  s_01.len._1_7_ = 0;
  nVar4 = net_parseIPv4(s_01);
  mVar7.~r1.len = nVar4.len;
  mVar7.~r1.array = (uint8 *)local_30;
  mVar7.~r1.cap = local_28;
  mVar7.~r2.len = in_RSI;
  mVar7.~r2.str = in_RDI;
  return mVar7;
}

