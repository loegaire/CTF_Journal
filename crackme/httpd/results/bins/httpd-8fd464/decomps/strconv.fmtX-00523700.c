
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.fmtX([]uint8 dst, int prec, uint8 fmt, bool neg, uint64
   mant, int exp, strconv.floatInfo * flt, []uint8 ~r7) */

__uint8 strconv_fmtX(__uint8 dst,int prec,uint8 fmt,bool neg,uint64 mant,int exp,
                    strconv_floatInfo *flt)

{
  uint8 uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long cap;
  ulong uVar11;
  long in_FS_OFFSET;
  __uint8 _Var12;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  runtime_slice old_04;
  runtime_slice old_05;
  runtime_slice old_06;
  runtime_slice old_07;
  runtime_slice old_08;
  runtime_slice old_09;
  __uint8 dst_spill;
  int prec_spill;
  uint8 fmt_spill;
  bool neg_spill;
  uint64 mant_spill;
  int exp_spill;
  strconv_floatInfo *flt_spill;
  uint8 *local_60;
  long local_58;
  ulong local_50;
  
                    /* Unresolved local var: uint8 ch@[???]
                       Unresolved local var: string hex@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar5 = -(flt_spill->mantbits - 0x3c);
  if (mant_spill == 0) {
    exp_spill = 0;
  }
  for (uVar5 = mant_spill << ((byte)uVar5 & 0x3f) & -(ulong)(uVar5 < 0x40);
      (uVar5 != 0 && ((uVar5 >> 0x3c & 1) == 0)); uVar5 = uVar5 << 1) {
    exp_spill = exp_spill + -1;
  }
  if ((ulong)prec_spill < 0xf) {
                    /* Unresolved local var: uint64 extra@[???] */
    uVar6 = prec_spill * 4;
    uVar7 = -(ulong)(-(uVar6 - 0x3c) < 0x40);
    bVar4 = (byte)-(uVar6 - 0x3c);
    uVar11 = uVar5 >> (bVar4 & 0x3f) & uVar7;
    if (0x800000000000000 <
        (-(ulong)(uVar6 < 0x40) & uVar5 << ((byte)uVar6 & 0x3f) & 0xfffffffffffffff | uVar11 & 1)) {
      uVar11 = uVar11 + 1;
    }
    uVar5 = uVar11 << (bVar4 & 0x3f) & uVar7;
    if ((uVar5 >> 0x3d & 1) != 0) {
      uVar5 = uVar5 >> 1;
      exp_spill = exp_spill + 1;
    }
  }
  if (fmt_spill == 0x58) {
    puVar3 = &DAT_002992a5;
  }
  else {
    puVar3 = &DAT_002992b5;
  }
                    /* Unresolved local var: int i@[???] */
  if (neg_spill) {
    uVar11 = dst_spill.len + 1;
    if ((ulong)dst_spill.cap < uVar11) {
      old.len = (int)dst_spill.array;
      old.array = (void *)dst_spill.len;
      old.cap = uVar11;
      runtime_growslice((runtime__type *)&DAT_00225720,old,exp_spill);
      uVar11 = local_58 + 1;
      dst_spill.cap = local_50;
      dst_spill.array = local_60;
    }
    dst_spill.array[dst_spill.len] = 0x2d;
    dst_spill.len = uVar11;
  }
  uVar11 = dst_spill.len + 3;
  if ((ulong)dst_spill.cap < uVar11) {
    old_00.len._0_1_ = fmt_spill;
    old_00.array = (void *)uVar11;
    old_00.len._1_7_ = 0;
    old_00.cap = dst_spill.len;
    runtime_growslice((runtime__type *)&DAT_00225720,old_00,exp_spill);
    uVar11 = local_58 + 3;
    dst_spill.cap = local_50;
    dst_spill.array = local_60;
  }
  dst_spill.array[dst_spill.len] = 0x30;
  dst_spill.array[dst_spill.len + 1] = fmt_spill;
  dst_spill.array[dst_spill.len + 2] = ((byte)(uVar5 >> 0x3c) & 1) + 0x30;
  uVar5 = uVar5 << 4;
  if ((prec_spill < 0) && (uVar5 != 0)) {
    uVar7 = uVar11 + 1;
    if ((ulong)dst_spill.cap < uVar7) {
      old_01.len._0_1_ = fmt_spill;
      old_01.array = (void *)uVar11;
      old_01.len._1_7_ = 0;
      old_01.cap = dst_spill.len;
      runtime_growslice((runtime__type *)&DAT_00225720,old_01,exp_spill);
      uVar7 = local_58 + 1;
      dst_spill.cap = local_50;
      dst_spill.array = local_60;
    }
    dst_spill.array[uVar11] = 0x2e;
    uVar11 = uVar7;
    while (uVar5 != 0) {
      uVar7 = uVar11 + 1;
      uVar1 = puVar3[uVar5 >> 0x3c];
      if ((ulong)dst_spill.cap < uVar7) {
        old_09.len._0_1_ = fmt_spill;
        old_09.array = (void *)uVar7;
        old_09.len._1_7_ = 0;
        old_09.cap = uVar5;
        runtime_growslice((runtime__type *)&DAT_00225720,old_09,exp_spill);
        uVar7 = local_58 + 1;
        dst_spill.cap = local_50;
        dst_spill.array = local_60;
      }
      dst_spill.array[uVar11] = uVar1;
      dst_spill.len = uVar5 << 4;
      uVar11 = uVar7;
      uVar5 = dst_spill.len;
    }
  }
  else if (0 < prec_spill) {
    uVar7 = uVar11 + 1;
    if ((ulong)dst_spill.cap < uVar7) {
      old_02.len._0_1_ = fmt_spill;
      old_02.array = (void *)uVar11;
      old_02.len._1_7_ = 0;
      old_02.cap = uVar7;
      runtime_growslice((runtime__type *)&DAT_00225720,old_02,exp_spill);
      uVar7 = local_58 + 1;
      dst_spill.cap = local_50;
      dst_spill.array = local_60;
    }
    dst_spill.array[uVar11] = 0x2e;
    uVar11 = uVar7;
    for (lVar8 = 0; dst_spill.len = uVar11, lVar8 < prec_spill; lVar8 = lVar8 + 1) {
      uVar7 = uVar11 + 1;
      uVar1 = puVar3[uVar5 >> 0x3c];
      if ((ulong)dst_spill.cap < uVar7) {
        old_08.len._0_1_ = fmt_spill;
        old_08.array = (void *)lVar8;
        old_08.len._1_7_ = 0;
        old_08.cap = uVar11;
        runtime_growslice((runtime__type *)&DAT_00225720,old_08,exp_spill);
        uVar7 = local_58 + 1;
        dst_spill.cap = local_50;
        dst_spill.array = local_60;
      }
      dst_spill.array[uVar11] = uVar1;
      uVar5 = uVar5 << 4;
      uVar11 = uVar7;
    }
  }
  if (fmt_spill == (fmt_spill | 0x20)) {
    uVar1 = 0x70;
  }
  else {
    uVar1 = 0x50;
  }
  uVar5 = uVar11 + 1;
  if ((ulong)dst_spill.cap < uVar5) {
    old_03.len = uVar5;
    old_03.array = (void *)uVar11;
    old_03.cap = dst_spill.len;
    runtime_growslice((runtime__type *)&DAT_00225720,old_03,exp_spill);
    uVar5 = local_58 + 1;
    dst_spill.cap = local_50;
    dst_spill.array = local_60;
  }
  dst_spill.array[uVar11] = uVar1;
  if (exp_spill < 0) {
    exp_spill = -exp_spill;
    uVar1 = 0x2d;
  }
  else {
    uVar1 = 0x2b;
  }
  uVar7 = uVar5 + 1;
  if ((ulong)dst_spill.cap < uVar7) {
    old_04.len = uVar5;
    old_04.array = (void *)uVar11;
    old_04.cap = dst_spill.len;
    runtime_growslice((runtime__type *)&DAT_00225720,old_04,exp_spill);
    uVar7 = local_58 + 1;
    dst_spill.cap = local_50;
    dst_spill.array = local_60;
  }
  dst_spill.array[uVar5] = uVar1;
  if (exp_spill < 100) {
    uVar5 = uVar7 + 2;
    lVar8 = (SUB168(SEXT816(-0x3333333333333333) * SEXT816(exp_spill),8) + exp_spill >> 3) -
            (exp_spill >> 0x3f);
    old_05.cap = exp_spill + lVar8 * -10;
    if ((ulong)dst_spill.cap < uVar5) {
      old_05.len = uVar5;
      old_05.array = (void *)uVar7;
      runtime_growslice((runtime__type *)&DAT_00225720,old_05,lVar8 * 10);
      uVar5 = local_58 + 2;
      dst_spill.array = local_60;
    }
    dst_spill.array[uVar7] = (char)lVar8 + 0x30;
    uVar2 = (int)old_05.cap + 0x30;
    uVar11 = (ulong)uVar2;
    dst_spill.array[uVar7 + 1] = (uint8)uVar2;
  }
  else if (exp_spill < 1000) {
    uVar5 = uVar7 + 3;
    lVar8 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(exp_spill),8) + exp_spill;
    lVar9 = SUB168(SEXT816(-0x3333333333333333) * SEXT816(exp_spill),8) + exp_spill;
    lVar10 = lVar9 >> 3;
    cap = exp_spill + lVar10 * -10;
    if ((ulong)dst_spill.cap < uVar5) {
      old_06.len = uVar5;
      old_06.array = (void *)uVar7;
      old_06.cap = lVar8;
      runtime_growslice((runtime__type *)&DAT_00225720,old_06,cap);
      uVar5 = local_58 + 3;
      dst_spill.array = local_60;
    }
    dst_spill.array[uVar7] = (char)(lVar8 >> 6) + 0x30;
    dst_spill.array[uVar7 + 1] =
         (char)lVar10 +
         ((char)(SUB168(SEXT816(-0x3333333333333333) * SEXT816(lVar10),8) + lVar10 >> 3) -
         (char)(lVar9 >> 0x3f)) * -10 + 0x30;
    uVar2 = (int)cap + 0x30;
    uVar11 = (ulong)uVar2;
    dst_spill.array[uVar7 + 2] = (uint8)uVar2;
  }
  else {
    uVar5 = uVar7 + 4;
    uVar2 = (uint)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(exp_spill),8) + exp_spill >> 6);
    uVar2 = uVar2 + ((uVar2 & 0xff) / 10) * -10;
    lVar8 = SUB168(SEXT816(-0x3333333333333333) * SEXT816(exp_spill),8) + exp_spill;
    lVar9 = lVar8 >> 3;
    lVar10 = exp_spill + lVar9 * -10;
    if ((ulong)dst_spill.cap < uVar5) {
      old_07.len = uVar5;
      old_07.array = (void *)uVar7;
      old_07.cap._0_4_ = uVar2;
      old_07.cap._4_4_ = 0;
      runtime_growslice((runtime__type *)&DAT_00225720,old_07,lVar10);
      uVar5 = local_58 + 4;
      uVar2 = uVar2 & 0xff;
      dst_spill.array = local_60;
    }
    uVar11 = exp_spill * 0x4189374bc6a7ef9e;
    dst_spill.array[uVar7] = (char)(exp_spill / 1000) + (char)(exp_spill >> 0x3f) + 0x30;
    dst_spill.array[uVar7 + 1] = (char)uVar2 + 0x30;
    dst_spill.array[uVar7 + 2] =
         (char)lVar9 +
         ((char)(SUB168(SEXT816(-0x3333333333333333) * SEXT816(lVar9),8) + lVar9 >> 3) -
         (char)(lVar8 >> 0x3f)) * -10 + 0x30;
    dst_spill.array[uVar7 + 3] = (char)lVar10 + 0x30;
  }
  _Var12.len = uVar7;
  _Var12.array = (uint8 *)uVar11;
  _Var12.cap = uVar5;
  return _Var12;
}

