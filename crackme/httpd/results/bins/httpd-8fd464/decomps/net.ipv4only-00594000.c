
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.ipv4only(net.IPAddr addr, bool ~r1) */

bool net_ipv4only(net_IPAddr addr)

{
  long lVar1;
  net_IPAddr addr_spill;
  
  if (addr_spill.IP.len != 4) {
    if (addr_spill.IP.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar1 = 0; lVar1 < 10; lVar1 = lVar1 + 1) {
        if (addr_spill.IP.array[lVar1] != 0) goto LAB_00594023;
      }
      if ((addr_spill.IP.array[10] == 0xff) && (addr_spill.IP.array[0xb] == 0xff)) {
        addr_spill.IP.array = addr_spill.IP.array + 0xc;
        goto LAB_0059401a;
      }
    }
LAB_00594023:
    addr_spill.IP.array = (uint8 *)0x0;
  }
LAB_0059401a:
  return SUB81(addr_spill.IP.array,0);
}

