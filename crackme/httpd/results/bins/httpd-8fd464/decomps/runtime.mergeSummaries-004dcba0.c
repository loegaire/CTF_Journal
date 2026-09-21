
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mergeSummaries([]runtime.pallocSum sums, uint
   logMaxPagesPerSum, runtime.pallocSum ~r2) */

runtime_pallocSum runtime_mergeSummaries(__runtime_pallocSum sums,uint logMaxPagesPerSum)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  __runtime_pallocSum sums_spill;
  uint logMaxPagesPerSum_spill;
  
                    /* Unresolved local var: uint start@[???]
                       Unresolved local var: uint max@[???]
                       Unresolved local var: uint end@[???] */
  if (sums_spill.len != 0) {
    uVar3 = *sums_spill.array;
    if ((long)uVar3 < 0) {
      uVar1 = 0x200000;
      uVar2 = 0x200000;
      uVar3 = 0x200000;
    }
    else {
      uVar1 = uVar3 & 0x1fffff;
      uVar2 = uVar3 >> 0x15 & 0x1fffff;
      uVar3 = uVar3 >> 0x2a & 0x1fffff;
    }
                    /* Unresolved local var: int i@[???] */
    for (lVar4 = 1; lVar4 < sums_spill.len; lVar4 = lVar4 + 1) {
      uVar7 = sums_spill.array[lVar4];
      if ((long)uVar7 < 0) {
        uVar5 = 0x200000;
        uVar6 = 0x200000;
        uVar7 = 0x200000;
      }
      else {
        uVar5 = uVar7 & 0x1fffff;
        uVar6 = uVar7 >> 0x15 & 0x1fffff;
        uVar7 = uVar7 >> 0x2a & 0x1fffff;
      }
                    /* Unresolved local var: uint si@[???]
                       Unresolved local var: uint mi@[???]
                       Unresolved local var: uint ei@[???] */
      if (uVar1 == (lVar4 << ((byte)logMaxPagesPerSum_spill & 0x3f) &
                   -(ulong)(logMaxPagesPerSum_spill < 0x40))) {
        uVar1 = uVar1 + uVar5;
      }
      uVar8 = 1L << ((byte)logMaxPagesPerSum_spill & 0x3f) &
              -(ulong)(logMaxPagesPerSum_spill < 0x40);
      if (uVar7 == uVar8) {
        uVar7 = uVar8 + uVar3;
      }
      if (uVar2 < uVar5 + uVar3) {
        uVar2 = uVar5 + uVar3;
      }
      if (uVar2 < uVar6) {
        uVar2 = uVar6;
      }
      uVar3 = uVar7;
    }
    return (runtime_pallocSum)sums_spill.array;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

