
/* WARNING: Removing unreachable block (ram,0x0057f4c4) */
/* WARNING: Removing unreachable block (ram,0x0057f4ca) */
/* WARNING: Removing unreachable block (ram,0x0057f537) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.classifyScope(net.IP ip, net.scope ~r1) */

net_scope net_classifyScope(net_IP ip)

{
  bool bVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  net_IP ip_00;
  net_IP ip_01;
  net_IP ip_02;
  net_IP ip_spill;
  char local_18;
  
  ip_00.len = (uint8 *)ip.len;
                    /* Unresolved local var: bool ipv6@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  ip_00.array = ip_spill.array;
  ip_00.cap = ip_spill.len;
  bVar1 = net_IP_IsLoopback(ip_00);
  if (local_18 != '\0') {
    return bVar1;
  }
  ip_01.len = (int)ip_00.len;
  ip_01.array = ip_spill.array;
  ip_01.cap = ip_spill.len;
  net_IP_IsLinkLocalUnicast(ip_01);
  if (ip_spill.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
    for (lVar2 = 0; lVar2 < 10; lVar2 = lVar2 + 1) {
      if (ip_spill.array[lVar2] != 0) goto LAB_0057f56a;
    }
    if ((ip_spill.array[10] == 0xff) && (ip_spill.array[0xb] == 0xff)) {
      ip_00.len = ip_spill.array + 0xc;
    }
    else {
LAB_0057f56a:
      ip_00.len = (uint8 *)0x0;
    }
    bVar3 = ip_00.len == (uint8 *)0x0;
  }
  else {
    bVar3 = false;
  }
  if ((bool)bVar3 != false) {
    ip_02.len = (int)ip_00.len;
    ip_02.array = ip_spill.array;
    ip_02.cap = ip_spill.len;
    net_IP_IsMulticast(ip_02);
    if (ip_spill.len == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (*ip_spill.array == 0xfe) {
      if ((ulong)ip_spill.len < 2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      bVar3 = ip_spill.array[1] & 0xc0;
      if (bVar3 == 0xc0) {
        return 0xc0;
      }
    }
  }
  return bVar3;
}

