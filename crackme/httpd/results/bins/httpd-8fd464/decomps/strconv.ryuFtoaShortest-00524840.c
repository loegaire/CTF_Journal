
/* WARNING: Unknown calling convention */

void strconv_ryuFtoaShortest(strconv_decimalSlice *d,uint64 mant,int exp,strconv_floatInfo *flt)

{
  strconv_floatInfo *psVar1;
  strconv_decimalSlice *psVar2;
  strconv_decimalSlice *d_00;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  uint64 uVar6;
  ulong uVar7;
  char cVar8;
  uint uVar9;
  long lVar10;
  void *pvVar11;
  uint64 uVar12;
  undefined1 *puVar13;
  undefined1 *unaff_RBP;
  ulong in_RSI;
  undefined1 *puVar14;
  undefined1 *upper;
  byte cup;
  ulong in_R8;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  interface___ e;
  strconv_decimalSlice *d_spill;
  uint64 mant_spill;
  int exp_spill;
  strconv_floatInfo *flt_spill;
  
  do {
                    /* Unresolved local var: uint64 ml@[???]
                       Unresolved local var: uint64 mc@[???]
                       Unresolved local var: uint64 mu@[???]
                       Unresolved local var: int e2@[???]
                       Unresolved local var: int q@[???]
                       Unresolved local var: uint64 dl@[???]
                       Unresolved local var: uint64 dc@[???]
                       Unresolved local var: uint64 du@[???]
                       Unresolved local var: bool dl0@[???]
                       Unresolved local var: bool dc0@[???]
                       Unresolved local var: bool du0@[???]
                       Unresolved local var: uint extra@[???]
                       Unresolved local var: uint64 extraMask@[???]
                       Unresolved local var: uint64 fracc@[???]
                       Unresolved local var: uint64 fracu@[???]
                       Unresolved local var: bool uok@[???]
                       Unresolved local var: bool cup@[???]
                       Unresolved local var: bool c0@[???]
                       Unresolved local var: int ~R0@[???] */
    puVar13 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x10)) {
      puVar13 = (undefined1 *)((long)register0x00000020 + -0x90);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar3 = *(ulong *)((long)register0x00000020 + 0x10);
      if (uVar3 == 0) {
        lVar10 = *(long *)((long)register0x00000020 + 8);
        *(undefined8 *)(lVar10 + 0x18) = 0;
        *(undefined8 *)(lVar10 + 0x20) = 0;
        return;
      }
      uVar12 = *(uint64 *)((long)register0x00000020 + 0x18);
      if ((long)uVar12 < 1) {
        lVar10 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> lVar10 & 1) == 0; lVar10 = lVar10 + 1) {
          }
        }
        uVar6 = -uVar12;
        if ((long)uVar6 <= lVar10) {
          *(undefined8 *)((long)register0x00000020 + -0x90) =
               *(undefined8 *)((long)register0x00000020 + 8);
          psVar2 = (strconv_decimalSlice *)(uVar3 >> ((byte)uVar6 & 0x3f) & -(ulong)(uVar6 < 0x40));
          *(strconv_decimalSlice **)((long)register0x00000020 + -0x88) = psVar2;
          *(strconv_decimalSlice **)((long)register0x00000020 + -0x80) = psVar2;
          *(strconv_decimalSlice **)((long)register0x00000020 + -0x78) = psVar2;
          *(undefined2 *)((long)register0x00000020 + -0x70) = 1;
          *(undefined8 *)((long)register0x00000020 + -0x98) = 0x5248d9;
          strconv_ryuDigits(psVar2,uVar12,uVar6,(uint64)flt,SUB81(in_RSI,0),SUB81(in_R8,0));
          return;
        }
      }
      psVar1 = *(strconv_floatInfo **)((long)register0x00000020 + 0x20);
      uVar4 = psVar1->mantbits;
      if ((uVar3 == (-(ulong)(uVar4 < 0x40) & 1L << ((byte)uVar4 & 0x3f))) &&
         (uVar12 != (psVar1->bias - uVar4) + 1)) {
        d_00 = (strconv_decimalSlice *)(uVar3 * 4);
        upper = (undefined1 *)((long)&(d_00->d).array + 2);
        lVar10 = uVar12 - 2;
        psVar2 = d_00;
      }
      else {
        d_00 = (strconv_decimalSlice *)(uVar3 << 1);
        upper = (undefined1 *)(uVar3 * 2 + 1);
        lVar10 = uVar12 - 1;
        psVar2 = (strconv_decimalSlice *)(uVar3 * 2);
      }
      puVar14 = &psVar2[-1].field_0x2f;
      if (lVar10 == 0) {
        *(uint64 *)((long)register0x00000020 + -0x90) = *(uint64 *)((long)register0x00000020 + 8);
        *(undefined1 **)((long)register0x00000020 + -0x88) = puVar14;
        *(strconv_decimalSlice **)((long)register0x00000020 + -0x80) = d_00;
        *(undefined1 **)((long)register0x00000020 + -0x78) = upper;
        *(undefined2 *)((long)register0x00000020 + -0x70) = 1;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x524b4c;
        strconv_ryuDigits(d_00,0,*(uint64 *)((long)register0x00000020 + 8),(uint64)upper,
                          SUB81(puVar14,0),SUB81(in_R8,0));
        return;
      }
      *(undefined1 **)((long)register0x00000020 + -0x40) = puVar14;
      *(strconv_decimalSlice **)((long)register0x00000020 + -0x20) = d_00;
      *(undefined1 **)((long)register0x00000020 + -0x50) = upper;
      *(long *)((long)register0x00000020 + -0x38) = lVar10;
      lVar15 = lVar10 * -0x13441 >> 0x12;
      *(long *)((long)register0x00000020 + -0x58) = lVar15;
      lVar15 = lVar15 + 1;
      *(long *)((long)register0x00000020 + -0x48) = lVar15;
      if (psVar1 == &strconv_float32info) {
        *(int *)((long)register0x00000020 + -0x90) = (int)puVar14;
        *(long *)((long)register0x00000020 + -0x88) = lVar10;
        *(long *)((long)register0x00000020 + -0x80) = lVar15;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x5249a5;
        strconv_mult64bitPow10((uint32)d_00,lVar10,uVar3);
        *(ulong *)((long)register0x00000020 + -0x10) =
             (ulong)*(uint *)((long)register0x00000020 + -0x78);
        *(byte *)((long)register0x00000020 + -0x5a) = *(byte *)((long)register0x00000020 + -0x68);
        *(int *)((long)register0x00000020 + -0x90) =
             (int)*(undefined8 *)((long)register0x00000020 + -0x20);
        *(int *)((long)register0x00000020 + -0x88) = *(int *)((long)register0x00000020 + -0x38);
        *(undefined8 *)((long)register0x00000020 + -0x80) =
             *(undefined8 *)((long)register0x00000020 + -0x48);
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x5249db;
        strconv_mult64bitPow10
                  (*(uint *)((long)register0x00000020 + -0x78),
                   *(int *)((long)register0x00000020 + -0x38),
                   (ulong)*(byte *)((long)register0x00000020 + -0x68));
        *(ulong *)((long)register0x00000020 + -0x18) =
             (ulong)*(uint *)((long)register0x00000020 + -0x78);
        *(byte *)((long)register0x00000020 + -0x59) = *(byte *)((long)register0x00000020 + -0x68);
        *(int *)((long)register0x00000020 + -0x90) =
             (int)*(undefined8 *)((long)register0x00000020 + -0x50);
        *(undefined8 *)((long)register0x00000020 + -0x88) =
             *(undefined8 *)((long)register0x00000020 + -0x38);
        *(int *)((long)register0x00000020 + -0x80) = *(int *)((long)register0x00000020 + -0x48);
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x524a0e;
        strconv_mult64bitPow10
                  (*(uint *)((long)register0x00000020 + -0x78),
                   *(int *)((long)register0x00000020 + -0x48),
                   (ulong)*(byte *)((long)register0x00000020 + -0x68));
        uVar3 = (ulong)*(uint *)((long)register0x00000020 + -0x78);
        lVar10 = *(long *)((long)register0x00000020 + -0x70);
        cVar8 = *(char *)((long)register0x00000020 + -0x68);
        pvVar11 = *(void **)((long)register0x00000020 + -0x10);
        in_RSI = *(ulong *)((long)register0x00000020 + -0x18);
        bVar5 = *(byte *)((long)register0x00000020 + -0x59);
        cup = *(byte *)((long)register0x00000020 + -0x5a);
      }
      else {
        *(undefined1 **)((long)register0x00000020 + -0x90) = puVar14;
        *(long *)((long)register0x00000020 + -0x88) = lVar10;
        *(long *)((long)register0x00000020 + -0x80) = lVar15;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x524a4c;
        strconv_mult128bitPow10((uint64)d_00,lVar10,uVar3);
        *(uint64 *)((long)register0x00000020 + -0x30) =
             *(uint64 *)((long)register0x00000020 + -0x78);
        *(byte *)((long)register0x00000020 + -0x5a) = *(byte *)((long)register0x00000020 + -0x68);
        *(undefined8 *)((long)register0x00000020 + -0x90) =
             *(undefined8 *)((long)register0x00000020 + -0x20);
        *(int *)((long)register0x00000020 + -0x88) = *(int *)((long)register0x00000020 + -0x38);
        *(undefined8 *)((long)register0x00000020 + -0x80) =
             *(undefined8 *)((long)register0x00000020 + -0x48);
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x524a85;
        strconv_mult128bitPow10
                  (*(uint64 *)((long)register0x00000020 + -0x78),
                   *(int *)((long)register0x00000020 + -0x38),
                   (ulong)*(byte *)((long)register0x00000020 + -0x68));
        *(uint64 *)((long)register0x00000020 + -0x28) =
             *(uint64 *)((long)register0x00000020 + -0x78);
        *(byte *)((long)register0x00000020 + -0x59) = *(byte *)((long)register0x00000020 + -0x68);
        *(undefined8 *)((long)register0x00000020 + -0x90) =
             *(undefined8 *)((long)register0x00000020 + -0x50);
        *(undefined8 *)((long)register0x00000020 + -0x88) =
             *(undefined8 *)((long)register0x00000020 + -0x38);
        *(int *)((long)register0x00000020 + -0x80) = *(int *)((long)register0x00000020 + -0x48);
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x524aba;
        strconv_mult128bitPow10
                  (*(uint64 *)((long)register0x00000020 + -0x78),
                   *(int *)((long)register0x00000020 + -0x48),
                   (ulong)*(byte *)((long)register0x00000020 + -0x68));
        uVar3 = *(ulong *)((long)register0x00000020 + -0x78);
        lVar10 = *(long *)((long)register0x00000020 + -0x70);
        cVar8 = *(char *)((long)register0x00000020 + -0x68);
        pvVar11 = *(void **)((long)register0x00000020 + -0x30);
        in_RSI = *(ulong *)((long)register0x00000020 + -0x28);
        bVar5 = *(byte *)((long)register0x00000020 + -0x59);
        cup = *(byte *)((long)register0x00000020 + -0x5a);
      }
      in_R8 = (ulong)cup;
      flt = (strconv_floatInfo *)(ulong)bVar5;
      if (lVar10 < 0) break;
      *(undefined **)((long)register0x00000020 + -0x90) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x88) = strconv__stmp_15;
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x524e05;
      e.data = pvVar11;
      e._type = (runtime__type *)strconv__stmp_15;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar13 + -8) = 0x524e0b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar13;
  } while( true );
  if (0x37 < *(long *)((long)register0x00000020 + -0x48)) {
    cVar8 = '\0';
    flt = (strconv_floatInfo *)0x0;
    cup = 0;
  }
  if (*(long *)((long)register0x00000020 + -0x58) + 0x19U < 0x18) {
    lVar15 = -*(long *)((long)register0x00000020 + -0x48);
                    /* Unresolved local var: int i@[???] */
    if (*(ulong *)((long)register0x00000020 + -0x40) != 0) {
      uVar4 = *(ulong *)((long)register0x00000020 + -0x40);
      for (lVar17 = 0; lVar17 < lVar15; lVar17 = lVar17 + 1) {
        if (uVar4 != (uVar4 / 5) * 5) goto LAB_00524d2c;
        uVar4 = uVar4 / 5;
      }
    }
    cup = 1;
LAB_00524d2c:
                    /* Unresolved local var: int i@[???] */
    if (*(ulong *)((long)register0x00000020 + -0x20) != 0) {
      uVar4 = *(ulong *)((long)register0x00000020 + -0x20);
      for (lVar17 = 0; lVar17 < lVar15; lVar17 = lVar17 + 1) {
        if (uVar4 != (uVar4 / 5) * 5) goto LAB_00524d83;
        uVar4 = uVar4 / 5;
      }
    }
    flt = (strconv_floatInfo *)0x1;
LAB_00524d83:
                    /* Unresolved local var: int i@[???] */
    if (*(ulong *)((long)register0x00000020 + -0x50) != 0) {
      uVar4 = *(ulong *)((long)register0x00000020 + -0x50);
      for (lVar17 = 0; lVar17 < lVar15; lVar17 = lVar17 + 1) {
        if (uVar4 != (uVar4 / 5) * 5) goto LAB_00524b7d;
        uVar4 = uVar4 / 5;
      }
    }
    cVar8 = '\x01';
  }
LAB_00524b7d:
  uVar7 = -lVar10;
  uVar4 = -(ulong)(uVar7 < 0x40);
  bVar5 = (byte)uVar7;
  uVar16 = (1L << (bVar5 & 0x3f) & uVar4) - 1;
  uVar12 = (ulong)pvVar11 >> (bVar5 & 0x3f) & uVar4;
  psVar2 = (strconv_decimalSlice *)(in_RSI >> (bVar5 & 0x3f) & uVar4);
  uVar18 = in_RSI & uVar16;
  uVar4 = uVar3 >> (bVar5 & 0x3f) & uVar4;
  bVar19 = cVar8 == '\0' || (uVar3 & uVar16) != 0;
  if ((cVar8 == '\0') || ((uVar3 & uVar16) != 0)) {
    uVar9 = (uint)*(undefined8 *)((long)register0x00000020 + 0x10);
  }
  else {
    uVar9 = (uint)*(ulong *)((long)register0x00000020 + 0x10);
    bVar19 = (*(ulong *)((long)register0x00000020 + 0x10) & 1) == 0;
  }
  uVar3 = uVar4 - 1;
  if (bVar19) {
    uVar3 = uVar4;
  }
  if ((char)flt == '\0') {
    uVar4 = -(ulong)(uVar7 - 1 < 0x40);
    bVar19 = (uVar18 >> ((byte)(uVar7 - 1) & 0x3f) & uVar4) == 1;
    uVar7 = CONCAT71((int7)(uVar4 >> 8),bVar19) & 0xffffffff;
  }
  else {
    uVar7 = uVar7 - 1;
    uVar4 = 1L << ((byte)uVar7 & 0x3f) & -(ulong)(uVar7 < 0x40);
    if (uVar4 < uVar18) {
      bVar19 = true;
    }
    else if (uVar4 == uVar18) {
      bVar19 = (bool)((byte)psVar2 & 1);
    }
    else {
      bVar19 = false;
    }
  }
  if ((((bool)cup == false) || ((uVar16 & (ulong)pvVar11) != 0)) || ((uVar9 & 1) != 0)) {
    uVar12 = uVar12 + 1;
  }
  if ((char)flt == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = CONCAT71((int7)(uVar7 >> 8),uVar18 == 0);
  }
  *(undefined8 *)((long)register0x00000020 + -0x90) = *(undefined8 *)((long)register0x00000020 + 8);
  *(uint64 *)((long)register0x00000020 + -0x88) = uVar12;
  *(strconv_decimalSlice **)((long)register0x00000020 + -0x80) = psVar2;
  *(ulong *)((long)register0x00000020 + -0x78) = uVar3;
  *(char *)((long)register0x00000020 + -0x70) = (char)uVar6;
  *(bool *)((long)register0x00000020 + -0x6f) = bVar19;
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x524cb8;
  strconv_ryuDigits(psVar2,uVar12,uVar6,(uint64)flt,bVar19,(bool)cup);
  *(long *)(*(long *)((long)register0x00000020 + 8) + 0x20) =
       (*(long *)(*(long *)((long)register0x00000020 + 8) + 0x20) -
       *(long *)((long)register0x00000020 + -0x58)) + -1;
  return;
}

