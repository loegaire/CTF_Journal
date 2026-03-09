
/* WARNING: Removing unreachable block (ram,0x0058dde9) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.parseLiteralIP(string addr, string ~r1) */

string net_parseLiteralIP(string addr)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  string s;
  string sVar2;
  string sVar3;
  net_IP nVar4;
  string addr_spill;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  sVar2.len = addr.len;
                    /* Unresolved local var: net.IP ip@[???]
                       Unresolved local var: string zone@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar2.str = addr_spill.str;
  nVar4 = net_parseIPv4(sVar2);
  s.len = nVar4.len;
  if (local_50 == 0) {
    s.str = (uint8 *)addr_spill.len;
    net_parseIPv6Zone(s);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_38;
    return (string)(auVar1 << 0x40);
  }
  nVar4.len = 0;
  nVar4.array = (uint8 *)local_50;
  nVar4.cap = (int)local_48;
  sVar2 = net_IP_String(nVar4);
  sVar3.len = sVar2.len;
  sVar3.str = local_48;
  return sVar3;
}

