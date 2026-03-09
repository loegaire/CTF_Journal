
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.appendEscapedRune([]uint8 buf, int32 r, uint8 quote, bool
   ASCIIonly, bool graphicOnly, []uint8 ~r5) */

__uint8 strconv_appendEscapedRune(__uint8 buf,int32 r,uint8 quote,bool ASCIIonly,bool graphicOnly)

{
  uint8 uVar1;
  runtime__type *prVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  uint16 *puVar8;
  undefined7 in_register_00000031;
  undefined4 in_register_0000003c;
  ulong uVar9;
  long in_FS_OFFSET;
  __uint8 _Var10;
  __uint8 _Var11;
  __uint8 p;
  __uint8 _Var12;
  __uint8 _Var13;
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
  runtime_slice old_10;
  runtime_slice old_11;
  runtime_slice old_12;
  runtime_slice old_13;
  runtime_slice old_14;
  runtime_slice old_15;
  runtime_slice old_16;
  __uint8 buf_spill;
  int32 r_spill;
  uint8 quote_spill;
  bool ASCIIonly_spill;
  bool graphicOnly_spill;
  char local_80;
  ulong local_68;
  uint8 *local_60;
  long local_58;
  runtime__type *local_50;
  uint8 runeTmp [4];
  
  uVar9 = CONCAT44(in_register_0000003c,r);
  uVar5 = CONCAT71(in_register_00000031,quote);
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runeTmp[0] = 0;
  runeTmp[1] = 0;
  runeTmp[2] = 0;
  runeTmp[3] = 0;
  bVar7 = (byte)r_spill;
  if (((uint)quote_spill == r_spill) || (r_spill == 0x5c)) {
    uVar5 = buf_spill.len + 1;
    if ((ulong)buf_spill.cap < uVar5) {
      old_00.len = uVar5;
      old_00.array = (void *)buf_spill.cap;
      old_00.cap = uVar9;
      runtime_growslice((runtime__type *)buf_spill.len,old_00,(int)buf_spill.array);
      uVar5 = local_58 + 1;
      buf_spill.cap = (int)local_50;
      buf_spill.array = local_60;
    }
    buf_spill.array[buf_spill.len] = 0x5c;
    prVar2 = (runtime__type *)(uVar5 + 1);
    if ((ulong)buf_spill.cap < prVar2) {
      old_01.len = uVar5;
      old_01.array = (void *)buf_spill.cap;
      old_01.cap = uVar9;
      runtime_growslice(prVar2,old_01,(int)buf_spill.array);
      prVar2 = (runtime__type *)(local_58 + 1);
      buf_spill.cap = (int)local_50;
      buf_spill.array = local_60;
    }
    buf_spill.array[uVar5] = bVar7;
    _Var11.len = buf_spill.cap;
    _Var11.array = (uint8 *)prVar2;
    _Var11.cap = uVar5;
    return _Var11;
  }
  if (ASCIIonly_spill) {
    if (r_spill < 0x80) {
      strconv_IsPrint((uint)ASCIIonly_spill);
    }
    else {
      local_80 = '\0';
    }
    if (local_80 != '\0') {
      uVar4 = buf_spill.len + 1;
      if ((ulong)buf_spill.cap < uVar4) {
        old.len = uVar4;
        old.array = (void *)buf_spill.cap;
        old.cap = uVar9;
        runtime_growslice((runtime__type *)buf_spill.len,old,uVar5);
        uVar4 = local_58 + 1;
        buf_spill.cap = (int)local_50;
        buf_spill.array = local_60;
      }
      buf_spill.array[buf_spill.len] = bVar7;
      _Var10.len = buf_spill.cap;
      _Var10.array = (uint8 *)buf_spill.len;
      _Var10.cap = uVar4;
      return _Var10;
    }
  }
  else {
    strconv_IsPrint(0);
    puVar8 = (uint16 *)buf.len;
    if (local_80 != '\0') {
LAB_0052674e:
                    /* Unresolved local var: int n@[???] */
      p.len = (int)puVar8;
      p.array = runeTmp;
      p.cap._0_4_ = r_spill;
      p.cap._4_4_ = 0;
      unicode_utf8_EncodeRune(p,(int32)uVar9);
      if (4 < local_68) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if ((ulong)buf_spill.cap < buf_spill.len + local_68) {
        old_02.len = (int)buf_spill.array;
        old_02.array = (void *)buf_spill.cap;
        old_02.cap = uVar9;
        runtime_growslice((runtime__type *)buf_spill.len,old_02,uVar5);
        buf_spill.cap = (int)local_50;
      }
      runtime_memmove();
      _Var12.len = buf_spill.cap;
      _Var12.array = (uint8 *)buf_spill.cap;
      _Var12.cap = local_68;
      return _Var12;
    }
                    /* Unresolved local var: int i@[???] */
    if ((graphicOnly_spill) && (r_spill < 0x10000)) {
      uVar5 = 0;
      uVar4 = strconv_isGraphic.len;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: int h@[???] */
      while (uVar6 = uVar4, (long)uVar5 < (long)uVar6) {
        lVar3 = (long)(uVar6 - uVar5) >> 1;
        uVar9 = lVar3 + uVar5;
        if ((ulong)strconv_isGraphic.len <= uVar9) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar4 = uVar9;
        if (strconv_isGraphic.array[uVar9] < (ushort)r_spill) {
          uVar5 = lVar3 + uVar5 + 1;
          uVar4 = uVar6;
          uVar9 = uVar6;
        }
      }
      if ((long)uVar5 < strconv_isGraphic.len) {
        if ((ulong)strconv_isGraphic.len <= uVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        puVar8 = strconv_isGraphic.array;
        if (strconv_isGraphic.array[uVar5] == (ushort)r_spill) goto LAB_0052674e;
      }
    }
  }
  if (r_spill < 10) {
    if (r_spill == 7) {
      prVar2 = (runtime__type *)(buf_spill.len + 2);
      if ((ulong)buf_spill.cap < prVar2) {
        old_05.len = (int)prVar2;
        old_05.array = buf_spill.array;
        old_05.cap = uVar9;
        runtime_growslice((runtime__type *)buf_spill.len,old_05,uVar5);
        buf_spill.array = local_60;
      }
      (buf_spill.array + buf_spill.len)[0] = 0x5c;
      (buf_spill.array + buf_spill.len)[1] = 0x61;
      goto LAB_00526ea8;
    }
    if (r_spill == 8) {
      prVar2 = (runtime__type *)(buf_spill.len + 2);
      if ((ulong)buf_spill.cap < prVar2) {
        old_04.len = (int)prVar2;
        old_04.array = buf_spill.array;
        old_04.cap = uVar9;
        runtime_growslice((runtime__type *)buf_spill.len,old_04,uVar5);
        buf_spill.array = local_60;
      }
      (buf_spill.array + buf_spill.len)[0] = 0x5c;
      (buf_spill.array + buf_spill.len)[1] = 0x62;
      goto LAB_00526ea8;
    }
    if (r_spill == 9) {
      prVar2 = (runtime__type *)(buf_spill.len + 2);
      if ((ulong)buf_spill.cap < prVar2) {
        old_03.len = (int)prVar2;
        old_03.array = buf_spill.array;
        old_03.cap = uVar9;
        runtime_growslice((runtime__type *)buf_spill.len,old_03,uVar5);
        buf_spill.array = local_60;
      }
      (buf_spill.array + buf_spill.len)[0] = 0x5c;
      (buf_spill.array + buf_spill.len)[1] = 0x74;
      goto LAB_00526ea8;
    }
  }
  else {
    if (r_spill < 0xc) {
      if (r_spill == 10) {
        prVar2 = (runtime__type *)(buf_spill.len + 2);
        if ((ulong)buf_spill.cap < prVar2) {
          old_13.len = (int)prVar2;
          old_13.array = buf_spill.array;
          old_13.cap = uVar9;
          runtime_growslice((runtime__type *)buf_spill.len,old_13,uVar5);
          buf_spill.array = local_60;
        }
        (buf_spill.array + buf_spill.len)[0] = 0x5c;
        (buf_spill.array + buf_spill.len)[1] = 0x6e;
      }
      else {
        prVar2 = (runtime__type *)(buf_spill.len + 2);
        if ((ulong)buf_spill.cap < prVar2) {
          old_14.len = (int)prVar2;
          old_14.array = buf_spill.array;
          old_14.cap = uVar9;
          runtime_growslice((runtime__type *)buf_spill.len,old_14,uVar5);
          buf_spill.array = local_60;
        }
        (buf_spill.array + buf_spill.len)[0] = 0x5c;
        (buf_spill.array + buf_spill.len)[1] = 0x76;
      }
      goto LAB_00526ea8;
    }
    if (r_spill == 0xc) {
      prVar2 = (runtime__type *)(buf_spill.len + 2);
      if ((ulong)buf_spill.cap < prVar2) {
        old_12.len = (int)prVar2;
        old_12.array = buf_spill.array;
        old_12.cap = uVar9;
        runtime_growslice((runtime__type *)buf_spill.len,old_12,uVar5);
        buf_spill.array = local_60;
      }
      (buf_spill.array + buf_spill.len)[0] = 0x5c;
      (buf_spill.array + buf_spill.len)[1] = 0x66;
      goto LAB_00526ea8;
    }
    if (r_spill == 0xd) {
      prVar2 = (runtime__type *)(buf_spill.len + 2);
      if ((ulong)buf_spill.cap < prVar2) {
        old_11.len = (int)prVar2;
        old_11.array = buf_spill.array;
        old_11.cap = uVar9;
        runtime_growslice((runtime__type *)buf_spill.len,old_11,uVar5);
        buf_spill.array = local_60;
      }
      (buf_spill.array + buf_spill.len)[0] = 0x5c;
      (buf_spill.array + buf_spill.len)[1] = 0x72;
      goto LAB_00526ea8;
    }
  }
  if (r_spill < 0x20) {
    uVar5 = buf_spill.len + 2;
    if ((ulong)buf_spill.cap < uVar5) {
      old_08.len = uVar5;
      old_08.array = (void *)buf_spill.cap;
      old_08.cap = uVar9;
      runtime_growslice((runtime__type *)buf_spill.len,old_08,(int)buf_spill.array);
      buf_spill.cap = (int)local_50;
      buf_spill.array = local_60;
    }
    (buf_spill.array + buf_spill.len)[0] = 0x5c;
    (buf_spill.array + buf_spill.len)[1] = 0x78;
    prVar2 = (runtime__type *)(buf_spill.len + 3);
    uVar1 = (&DAT_002992b5)[bVar7 >> 4];
    if ((ulong)buf_spill.cap < prVar2) {
      old_09.len = uVar5;
      old_09.array = (void *)buf_spill.cap;
      old_09.cap = (int)prVar2;
      runtime_growslice((runtime__type *)&DAT_00225720,old_09,(int)buf_spill.array);
      prVar2 = (runtime__type *)(local_58 + 1);
      buf_spill.cap = (int)local_50;
      buf_spill.array = local_60;
    }
    buf_spill.array[buf_spill.len + 2] = uVar1;
    buf_spill.len = (long)&prVar2->size + 1;
    uVar1 = (&DAT_002992b5)[r_spill & 0xf];
    if ((ulong)buf_spill.cap < (ulong)buf_spill.len) {
      old_10.len = (int)&DAT_00225720;
      old_10.array = (void *)buf_spill.cap;
      old_10.cap = (int)prVar2;
      runtime_growslice((runtime__type *)buf_spill.len,old_10,(int)buf_spill.array);
      buf_spill.len = local_58 + 1;
      buf_spill.array = local_60;
    }
    buf_spill.array[(long)prVar2] = uVar1;
    prVar2 = (runtime__type *)buf_spill.len;
  }
  else {
    if (r_spill < 0x110000) {
      if (0xffff < r_spill) {
        prVar2 = (runtime__type *)(buf_spill.len + 2);
        if ((ulong)buf_spill.cap < prVar2) {
          old_07.len = (int)&DAT_00225720;
          old_07.array = prVar2;
          old_07.cap = uVar9;
          runtime_growslice((runtime__type *)buf_spill.len,old_07,buf_spill.cap);
                    /* Unresolved local var: int s@[???] */
          buf_spill.array = local_60;
          buf_spill.cap = (int)local_50;
        }
        (buf_spill.array + buf_spill.len)[0] = 0x5c;
        (buf_spill.array + buf_spill.len)[1] = 0x55;
        buf_spill.len = (int)prVar2;
        for (lVar3 = 0x1c; prVar2 = (runtime__type *)buf_spill.len, -1 < lVar3; lVar3 = lVar3 + -4)
        {
          prVar2 = (runtime__type *)((long)&((runtime__type *)buf_spill.len)->size + 1);
          uVar1 = (&DAT_002992b5)[r_spill >> ((byte)lVar3 & 0x1f) & 0xf];
          if ((ulong)buf_spill.cap < prVar2) {
            old_15.len = lVar3;
            old_15.array = (void *)buf_spill.len;
            old_15.cap = (int)buf_spill.array;
            runtime_growslice((runtime__type *)&DAT_00225720,old_15,buf_spill.cap);
            prVar2 = (runtime__type *)(local_58 + 1);
            buf_spill.cap = (int)local_50;
            buf_spill.array = local_60;
          }
          buf_spill.array[buf_spill.len] = uVar1;
          buf_spill.len = (int)prVar2;
        }
        goto LAB_00526ea8;
      }
    }
    else {
      r_spill = 0xfffd;
    }
                    /* Unresolved local var: int s@[???] */
    prVar2 = (runtime__type *)(buf_spill.len + 2);
    if ((ulong)buf_spill.cap < prVar2) {
      old_06.len = (int)&DAT_00225720;
      old_06.array = prVar2;
      old_06.cap = uVar9;
      runtime_growslice((runtime__type *)buf_spill.len,old_06,buf_spill.cap);
      buf_spill.array = local_60;
      buf_spill.cap = (int)local_50;
    }
    (buf_spill.array + buf_spill.len)[0] = 0x5c;
    (buf_spill.array + buf_spill.len)[1] = 0x75;
    buf_spill.len = (int)prVar2;
    for (lVar3 = 0xc; prVar2 = (runtime__type *)buf_spill.len, -1 < lVar3; lVar3 = lVar3 + -4) {
      prVar2 = (runtime__type *)((long)&((runtime__type *)buf_spill.len)->size + 1);
      uVar1 = (&DAT_002992b5)[r_spill >> ((byte)lVar3 & 0x1f) & 0xf];
      if ((ulong)buf_spill.cap < prVar2) {
        old_16.len = lVar3;
        old_16.array = (void *)buf_spill.len;
        old_16.cap = (int)buf_spill.array;
        runtime_growslice((runtime__type *)&DAT_00225720,old_16,buf_spill.cap);
        prVar2 = (runtime__type *)(local_58 + 1);
        buf_spill.cap = (int)local_50;
        buf_spill.array = local_60;
      }
      buf_spill.array[buf_spill.len] = uVar1;
      buf_spill.len = (int)prVar2;
    }
  }
LAB_00526ea8:
  _Var13.len = (int)buf_spill.array;
  _Var13.array = (uint8 *)buf_spill.len;
  _Var13.cap = (int)prVar2;
  return _Var13;
}

