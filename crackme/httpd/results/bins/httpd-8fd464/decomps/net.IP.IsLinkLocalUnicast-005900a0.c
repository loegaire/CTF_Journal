
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.IP.IsLinkLocalUnicast(net.IP ip, bool ~r0) */

bool net_IP_IsLinkLocalUnicast(net_IP ip)

{
  long lVar1;
  uint8 *puVar2;
  ulong uVar3;
  bool bVar4;
  net_IP ip_spill;
  
                    /* Unresolved local var: net.IP ip4@[???] */
  if (ip_spill.len == 4) {
    uVar3 = 4;
    puVar2 = ip_spill.array;
  }
  else {
    if (ip_spill.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar1 = 0; lVar1 < 10; lVar1 = lVar1 + 1) {
        if (ip_spill.array[lVar1] != 0) goto LAB_00590153;
      }
      if ((ip_spill.array[10] == 0xff) && (ip_spill.array[0xb] == 0xff)) {
        uVar3 = 4;
        puVar2 = ip_spill.array + 0xc;
        goto LAB_005900e0;
      }
    }
LAB_00590153:
    uVar3 = 0;
    puVar2 = (uint8 *)0x0;
  }
LAB_005900e0:
  if (puVar2 == (uint8 *)0x0) {
    if ((ip_spill.len == 0x10) && (*ip_spill.array == 0xfe)) {
      bVar4 = (ip_spill.array[1] & 0xc0) == 0x80;
    }
    else {
      bVar4 = false;
    }
    return bVar4;
  }
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (*puVar2 == 0xa9) {
    if (uVar3 < 2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    bVar4 = puVar2[1] == 0xfe;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

