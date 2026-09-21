
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*UnixAddr).isWildcard(net.UnixAddr * a, bool ~r0) */

bool net___UnixAddr__isWildcard(net_UnixAddr *a)

{
  bool bVar1;
  net_UnixAddr *a_spill;
  
  if (a_spill == (net_UnixAddr *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = (a_spill->Name).len == 0;
  }
  return bVar1;
}

