
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void unicode.is32([]unicode.Range32 ranges, uint32 r, bool ~r2) */

bool unicode_is32(__unicode_Range32 ranges,uint32 r)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  __unicode_Range32 ranges_spill;
  uint32 r_spill;
  
                    /* Unresolved local var: int lo@[???]
                       Unresolved local var: int hi@[???] */
  bVar4 = SUB41(r_spill,0);
  if (ranges_spill.len < 0x13) {
                    /* Unresolved local var: int i@[???] */
    lVar6 = 0;
    while( true ) {
      if (ranges_spill.len <= lVar6) {
        return bVar4;
      }
      if (r_spill < ranges_spill.array[lVar6].Lo) break;
      if (r_spill <= ranges_spill.array[lVar6].Hi) {
        uVar3 = ranges_spill.array[lVar6].Stride;
        if (uVar3 != 1) {
          if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            runtime_panicdivide();
          }
          r_spill = (r_spill - ranges_spill.array[lVar6].Lo) / uVar3;
        }
        return SUB41(r_spill,0);
      }
      lVar6 = lVar6 + 1;
    }
    return bVar4;
  }
  lVar6 = 0;
  uVar1 = ranges_spill.len;
  while( true ) {
    uVar5 = uVar1;
    if ((long)uVar5 <= lVar6) {
      return bVar4;
    }
                    /* Unresolved local var: int m@[???] */
    lVar7 = (long)(uVar5 - lVar6) / 2;
    uVar1 = lVar7 + lVar6;
    if ((ulong)ranges_spill.len <= uVar1) break;
    uVar3 = ranges_spill.array[uVar1].Stride;
    uVar2 = ranges_spill.array[uVar1].Lo;
    if (uVar2 <= r_spill) {
      if (r_spill <= ranges_spill.array[uVar1].Hi) {
        if (uVar3 != 1) {
          if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            runtime_panicdivide();
          }
          r_spill = (r_spill - uVar2) / uVar3;
        }
        return SUB41(r_spill,0);
      }
      if (uVar2 <= r_spill) {
        lVar6 = lVar7 + lVar6 + 1;
        uVar1 = uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

