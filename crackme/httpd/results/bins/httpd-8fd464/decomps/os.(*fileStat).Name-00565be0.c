
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*fileStat).Name(os.fileStat * fs, string ~r0) */

string os___fileStat__Name(os_fileStat *fs)

{
  int unaff_RBX;
  string sVar1;
  os_fileStat *fs_spill;
  
  sVar1.len = unaff_RBX;
  sVar1.str = (uint8 *)(fs_spill->name).len;
  return sVar1;
}

