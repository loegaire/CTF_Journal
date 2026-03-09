
/* WARNING: Unknown calling convention */

void strconv_roundShortest(strconv_decimal *d,uint64 mant,int exp,strconv_floatInfo *flt)

{
  ulong uVar1;
  bool bVar2;
  strconv_decimal *a;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  uint64 uVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  long in_FS_OFFSET;
  bool bVar13;
  strconv_decimal *d_spill;
  uint64 mant_spill;
  int explo;
  strconv_floatInfo *flt_spill;
  long local_680;
  strconv_decimal local_678;
  byte local_340 [800];
  long local_20;
  long local_18;
  
                    /* Unresolved local var: int minexp@[???]
                       Unresolved local var: strconv.decimal * upper@[???]
                       Unresolved local var: uint64 mantlo@[???]
                       Unresolved local var: strconv.decimal * lower@[???]
                       Unresolved local var: uint8 upperdelta@[???] */
  while (local_678.d + 0x60 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (mant_spill == 0) {
    d_spill->nd = 0;
    return;
  }
  lVar6 = flt_spill->bias + 1;
  uVar7 = explo;
  if ((lVar6 < explo) &&
     (lVar9 = d_spill->dp - d_spill->nd, uVar7 = (explo - flt_spill->mantbits) * 100,
     uVar7 + lVar9 * -0x14c == 0 || (long)uVar7 < lVar9 * 0x14c)) {
    return;
  }
  local_340[0] = 0;
  local_340[1] = 0;
  local_340[2] = 0;
  local_340[3] = 0;
  local_340[4] = 0;
  local_340[5] = 0;
  local_340[6] = 0;
  local_340[7] = 0;
  a = (strconv_decimal *)FUN_0051a089(&local_678.neg);
  strconv___decimal__Assign(a,uVar7);
  strconv___decimal__Shift((strconv_decimal *)flt_spill,uVar7);
  uVar7 = mant_spill;
  if ((mant_spill <=
       (1L << ((byte)flt_spill->mantbits & 0x3f) & -(ulong)(flt_spill->mantbits < 0x40))) &&
     (explo != lVar6)) {
    explo = explo + -1;
    uVar7 = mant_spill * 2;
  }
  local_678.d[0] = 0;
  local_678.d[1] = 0;
  local_678.d[2] = 0;
  local_678.d[3] = 0;
  local_678.d[4] = 0;
  local_678.d[5] = 0;
  local_678.d[6] = 0;
  local_678.d[7] = 0;
  local_680 = explo;
  FUN_0051a089(&local_680);
  strconv___decimal__Assign(&local_678,uVar7 - 1);
  strconv___decimal__Shift((strconv_decimal *)((local_680 - flt_spill->mantbits) + -1),uVar7 - 1);
                    /* Unresolved local var: int ui@[???] */
  uVar3 = 0;
  bVar5 = 0;
  do {
                    /* Unresolved local var: int mi@[???]
                       Unresolved local var: int li@[???]
                       Unresolved local var: uint8 l@[???]
                       Unresolved local var: uint8 m@[???]
                       Unresolved local var: uint8 u@[???]
                       Unresolved local var: bool okdown@[???]
                       Unresolved local var: bool okup@[???] */
    lVar4 = uVar3 - local_18;
    lVar6 = d_spill->dp;
    uVar8 = lVar4 + lVar6;
    lVar9 = d_spill->nd;
    if (lVar9 <= (long)uVar8) {
      return;
    }
    uVar1 = local_678.dp + lVar4;
    if (((long)uVar1 < 0) || (local_678.nd <= (long)uVar1)) {
      bVar10 = 0x30;
    }
    else {
      if (799 < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      bVar10 = *(byte *)((long)&local_678 + uVar1);
    }
    if ((long)uVar8 < 0) {
      bVar11 = 0x30;
    }
    else {
      if (799 < uVar8) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      bVar11 = *(byte *)(uVar8 + (long)d_spill);
    }
    if ((long)uVar3 < local_20) {
      if (799 < uVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      bVar12 = local_340[uVar3];
    }
    else {
      bVar12 = 0x30;
    }
    if (bVar10 == bVar11) {
      if ((mant_spill & 1) == 0) {
        bVar13 = local_678.nd == local_678.dp + lVar4 + 1;
      }
      else {
        bVar13 = false;
      }
    }
    else {
      bVar13 = true;
    }
    if (bVar5 == 0) {
      if ((byte)(bVar11 + 1) < bVar12) {
        bVar5 = 2;
      }
      else {
        if (bVar12 == bVar11) goto LAB_005228a4;
        bVar5 = 1;
      }
    }
    else {
LAB_005228a4:
      if ((bVar5 == 1) && ((bVar11 != 0x39 || (bVar12 != 0x30)))) {
        bVar5 = 2;
      }
    }
    if (bVar5 == 0) {
      bVar2 = false;
    }
    else if (((mant_spill & 1) == 0) || (1 < bVar5)) {
      bVar2 = true;
    }
    else {
      bVar2 = (long)(uVar3 + 1) < local_20;
    }
    if (bVar13) {
      if (bVar2) {
        strconv___decimal__Round((strconv_decimal *)(lVar6 + lVar4 + 1),lVar6);
        return;
      }
      lVar6 = lVar6 + lVar4 + 1;
      if (lVar6 < 0) {
        return;
      }
      if (lVar9 <= lVar6) {
        return;
      }
      d_spill->nd = lVar6;
      break;
    }
    if (bVar2) {
      lVar6 = lVar6 + lVar4 + 1;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 c@[???] */
      if (lVar6 < 0) {
        return;
      }
      if (lVar6 < lVar9) {
        while( true ) {
          if ((long)uVar8 < 0) {
            d_spill->d[0] = 0x31;
            d_spill->nd = 1;
            d_spill->dp = d_spill->dp + 1;
            return;
          }
          if (799 < uVar8) break;
          if (d_spill->d[uVar8] < 0x39) {
            d_spill->d[uVar8] = d_spill->d[uVar8] + 1;
            d_spill->nd = uVar8 + 1;
            return;
          }
          uVar8 = uVar8 - 1;
        }
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      return;
    }
    uVar3 = uVar3 + 1;
  } while( true );
LAB_005229e8:
  lVar6 = d_spill->nd;
  if (lVar6 < 1) {
LAB_00522a17:
    if (lVar6 == 0) {
      d_spill->dp = 0;
    }
    return;
  }
  if (799 < lVar6 - 1U) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (d_spill->d[lVar6 + -1] != 0x30) goto LAB_00522a17;
  d_spill->nd = lVar6 - 1U;
  goto LAB_005229e8;
}

