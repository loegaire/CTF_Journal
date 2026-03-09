
/* WARNING: Unknown calling convention */

void strconv___decimal__Assign(strconv_decimal *a,uint64 v)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  strconv_decimal *a_spill;
  uint64 v_spill;
  uint8 uStack_21;
  uint8 buf [24];
  
  buf[0] = 0;
  buf[1] = 0;
  buf[2] = 0;
  buf[3] = 0;
  buf[4] = 0;
  buf[5] = 0;
  buf[6] = 0;
  buf[7] = 0;
                    /* Unresolved local var: int n@[???] */
  buf[8] = 0;
  buf[9] = 0;
  buf[10] = 0;
  buf[0xb] = 0;
  buf[0xc] = 0;
  buf[0xd] = 0;
  buf[0xe] = 0;
  buf[0xf] = 0;
  buf[0x10] = 0;
  buf[0x11] = 0;
  buf[0x12] = 0;
  buf[0x13] = 0;
  buf[0x14] = 0;
  buf[0x15] = 0;
  buf[0x16] = 0;
  buf[0x17] = 0;
  uVar2 = 0;
  while (v_spill != 0) {
    if (0x17 < uVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    buf[uVar2] = (char)v_spill + (char)(v_spill / 10) * -10 + 0x30;
    uVar2 = uVar2 + 1;
    v_spill = v_spill / 10;
  }
  a_spill->nd = 0;
  while (uVar3 = uVar2 - 1, -1 < (long)uVar3) {
    if (0x17 < uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (799 < (ulong)a_spill->nd) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    a_spill->d[a_spill->nd] = buf[uVar2 - 1];
    a_spill->nd = a_spill->nd + 1;
    uVar2 = uVar3;
  }
  a_spill->dp = a_spill->nd;
  while (lVar1 = a_spill->nd, 0 < lVar1) {
    if (799 < lVar1 - 1U) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (a_spill->d[lVar1 + -1] != 0x30) break;
    a_spill->nd = lVar1 - 1U;
  }
  if (lVar1 == 0) {
    a_spill->dp = 0;
  }
  return;
}

