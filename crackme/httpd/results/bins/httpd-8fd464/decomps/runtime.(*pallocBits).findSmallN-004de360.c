
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pallocBits).findSmallN(runtime.pallocBits * b, uintptr
   npages, uint searchIdx, uint ~r2, uint ~r3) */

multireturn_uint_uint__conflict
runtime___pallocBits__findSmallN(runtime_pallocBits *b,uintptr npages,uint searchIdx)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  multireturn_uint_uint__conflict mVar9;
  multireturn_uint_uint__conflict mVar10;
  multireturn_uint_uint__conflict mVar11;
  runtime_pallocBits *b_spill;
  uintptr npages_spill;
  uint searchIdx_spill;
  
                    /* Unresolved local var: uint end@[???]
                       Unresolved local var: uint newSearchIdx@[???]
                       Unresolved local var: uint i@[???] */
  uVar2 = searchIdx_spill >> 6;
  lVar6 = -1;
  lVar5 = 0;
  do {
    if (7 < uVar2) {
      mVar10.~r3 = (uint)b_spill;
      mVar10.~r2 = uVar2;
      return mVar10;
    }
    uVar1 = (*b_spill)[uVar2];
    uVar8 = ~uVar1;
    if (uVar8 == 0) {
      lVar5 = 0;
    }
    else {
      if (lVar6 == -1) {
        lVar6 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> lVar6 & 1) == 0; lVar6 = lVar6 + 1) {
          }
        }
        lVar6 = uVar2 * 0x40 + lVar6;
      }
      lVar3 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
        }
      }
      if (uVar1 == 0) {
        lVar3 = 0x40;
      }
      mVar9.~r2 = lVar3 + lVar5;
      if (npages_spill <= mVar9.~r2) {
        mVar9.~r3 = (uint)b_spill;
        return mVar9;
      }
                    /* Unresolved local var: uint p@[???]
                       Unresolved local var: uint k@[???] */
      uVar4 = npages_spill - 1;
      uVar7 = 1;
      while (uVar4 != 0) {
        if (uVar4 <= uVar7) {
          uVar8 = uVar8 >> ((byte)uVar4 & 0x3f) & uVar8;
          break;
        }
        uVar8 = uVar8 & uVar8 >> ((byte)uVar7 & 0x3f);
        if (uVar8 == 0) {
          uVar4 = 0x40;
          goto LAB_004de416;
        }
        uVar4 = uVar4 - uVar7;
        uVar7 = uVar7 << 1;
      }
      uVar4 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      if (uVar8 == 0) {
        uVar4 = 0x40;
      }
LAB_004de416:
      if (uVar4 < 0x40) {
        mVar11.~r2 = uVar4 + uVar2 * 0x40;
        mVar11.~r3 = (uint)b_spill;
        return mVar11;
      }
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      if (uVar1 == 0) {
        lVar5 = -1;
      }
      lVar5 = -(lVar5 + -0x3f);
    }
    uVar2 = uVar2 + 1;
                    /* Unresolved local var: uint64 bi@[???]
                       Unresolved local var: uint start@[???]
                       Unresolved local var: uint j@[???] */
  } while( true );
}

