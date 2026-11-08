
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void unicode.ToLower(int32 r, int32 ~r1) */

int32 unicode_ToLower(int32 r)

{
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __unicode_CaseRange caseRange;
  int32 r_spill;
  undefined4 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (r_spill < 0x80) {
    if (r_spill - 0x41U < 0x1a) {
      r_spill = r_spill + 0x20;
    }
    return r_spill;
  }
  caseRange.len = in_RDI;
  caseRange.array = unicode_CaseRanges.array;
  caseRange.cap = in_RSI;
  unicode_to((ulong)(uint)r_spill,(int32)unicode_CaseRanges.cap,caseRange);
  return local_10;
}

