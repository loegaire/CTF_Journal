
/* WARNING: Unknown calling convention */

void strconv_rightShift(strconv_decimal *a,uint k)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  strconv_decimal *a_spill;
  uint k_spill;
  
                    /* Unresolved local var: int r@[???]
                       Unresolved local var: int w@[???]
                       Unresolved local var: uint n@[???]
                       Unresolved local var: uint mask@[???] */
  uVar7 = 0;
  uVar6 = 0;
  while( true ) {
    uVar3 = -(ulong)(k_spill < 0x40);
    bVar5 = (byte)k_spill;
    if ((uVar3 & uVar7 >> (bVar5 & 0x3f)) != 0) goto LAB_00520e83;
    if (a_spill->nd <= (long)uVar6) break;
    if (799 < uVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar7 = ((ulong)a_spill->d[uVar6] + uVar7 * 10) - 0x30;
    uVar6 = uVar6 + 1;
  }
  if (uVar7 == 0) {
    a_spill->nd = 0;
    return;
  }
  for (; (uVar3 & uVar7 >> (bVar5 & 0x3f)) == 0; uVar7 = uVar7 * 10) {
    uVar6 = uVar6 + 1;
  }
LAB_00520e83:
  a_spill->dp = (a_spill->dp - uVar6) + 1;
  uVar8 = (1L << (bVar5 & 0x3f) & uVar3) - 1;
  uVar4 = 0;
  for (; (long)uVar6 < a_spill->nd; uVar6 = uVar6 + 1) {
    if (799 < uVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    bVar1 = a_spill->d[uVar6];
    if (799 < uVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
                    /* Unresolved local var: uint dig@[???] */
    a_spill->d[uVar4] = ((byte)(uVar7 >> (bVar5 & 0x3f)) & (byte)uVar3) + 0x30;
    uVar4 = uVar4 + 1;
    uVar7 = ((ulong)bVar1 + (uVar7 & uVar8) * 10) - 0x30;
  }
  for (; uVar7 != 0; uVar7 = (uVar7 & uVar8) * 10) {
    uVar6 = uVar7 >> (bVar5 & 0x3f) & uVar3;
    if ((long)uVar4 < 800) {
      if (799 < uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      a_spill->d[uVar4] = (char)uVar6 + 0x30;
      uVar4 = uVar4 + 1;
    }
    else if (uVar6 != 0) {
      a_spill->trunc = true;
    }
                    /* Unresolved local var: uint dig@[???] */
  }
  a_spill->nd = uVar4;
  while (lVar2 = a_spill->nd, 0 < lVar2) {
    if (799 < lVar2 - 1U) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (a_spill->d[lVar2 + -1] != 0x30) break;
    a_spill->nd = lVar2 - 1U;
  }
  if (lVar2 == 0) {
    a_spill->dp = 0;
  }
  return;
}

