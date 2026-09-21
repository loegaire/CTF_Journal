
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void unicode.is16([]unicode.Range16 ranges, uint16 r, bool ~r2) */

bool unicode_is16(__unicode_Range16 ranges,uint16 r)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  __unicode_Range16 ranges_spill;
  uint16 r_spill;
  
                    /* Unresolved local var: int lo@[???]
                       Unresolved local var: int hi@[???] */
  uVar4 = (undefined1)r_spill;
  if ((0x12 < ranges_spill.len) && (0xff < r_spill)) {
    lVar7 = 0;
    uVar1 = ranges_spill.len;
    while( true ) {
      uVar6 = uVar1;
      if ((long)uVar6 <= lVar7) {
        return (bool)uVar4;
      }
                    /* Unresolved local var: int m@[???] */
      lVar8 = (long)(uVar6 - lVar7) / 2;
      uVar1 = lVar8 + lVar7;
      if ((ulong)ranges_spill.len <= uVar1) break;
      uVar3 = ranges_spill.array[uVar1].Lo;
      if (uVar3 <= r_spill) {
        if (r_spill <= ranges_spill.array[uVar1].Hi) {
          uVar2 = ranges_spill.array[uVar1].Stride;
          if (uVar2 != 1) {
            if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              runtime_panicdivide();
            }
            uVar4 = (undefined1)(((uint)r_spill - (uint)uVar3 & 0xffff) / (uint)uVar2);
          }
          return (bool)uVar4;
        }
        if (uVar3 <= r_spill) {
          lVar7 = lVar8 + lVar7 + 1;
          uVar1 = uVar6;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  uVar5 = (uint)r_spill;
  lVar7 = 0;
  while( true ) {
    if (ranges_spill.len <= lVar7) {
      return (bool)uVar4;
    }
    if (r_spill < ranges_spill.array[lVar7].Lo) break;
    if (r_spill <= ranges_spill.array[lVar7].Hi) {
      uVar3 = ranges_spill.array[lVar7].Stride;
      if (uVar3 != 1) {
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          runtime_panicdivide();
        }
        uVar5 = (uVar5 - ranges_spill.array[lVar7].Lo & 0xffff) / (uint)uVar3;
      }
      return SUB41(uVar5,0);
    }
    lVar7 = lVar7 + 1;
  }
  return (bool)uVar4;
}

