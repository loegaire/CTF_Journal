
/* WARNING: Removing unreachable block (ram,0x00629a7f) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _expand_key_192a(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*unaff_RBX) [16];
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 in_XMM1_Db;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  undefined4 in_XMM4_Da;
  
  auVar5._4_4_ = in_XMM4_Da;
  auVar5._0_4_ = in_XMM4_Da;
  auVar5._8_4_ = in_XMM0._4_4_;
  auVar5._12_4_ = in_XMM0._0_4_;
  auVar5 = in_XMM0 ^ auVar5;
  auVar2._4_4_ = in_XMM0._0_4_;
  auVar2._0_4_ = in_XMM4_Da;
  auVar2._8_4_ = auVar5._0_4_;
  auVar2._12_4_ = auVar5._8_4_;
  auVar6._4_4_ = in_XMM1_Db;
  auVar6._0_4_ = in_XMM1_Db;
  auVar6._8_4_ = in_XMM1_Db;
  auVar6._12_4_ = in_XMM1_Db;
  auVar6 = auVar5 ^ auVar2 ^ auVar6;
  uVar7 = auVar6._12_4_;
  auVar8._4_4_ = uVar7;
  auVar8._0_4_ = uVar7;
  auVar8._8_4_ = uVar7;
  auVar8._12_4_ = uVar7;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = in_XMM2._0_12_;
  auVar8 = in_XMM2 ^ auVar8 ^ auVar4 << 0x20;
  auVar3._8_4_ = auVar6._0_4_;
  auVar3._0_8_ = in_XMM2._0_8_;
  auVar3._12_4_ = auVar6._4_4_;
  *unaff_RBX = auVar3;
  auVar1._8_4_ = auVar8._0_4_;
  auVar1._0_8_ = auVar6._8_8_;
  auVar1._12_4_ = auVar8._4_4_;
  unaff_RBX[1] = auVar1;
  return;
}

