
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*IPAddr).family(net.IPAddr * a, int ~r0) */

int net___IPAddr__family(net_IPAddr *a)

{
  uint8 *puVar1;
  long lVar2;
  net_IPAddr *a_spill;
  
  if (a_spill == (net_IPAddr *)0x0) {
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
      if (puVar1[lVar2] != 0) goto LAB_0059320c;
    }
    if ((puVar1[10] == 0xff) && (puVar1[0xb] == 0xff)) {
      puVar1 = puVar1 + 0xc;
      goto LAB_0059320e;
    }
  }
LAB_0059320c:
  puVar1 = (uint8 *)0x0;
LAB_0059320e:
  if (puVar1 != (uint8 *)0x0) {
    return (int)puVar1;
  }
  return 0;
}

