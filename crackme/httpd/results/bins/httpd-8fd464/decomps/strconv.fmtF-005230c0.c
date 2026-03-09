
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.fmtF([]uint8 dst, bool neg, strconv.decimalSlice d, int
   prec, []uint8 ~r4) */

__uint8 strconv_fmtF(__uint8 dst,bool neg,strconv_decimalSlice d,int prec)

{
  uint8 *puVar1;
  uint8 uVar2;
  uint8 *puVar3;
  uint8 *puVar4;
  int iVar5;
  uint8 *puVar6;
  long in_FS_OFFSET;
  __uint8 _Var7;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  runtime_slice old_04;
  __uint8 dst_spill;
  bool neg_spill;
  int prec_spill;
  runtime__type *local_70;
  uint8 *local_68;
  uint8 *local_60;
  uint8 *local_18;
  runtime__type *local_10;
  
  while (&local_18 <= *(uint8 ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((char)d.nd == '\0') {
    iVar5 = 0;
  }
  else {
    puVar6 = (uint8 *)(d.d.len + 1);
    if ((ulong)d.d.cap < puVar6) {
      old.len = (int)d.d.array;
      old.array = (void *)d.d.len;
      old.cap = d.d.cap;
      runtime_growslice((runtime__type *)&DAT_00225720,old,(int)puVar6);
      puVar6 = local_68 + 1;
      d.d.array = (uint8 *)local_70;
      d.d.cap = (int)local_60;
    }
    *(undefined1 *)((long)&((runtime__type *)d.d.array)->size + d.d.len) = 0x2d;
    iVar5 = d.d.len;
    d.d.len = (int)puVar6;
  }
  local_18 = (uint8 *)d.d.len;
  if (dst_spill.cap < 1) {
    puVar4 = (uint8 *)(d.d.len + 1);
    puVar1 = (uint8 *)dst_spill.cap;
    puVar3 = (uint8 *)d.d.cap;
    if ((ulong)d.d.cap < puVar4) {
      old_00.len = (int)&DAT_00225720;
      old_00.array = (void *)iVar5;
      old_00.cap = d.d.cap;
      runtime_growslice((runtime__type *)d.d.array,old_00,d.d.len);
      puVar4 = local_68 + 1;
      d.d.array = (uint8 *)local_70;
      puVar1 = local_68;
      puVar3 = local_60;
    }
    local_18[(long)&((runtime__type *)d.d.array)->size] = 0x30;
  }
  else {
    puVar6 = (uint8 *)dst_spill.cap;
    if (dst_spill.len < dst_spill.cap) {
      puVar6 = (uint8 *)dst_spill.len;
    }
    if (dst_spill.array < puVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    local_10 = (runtime__type *)d.d.array;
    if ((ulong)d.d.cap < puVar6 + d.d.len) {
      local_10 = (runtime__type *)d.dp;
      old_01.len = (int)&DAT_00225720;
      old_01.array = (void *)d.dp;
      old_01.cap = d.d.cap;
      runtime_growslice((runtime__type *)d.d.array,old_01,d.d.len);
      local_10 = local_70;
      d.d.cap = (int)local_60;
    }
    local_18 = (uint8 *)d.d.cap;
    runtime_memmove();
    d.d.array = (uint8 *)local_10;
    puVar1 = puVar6 + d.d.len;
    puVar3 = local_18;
    for (; puVar4 = puVar1, (long)puVar6 < dst_spill.cap; puVar6 = puVar6 + 1) {
      puVar4 = puVar1 + 1;
      if (puVar3 < puVar4) {
        old_02.len = (int)puVar1;
        old_02.array = &DAT_00225720;
        old_02.cap = d.d.cap;
        runtime_growslice((runtime__type *)d.d.array,old_02,(int)puVar4);
        puVar4 = local_68 + 1;
        d.d.array = (uint8 *)local_70;
        puVar3 = local_60;
      }
      puVar1[(long)&((runtime__type *)d.d.array)->size] = 0x30;
      puVar1 = puVar4;
    }
  }
  if (0 < prec_spill) {
    puVar6 = puVar4 + 1;
    if (puVar3 < puVar6) {
      old_03.len = (int)&DAT_00225720;
      old_03.array = (void *)prec_spill;
      old_03.cap = (int)puVar3;
      runtime_growslice((runtime__type *)d.d.array,old_03,(int)puVar6);
      puVar6 = local_68 + 1;
                    /* Unresolved local var: int i@[???] */
      d.d.array = (uint8 *)local_70;
      puVar3 = local_60;
    }
    puVar4[(long)&((runtime__type *)d.d.array)->size] = 0x2e;
    for (puVar1 = (uint8 *)0x0; (long)puVar1 < prec_spill; puVar1 = puVar1 + 1) {
                    /* Unresolved local var: int j@[???] */
      puVar4 = puVar1 + dst_spill.cap;
      if (((long)puVar4 < 0) || (dst_spill.len <= (long)puVar4)) {
        uVar2 = 0x30;
      }
      else {
        if ((ulong)d._40_8_ <= puVar4) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar2 = puVar4[d.dp];
      }
      puVar4 = puVar6 + 1;
      if (puVar3 < puVar4) {
        old_04.len = (int)&DAT_00225720;
        old_04.array = (void *)prec_spill;
        old_04.cap = (int)puVar3;
        runtime_growslice((runtime__type *)d.d.array,old_04,(int)puVar6);
        puVar4 = local_68 + 1;
        d.d.array = (uint8 *)local_70;
        puVar3 = local_60;
      }
                    /* Unresolved local var: uint8 ch@[???] */
      puVar6[(long)&((runtime__type *)d.d.array)->size] = uVar2;
      puVar6 = puVar4;
    }
  }
  _Var7.len = prec_spill;
  _Var7.array = d.d.array;
  _Var7.cap = (int)puVar1;
  return _Var7;
}

