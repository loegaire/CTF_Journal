
/* WARNING: Unknown calling convention */

void fmt___fmt__fmtSbx(fmt_fmt *f,string s,__uint8 b,string digits)

{
  uint8 uVar1;
  fmt_buffer *pfVar2;
  fmt_fmt *extraout_RAX;
  fmt_fmt *extraout_RAX_00;
  long lVar3;
  fmt_fmt *f_00;
  ulong uVar4;
  byte bVar5;
  uint8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  fmt_fmt *f_spill;
  long in_stack_00000010;
  int length;
  __uint8 b_spill;
  string digits_spill;
  uint8 *local_58;
  long local_50;
  ulong local_48;
  
                    /* Unresolved local var: int width@[???]
                       Unresolved local var: uint8 c@[???]
                       Unresolved local var: fmt.buffer buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    f = extraout_RAX_00;
  }
  lVar3 = length;
  if (b_spill.array != (uint8 *)0x0) {
    lVar3 = b_spill.len;
  }
  if (((f_spill->fmtFlags).precPresent != false) && (f_spill->prec < lVar3)) {
    lVar3 = f_spill->prec;
  }
  f_00 = (fmt_fmt *)(lVar3 << 1);
  if ((long)f_00 < 1) {
    if ((f_spill->fmtFlags).widPresent != false) {
      fmt___fmt__writePadding((fmt_fmt *)f_spill->wid,b_spill.len);
    }
    return;
  }
  if ((f_spill->fmtFlags).space == false) {
    if ((f_spill->fmtFlags).sharp != false) {
      f_00 = (fmt_fmt *)(lVar3 * 2 + 2);
    }
  }
  else {
    if ((f_spill->fmtFlags).sharp != false) {
      f_00 = (fmt_fmt *)(lVar3 << 2);
    }
    f_00 = (fmt_fmt *)(f_00->intbuf + lVar3 + -0x29);
  }
  if ((((f_spill->fmtFlags).widPresent != false) && ((long)f_00 < f_spill->wid)) &&
     ((f_spill->fmtFlags).minus == false)) {
    fmt___fmt__writePadding(f,b_spill.len);
  }
  pfVar2 = f_spill->buf;
  uVar4 = pfVar2->len;
  uVar9 = pfVar2->cap;
  puVar6 = pfVar2->array;
  if ((f_spill->fmtFlags).sharp != false) {
    if ((ulong)digits_spill.len < 0x11) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar8 = uVar4 + 2;
    uVar1 = digits_spill.str[0x10];
    if (uVar9 < uVar8) {
      old.len = digits_spill.len;
      old.array = (void *)b_spill.len;
      old.cap = (int)digits_spill.str;
      runtime_growslice((runtime__type *)&DAT_00225720,old,length);
      uVar8 = local_50 + 2;
      puVar6 = local_58;
      uVar9 = local_48;
    }
    puVar6[uVar4] = 0x30;
    puVar6[uVar4 + 1] = uVar1;
    uVar4 = uVar8;
  }
  uVar8 = 0;
  while( true ) {
    if (lVar3 <= (long)uVar8) {
      pfVar2 = f_spill->buf;
      pfVar2->len = uVar4;
      pfVar2->cap = uVar9;
      if (runtime_writeBarrier._0_4_ == 0) {
        pfVar2->array = puVar6;
      }
      else {
        runtime_gcWriteBarrierCX();
        f_00 = extraout_RAX;
      }
      if ((((f_spill->fmtFlags).widPresent != false) && ((long)f_00 < f_spill->wid)) &&
         ((f_spill->fmtFlags).minus != false)) {
        fmt___fmt__writePadding(f_00,b_spill.len);
      }
      return;
    }
    uVar7 = uVar4;
    if (((f_spill->fmtFlags).space != false) && (0 < (long)uVar8)) {
      uVar7 = uVar4 + 1;
      if (uVar9 < uVar7) {
        old_00.len = digits_spill.len;
        old_00.array = (void *)b_spill.len;
        old_00.cap = (int)digits_spill.str;
        runtime_growslice((runtime__type *)&DAT_00225720,old_00,length);
        uVar7 = local_50 + 1;
        puVar6 = local_58;
        uVar9 = local_48;
      }
      puVar6[uVar4] = 0x20;
      if ((f_spill->fmtFlags).sharp != false) {
        if ((ulong)digits_spill.len < 0x11) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar4 = uVar7 + 2;
        uVar1 = digits_spill.str[0x10];
        if (uVar9 < uVar4) {
          old_01.len = digits_spill.len;
          old_01.array = (void *)b_spill.len;
          old_01.cap = (int)digits_spill.str;
          runtime_growslice((runtime__type *)&DAT_00225720,old_01,length);
          uVar4 = local_50 + 2;
          puVar6 = local_58;
          uVar9 = local_48;
        }
        puVar6[uVar7] = 0x30;
        puVar6[uVar7 + 1] = uVar1;
        uVar7 = uVar4;
      }
    }
    if (b_spill.array == (uint8 *)0x0) {
      if ((ulong)length <= uVar8) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      bVar5 = *(byte *)(uVar8 + in_stack_00000010);
    }
    else {
      if ((ulong)b_spill.len <= uVar8) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      bVar5 = b_spill.array[uVar8];
    }
    if ((ulong)digits_spill.len <= (ulong)(bVar5 >> 4)) break;
    uVar1 = digits_spill.str[bVar5 >> 4];
    if ((ulong)digits_spill.len <= (ulong)(bVar5 & 0xf)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar4 = uVar7 + 2;
    bVar5 = digits_spill.str[bVar5 & 0xf];
    old_02.array = (ulong)bVar5;
    if (uVar9 < uVar4) {
      old_02.len = digits_spill.len;
      old_02.cap = (int)digits_spill.str;
      runtime_growslice((runtime__type *)&DAT_00225720,old_02,uVar4);
      uVar4 = local_50 + 2;
      puVar6 = local_58;
      uVar9 = local_48;
    }
    puVar6[uVar7] = uVar1;
    puVar6[uVar7 + 1] = bVar5;
    uVar8 = uVar8 + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

