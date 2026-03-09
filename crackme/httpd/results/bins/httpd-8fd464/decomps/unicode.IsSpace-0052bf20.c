
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void unicode.IsSpace(int32 r, bool ~r1) */

bool unicode_IsSpace(int32 r)

{
  int32 unaff_EBX;
  long in_FS_OFFSET;
  int32 r_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (0xff < (uint)r_spill) {
    unicode_isExcludingLatin((unicode_RangeTable *)(ulong)(uint)r_spill,unaff_EBX);
    return (bool)local_10;
  }
  if (r_spill < 0x21) {
    if ((r_spill - 9U < 5) || (r_spill == 0x20)) {
      return SUB41(r_spill,0);
    }
  }
  else {
    if (r_spill == 0x85) {
      return true;
    }
    if (r_spill == 0xa0) {
      return true;
    }
  }
  return SUB41(r_spill,0);
}

