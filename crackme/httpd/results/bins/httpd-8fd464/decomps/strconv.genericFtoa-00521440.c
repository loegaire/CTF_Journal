
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.genericFtoa([]uint8 dst, float64 val, uint8 fmt, int prec,
   int bitSize, []uint8 ~r5) */

__uint8 strconv_genericFtoa(__uint8 dst,float64 val,uint8 fmt,int prec,int bitSize)

{
  strconv_decimalSlice *psVar1;
  strconv_floatInfo *psVar2;
  long lVar3;
  strconv_floatInfo *psVar4;
  strconv_floatInfo *flt;
  undefined *puVar5;
  strconv_floatInfo *psVar6;
  byte bVar7;
  strconv_floatInfo *psVar8;
  ulong uVar9;
  undefined8 *mant;
  undefined1 *puVar11;
  undefined1 *unaff_RBP;
  long lVar12;
  undefined8 *exp;
  strconv_floatInfo *flt_00;
  ulong exp_00;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  interface___ e;
  runtime_slice rVar16;
  __uint8 _Var17;
  __uint8 _Var18;
  __uint8 _Var19;
  __uint8 dst_00;
  __uint8 _Var20;
  __uint8 dst_01;
  __uint8 _Var21;
  __uint8 dst_02;
  __uint8 _Var22;
  __uint8 dst_03;
  __uint8 _Var23;
  __uint8 dst_spill;
  float64 val_spill;
  uint8 fmt_spill;
  int digits;
  int bitSize_spill;
  ulong uVar10;
  
  e.data = (void *)dst.len;
  do {
                    /* Unresolved local var: uint64 bits@[???]
                       Unresolved local var: strconv.floatInfo * flt@[???]
                       Unresolved local var: bool neg@[???]
                       Unresolved local var: int exp@[???]
                       Unresolved local var: uint64 mant@[???]
                       Unresolved local var: bool ok@[???]
                       Unresolved local var: strconv.decimalSlice digs@[???] */
    puVar11 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0xb8)) {
      puVar11 = (undefined1 *)((long)register0x00000020 + -0x138);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar3 = *(long *)((long)register0x00000020 + 0x38);
      if (lVar3 == 0x20) {
        psVar8 = (strconv_floatInfo *)
                 (ulong)(uint)(float)*(double *)((long)register0x00000020 + 0x20);
        flt = &strconv_float32info;
        goto LAB_005214bc;
      }
      if (lVar3 == 0x40) break;
      *(undefined **)((long)register0x00000020 + -0x138) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x130) = strconv__stmp_10;
      *(undefined8 *)((long)register0x00000020 + -0x140) = 0x521c9a;
      e._type = (runtime__type *)strconv__stmp_10;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar11 + -8) = 0x521ca5;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar11;
  } while( true );
  psVar8 = *(strconv_floatInfo **)((long)register0x00000020 + 0x20);
  flt = &strconv_float64info;
LAB_005214bc:
  _Var18.cap = flt->mantbits;
                    /* Unresolved local var: string s@[???] */
  uVar10 = flt->expbits;
  exp = (undefined8 *)-(ulong)(uVar10 + _Var18.cap < 0x40);
  exp_00 = -(ulong)(_Var18.cap < 0x40);
  uVar9 = (ulong)psVar8 >> ((byte)(uVar10 + _Var18.cap) & 0x3f);
  uVar10 = (1L << ((byte)uVar10 & 0x3f) & -(ulong)(uVar10 < 0x40)) - 1;
  uVar13 = (ulong)psVar8 >> ((byte)_Var18.cap & 0x3f) & exp_00 & uVar10;
  _Var18.len = 1L << ((byte)_Var18.cap & 0x3f) & exp_00;
  flt_00 = (strconv_floatInfo *)(_Var18.len - 1 & (ulong)psVar8);
  if (uVar13 == uVar10) {
    if (flt_00 == (strconv_floatInfo *)0x0) {
      if ((uVar9 & (ulong)exp) == 0) {
        lVar3 = 4;
        puVar5 = &DAT_00287de1;
      }
      else {
        lVar3 = 4;
        puVar5 = &DAT_00287de5;
      }
    }
    else {
      lVar3 = 3;
      puVar5 = &DAT_00287960;
    }
    lVar14 = *(long *)((long)register0x00000020 + 0x10);
    uVar10 = lVar14 + lVar3;
    *(ulong *)((long)register0x00000020 + -0x90) = uVar10;
    _Var18.cap = *(ulong *)((long)register0x00000020 + 0x18);
    if (_Var18.cap < uVar10) {
      *(long *)((long)register0x00000020 + -0xb8) = lVar3;
      *(undefined **)((long)register0x00000020 + -0x50) = puVar5;
      *(undefined **)((long)register0x00000020 + -0x138) = &DAT_00225720;
      *(runtime__type **)((long)register0x00000020 + -0x130) =
           *(runtime__type **)((long)register0x00000020 + 8);
      *(long *)((long)register0x00000020 + -0x128) = lVar14;
      *(ulong *)((long)register0x00000020 + -0x120) = _Var18.cap;
      *(ulong *)((long)register0x00000020 + -0x118) = uVar10;
      *(undefined8 *)((long)register0x00000020 + -0x140) = 0x5215cb;
      rVar16.len = (int)puVar5;
      rVar16.array = (void *)uVar10;
      rVar16.cap = (int)psVar8;
      rVar16 = runtime_growslice(*(runtime__type **)((long)register0x00000020 + 8),rVar16,_Var18.cap
                                );
      uVar10 = rVar16.len;
      lVar12 = *(long *)((long)register0x00000020 + -0x110);
      _Var18.cap = *(ulong *)((long)register0x00000020 + -0x100);
      lVar14 = *(long *)((long)register0x00000020 + 0x10);
      lVar3 = *(long *)((long)register0x00000020 + -0xb8);
      puVar5 = *(undefined **)((long)register0x00000020 + -0x50);
    }
    else {
      lVar12 = *(long *)((long)register0x00000020 + 8);
    }
    *(ulong *)((long)register0x00000020 + -0x98) = _Var18.cap;
    *(long *)((long)register0x00000020 + -0x40) = lVar12;
    *(long *)((long)register0x00000020 + -0x138) = lVar14 + lVar12;
    *(undefined **)((long)register0x00000020 + -0x130) = puVar5;
    *(long *)((long)register0x00000020 + -0x128) = lVar3;
    *(undefined8 *)((long)register0x00000020 + -0x140) = 0x521619;
    runtime_memmove();
    *(undefined8 *)((long)register0x00000020 + 0x40) =
         *(undefined8 *)((long)register0x00000020 + -0x40);
    *(undefined8 *)((long)register0x00000020 + 0x48) =
         *(undefined8 *)((long)register0x00000020 + -0x90);
    *(undefined8 *)((long)register0x00000020 + 0x50) =
         *(undefined8 *)((long)register0x00000020 + -0x98);
    _Var17.len = uVar10;
    _Var17.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + -0x98);
    _Var17.cap = (int)puVar5;
    return _Var17;
  }
  if (uVar13 == 0) {
    uVar13 = 1;
  }
  else {
    flt_00 = (strconv_floatInfo *)((ulong)flt_00 | _Var18.len);
  }
  bVar15 = (uVar9 & (ulong)exp) != 0;
  _Var18.cap = CONCAT71((int7)(_Var18.cap >> 8),bVar15);
  lVar14 = uVar13 + flt->bias;
  bVar7 = *(byte *)((long)register0x00000020 + 0x28);
  if (bVar7 == 0x62) {
    *(undefined8 *)((long)register0x00000020 + -0x138) =
         *(undefined8 *)((long)register0x00000020 + 8);
    *(undefined8 *)((long)register0x00000020 + -0x130) =
         *(undefined8 *)((long)register0x00000020 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x128) =
         *(undefined8 *)((long)register0x00000020 + 0x18);
    *(bool *)((long)register0x00000020 + -0x120) = bVar15;
    *(strconv_floatInfo **)((long)register0x00000020 + -0x118) = flt_00;
    *(long *)((long)register0x00000020 + -0x110) = lVar14;
    *(strconv_floatInfo **)((long)register0x00000020 + -0x108) = flt;
    *(undefined8 *)((long)register0x00000020 + -0x140) = 0x521c47;
    dst_03.len = _Var18.len;
    dst_03.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + 0x18);
    dst_03.cap = _Var18.cap;
    _Var18 = strconv_fmtB(dst_03,SUB81(psVar8,0),uVar10,(int)exp,flt_00);
    _Var23.len = _Var18.len;
    *(undefined8 *)((long)register0x00000020 + 0x40) =
         *(undefined8 *)((long)register0x00000020 + -0x100);
    *(int *)((long)register0x00000020 + 0x48) = *(int *)((long)register0x00000020 + -0xf8);
    *(undefined8 *)((long)register0x00000020 + 0x50) =
         *(undefined8 *)((long)register0x00000020 + -0xf0);
    _Var23.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + -0x100);
    _Var23.cap = *(int *)((long)register0x00000020 + -0xf8);
    return _Var23;
  }
  if ((bVar7 == 0x78) || (bVar7 == 0x58)) {
    *(undefined8 *)((long)register0x00000020 + -0x138) =
         *(undefined8 *)((long)register0x00000020 + 8);
    *(undefined8 *)((long)register0x00000020 + -0x130) =
         *(undefined8 *)((long)register0x00000020 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x128) =
         *(undefined8 *)((long)register0x00000020 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x120) =
         *(undefined8 *)((long)register0x00000020 + 0x30);
    *(byte *)((long)register0x00000020 + -0x118) = bVar7;
    *(bool *)((long)register0x00000020 + -0x117) = bVar15;
    *(strconv_floatInfo **)((long)register0x00000020 + -0x110) = flt_00;
    *(long *)((long)register0x00000020 + -0x108) = lVar14;
    *(strconv_floatInfo **)((long)register0x00000020 + -0x100) = flt;
    *(undefined8 *)((long)register0x00000020 + -0x140) = 0x5216e6;
    _Var18.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + 0x30);
    _Var18 = strconv_fmtX(_Var18,(int)psVar8,(uint8)uVar10,SUB81(exp,0),(uint64)flt_00,exp_00,flt);
    _Var19.len = _Var18.len;
    *(undefined8 *)((long)register0x00000020 + 0x40) =
         *(undefined8 *)((long)register0x00000020 + -0xf8);
    *(int *)((long)register0x00000020 + 0x48) = *(int *)((long)register0x00000020 + -0xf0);
    *(undefined8 *)((long)register0x00000020 + 0x50) =
         *(undefined8 *)((long)register0x00000020 + -0xe8);
    _Var19.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + -0xf8);
    _Var19.cap = *(int *)((long)register0x00000020 + -0xf0);
    return _Var19;
  }
  if (strconv_optimize == false) {
    *(undefined8 *)((long)register0x00000020 + -0x138) =
         *(undefined8 *)((long)register0x00000020 + 8);
    *(undefined8 *)((long)register0x00000020 + -0x130) =
         *(undefined8 *)((long)register0x00000020 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x128) =
         *(undefined8 *)((long)register0x00000020 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x120) =
         *(undefined8 *)((long)register0x00000020 + 0x30);
    *(byte *)((long)register0x00000020 + -0x118) = bVar7;
    *(bool *)((long)register0x00000020 + -0x117) = bVar15;
    *(strconv_floatInfo **)((long)register0x00000020 + -0x110) = flt_00;
    *(long *)((long)register0x00000020 + -0x108) = lVar14;
    *(strconv_floatInfo **)((long)register0x00000020 + -0x100) = flt;
    *(undefined8 *)((long)register0x00000020 + -0x140) = 0x521bd2;
    dst_02.len = _Var18.len;
    dst_02.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + 0x30);
    dst_02.cap = _Var18.cap;
    _Var18 = strconv_bigFtoa(dst_02,(int)psVar8,(uint8)uVar10,SUB81(exp,0),(uint64)flt_00,exp_00,flt
                            );
    _Var22.len = _Var18.len;
    *(undefined8 *)((long)register0x00000020 + 0x40) =
         *(undefined8 *)((long)register0x00000020 + -0xf8);
    *(int *)((long)register0x00000020 + 0x48) = *(int *)((long)register0x00000020 + -0xf0);
    *(undefined8 *)((long)register0x00000020 + 0x50) =
         *(undefined8 *)((long)register0x00000020 + -0xe8);
    _Var22.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + -0xf8);
    _Var22.cap = *(int *)((long)register0x00000020 + -0xf0);
    return _Var22;
  }
  *(bool *)((long)register0x00000020 + -0xb9) = bVar15;
  mant = (undefined8 *)((long)register0x00000020 + -0x38);
  *mant = 0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
  psVar4 = *(strconv_floatInfo **)((long)register0x00000020 + 0x30);
  if (-1 < (long)psVar4) {
    psVar6 = psVar4;
    if (bVar7 == 0x66) {
      mant = (undefined8 *)0x0;
    }
    else {
                    /* Unresolved local var: uint8[24] buf@[???] */
      psVar8 = psVar4;
      if (bVar7 < 0x48) {
        if (bVar7 == 0x45) {
LAB_0052179a:
          psVar8 = (strconv_floatInfo *)((long)&psVar4->mantbits + 1);
        }
        else if (bVar7 == 0x47) {
LAB_005217af:
          if (psVar4 == (strconv_floatInfo *)0x0) {
            psVar6 = (strconv_floatInfo *)0x1;
            psVar8 = (strconv_floatInfo *)0x1;
          }
        }
      }
      else {
        if (bVar7 == 0x65) goto LAB_0052179a;
        if (bVar7 == 0x67) goto LAB_005217af;
      }
      *(strconv_floatInfo **)((long)register0x00000020 + -0x48) = flt;
      *(long *)((long)register0x00000020 + -0xa8) = lVar14;
      *(strconv_floatInfo **)((long)register0x00000020 + -0xb0) = flt_00;
      *(strconv_floatInfo **)((long)register0x00000020 + -0x90) = psVar6;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
      exp = (undefined8 *)((long)register0x00000020 + -0x80);
      *exp = 0;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
      if ((lVar3 == 0x20) && ((long)psVar8 < 10)) {
        *(undefined1 **)((long)register0x00000020 + -0x38) =
             (undefined1 *)((long)register0x00000020 + -0x88);
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x18;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x18;
        psVar1 = (strconv_decimalSlice *)flt->mantbits;
        *(undefined8 **)((long)register0x00000020 + -0x138) = mant;
        *(int *)((long)register0x00000020 + -0x130) = (int)flt_00;
        *(long *)((long)register0x00000020 + -0x128) = lVar14 - (long)psVar1;
        *(strconv_floatInfo **)((long)register0x00000020 + -0x120) = psVar8;
        *(undefined8 *)((long)register0x00000020 + -0x140) = 0x521865;
        strconv_ryuFtoaFixed32(psVar1,(uint32)mant,_Var18.cap,(int)psVar8);
        psVar4 = *(strconv_floatInfo **)((long)register0x00000020 + 0x30);
        _Var18.cap = (ulong)*(byte *)((long)register0x00000020 + -0xb9);
        bVar7 = *(byte *)((long)register0x00000020 + 0x28);
        flt_00 = *(strconv_floatInfo **)((long)register0x00000020 + -0xb0);
        flt = *(strconv_floatInfo **)((long)register0x00000020 + -0x48);
        lVar14 = *(long *)((long)register0x00000020 + -0xa8);
        mant = (undefined8 *)0x1;
        psVar6 = *(strconv_floatInfo **)((long)register0x00000020 + -0x90);
      }
      else {
        psVar2 = psVar8;
        if ((long)psVar8 < 0x13) {
          *(strconv_floatInfo **)((long)register0x00000020 + -0xa0) = psVar8;
          *(undefined1 **)((long)register0x00000020 + -0x38) =
               (undefined1 *)((long)register0x00000020 + -0x88);
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x18;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x18;
          psVar1 = (strconv_decimalSlice *)flt->mantbits;
          *(undefined8 **)((long)register0x00000020 + -0x138) = mant;
          *(strconv_floatInfo **)((long)register0x00000020 + -0x130) = flt_00;
          *(long *)((long)register0x00000020 + -0x128) = lVar14 - (long)psVar1;
          *(strconv_floatInfo **)((long)register0x00000020 + -0x120) = psVar8;
          *(undefined8 *)((long)register0x00000020 + -0x140) = 0x5218fd;
          strconv_ryuFtoaFixed64(psVar1,(uint64)mant,_Var18.cap,(int)psVar8);
          psVar2 = *(strconv_floatInfo **)((long)register0x00000020 + -0xa0);
          psVar4 = *(strconv_floatInfo **)((long)register0x00000020 + 0x30);
          _Var18.cap = (ulong)*(byte *)((long)register0x00000020 + -0xb9);
          bVar7 = *(byte *)((long)register0x00000020 + 0x28);
          psVar6 = *(strconv_floatInfo **)((long)register0x00000020 + -0x90);
          flt_00 = *(strconv_floatInfo **)((long)register0x00000020 + -0xb0);
          flt = *(strconv_floatInfo **)((long)register0x00000020 + -0x48);
          lVar14 = *(long *)((long)register0x00000020 + -0xa8);
        }
        mant = (undefined8 *)CONCAT71((int7)((ulong)mant >> 8),(long)psVar2 < 0x13);
      }
    }
    if ((char)mant == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x138) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x130) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x128) =
           *(undefined8 *)((long)register0x00000020 + 0x18);
      *(strconv_floatInfo **)((long)register0x00000020 + -0x120) = psVar6;
      *(byte *)((long)register0x00000020 + -0x118) = bVar7;
      *(char *)((long)register0x00000020 + -0x117) = (char)_Var18.cap;
      *(strconv_floatInfo **)((long)register0x00000020 + -0x110) = flt_00;
      *(long *)((long)register0x00000020 + -0x108) = lVar14;
      *(strconv_floatInfo **)((long)register0x00000020 + -0x100) = flt;
      *(undefined8 *)((long)register0x00000020 + -0x140) = 0x52199b;
      dst_00.len = (int)mant;
      dst_00.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + 0x18);
      dst_00.cap = _Var18.cap;
      _Var18 = strconv_bigFtoa(dst_00,(int)psVar8,(uint8)psVar6,SUB81(exp,0),(uint64)flt_00,exp_00,
                               flt);
      _Var20.len = _Var18.len;
      *(undefined8 *)((long)register0x00000020 + 0x40) =
           *(undefined8 *)((long)register0x00000020 + -0xf8);
      *(int *)((long)register0x00000020 + 0x48) = *(int *)((long)register0x00000020 + -0xf0);
      *(undefined8 *)((long)register0x00000020 + 0x50) =
           *(undefined8 *)((long)register0x00000020 + -0xe8);
      _Var20.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + -0xf8);
      _Var20.cap = *(int *)((long)register0x00000020 + -0xf0);
      return _Var20;
    }
    bVar15 = (long)psVar4 < 0;
    goto LAB_00521ae8;
  }
                    /* Unresolved local var: uint8[32] buf@[???] */
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
  *(undefined8 **)((long)register0x00000020 + -0x38) =
       (undefined8 *)((long)register0x00000020 + -0x70);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x20;
  *(undefined8 *)((long)register0x00000020 + -0x28) = 0x20;
  psVar1 = (strconv_decimalSlice *)flt->mantbits;
  *(undefined8 **)((long)register0x00000020 + -0x138) = mant;
  *(strconv_floatInfo **)((long)register0x00000020 + -0x130) = flt_00;
  *(long *)((long)register0x00000020 + -0x128) = lVar14 - (long)psVar1;
  *(strconv_floatInfo **)((long)register0x00000020 + -0x120) = flt;
  *(undefined8 *)((long)register0x00000020 + -0x140) = 0x521a30;
  strconv_ryuFtoaShortest(psVar1,(uint64)mant,(int)((long)register0x00000020 + -0x60),psVar8);
  bVar7 = *(byte *)((long)register0x00000020 + 0x28);
  if (bVar7 < 0x48) {
    if (bVar7 == 0x45) {
LAB_00521a66:
      psVar6 = (strconv_floatInfo *)0x0;
      if (0 < *(long *)((long)register0x00000020 + -0x20) + -1) {
        psVar6 = (strconv_floatInfo *)(*(long *)((long)register0x00000020 + -0x20) + -1);
      }
      bVar15 = *(long *)((long)register0x00000020 + 0x30) < 0;
    }
    else if (bVar7 == 0x47) {
      lVar3 = *(long *)((long)register0x00000020 + 0x30);
LAB_00521ac6:
      bVar15 = lVar3 < 0;
      psVar6 = *(strconv_floatInfo **)((long)register0x00000020 + -0x20);
    }
    else {
      psVar6 = *(strconv_floatInfo **)((long)register0x00000020 + 0x30);
LAB_00521adb:
      bVar15 = (long)psVar6 < 0;
    }
  }
  else {
    if (bVar7 == 0x65) goto LAB_00521a66;
    if (bVar7 != 0x66) {
      if (bVar7 != 0x67) {
        psVar6 = *(strconv_floatInfo **)((long)register0x00000020 + 0x30);
        goto LAB_00521adb;
      }
      lVar3 = *(long *)((long)register0x00000020 + 0x30);
      goto LAB_00521ac6;
    }
    psVar6 = (strconv_floatInfo *)0x0;
    if (0 < *(long *)((long)register0x00000020 + -0x20) -
            *(long *)((long)register0x00000020 + -0x18)) {
      psVar6 = (strconv_floatInfo *)
               (*(long *)((long)register0x00000020 + -0x20) -
               *(long *)((long)register0x00000020 + -0x18));
    }
    bVar15 = *(long *)((long)register0x00000020 + 0x30) < 0;
  }
  _Var18.cap = (ulong)*(byte *)((long)register0x00000020 + -0xb9);
LAB_00521ae8:
  *(undefined8 *)((long)register0x00000020 + -0x138) = *(undefined8 *)((long)register0x00000020 + 8)
  ;
  *(undefined8 *)((long)register0x00000020 + -0x130) =
       *(undefined8 *)((long)register0x00000020 + 0x10);
  *(undefined8 *)((long)register0x00000020 + -0x128) =
       *(undefined8 *)((long)register0x00000020 + 0x18);
  *(bool *)((long)register0x00000020 + -0x120) = bVar15;
  *(char *)((long)register0x00000020 + -0x11f) = (char)_Var18.cap;
  *(undefined8 *)((long)register0x00000020 + -0x118) =
       *(undefined8 *)((long)register0x00000020 + -0x38);
  *(undefined8 *)((long)register0x00000020 + -0x110) =
       *(undefined8 *)((long)register0x00000020 + -0x30);
  *(undefined8 *)((long)register0x00000020 + -0x108) =
       *(undefined8 *)((long)register0x00000020 + -0x28);
  *(undefined8 *)((long)register0x00000020 + -0x100) =
       *(undefined8 *)((long)register0x00000020 + -0x20);
  *(undefined8 *)((long)register0x00000020 + -0xf8) =
       *(undefined8 *)((long)register0x00000020 + -0x18);
  *(undefined8 *)((long)register0x00000020 + -0xf0) =
       *(undefined8 *)((long)register0x00000020 + -0x10);
  *(strconv_floatInfo **)((long)register0x00000020 + -0xe8) = psVar6;
  *(byte *)((long)register0x00000020 + -0xe0) = bVar7;
  *(undefined8 *)((long)register0x00000020 + -0x140) = 0x521b4c;
  dst_01.len = (int)mant;
  dst_01.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + 0x18);
  dst_01.cap = _Var18.cap;
  _Var18 = strconv_formatDigits
                     (dst_01,SUB81(psVar8,0),SUB81(psVar6,0),
                      *(strconv_decimalSlice *)((long)register0x00000020 + -0x138),(int)exp,
                      (uint8)flt_00);
  _Var21.len = _Var18.len;
  *(undefined8 *)((long)register0x00000020 + 0x40) =
       *(undefined8 *)((long)register0x00000020 + -0xd8);
  *(int *)((long)register0x00000020 + 0x48) = *(int *)((long)register0x00000020 + -0xd0);
  *(undefined8 *)((long)register0x00000020 + 0x50) =
       *(undefined8 *)((long)register0x00000020 + -200);
  _Var21.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + -0xd8);
  _Var21.cap = *(int *)((long)register0x00000020 + -0xd0);
  return _Var21;
}

