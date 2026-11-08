
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pallocBits).findLargeN(runtime.pallocBits * b, uintptr
   npages, uint searchIdx, uint ~r2, uint ~r3) */

multireturn_uint_uint__conflict
runtime___pallocBits__findLargeN(runtime_pallocBits *b,uintptr npages,uint searchIdx)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  multireturn_uint_uint__conflict mVar7;
  multireturn_uint_uint__conflict mVar8;
  multireturn_uint_uint__conflict mVar9;
  runtime_pallocBits *b_spill;
  uintptr npages_spill;
  uint searchIdx_spill;
  
                    /* Unresolved local var: uint start@[???]
                       Unresolved local var: uint size@[???]
                       Unresolved local var: uint newSearchIdx@[???]
                       Unresolved local var: uint i@[???] */
  uVar2 = searchIdx_spill >> 6;
  uVar4 = 0;
  lVar5 = -1;
  do {
    if (7 < uVar2) {
      if (npages_spill <= uVar4) {
        mVar9.~r3 = uVar4;
        mVar9.~r2 = uVar2;
        return mVar9;
      }
      mVar8.~r3 = uVar4;
      mVar8.~r2 = uVar2;
      return mVar8;
    }
                    /* Unresolved local var: uint64 x@[???]
                       Unresolved local var: uint s@[???] */
    uVar1 = (*b_spill)[uVar2];
    if (uVar1 == 0xffffffffffffffff) {
      uVar4 = 0;
    }
    else {
      if (lVar5 == -1) {
        uVar6 = ~uVar1;
        lVar5 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
          }
        }
        if (uVar6 == 0) {
          lVar5 = 0x40;
        }
        lVar5 = uVar2 * 0x40 + lVar5;
      }
      if (uVar4 == 0) {
        lVar3 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        if (uVar1 == 0) {
          lVar3 = -1;
        }
        uVar4 = -(lVar3 + -0x3f);
      }
      else {
        uVar6 = 0;
        if (uVar1 != 0) {
          for (; (uVar1 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        if (uVar1 == 0) {
          uVar6 = 0x40;
        }
        if (npages_spill <= uVar6 + uVar4) {
          mVar7.~r3 = uVar4;
          mVar7.~r2 = uVar6;
          return mVar7;
        }
        if (uVar6 < 0x40) {
          lVar3 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          if (uVar1 == 0) {
            lVar3 = -1;
          }
          uVar4 = -(lVar3 + -0x3f);
        }
        else {
          uVar4 = uVar4 + 0x40;
        }
      }
    }
    uVar2 = uVar2 + 1;
  } while( true );
}

