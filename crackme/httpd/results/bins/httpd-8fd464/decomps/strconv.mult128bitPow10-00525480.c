
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.mult128bitPow10(uint64 m, int e2, int q, uint64 resM, int
   resE, bool exact) */

multireturn_uint64_int_bool_ strconv_mult128bitPow10(uint64 m,int e2,int q)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint64 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  multireturn_uint64_int_bool_ mVar11;
  multireturn_uint64_int_bool_ mVar12;
  uint64 m_spill;
  int e2_spill;
  int q_spill;
  
  do {
                    /* Unresolved local var: uint64 l1@[???]
                       Unresolved local var: uint64 l0@[???]
                       Unresolved local var: uint64 h1@[???]
                       Unresolved local var: uint64 h0@[???]
                       Unresolved local var: uint64 mid@[???]
                       Unresolved local var: uint64[2] pow@[???] */
    puVar10 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar10 = (undefined1 *)((long)register0x00000020 + -0x28);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar1 = *(long *)((long)register0x00000020 + 0x18);
      if (lVar1 == 0) {
        *(long *)((long)register0x00000020 + 0x20) = *(long *)((long)register0x00000020 + 8) << 8;
        mVar12.resM = *(long *)((long)register0x00000020 + 0x10) + -8;
        *(long *)((long)register0x00000020 + 0x28) = mVar12.resM;
        *(undefined1 *)((long)register0x00000020 + 0x30) = 1;
        mVar12.resE = e2;
        mVar12.exact = false;
        return mVar12;
      }
      uVar8 = lVar1 + 0x15c;
      if (uVar8 < 0x2b8) {
        uVar7 = strconv_detailedPowersOfTen[uVar8][1];
        *(uint64 *)((long)register0x00000020 + -0x18) = strconv_detailedPowersOfTen[uVar8][0];
        *(uint64 *)((long)register0x00000020 + -0x10) = uVar7;
        if (lVar1 < 0) {
          *(long *)((long)register0x00000020 + -0x18) =
               *(long *)((long)register0x00000020 + -0x18) + 1;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulong *)((long)register0x00000020 + -0x18);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *(ulong *)((long)register0x00000020 + 8);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = SUB168(auVar2 * auVar4,8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulong *)((long)register0x00000020 + -0x10);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulong *)((long)register0x00000020 + 8);
        auVar6 = auVar3 * auVar5 + auVar6;
        uVar8 = auVar6._0_8_;
        lVar1 = (lVar1 * 0x1a935 >> 0xf) + *(long *)((long)register0x00000020 + 0x10) + -8;
        if ((uVar8 & 0x7fffffffffffff) == 0) {
          uVar9 = (ulong)(SUB168(auVar2 * auVar4,0) == 0);
        }
        else {
          uVar9 = 0;
        }
        mVar11.resE = uVar8 >> 0x37;
        *(ulong *)((long)register0x00000020 + 0x20) = auVar6._8_8_ * 0x200 | mVar11.resE;
        *(long *)((long)register0x00000020 + 0x28) = lVar1;
        *(char *)((long)register0x00000020 + 0x30) = (char)uVar9;
        mVar11.resM = uVar9;
        mVar11.exact = SUB81(lVar1,0);
        return mVar11;
      }
      *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x20) = strconv__stmp_18;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x5255af;
      e.data = (void *)e2;
      e._type = (runtime__type *)strconv__stmp_18;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar10 + -8) = 0x5255b5;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar10;
  } while( true );
}

