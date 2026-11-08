
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).Name(os.File * f, string ~r0) */

string os___File__Name(os_File *f)

{
  int unaff_RBX;
  string sVar1;
  os_File *f_spill;
  
  sVar1.len = unaff_RBX;
  sVar1.str = (f_spill->file->name).str;
  return sVar1;
}

