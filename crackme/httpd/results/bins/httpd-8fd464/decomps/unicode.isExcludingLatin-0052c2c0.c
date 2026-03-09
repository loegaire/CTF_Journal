
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void unicode.isExcludingLatin(unicode.RangeTable * rangeTab, int32 r,
   bool ~r2) */

bool unicode_isExcludingLatin(unicode_RangeTable *rangeTab,int32 r)

{
  ulong uVar1;
  unicode_Range16 *puVar2;
  ulong uVar3;
  long lVar4;
  unicode_Range32 *puVar5;
  uint32 r_00;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __unicode_Range16 ranges;
  __unicode_Range32 ranges_00;
  unicode_RangeTable *rangeTab_spill;
  int32 r_spill;
  undefined1 local_10;
  
                    /* Unresolved local var: []unicode.Range16 r16@[???]
                       Unresolved local var: []unicode.Range32 r32@[???] */
  while (r_00 = (uint32)in_RDI,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = (rangeTab_spill->R16).len;
  puVar2 = (rangeTab_spill->R16).array;
                    /* Unresolved local var: int off@[???] */
  uVar3 = rangeTab_spill->LatinOffset;
  if ((long)uVar3 < (long)uVar1) {
    if (uVar1 <= uVar1 - 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    r_00 = (uint32)puVar2[uVar1 - 1].Hi;
    if ((uint)r_spill <= (uint)puVar2[uVar1 - 1].Hi) {
      if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      ranges.cap = uVar1 - uVar3;
      ranges.len = (int)puVar2;
      ranges.array = (unicode_Range16 *)uVar3;
      unicode_is16(ranges,(short)(rangeTab_spill->R16).cap - (short)uVar3);
      return (bool)local_10;
    }
  }
  lVar4 = (rangeTab_spill->R32).len;
  puVar5 = (rangeTab_spill->R32).array;
  if ((0 < lVar4) && ((int)puVar5->Lo <= r_spill)) {
    ranges_00.len = (int)puVar2;
    ranges_00.array = (unicode_Range32 *)lVar4;
    ranges_00.cap = (int)puVar5;
    unicode_is32(ranges_00,r_00);
    return (bool)local_10;
  }
  return SUB81(lVar4,0);
}

