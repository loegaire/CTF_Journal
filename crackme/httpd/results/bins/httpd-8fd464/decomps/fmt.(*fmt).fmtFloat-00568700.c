
/* WARNING: Unknown calling convention */

void fmt___fmt__fmtFloat(fmt_fmt *f,float64 v,int size,int32 verb,int prec)

{
  char cVar1;
  bool bVar2;
  uint8 uVar3;
  byte bVar4;
  bool bVar5;
  fmt_fmt *extraout_RAX;
  fmt_fmt *pfVar6;
  int in_RSI;
  fmt_buffer *pfVar7;
  fmt_fmt *pfVar8;
  fmt_fmt *pfVar9;
  int in_R8;
  fmt_fmt *pfVar10;
  long lVar11;
  fmt_fmt *pfVar12;
  long in_FS_OFFSET;
  __uint8 dst;
  __uint8 b;
  runtime_slice old;
  runtime_slice old_00;
  __uint8 b_00;
  __uint8 b_01;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  runtime_slice old_04;
  runtime_slice old_05;
  fmt_fmt *f_spill;
  float64 v_spill;
  int size_spill;
  int32 verb_spill;
  int prec_spill;
  fmt_fmt *local_b8;
  fmt_fmt *local_b0;
  fmt_fmt *local_a8;
  undefined1 local_96 [22];
  fmt_fmt *local_80;
  fmt_fmt *local_78;
  fmt_fmt *local_70;
  fmt_fmt *local_68;
  fmt_fmt *local_60;
  fmt_fmt *local_58;
  fmt_fmt *local_50;
  fmt_fmt *local_48;
  fmt_fmt *local_40;
  uint8 *local_38;
  fmt_fmt *local_30;
  fmt_buffer *local_28;
  fmt_buffer *local_20;
  fmt_fmt *local_18;
  fmt_fmt *local_10;
  
                    /* Unresolved local var: []uint8 num@[???] */
  while (&local_70 <= *(fmt_fmt ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((f_spill->fmtFlags).precPresent != false) {
    prec_spill = f_spill->prec;
  }
  dst.len = size_spill;
  dst.array = (uint8 *)f_spill;
  dst.cap = prec_spill;
  local_80 = (fmt_fmt *)prec_spill;
  strconv_genericFtoa(dst,v_spill,(uint8)prec,in_RSI,in_R8);
  if (local_b0 < (fmt_fmt *)0x2) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  cVar1 = *(char *)((long)&local_b8->buf + 1);
  if ((cVar1 == '-') || (cVar1 == '+')) {
    local_a8 = (fmt_fmt *)&local_a8[-1].field_0x6f;
    local_b0 = (fmt_fmt *)&local_b0[-1].field_0x6f;
    pfVar6 = (fmt_fmt *)((long)&local_b8->buf + 1);
  }
  else {
    *(undefined1 *)&local_b8->buf = 0x2b;
    pfVar6 = local_b8;
  }
  if ((f_spill->fmtFlags).space != false) {
    if (local_b0 == (fmt_fmt *)0x0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if ((*(char *)&pfVar6->buf == '+') && ((f_spill->fmtFlags).plus == false)) {
      *(undefined1 *)&pfVar6->buf = 0x20;
    }
  }
  if (local_b0 < (fmt_fmt *)0x2) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  cVar1 = *(char *)((long)&pfVar6->buf + 1);
  if ((cVar1 == 'I') || (cVar1 == 'N')) {
                    /* Unresolved local var: bool oldZero@[???] */
    bVar2 = (f_spill->fmtFlags).zero;
    (f_spill->fmtFlags).zero = false;
    if ((*(char *)((long)&pfVar6->buf + 1) == 'N') &&
       (((f_spill->fmtFlags).space == false && ((f_spill->fmtFlags).plus == false)))) {
      pfVar6 = (fmt_fmt *)((long)&pfVar6->buf + 1);
      local_b0 = (fmt_fmt *)&local_b0[-1].field_0x6f;
    }
    b.len = (int)local_b0;
    b.array = (uint8 *)f_spill;
    b.cap = prec;
    fmt___fmt__pad(pfVar6,b);
    (f_spill->fmtFlags).zero = bVar2;
    return;
  }
  if (((f_spill->fmtFlags).sharp == false) || (verb_spill == 0x62)) goto LAB_0056891a;
                    /* Unresolved local var: int digits@[???]
                       Unresolved local var: bool hasDecimalPoint@[???]
                       Unresolved local var: bool sawNonzeroDigit@[???]
                       Unresolved local var: []uint8 tail@[???]
                       Unresolved local var: uint8[6] tailBuf@[???] */
  if (verb_spill < 0x68) {
    if ((verb_spill == 0x47) || (verb_spill == 0x67)) goto LAB_00568865;
LAB_0056887a:
    prec = (int)(fmt_fmt *)0x0;
  }
  else {
    if ((verb_spill != 0x76) && (verb_spill != 0x78)) goto LAB_0056887a;
LAB_00568865:
    prec = (int)local_80;
    if (local_80 == (fmt_fmt *)0xffffffffffffffff) {
      prec = (int)&DAT_00000006;
    }
  }
  local_96._0_4_ = 0;
  local_96._4_2_ = 0;
  bVar2 = false;
  bVar5 = false;
  pfVar8 = (fmt_fmt *)0x0;
  pfVar12 = (fmt_fmt *)&DAT_00000006;
  local_18 = (fmt_fmt *)local_96;
  pfVar10 = (fmt_fmt *)0x1;
  local_78 = local_b0;
  local_70 = local_a8;
  local_30 = pfVar6;
                    /* Unresolved local var: int i@[???] */
  while (local_96._6_8_ = pfVar8, (long)pfVar10 < (long)local_78) {
    bVar4 = pfVar10->intbuf[(long)(pfVar6->intbuf + -0x50)];
    pfVar9 = (fmt_fmt *)prec;
    local_68 = pfVar10;
    local_60 = (fmt_fmt *)prec;
    if (bVar4 < 0x46) {
      if (bVar4 == 0x2e) {
        bVar5 = true;
      }
      else {
        if (bVar4 == 0x45) {
LAB_00568c34:
          if ((verb_spill != 0x78) && (verb_spill != 0x58)) {
            old_01.len = (long)local_78 - (long)pfVar10;
            local_48 = (fmt_fmt *)((long)pfVar8 + old_01.len);
            if (pfVar12 < local_48) {
              old_01.array = pfVar10;
              old_01.cap = prec;
              local_50 = (fmt_fmt *)old_01.len;
              local_10 = (fmt_fmt *)
                         (pfVar6->intbuf +
                         (((long)pfVar10 - (long)local_a8 >> 0x3f & (ulong)pfVar10) - 0x28));
              runtime_growslice((runtime__type *)&DAT_00225720,old_01,(ulong)(uint)verb_spill);
              pfVar12 = local_b8;
              local_18 = (fmt_fmt *)prec_spill;
            }
            local_96._14_8_ = pfVar12;
            local_40 = local_18;
            runtime_memmove();
            pfVar6 = local_30;
            local_78 = local_68;
            local_a8 = local_70;
            pfVar9 = local_60;
            pfVar8 = local_48;
            pfVar12 = (fmt_fmt *)local_96._14_8_;
            local_18 = local_40;
            goto LAB_00568bc5;
          }
        }
LAB_00568d4b:
        bVar2 = (bool)(bVar2 | bVar4 != 0x30);
        if (bVar2) {
          pfVar9 = (fmt_fmt *)&((fmt_fmt *)(prec + -0x70))->field_0x6f;
        }
      }
    }
    else {
      if (bVar4 != 0x50) {
        if (bVar4 == 0x65) goto LAB_00568c34;
        if (bVar4 != 0x70) goto LAB_00568d4b;
      }
      old_02.len = (long)local_78 - (long)pfVar10;
      local_48 = (fmt_fmt *)((long)pfVar8 + old_02.len);
      if (pfVar12 < local_48) {
        old_02.array = pfVar10;
        old_02.cap = prec;
        local_50 = (fmt_fmt *)old_02.len;
        local_10 = (fmt_fmt *)
                   (pfVar6->intbuf +
                   (((long)pfVar10 - (long)local_a8 >> 0x3f & (ulong)pfVar10) - 0x28));
        runtime_growslice((runtime__type *)&DAT_00225720,old_02,(ulong)(uint)verb_spill);
        pfVar12 = local_b8;
        local_18 = (fmt_fmt *)prec_spill;
      }
      local_96._14_8_ = pfVar12;
      local_40 = local_18;
      runtime_memmove();
      pfVar6 = local_30;
      local_78 = local_68;
      local_a8 = local_70;
      pfVar9 = local_60;
      pfVar8 = local_48;
      pfVar12 = (fmt_fmt *)local_96._14_8_;
      local_18 = local_40;
    }
LAB_00568bc5:
    prec = (int)pfVar9;
    pfVar10 = (fmt_fmt *)((long)&local_68->buf + 1);
  }
  if (!bVar5) {
    if ((local_78 == (fmt_fmt *)0x2) && (*(char *)((long)&pfVar6->buf + 1) == '0')) {
      prec = (int)&((fmt_fmt *)(prec + -0x70))->field_0x6f;
    }
    pfVar8 = (fmt_fmt *)((long)&local_78->buf + 1);
    if (local_a8 < pfVar8) {
      old_03.len = (int)local_78;
      old_03.array = &DAT_00225720;
      old_03.cap = prec;
      local_58 = (fmt_fmt *)prec;
      runtime_growslice((runtime__type *)pfVar6,old_03,(int)pfVar8);
      pfVar8 = (fmt_fmt *)(size_spill + 1);
      pfVar6 = (fmt_fmt *)prec_spill;
      local_a8 = local_b8;
      prec = (int)local_58;
    }
    local_78->intbuf[(long)(pfVar6->intbuf + -0x50)] = 0x2e;
    local_78 = pfVar8;
    pfVar8 = (fmt_fmt *)local_96._6_8_;
  }
  for (; 0 < prec; prec = (int)&((fmt_fmt *)(prec + -0x70))->field_0x6f) {
    pfVar12 = (fmt_fmt *)((long)&local_78->buf + 1);
    if (local_a8 < pfVar12) {
      old_04.len = (int)pfVar12;
      old_04.array = &DAT_00225720;
      old_04.cap = prec;
      local_60 = (fmt_fmt *)prec;
      runtime_growslice((runtime__type *)pfVar6,old_04,(int)local_78);
      pfVar12 = (fmt_fmt *)(size_spill + 1);
      pfVar6 = (fmt_fmt *)prec_spill;
      local_a8 = local_b8;
      prec = (int)local_60;
      pfVar8 = (fmt_fmt *)local_96._6_8_;
    }
    local_78->intbuf[(long)(pfVar6->intbuf + -0x50)] = 0x30;
    local_78 = pfVar12;
  }
  local_48 = (fmt_fmt *)(local_78->intbuf + (long)(pfVar8->intbuf + -0x50));
  if (local_a8 < local_48) {
    old_05.len = (int)local_48;
    old_05.array = &DAT_00225720;
    old_05.cap = prec;
    runtime_growslice((runtime__type *)pfVar6,old_05,(int)local_78);
    pfVar6 = (fmt_fmt *)prec_spill;
    local_a8 = local_b8;
  }
  local_70 = local_a8;
  local_30 = pfVar6;
  runtime_memmove();
  pfVar6 = local_30;
  local_b0 = local_48;
  local_a8 = local_70;
LAB_0056891a:
  if ((f_spill->fmtFlags).plus == false) {
    if (local_b0 == (fmt_fmt *)0x0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (*(char *)&pfVar6->buf == '+') {
      b_01.len = (int)local_b0;
      b_01.array = &local_a8[-1].field_0x6f;
      b_01.cap = prec;
      fmt___fmt__pad((fmt_fmt *)&local_b0[-1].field_0x6f,b_01);
      return;
    }
  }
  if ((((f_spill->fmtFlags).zero != false) && ((f_spill->fmtFlags).widPresent != false)) &&
     ((long)local_b0 < f_spill->wid)) {
    pfVar7 = f_spill->buf;
    if (local_b0 == (fmt_fmt *)0x0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar3 = *(uint8 *)&pfVar6->buf;
    lVar11 = pfVar7->len;
    pfVar8 = (fmt_fmt *)pfVar7->array;
    local_78 = local_b0;
    local_70 = local_a8;
    local_30 = pfVar6;
    if ((ulong)pfVar7->cap < pfVar7->len + 1U) {
      old.len = (int)local_b0;
      old.array = f_spill;
      old.cap._0_1_ = uVar3;
      old.cap._1_7_ = 0;
      local_28 = pfVar7;
      runtime_growslice((runtime__type *)&DAT_00225720,old,(int)pfVar7);
      local_28->cap = (int)local_b8;
      pfVar7 = local_28;
      if (runtime_writeBarrier._0_4_ == 0) {
        local_28->array = (uint8 *)prec_spill;
        lVar11 = size_spill;
        pfVar8 = (fmt_fmt *)prec_spill;
      }
      else {
        runtime_gcWriteBarrier();
        lVar11 = size_spill;
        pfVar8 = extraout_RAX;
      }
    }
    pfVar7->len = lVar11 + 1;
    pfVar8->intbuf[lVar11 + -0x28] = uVar3;
    fmt___fmt__writePadding((fmt_fmt *)(f_spill->wid - (long)local_78),(int)f_spill);
    local_20 = f_spill->buf;
    old_00.len = local_30->intbuf + ((-(long)&local_70[-1].field_0x6f >> 0x3f & 1U) - 0x28);
    local_50 = (fmt_fmt *)local_20->len;
    local_48 = (fmt_fmt *)(local_78->intbuf + (long)local_50 + -0x29);
    pfVar6 = (fmt_fmt *)local_20->cap;
    pfVar8 = (fmt_fmt *)local_20->array;
    if (pfVar6 < local_48) {
      old_00.array = local_78;
      old_00.cap = (int)pfVar6;
      local_38 = old_00.len;
      runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)local_48);
      pfVar6 = local_b8;
      pfVar8 = (fmt_fmt *)prec_spill;
    }
    local_50 = pfVar6;
    local_10 = pfVar8;
    runtime_memmove();
    local_20->len = (int)local_48;
    local_20->cap = (int)local_50;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_20->array = (uint8 *)local_10;
    }
    else {
      runtime_gcWriteBarrier();
    }
    return;
  }
  b_00.len = (int)local_b0;
  b_00.array = (uint8 *)f_spill;
  b_00.cap = prec;
  fmt___fmt__pad(pfVar6,b_00);
  return;
}

