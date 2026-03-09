
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*addrRanges).findSucc(runtime.addrRanges * a, uintptr
   addr, int ~r1) */

int runtime___addrRanges__findSucc(runtime_addrRanges *a,uintptr addr)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  runtime_addrRange *prVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  runtime_addrRanges *a_spill;
  runtime_offAddr base;
  
                    /* Unresolved local var: int bot@[???]
                       Unresolved local var: int top@[???] */
  uVar3 = (a_spill->ranges).len;
  prVar4 = (a_spill->ranges).array;
  uVar6 = 0;
  uVar1 = uVar3;
  while( true ) {
    uVar5 = uVar1;
    if ((long)(uVar5 - uVar6) < 9) {
      while( true ) {
        if ((long)uVar5 <= (long)uVar6) {
          return uVar3;
        }
        if (uVar3 <= uVar6) break;
        if (base.a + 0x800000000000 < prVar4[uVar6].base.a + 0x800000000000) {
          return uVar3;
        }
                    /* Unresolved local var: int i@[???] */
        uVar6 = uVar6 + 1;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
                    /* Unresolved local var: int i@[???] */
    lVar7 = (long)(uVar5 - uVar6) / 2;
    uVar1 = lVar7 + uVar6;
    if (uVar3 <= uVar1) break;
    uVar8 = prVar4[uVar1].base.a + 0x800000000000;
    uVar2 = base.a + 0x800000000000;
    if ((uVar8 <= uVar2) && (uVar2 < prVar4[uVar1].limit.a + 0x800000000000)) {
      return lVar7 + uVar6 + 1;
    }
    if (uVar8 <= uVar2) {
      uVar6 = lVar7 + uVar6 + 1;
      uVar1 = uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

