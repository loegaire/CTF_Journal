
/* WARNING: Unknown calling convention */

void fmt___fmt__fmtInteger(fmt_fmt *f,uint64 u,int base,bool isSigned,int32 verb,string digits)

{
  bool bVar1;
  ulong uVar2;
  ulong extraout_RDX;
  void *len;
  fmt_fmt *pfVar3;
  uint8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong in_R10;
  ulong in_R11;
  ulong unaff_R12;
  ulong uVar7;
  long in_FS_OFFSET;
  interface___ e;
  __uint8 b;
  fmt_fmt *f_spill;
  uint64 u_spill;
  int base_spill;
  bool isSigned_spill;
  int32 verb_spill;
  string digits_spill;
  uint8 *local_28;
  
                    /* Unresolved local var: bool negative@[???]
                       Unresolved local var: bool oldZero@[???]
                       Unresolved local var: int prec@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: []uint8 buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (isSigned_spill) {
    len = (void *)CONCAT71((int7)(u >> 8),(long)u_spill < 0);
  }
  else {
    len = (void *)0x0;
  }
  if ((char)len != '\0') {
    u_spill = -u_spill;
  }
  puVar4 = f_spill->intbuf;
  if (((f_spill->fmtFlags).widPresent == false) && ((f_spill->fmtFlags).precPresent == false)) {
    uVar5 = 0x44;
  }
  else {
                    /* Unresolved local var: int width@[???] */
    uVar5 = f_spill->wid + f_spill->prec + 3;
    if ((long)uVar5 < 0x45) {
      uVar5 = 0x44;
    }
    else {
      runtime_makeslice((runtime__type *)&DAT_00225720,(int)len,base);
      len = (void *)((ulong)len & 0xff);
      puVar4 = local_28;
    }
  }
  if ((f_spill->fmtFlags).precPresent == false) {
    if (((f_spill->fmtFlags).zero == false) || ((f_spill->fmtFlags).widPresent == false)) {
      lVar6 = 0;
    }
    else {
      lVar6 = f_spill->wid;
      if ((((char)len != '\0') || ((f_spill->fmtFlags).plus != false)) ||
         ((f_spill->fmtFlags).space != false)) {
        lVar6 = lVar6 + -1;
      }
    }
  }
  else {
    lVar6 = f_spill->prec;
    if ((lVar6 == 0) && (u_spill == 0)) {
                    /* Unresolved local var: bool oldZero@[???] */
      bVar1 = (f_spill->fmtFlags).zero;
      (f_spill->fmtFlags).zero = false;
      fmt___fmt__writePadding((fmt_fmt *)(ulong)bVar1,(int)len);
      (f_spill->fmtFlags).zero = bVar1;
      return;
    }
  }
  uVar2 = uVar5;
  pfVar3 = f_spill;
  if (base_spill < 9) {
    if (base_spill == 2) {
      for (; 1 < u_spill; u_spill = u_spill >> 1) {
        if (uVar5 <= uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        puVar4[uVar2 - 1] = ((byte)u_spill & 1) + 0x30;
        uVar2 = uVar2 - 1;
      }
      goto LAB_0056766a;
    }
    if (base_spill == 8) {
      for (; 7 < u_spill; u_spill = u_spill >> 3) {
        if (uVar5 <= uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        puVar4[uVar2 - 1] = ((byte)u_spill & 7) + 0x30;
        uVar2 = uVar2 - 1;
      }
      goto LAB_0056766a;
    }
  }
  else {
    if (base_spill == 10) goto LAB_00567931;
    if (base_spill == 0x10) {
      for (; 0xf < u_spill; u_spill = u_spill >> 4) {
        if ((ulong)digits_spill.len <= (u_spill & 0xf)) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        if (uVar5 <= uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        puVar4[uVar2 - 1] = digits_spill.str[u_spill & 0xf];
        uVar2 = uVar2 - 1;
      }
      goto LAB_0056766a;
    }
  }
  e.data = len;
  e._type = (runtime__type *)fmt__stmp_1;
  runtime_gopanic(e);
  uVar5 = base;
  uVar7 = extraout_RDX;
  uVar2 = in_R11;
  while( true ) {
    puVar4[uVar2 - 1] = (char)unaff_R12 + 0x30;
    uVar2 = in_R10;
    u_spill = uVar7;
LAB_00567931:
    if (u_spill < 10) break;
    in_R10 = uVar2 - 1;
    uVar7 = u_spill / 10;
    unaff_R12 = u_spill % 10;
    if (uVar5 <= in_R10) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
  }
LAB_0056766a:
  if ((ulong)digits_spill.len <= u_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  uVar7 = uVar2 - 1;
  if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  puVar4[uVar2 - 1] = digits_spill.str[u_spill];
  for (; (0 < (long)uVar7 && ((long)(uVar5 - uVar7) < lVar6)); uVar7 = uVar7 - 1) {
    puVar4[uVar7 - 1] = 0x30;
  }
  if ((pfVar3->fmtFlags).sharp != false) {
    if (base_spill == 2) {
      if (uVar5 <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar4[uVar7 - 1] = 0x62;
      if (uVar5 <= uVar7 - 2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar4[uVar7 - 2] = 0x30;
      uVar7 = uVar7 - 2;
    }
    else if (base_spill == 8) {
      if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (puVar4[uVar7] != 0x30) {
        if (uVar5 <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        puVar4[uVar7 - 1] = 0x30;
        uVar7 = uVar7 - 1;
      }
    }
    else if (base_spill == 0x10) {
      if ((ulong)digits_spill.len < 0x11) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (uVar5 <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar4[uVar7 - 1] = digits_spill.str[0x10];
      if (uVar5 <= uVar7 - 2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar4[uVar7 - 2] = 0x30;
      uVar7 = uVar7 - 2;
    }
  }
  if (verb_spill == 0x4f) {
    if (uVar5 <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    puVar4[uVar7 - 1] = 0x6f;
    if (uVar5 <= uVar7 - 2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    puVar4[uVar7 - 2] = 0x30;
    uVar7 = uVar7 - 2;
  }
  if ((char)len == '\0') {
    if ((pfVar3->fmtFlags).plus == false) {
      if ((pfVar3->fmtFlags).space != false) {
        if (uVar5 <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        puVar4[uVar7 - 1] = 0x20;
        uVar7 = uVar7 - 1;
      }
    }
    else {
      if (uVar5 <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar4[uVar7 - 1] = 0x2b;
      uVar7 = uVar7 - 1;
    }
  }
  else {
    if (uVar5 <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    puVar4[uVar7 - 1] = 0x2d;
    uVar7 = uVar7 - 1;
  }
  bVar1 = (pfVar3->fmtFlags).zero;
  b.array = (ulong)bVar1;
  (pfVar3->fmtFlags).zero = false;
  if (uVar5 < uVar7) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  b.len = uVar5 - uVar7;
  b.cap = (int)puVar4;
  fmt___fmt__pad((fmt_fmt *)(puVar4 + (uVar7 & (long)-(uVar5 - uVar7) >> 0x3f)),b);
  (f_spill->fmtFlags).zero = bVar1;
  return;
}

