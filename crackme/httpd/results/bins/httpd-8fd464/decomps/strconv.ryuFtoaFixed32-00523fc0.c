
/* WARNING: Unknown calling convention */

void strconv_ryuFtoaFixed32(strconv_decimalSlice *d,uint32 mant,int exp,int prec)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 unaff_0000001c;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *unaff_RBP;
  char cVar8;
  ulong prec_00;
  uint uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  bool trunc;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  multireturn_uint32_int_bool_ mVar11;
  strconv_decimalSlice *d_spill;
  uint32 mant_spill;
  int e2;
  int prec_spill;
  
  e.data = (void *)CONCAT44(unaff_0000001c,mant);
  do {
                    /* Unresolved local var: int q@[???]
                       Unresolved local var: bool exact@[???]
                       Unresolved local var: uint32 di@[???]
                       Unresolved local var: int dexp2@[???]
                       Unresolved local var: bool d0@[???]
                       Unresolved local var: uint extra@[???]
                       Unresolved local var: uint32 extraMask@[???]
                       Unresolved local var: uint32 dfrac@[???]
                       Unresolved local var: bool roundUp@[???] */
    puVar7 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar7 = (undefined1 *)((long)register0x00000020 + -0x50);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar2 = *(long *)((long)register0x00000020 + 0x20);
      if (-1 < lVar2) {
        if (lVar2 < 10) {
          uVar5 = *(uint *)((long)register0x00000020 + 0x10);
          if (uVar5 == 0) {
            lVar2 = *(long *)((long)register0x00000020 + 8);
            *(undefined8 *)(lVar2 + 0x18) = 0;
            *(undefined8 *)(lVar2 + 0x20) = 0;
            return;
          }
                    /* Unresolved local var: int b@[???] */
          uVar3 = (ulong)uVar5 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          if (lVar6 < 0x19) {
            uVar5 = uVar5 << ((byte)-(lVar6 + -0x19) & 0x1f) &
                    -(uint)((ulong)-(lVar6 + -0x19) < 0x20);
            lVar6 = lVar6 + *(long *)((long)register0x00000020 + 0x18) + -0x19;
          }
          else {
            lVar6 = *(long *)((long)register0x00000020 + 0x18);
          }
          lVar2 = lVar2 - (lVar6 * 0x13441 + 0x1ce618 >> 0x12);
          *(long *)((long)register0x00000020 + -0x10) = lVar2;
          uVar3 = lVar2 - 1;
          *(ulong *)((long)register0x00000020 + -0x18) = uVar3;
          *(bool *)((long)register0x00000020 + -0x1d) = uVar3 < 0x1c;
          *(uint *)((long)register0x00000020 + -0x1c) = uVar5;
          *(uint *)((long)register0x00000020 + -0x50) = uVar5;
          *(long *)((long)register0x00000020 + -0x48) = lVar6;
          *(ulong *)((long)register0x00000020 + -0x40) = uVar3;
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x5240a5;
          mVar11 = strconv_mult64bitPow10((uint32)lVar2,lVar6,uVar3);
          e.data = (void *)mVar11.resE;
          bVar4 = *(byte *)((long)register0x00000020 + -0x28);
          if (*(long *)((long)register0x00000020 + -0x30) < 0) break;
          *(undefined **)((long)register0x00000020 + -0x50) = &DAT_00225520;
          *(undefined1 **)((long)register0x00000020 + -0x48) = strconv__stmp_13;
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x52422e;
          e._type = (runtime__type *)strconv__stmp_13;
          runtime_gopanic(e);
        }
        *(undefined **)((long)register0x00000020 + -0x50) = &DAT_00225520;
        *(undefined1 **)((long)register0x00000020 + -0x48) = strconv__stmp_12;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x52424a;
        e_00.data = e.data;
        e_00._type = (runtime__type *)strconv__stmp_12;
        runtime_gopanic(e_00);
      }
      *(undefined **)((long)register0x00000020 + -0x50) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x48) = strconv__stmp_11;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x524266;
      e_01.data = e.data;
      e_01._type = (runtime__type *)strconv__stmp_11;
      runtime_gopanic(e_01);
    }
    *(undefined8 *)(puVar7 + -8) = 0x52426c;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar7;
  } while( true );
  if (*(long *)((long)register0x00000020 + -0x10) + 9U < 10) {
                    /* Unresolved local var: int i@[???] */
    if ((ulong)*(uint *)((long)register0x00000020 + -0x1c) != 0) {
      uVar3 = (ulong)*(uint *)((long)register0x00000020 + -0x1c);
      for (lVar2 = 0; lVar2 < -*(long *)((long)register0x00000020 + -0x18); lVar2 = lVar2 + 1) {
        if (uVar3 != (uVar3 / 5) * 5) goto LAB_005240e8;
        uVar3 = uVar3 / 5;
      }
    }
    cVar8 = '\x01';
    bVar4 = 1;
  }
  else {
LAB_005240e8:
    cVar8 = *(char *)((long)register0x00000020 + -0x1d);
  }
  uVar3 = -*(long *)((long)register0x00000020 + -0x30);
  uVar5 = *(uint *)((long)register0x00000020 + -0x38) >> ((byte)uVar3 & 0x1f) &
          -(uint)(uVar3 < 0x20);
  uVar10 = (1 << ((byte)uVar3 & 0x1f) & -(uint)(uVar3 < 0x20)) - 1 &
           *(uint *)((long)register0x00000020 + -0x38);
  if (cVar8 == '\0') {
    uVar9 = -(uint)(uVar3 - 1 < 0x20);
    prec_00 = (ulong)uVar9;
    trunc = (uVar10 >> ((byte)(uVar3 - 1) & 0x1f) & uVar9) == 1;
    uVar9 = uVar10;
    goto LAB_00524171;
  }
  uVar9 = -(uint)(uVar3 - 1 < 0x20);
  prec_00 = (ulong)uVar9;
  uVar9 = 1 << ((byte)(uVar3 - 1) & 0x1f) & uVar9;
  if (uVar9 < uVar10) {
LAB_00524142:
    trunc = true;
  }
  else {
    if (uVar9 == uVar10) {
      if (bVar4 == 0) goto LAB_00524142;
      if ((uVar9 != uVar10) || (bVar4 == 0)) goto LAB_00524149;
      uVar1 = uVar5 & 1;
    }
    else {
LAB_00524149:
      uVar1 = 0;
    }
    prec_00 = (ulong)uVar1;
    trunc = SUB41(uVar1,0);
  }
LAB_00524171:
  if (uVar10 != 0) {
    bVar4 = 0;
  }
  *(uint64 *)((long)register0x00000020 + -0x50) = *(uint64 *)((long)register0x00000020 + 8);
  *(ulong *)((long)register0x00000020 + -0x48) = (ulong)uVar5;
  *(byte *)((long)register0x00000020 + -0x40) = bVar4 ^ 1;
  *(bool *)((long)register0x00000020 + -0x3f) = trunc;
  *(strconv_decimalSlice **)((long)register0x00000020 + -0x38) =
       *(strconv_decimalSlice **)((long)register0x00000020 + 0x20);
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x5241a5;
  strconv_formatDecimal
            (*(strconv_decimalSlice **)((long)register0x00000020 + 0x20),
             *(uint64 *)((long)register0x00000020 + 8),trunc,SUB41(uVar9,0),prec_00);
  *(long *)(*(long *)((long)register0x00000020 + 8) + 0x20) =
       (*(long *)(*(long *)((long)register0x00000020 + 8) + 0x20) -
       *(long *)((long)register0x00000020 + -0x10)) + 1;
  return;
}

