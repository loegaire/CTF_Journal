
/* WARNING: Unknown calling convention */

void strconv_leftShift(strconv_decimal *a,uint k)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  strconv_decimal *a_spill;
  uint k_spill;
  
                    /* Unresolved local var: int delta@[???]
                       Unresolved local var: int r@[???]
                       Unresolved local var: int w@[???]
                       Unresolved local var: uint n@[???] */
  if ((ulong)strconv_leftcheats.len <= k_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  lVar8 = strconv_leftcheats.array[k_spill].delta;
  uVar6 = a_spill->nd;
  if (800 < uVar6) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAlen();
  }
                    /* Unresolved local var: int i@[???] */
  for (lVar5 = 0; lVar5 < strconv_leftcheats.array[k_spill].cutoff.len; lVar5 = lVar5 + 1) {
    if ((long)uVar6 <= lVar5) {
LAB_0052107b:
      lVar8 = lVar8 + -1;
      break;
    }
    bVar1 = strconv_leftcheats.array[k_spill].cutoff.str[lVar5];
    if (bVar1 != a_spill->d[lVar5]) {
      if (a_spill->d[lVar5] < bVar1) goto LAB_0052107b;
      break;
    }
  }
  uVar3 = 0;
  uVar4 = lVar8 + uVar6;
  while (uVar6 = uVar6 - 1, -1 < (long)uVar6) {
    uVar7 = uVar3 + ((ulong)a_spill->d[uVar6] - 0x30 << ((byte)k_spill & 0x3f) &
                    -(ulong)(k_spill < 0x40));
    uVar3 = uVar7 / 10;
    uVar7 = uVar7 % 10;
    uVar2 = uVar4 - 1;
    if ((long)uVar2 < 800) {
      if (799 < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      a_spill->d[uVar4 - 1] = (char)uVar7 + 0x30;
      uVar4 = uVar2;
    }
    else {
      uVar4 = uVar2;
      if (uVar7 != 0) {
        a_spill->trunc = true;
      }
    }
  }
  while (uVar3 != 0) {
    uVar7 = uVar3 / 10;
    uVar2 = uVar3 % 10;
    uVar6 = uVar4 - 1;
    uVar3 = uVar7;
    if ((long)uVar6 < 800) {
      if (799 < uVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      a_spill->d[uVar4 - 1] = (char)uVar2 + 0x30;
      uVar4 = uVar6;
    }
    else {
      uVar4 = uVar6;
      if (uVar2 != 0) {
        a_spill->trunc = true;
      }
    }
  }
  lVar5 = a_spill->nd + lVar8;
  a_spill->nd = lVar5;
  if (799 < lVar5) {
    a_spill->nd = 800;
  }
  a_spill->dp = a_spill->dp + lVar8;
  while (lVar8 = a_spill->nd, 0 < lVar8) {
    if (799 < lVar8 - 1U) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (a_spill->d[lVar8 + -1] != 0x30) break;
    a_spill->nd = lVar8 - 1U;
  }
  if (lVar8 == 0) {
    a_spill->dp = 0;
  }
  return;
}

