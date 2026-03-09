
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*unixDirent).Name(os.unixDirent * d, string ~r0) */

string os___unixDirent__Name(os_unixDirent *d)

{
  int unaff_RBX;
  string sVar1;
  os_unixDirent *d_spill;
  
  sVar1.len = unaff_RBX;
  sVar1.str = (uint8 *)(d_spill->name).len;
  return sVar1;
}

