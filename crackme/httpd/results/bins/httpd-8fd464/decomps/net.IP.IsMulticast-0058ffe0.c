
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.IP.IsMulticast(net.IP ip, bool ~r0) */

bool net_IP_IsMulticast(net_IP ip)

{
  long lVar1;
  byte *pbVar2;
  bool bVar3;
  net_IP ip_spill;
  
                    /* Unresolved local var: net.IP ip4@[???] */
  if (ip_spill.len == 4) {
    bVar3 = true;
    pbVar2 = ip_spill.array;
  }
  else {
    if (ip_spill.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar1 = 0; lVar1 < 10; lVar1 = lVar1 + 1) {
        if (ip_spill.array[lVar1] != 0) goto LAB_0059005f;
      }
      if ((ip_spill.array[10] == 0xff) && (ip_spill.array[0xb] == 0xff)) {
        bVar3 = true;
        pbVar2 = ip_spill.array + 0xc;
        goto LAB_00590011;
      }
    }
LAB_0059005f:
    bVar3 = false;
    pbVar2 = (byte *)0x0;
  }
LAB_00590011:
  if (pbVar2 == (byte *)0x0) {
    if (ip_spill.len == 0x10) {
      bVar3 = *ip_spill.array == 0xff;
    }
    else {
      bVar3 = false;
    }
    return bVar3;
  }
  if (!bVar3) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  return (bool)(*pbVar2 & 0xf0);
}

