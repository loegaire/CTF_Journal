
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pallocBits).summarize(runtime.pallocBits * b,
   runtime.pallocSum ~r0) */

runtime_pallocSum runtime___pallocBits__summarize(runtime_pallocBits *b)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  runtime_pallocBits *b_spill;
  
                    /* Unresolved local var: uint start@[???]
                       Unresolved local var: uint max@[???]
                       Unresolved local var: uint cur@[???]
                       Unresolved local var: int i@[???] */
  uVar4 = 0xffffffffffffffff;
  uVar5 = 0;
  uVar7 = 0;
  for (lVar2 = 0; lVar2 < 8; lVar2 = lVar2 + 1) {
                    /* Unresolved local var: uint64 x@[???]
                       Unresolved local var: uint t@[???]
                       Unresolved local var: uint l@[???] */
    uVar3 = (*b_spill)[lVar2];
    if (uVar3 == 0) {
      uVar5 = uVar5 + 0x40;
    }
    else {
      lVar1 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
        }
      }
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar5 = lVar1 + uVar5;
      if (uVar4 == 0xffffffffffffffff) {
        uVar4 = uVar5;
      }
      if (uVar7 < uVar5) {
        uVar7 = uVar5;
      }
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      if (uVar3 == 0) {
        lVar8 = -1;
      }
      uVar5 = -(lVar8 + -0x3f);
    }
  }
  if (uVar4 == 0xffffffffffffffff) {
    return 0x8000040000200;
  }
  if (uVar7 < uVar5) {
    uVar7 = uVar5;
  }
  if (0x3d < uVar7) {
    return (runtime_pallocSum)b_spill;
  }
  lVar2 = 0;
  do {
    if (7 < lVar2) {
      return (runtime_pallocSum)b_spill;
    }
                    /* Unresolved local var: uint64 x@[???]
                       Unresolved local var: uint p@[???]
                       Unresolved local var: uint k@[???] */
    uVar4 = (*b_spill)[lVar2];
    lVar1 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
      }
    }
    bVar6 = (byte)lVar1;
    if (uVar4 == 0) {
      bVar6 = 0;
    }
    uVar4 = uVar4 >> (bVar6 & 0x3f);
    if ((uVar4 + 1 & uVar4) != 0) {
      uVar3 = 1;
      uVar5 = uVar7;
                    /* Unresolved local var: uint j@[???] */
LAB_004de20e:
      do {
        if (uVar5 != 0) {
          if (uVar3 < uVar5) {
            uVar4 = uVar4 | uVar4 >> ((byte)uVar3 & 0x3f);
            if ((uVar4 & uVar4 + 1) == 0) break;
            uVar5 = uVar5 - uVar3;
            uVar3 = uVar3 << 1;
            goto LAB_004de20e;
          }
          uVar4 = uVar4 | uVar4 >> ((byte)uVar5 & 0x3f);
          if ((uVar4 & uVar4 + 1) == 0) break;
        }
        uVar5 = ~uVar4;
        lVar1 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
          }
        }
        bVar6 = (byte)lVar1;
        if (uVar5 == 0) {
          bVar6 = 0;
        }
        uVar4 = uVar4 >> (bVar6 & 0x3f);
        uVar5 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        if (uVar4 == 0) {
          uVar5 = 0x40;
        }
        uVar4 = uVar4 >> ((byte)uVar5 & 0x3f);
        uVar7 = uVar7 + uVar5;
      } while ((uVar4 + 1 & uVar4) != 0);
    }
                    /* Unresolved local var: int i@[???] */
    lVar2 = lVar2 + 1;
  } while( true );
}

