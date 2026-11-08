
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.ipv6only(net.IPAddr addr, bool ~r1) */

bool net_ipv6only(net_IPAddr addr)

{
  uint8 *puVar1;
  long lVar2;
  bool bVar3;
  net_IPAddr addr_spill;
  
  if (addr_spill.IP.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
    for (lVar2 = 0; lVar2 < 10; lVar2 = lVar2 + 1) {
      if (addr_spill.IP.array[lVar2] != 0) goto LAB_005940a2;
    }
    if ((addr_spill.IP.array[10] == 0xff) && (addr_spill.IP.array[0xb] == 0xff)) {
      puVar1 = addr_spill.IP.array + 0xc;
    }
    else {
LAB_005940a2:
      puVar1 = (uint8 *)0x0;
    }
    bVar3 = puVar1 == (uint8 *)0x0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

