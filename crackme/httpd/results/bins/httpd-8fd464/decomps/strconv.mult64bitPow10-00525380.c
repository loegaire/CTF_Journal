
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.mult64bitPow10(uint32 m, int e2, int q, uint32 resM, int
   resE, bool exact) */

multireturn_uint32_int_bool_ strconv_mult64bitPow10(uint32 m,int e2,int q)

{
  long lVar1;
  undefined1 auVar2 [16];
  uint64 uVar3;
  undefined1 *puVar4;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  multireturn_uint32_int_bool_ mVar5;
  multireturn_uint32_int_bool_ mVar6;
  uint32 m_spill;
  int e2_spill;
  int q_spill;
  
  do {
                    /* Unresolved local var: uint64 pow@[???]
                       Unresolved local var: uint64 hi@[???]
                       Unresolved local var: uint64 lo@[???] */
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x18);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar1 = *(long *)((long)register0x00000020 + 0x18);
      if (lVar1 == 0) {
        *(int *)((long)register0x00000020 + 0x20) = *(int *)((long)register0x00000020 + 8) << 6;
        *(long *)((long)register0x00000020 + 0x28) = *(long *)((long)register0x00000020 + 0x10) + -6
        ;
        *(undefined1 *)((long)register0x00000020 + 0x30) = 1;
        mVar6.resM = (undefined4)(*(long *)((long)register0x00000020 + 0x10) + -6);
        mVar6.resE = e2;
        mVar6.exact = false;
        return mVar6;
      }
      if (lVar1 + 0x15cU < 0x2b8) {
        uVar3 = strconv_detailedPowersOfTen[lVar1 + 0x15cU][1];
        if (lVar1 < 0) {
          uVar3 = strconv_detailedPowersOfTen[lVar1 + 0x15cU][1] + 1;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar3;
        auVar2 = ZEXT416(*(uint *)((long)register0x00000020 + 8)) * auVar2;
        *(uint *)((long)register0x00000020 + 0x20) =
             (uint)(auVar2._8_8_ << 7) | auVar2._4_4_ >> 0x19;
        lVar1 = (lVar1 * 0x1a935 >> 0xf) + *(long *)((long)register0x00000020 + 0x10) + -6;
        *(long *)((long)register0x00000020 + 0x28) = lVar1;
        mVar5.resE = auVar2._0_8_ << 7;
        *(bool *)((long)register0x00000020 + 0x30) = mVar5.resE == 0;
        mVar5.resM = auVar2._4_4_ >> 0x19;
        mVar5.exact = SUB81(lVar1,0);
        return mVar5;
      }
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x10) = strconv__stmp_17;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x52546a;
      e.data = (void *)e2;
      e._type = (runtime__type *)strconv__stmp_17;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar4 + -8) = 0x525470;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}

