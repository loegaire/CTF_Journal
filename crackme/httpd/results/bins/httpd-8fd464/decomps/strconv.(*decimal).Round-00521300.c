
/* WARNING: Unknown calling convention */

void strconv___decimal__Round(strconv_decimal *a,int nd)

{
  long lVar1;
  bool bVar2;
  strconv_decimal *a_spill;
  int nd_spill;
  
  if ((nd_spill < 0) || (a_spill->nd <= nd_spill)) {
    return;
  }
  if (799 < (ulong)nd_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if ((a_spill->d[nd_spill] == 0x35) && (a_spill->nd == nd_spill + 1)) {
    if (a_spill->trunc != false) goto LAB_005213e0;
    if (nd_spill < 1) {
      bVar2 = false;
    }
    else {
      bVar2 = (bool)(a_spill->d[nd_spill + -1] - 0x30 & 1);
    }
  }
  else {
    bVar2 = 0x34 < a_spill->d[nd_spill];
  }
  if (bVar2 == false) {
    a_spill->nd = nd_spill;
    while (lVar1 = a_spill->nd, 0 < lVar1) {
      if (799 < lVar1 - 1U) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (a_spill->d[lVar1 + -1] != 0x30) break;
      a_spill->nd = lVar1 - 1U;
    }
    if (lVar1 != 0) {
      return;
    }
    a_spill->dp = 0;
    return;
  }
LAB_005213e0:
  do {
    lVar1 = nd_spill;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 c@[???] */
    nd_spill = lVar1 + -1;
    if (nd_spill < 0) {
      a_spill->d[0] = 0x31;
      a_spill->nd = 1;
      a_spill->dp = a_spill->dp + 1;
      return;
    }
  } while (0x38 < a_spill->d[nd_spill]);
  a_spill->d[nd_spill] = a_spill->d[nd_spill] + 1;
  a_spill->nd = lVar1;
  return;
}

