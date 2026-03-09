
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*UnixAddr).String(net.UnixAddr * a, string ~r0) */

string net___UnixAddr__String(net_UnixAddr *a)

{
  int unaff_RBX;
  string sVar1;
  string sVar2;
  net_UnixAddr *a_spill;
  
  if (a_spill != (net_UnixAddr *)0x0) {
    sVar1.len = unaff_RBX;
    sVar1.str = (uint8 *)(a_spill->Name).len;
    return sVar1;
  }
  sVar2.len = unaff_RBX;
  sVar2.str = &DAT_002889bc;
  return sVar2;
}

