
/* WARNING: Unknown calling convention */

void fmt___fmt__fmtUnicode(fmt_fmt *f,uint64 u)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int in_RCX;
  long lVar4;
  uint8 *len;
  long lVar5;
  int r;
  long in_FS_OFFSET;
  __uint8 b;
  __uint8 p;
  fmt_fmt *f_spill;
  uint64 u_spill;
  ulong local_58;
  uint8 *local_48;
  
                    /* Unresolved local var: bool oldZero@[???]
                       Unresolved local var: int prec@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: []uint8 buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  len = f_spill->intbuf;
  if (((f_spill->fmtFlags).precPresent == false) || (lVar5 = f_spill->prec, lVar5 < 5)) {
    uVar2 = 0x44;
    lVar5 = 4;
  }
  else {
                    /* Unresolved local var: int width@[???] */
    uVar2 = lVar5 + 9;
    if ((long)uVar2 < 0x45) {
      uVar2 = 0x44;
    }
    else {
      runtime_makeslice((runtime__type *)&DAT_00225720,(int)len,in_RCX);
      len = local_48;
      local_58 = uVar2;
    }
  }
  r = (int)u_spill;
  if ((f_spill->fmtFlags).sharp == false) {
    local_58._0_1_ = '\0';
  }
  else if (u_spill < 0x110000) {
    strconv_IsPrint((int32)uVar2);
  }
  else {
    local_58._0_1_ = '\0';
  }
  uVar3 = uVar2;
  if ((char)local_58 != '\0') {
    if (uVar2 <= uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    len[uVar2 - 1] = 0x27;
    if (r < 0) {
      lVar4 = -1;
    }
    else if (r < 0x80) {
      lVar4 = 1;
    }
    else if (r < 0x800) {
      lVar4 = 2;
    }
    else if (r - 0xd800U < 0x800) {
      lVar4 = -1;
    }
    else if (r < 0x10000) {
      lVar4 = 3;
    }
    else if (r < 0x110000) {
      lVar4 = 4;
    }
    else {
      lVar4 = -1;
    }
    p.array = uVar2 - lVar4;
    if (uVar2 < p.array - 1U) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    p.len = (int)len;
    p.cap = lVar4;
    unicode_utf8_EncodeRune(p,r);
    if (uVar2 <= p.array - 2U) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    len[p.array + -2] = 0x27;
    if (uVar2 <= p.array - 3U) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    len[p.array + -3] = 0x20;
    uVar3 = p.array - 3U;
  }
  for (; 0xf < u_spill; u_spill = u_spill >> 4) {
    if (uVar2 <= uVar3 - 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    len[uVar3 - 1] = (&DAT_00299bda)[u_spill & 0xf];
    lVar5 = lVar5 + -1;
    uVar3 = uVar3 - 1;
  }
  if (uVar2 <= uVar3 - 1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  len[uVar3 - 1] = (&DAT_00299bda)[u_spill];
  uVar3 = uVar3 - 1;
  while (lVar5 = lVar5 + -1, 0 < lVar5) {
    if (uVar2 <= uVar3 - 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    len[uVar3 - 1] = 0x30;
    uVar3 = uVar3 - 1;
  }
  if (uVar3 - 1 < uVar2) {
    len[uVar3 - 1] = 0x2b;
    if (uVar2 <= uVar3 - 2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    len[uVar3 - 2] = 0x55;
    bVar1 = (f_spill->fmtFlags).zero;
    (f_spill->fmtFlags).zero = false;
    lVar5 = (uVar2 - uVar3) + 2;
    b.len = -lVar5 >> 0x3f;
    b.array = len;
    b.cap = lVar5;
    fmt___fmt__pad((fmt_fmt *)(len + (uVar3 - 2 & b.len)),b);
    (f_spill->fmtFlags).zero = bVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

