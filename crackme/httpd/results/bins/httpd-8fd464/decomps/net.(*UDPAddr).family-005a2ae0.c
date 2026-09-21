
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*UDPAddr).family(net.UDPAddr * a, int ~r0) */

int net___UDPAddr__family(net_UDPAddr *a)

{
  uint8 *puVar1;
  long lVar2;
  net_UDPAddr *a_spill;
  
  if (a_spill == (net_UDPAddr *)0x0) {
    return 0;
  }
  puVar1 = (a_spill->IP).array;
  lVar2 = (a_spill->IP).len;
  if (lVar2 < 5) {
    return lVar2;
  }
  if (lVar2 == 0x10) {
                    /* Unresolved local var: int i@[???] */
    for (lVar2 = 0; lVar2 < 10; lVar2 = lVar2 + 1) {
      if (puVar1[lVar2] != 0) goto LAB_005a2b0c;
    }
    if ((puVar1[10] == 0xff) && (puVar1[0xb] == 0xff)) {
      puVar1 = puVar1 + 0xc;
      goto LAB_005a2b0e;
    }
  }
LAB_005a2b0c:
  puVar1 = (uint8 *)0x0;
LAB_005a2b0e:
  if (puVar1 != (uint8 *)0x0) {
    return (int)puVar1;
  }
  return 0;
}

