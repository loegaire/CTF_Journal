
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.fmtE([]uint8 dst, bool neg, strconv.decimalSlice d, int
   prec, uint8 fmt, []uint8 ~r5) */

__uint8 strconv_fmtE(__uint8 dst,bool neg,strconv_decimalSlice d,int prec,uint8 fmt)

{
  char cVar1;
  char cVar2;
  uint8 *puVar3;
  uint8 *puVar4;
  long lVar5;
  long lVar6;
  uint8 *puVar7;
  ulong uVar8;
  runtime__type *prVar9;
  long in_FS_OFFSET;
  runtime_slice rVar10;
  __uint8 _Var11;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  runtime_slice old_04;
  runtime_slice old_05;
  runtime_slice old_06;
  runtime_slice old_07;
  __uint8 dst_spill;
  bool neg_spill;
  int prec_spill;
  uint8 fmt_spill;
  runtime__type *local_60;
  long local_58;
  uint8 *local_50;
  
                    /* Unresolved local var: uint8 ch@[???]
                       Unresolved local var: int exp@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((char)d.nd != '\0') {
    puVar7 = (uint8 *)(d.d.len + 1);
    if ((ulong)d.d.cap < puVar7) {
      rVar10.len = (int)d.d.array;
      rVar10.array = (void *)d.d.len;
      rVar10.cap = d.d.cap;
      runtime_growslice((runtime__type *)&DAT_00225720,rVar10,(int)puVar7);
      puVar7 = (uint8 *)(local_58 + 1);
      d.d.array = (uint8 *)local_60;
      d.d.cap = (int)local_50;
    }
    *(undefined1 *)((long)&((runtime__type *)d.d.array)->size + d.d.len) = 0x2d;
    d.d.len = (int)puVar7;
  }
  if (dst_spill.len == 0) {
    uVar8 = 0x30;
  }
  else {
    if (d._40_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar8 = (ulong)*(byte *)d.dp;
  }
  puVar7 = (uint8 *)(d.d.len + 1);
  if ((ulong)d.d.cap < puVar7) {
    old.len = (int)&DAT_00225720;
    old.array = (void *)uVar8;
    old.cap = d.d.cap;
    runtime_growslice((runtime__type *)d.d.array,old,d.d.len);
    puVar7 = (uint8 *)(local_58 + 1);
    d.d.array = (uint8 *)local_60;
    d.d.cap = (int)local_50;
  }
  *(uint8 *)(d.d.len + (long)&((runtime__type *)d.d.array)->size) = (uint8)uVar8;
  if (0 < prec_spill) {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int m@[???] */
    puVar4 = puVar7 + 1;
    if ((ulong)d.d.cap < puVar4) {
      old_00.len = (int)&DAT_00225720;
      old_00.array = (void *)prec_spill;
      old_00.cap = d.d.cap;
      runtime_growslice((runtime__type *)d.d.array,old_00,(int)puVar4);
      puVar4 = (uint8 *)(local_58 + 1);
      d.d.array = (uint8 *)local_60;
      d.d.cap = (int)local_50;
    }
    puVar7[(long)&((runtime__type *)d.d.array)->size] = 0x2e;
    puVar3 = (uint8 *)(prec_spill + 1U);
    if (dst_spill.len < (long)(prec_spill + 1U)) {
      puVar3 = (uint8 *)dst_spill.len;
    }
    if ((long)puVar3 < 2) {
      puVar3 = (uint8 *)0x1;
      d.d.len = (int)puVar4;
    }
    else {
      if (dst_spill.array < puVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      d.d.len = (int)(puVar3 + (long)puVar4 + -1);
      if ((ulong)d.d.cap < (ulong)d.d.len) {
        old_01.len = (int)&DAT_00225720;
        old_01.array = (void *)prec_spill;
        old_01.cap = d.d.cap;
        runtime_growslice((runtime__type *)d.d.array,old_01,(int)puVar4);
        d.d.array = (uint8 *)local_60;
        d.d.cap = (int)local_50;
      }
      runtime_memmove();
    }
    for (; puVar7 = (uint8 *)d.d.len, (long)puVar3 <= prec_spill; puVar3 = puVar3 + 1) {
      puVar7 = (uint8 *)(d.d.len + 1);
      if ((ulong)d.d.cap < puVar7) {
        old_07.len = (int)&DAT_00225720;
        old_07.array = (void *)prec_spill;
        old_07.cap = d.d.cap;
        runtime_growslice((runtime__type *)d.d.array,old_07,d.d.len);
        puVar7 = (uint8 *)(local_58 + 1);
        d.d.array = (uint8 *)local_60;
        d.d.cap = (int)local_50;
      }
      *(uint8 *)(d.d.len + (long)&((runtime__type *)d.d.array)->size) = 0x30;
      d.d.len = (int)puVar7;
    }
  }
  puVar4 = puVar7 + 1;
  if ((ulong)d.d.cap < puVar4) {
    old_02.len = (int)puVar4;
    old_02.array = (void *)prec_spill;
    old_02.cap = d.d.cap;
    runtime_growslice((runtime__type *)d.d.array,old_02,d.d.len);
    puVar4 = (uint8 *)(local_58 + 1);
    d.d.array = (uint8 *)local_60;
    d.d.cap = (int)local_50;
  }
  puVar7[(long)&((runtime__type *)d.d.array)->size] = fmt_spill;
  lVar5 = dst_spill.cap + -1;
  if (dst_spill.len == 0) {
    lVar5 = 0;
  }
  if (lVar5 < 0) {
    lVar5 = -lVar5;
    prVar9 = (runtime__type *)&DAT_0000002d;
  }
  else {
    prVar9 = (runtime__type *)&DAT_0000002b;
  }
  puVar7 = puVar4 + 1;
  if ((ulong)d.d.cap < puVar7) {
    old_03.len = (int)puVar4;
    old_03.array = prVar9;
    old_03.cap = d.d.cap;
    runtime_growslice((runtime__type *)d.d.array,old_03,(int)puVar7);
    puVar7 = (uint8 *)(local_58 + 1);
    d.d.array = (uint8 *)local_60;
    d.d.cap = (int)local_50;
  }
  puVar4[(long)&((runtime__type *)d.d.array)->size] = (uint8)prVar9;
  cVar1 = (char)lVar5;
  if (lVar5 < 10) {
    puVar4 = puVar7 + 2;
    if ((ulong)d.d.cap < puVar4) {
      old_04.len = (int)puVar4;
      old_04.array = prVar9;
      old_04.cap = d.d.cap;
      rVar10 = runtime_growslice((runtime__type *)d.d.array,old_04,(int)puVar7);
      prVar9 = (runtime__type *)rVar10.len;
      puVar4 = (uint8 *)(local_58 + 2);
      d.d.array = (uint8 *)local_60;
    }
    puVar7[(long)&((runtime__type *)d.d.array)->size] = 0x30;
    ((undefined1 *)((long)&((runtime__type *)d.d.array)->size + 1))[(long)puVar7] = cVar1 + '0';
  }
  else if (lVar5 < 100) {
    puVar4 = puVar7 + 2;
    cVar2 = (char)(SUB168(SEXT816(-0x3333333333333333) * SEXT816(lVar5),8) + lVar5 >> 3);
    if ((ulong)d.d.cap < puVar4) {
      old_05.len = (int)puVar4;
      old_05.array = d.d.array;
      old_05.cap = d.d.cap;
      runtime_growslice((runtime__type *)&DAT_00225720,old_05,(int)puVar7);
      puVar4 = (uint8 *)(local_58 + 2);
      d.d.array = (uint8 *)local_60;
    }
    puVar7[(long)&((runtime__type *)d.d.array)->size] = cVar2 + 0x30;
    ((undefined1 *)((long)&((runtime__type *)d.d.array)->size + 1))[(long)puVar7] =
         cVar1 + cVar2 * -10 + '0';
    prVar9 = (runtime__type *)d.d.array;
  }
  else {
    puVar4 = puVar7 + 3;
    lVar6 = SUB168(SEXT816(-0x3333333333333333) * SEXT816(lVar5),8) + lVar5 >> 3;
    cVar2 = (char)lVar6;
    if ((ulong)d.d.cap < puVar4) {
      old_06.len = (int)puVar4;
      old_06.array = d.d.array;
      old_06.cap = d.d.cap;
      runtime_growslice((runtime__type *)&DAT_00225720,old_06,(int)puVar7);
      puVar4 = (uint8 *)(local_58 + 3);
      d.d.array = (uint8 *)local_60;
    }
    puVar7[(long)&((runtime__type *)d.d.array)->size] =
         (char)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar5),8) + lVar5 >> 6) + 0x30;
    ((undefined1 *)((long)&((runtime__type *)d.d.array)->size + 1))[(long)puVar7] =
         cVar2 + (char)(((uint)lVar6 & 0xff) / 10) * -10 + '0';
    ((undefined1 *)((long)&((runtime__type *)d.d.array)->size + 2))[(long)puVar7] =
         cVar1 + cVar2 * -10 + '0';
    prVar9 = (runtime__type *)d.d.array;
  }
  _Var11.len = (int)prVar9;
  _Var11.array = d.d.array;
  _Var11.cap = (int)puVar4;
  return _Var11;
}

