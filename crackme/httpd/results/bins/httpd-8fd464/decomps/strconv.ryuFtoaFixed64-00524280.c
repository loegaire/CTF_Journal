
/* WARNING: Unknown calling convention */

void strconv_ryuFtoaFixed64(strconv_decimalSlice *d,uint64 mant,int exp,int prec)

{
  uint uVar1;
  uint64 m;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  char cVar7;
  ulong prec_00;
  ulong uVar8;
  long in_FS_OFFSET;
  bool trunc;
  interface___ e;
  interface___ e_00;
  multireturn_uint64_int_bool_ mVar9;
  strconv_decimalSlice *d_spill;
  uint64 mant_spill;
  int e2;
  int prec_spill;
  
  e.data = (void *)mant;
  do {
                    /* Unresolved local var: int q@[???]
                       Unresolved local var: bool exact@[???]
                       Unresolved local var: uint64 di@[???]
                       Unresolved local var: int dexp2@[???]
                       Unresolved local var: bool d0@[???]
                       Unresolved local var: uint extra@[???]
                       Unresolved local var: uint64 extraMask@[???]
                       Unresolved local var: uint64 dfrac@[???]
                       Unresolved local var: bool roundUp@[???] */
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x58);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(long *)((long)register0x00000020 + 0x20) < 0x13) {
        uVar4 = *(ulong *)((long)register0x00000020 + 0x10);
        if (uVar4 == 0) {
          lVar5 = *(long *)((long)register0x00000020 + 8);
          *(undefined8 *)(lVar5 + 0x18) = 0;
          *(undefined8 *)(lVar5 + 0x20) = 0;
          return;
        }
                    /* Unresolved local var: int b@[???] */
        lVar5 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        if (uVar4 == 0) {
          lVar5 = -1;
        }
        if (lVar5 + 1 < 0x37) {
          uVar4 = uVar4 << ((byte)-(lVar5 + -0x36) & 0x3f) &
                  -(ulong)((ulong)-(lVar5 + -0x36) < 0x40);
          lVar5 = lVar5 + *(long *)((long)register0x00000020 + 0x18) + -0x36;
        }
        else {
          lVar5 = *(long *)((long)register0x00000020 + 0x18);
        }
        m = *(long *)((long)register0x00000020 + 0x20) -
            ((long)(&DAT_004105b6 + lVar5 * 0x13441) >> 0x12);
        *(uint64 *)((long)register0x00000020 + -0x10) = m;
        uVar2 = m - 1;
        *(ulong *)((long)register0x00000020 + -0x20) = uVar2;
        *(bool *)((long)register0x00000020 + -0x21) = uVar2 < 0x38;
        *(ulong *)((long)register0x00000020 + -0x18) = uVar4;
        *(ulong *)((long)register0x00000020 + -0x58) = uVar4;
        *(long *)((long)register0x00000020 + -0x50) = lVar5;
        *(ulong *)((long)register0x00000020 + -0x48) = uVar2;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x524366;
        mVar9 = strconv_mult128bitPow10(m,lVar5,uVar2);
        e.data = (void *)mVar9.resE;
        bVar3 = *(byte *)((long)register0x00000020 + -0x30);
        if (*(long *)((long)register0x00000020 + -0x38) < 0) break;
        *(undefined **)((long)register0x00000020 + -0x58) = &DAT_00225520;
        *(undefined1 **)((long)register0x00000020 + -0x50) = strconv__stmp_15;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x524505;
        e._type = (runtime__type *)strconv__stmp_15;
        runtime_gopanic(e);
      }
      *(undefined **)((long)register0x00000020 + -0x58) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x50) = strconv__stmp_14;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x524525;
      e_00.data = e.data;
      e_00._type = (runtime__type *)strconv__stmp_14;
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar6 + -8) = 0x52452b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
  if (*(long *)((long)register0x00000020 + -0x10) + 0x15U < 0x16) {
                    /* Unresolved local var: int i@[???] */
    if (*(ulong *)((long)register0x00000020 + -0x18) != 0) {
      uVar4 = *(ulong *)((long)register0x00000020 + -0x18);
      for (lVar5 = 0; lVar5 < -*(long *)((long)register0x00000020 + -0x20); lVar5 = lVar5 + 1) {
        if (uVar4 != (uVar4 / 5) * 5) goto LAB_005243ab;
        uVar4 = uVar4 / 5;
      }
    }
    cVar7 = '\x01';
    bVar3 = 1;
  }
  else {
LAB_005243ab:
    cVar7 = *(char *)((long)register0x00000020 + -0x21);
  }
  uVar2 = -*(long *)((long)register0x00000020 + -0x38);
  uVar4 = *(ulong *)((long)register0x00000020 + -0x40) >> ((byte)uVar2 & 0x3f) &
          -(ulong)(uVar2 < 0x40);
  uVar8 = (1L << ((byte)uVar2 & 0x3f) & -(ulong)(uVar2 < 0x40)) - 1 &
          *(ulong *)((long)register0x00000020 + -0x40);
  if (cVar7 == '\0') {
    prec_00 = -(ulong)(uVar2 - 1 < 0x40);
    trunc = (uVar8 >> ((byte)(uVar2 - 1) & 0x3f) & prec_00) == 1;
    uVar2 = uVar8;
    goto LAB_00524440;
  }
  prec_00 = -(ulong)(uVar2 - 1 < 0x40);
  uVar2 = 1L << ((byte)(uVar2 - 1) & 0x3f) & prec_00;
  if (uVar2 < uVar8) {
LAB_0052440d:
    trunc = true;
  }
  else {
    if (uVar2 == uVar8) {
      if (bVar3 == 0) goto LAB_0052440d;
      if ((uVar2 != uVar8) || (bVar3 == 0)) goto LAB_00524414;
      uVar1 = (uint)uVar4 & 1;
    }
    else {
LAB_00524414:
      uVar1 = 0;
    }
    prec_00 = (ulong)uVar1;
    trunc = SUB41(uVar1,0);
  }
LAB_00524440:
  if (uVar8 != 0) {
    bVar3 = 0;
  }
  *(uint64 *)((long)register0x00000020 + -0x58) = *(uint64 *)((long)register0x00000020 + 8);
  *(ulong *)((long)register0x00000020 + -0x50) = uVar4;
  *(byte *)((long)register0x00000020 + -0x48) = bVar3 ^ 1;
  *(bool *)((long)register0x00000020 + -0x47) = trunc;
  *(strconv_decimalSlice **)((long)register0x00000020 + -0x40) =
       *(strconv_decimalSlice **)((long)register0x00000020 + 0x20);
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x52446f;
  strconv_formatDecimal
            (*(strconv_decimalSlice **)((long)register0x00000020 + 0x20),
             *(uint64 *)((long)register0x00000020 + 8),trunc,SUB81(uVar2,0),prec_00);
  *(long *)(*(long *)((long)register0x00000020 + 8) + 0x20) =
       (*(long *)(*(long *)((long)register0x00000020 + 8) + 0x20) -
       *(long *)((long)register0x00000020 + -0x10)) + 1;
  return;
}

