
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.tzsetRule(string s, time.rule ~r1, string ~r2, bool ~r3) */

multireturn_time_rule_string_bool_ time_tzsetRule(string s)

{
  byte bVar1;
  undefined8 in_RSI;
  ulong uVar2;
  int in_RDI;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined1 in_R10B;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  multireturn_time_rule_string_bool_ mVar3;
  multireturn_time_rule_string_bool_ mVar4;
  multireturn_time_rule_string_bool_ mVar5;
  multireturn_time_rule_string_bool_ mVar6;
  multireturn_time_rule_string_bool_ mVar7;
  multireturn_time_rule_string_bool_ mVar8;
  multireturn_time_rule_string_bool_ mVar9;
  multireturn_time_rule_string_bool_ mVar10;
  multireturn_time_rule_string_bool_ mVar11;
  multireturn_int_string_bool__conflict mVar12;
  multireturn_int_string_bool_ mVar13;
  string s_spill;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 local_68;
  char local_58;
  undefined7 uStack_57;
  long local_50;
  char local_48;
  undefined8 local_30;
  
  mVar11.~r1.day = s.len;
                    /* Unresolved local var: int offset@[???]
                       Unresolved local var: time.rule r@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  if (s_spill.len == 0) {
    mVar11.~r1.kind = (time_ruleKind)&stack0x00000020;
    mVar11.~r1.mon = in_RDI;
    mVar11.~r1.week = (int)&stack0x00000030;
    mVar11.~r2.str = (uint8 *)in_R8;
    mVar11.~r1.time = in_RSI;
    mVar11.~r3 = (bool)in_R10B;
    mVar11.~r2.len = in_R9;
    return mVar11;
  }
  bVar1 = *s_spill.str;
  uVar2 = (ulong)bVar1;
  if (bVar1 == 0x4a) {
                    /* Unresolved local var: int jday@[???] */
    s_04.str = s_spill.str + (-(s_spill.len + -1) >> 0x3f & 1);
    local_68 = 0x16d;
    s_04.len = (int)s_spill.str;
    mVar12 = time_tzsetNum(s_04,s_spill.len + -1,in_RDI);
    mVar10.~r1.mon = CONCAT71((int7)((ulong)in_RDI >> 8),mVar12.ok);
    mVar10.~r1.day = mVar12.rest.str;
    mVar10.~r1.week._1_7_ = uStack_57;
    mVar10.~r1.week._0_1_ = local_58;
    if (local_48 == '\0') {
      mVar10.~r1.kind = (time_ruleKind)&stack0x00000030;
      mVar10.~r2.str = (uint8 *)in_R8;
      mVar10.~r1.time = uVar2;
      mVar10.~r3 = (bool)in_R10B;
      mVar10.~r2.len = in_R9;
      return mVar10;
    }
    local_30 = 0;
    mVar3.~r1.day = mVar10.~r1.day;
    mVar3.~r1.mon = mVar10.~r1.mon;
  }
  else if (bVar1 == 0x4d) {
                    /* Unresolved local var: int mon@[???]
                       Unresolved local var: int week@[???]
                       Unresolved local var: int day@[???] */
    s_00.str = s_spill.str + (-(s_spill.len + -1) >> 0x3f & 1);
    s_00.len = (int)s_spill.str;
    mVar12 = time_tzsetNum(s_00,s_spill.len + -1,in_RDI);
    mVar5.~r1.mon = CONCAT71((int7)((ulong)in_RDI >> 8),mVar12.ok);
    s_01.len = mVar12.rest.str;
    if (((local_48 == '\0') || (local_50 == 0)) || (*(char *)CONCAT71(uStack_57,local_58) != '.')) {
      mVar5.~r1.day = (int)s_01.len;
      mVar5.~r1.kind = (time_ruleKind)&stack0x00000030;
      mVar5.~r1.week = local_50;
      mVar5.~r2.str = (uint8 *)in_R8;
      mVar5.~r1.time = uVar2;
      mVar5.~r3 = (bool)in_R10B;
      mVar5.~r2.len = in_R9;
      return mVar5;
    }
    s_01.str = (uint8 *)((char *)CONCAT71(uStack_57,local_58) + (-(local_50 + -1) >> 0x3f & 1));
    mVar12 = time_tzsetNum(s_01,local_50 + -1,mVar5.~r1.mon);
    mVar4.~r1.mon = CONCAT71((int7)((ulong)mVar5.~r1.mon >> 8),mVar12.ok);
    s_02.len = mVar12.rest.str;
    if (((local_48 == '\0') || (local_50 == 0)) || (*(char *)CONCAT71(uStack_57,local_58) != '.')) {
      mVar4.~r1.day = (int)s_02.len;
      mVar4.~r1.kind = (time_ruleKind)&stack0x00000030;
      mVar4.~r1.week = local_50;
      mVar4.~r2.str = (uint8 *)in_R8;
      mVar4.~r1.time = uVar2;
      mVar4.~r3 = (bool)in_R10B;
      mVar4.~r2.len = in_R9;
      return mVar4;
    }
    s_02.str = (uint8 *)((char *)CONCAT71(uStack_57,local_58) + (-(local_50 + -1) >> 0x3f & 1));
    local_68 = 6;
    mVar12 = time_tzsetNum(s_02,local_50 + -1,mVar4.~r1.mon);
    mVar3.~r1.mon = CONCAT71((int7)((ulong)mVar4.~r1.mon >> 8),mVar12.ok);
    mVar3.~r1.day = mVar12.rest.str;
    mVar3.~r1.week._1_7_ = uStack_57;
    mVar3.~r1.week._0_1_ = local_58;
    if (local_48 == '\0') {
      mVar3.~r1.kind = (time_ruleKind)&stack0x00000030;
      mVar3.~r2.str = (uint8 *)in_R8;
      mVar3.~r1.time = uVar2;
      mVar3.~r3 = (bool)in_R10B;
      mVar3.~r2.len = in_R9;
      return mVar3;
    }
    local_30 = 2;
  }
  else {
                    /* Unresolved local var: int day@[???] */
    local_68 = 0x16d;
    s_03.len = (int)s_spill.str;
    s_03.str = (uint8 *)&stack0x00000020;
    mVar12 = time_tzsetNum(s_03,(int)&stack0x00000030,in_RDI);
    mVar6.~r1.mon = CONCAT71((int7)((ulong)in_RDI >> 8),mVar12.ok);
    mVar6.~r1.day = mVar12.rest.str;
    mVar6.~r1.week._1_7_ = uStack_57;
    mVar6.~r1.week._0_1_ = local_58;
    if (local_48 == '\0') {
      mVar6.~r1.kind = (time_ruleKind)&stack0x00000030;
      mVar6.~r2.str = (uint8 *)in_R8;
      mVar6.~r1.time = uVar2;
      mVar6.~r3 = (bool)in_R10B;
      mVar6.~r2.len = in_R9;
      return mVar6;
    }
    local_30 = 1;
    mVar3.~r1.day = mVar6.~r1.day;
    mVar3.~r1.mon = mVar6.~r1.mon;
  }
  mVar7.~r1.week = (char *)CONCAT71(uStack_57,local_58);
  if ((local_50 != 0) && (*mVar7.~r1.week == '/')) {
    s_05.str = (uint8 *)(mVar7.~r1.week + (-(local_50 + -1) >> 0x3f & 1));
    s_05.len = (int)mVar3.~r1.day;
    mVar13 = time_tzsetOffset(s_05);
    mVar8.~r1.mon = CONCAT71((int7)((ulong)mVar3.~r1.mon >> 8),mVar13.ok);
    mVar8.~r1.day = mVar13.rest.str;
    if (local_58 != '\0') {
      mVar8.~r1.kind = local_30;
      mVar8.~r1.week = local_68;
      mVar8.~r2.str = (uint8 *)in_R8;
      mVar8.~r1.time = uVar2;
      mVar8.~r3 = (bool)in_R10B;
      mVar8.~r2.len = in_R9;
      return mVar8;
    }
    mVar9.~r1.day = (int)mVar8.~r1.day;
    mVar9.~r1.kind = (time_ruleKind)&stack0x00000030;
    mVar9.~r1.mon = mVar8.~r1.mon;
    mVar9.~r1.week = local_68;
    mVar9.~r2.str = (uint8 *)in_R8;
    mVar9.~r1.time = uVar2;
    mVar9.~r3 = (bool)in_R10B;
    mVar9.~r2.len = in_R9;
    return mVar9;
  }
  mVar7.~r1.day = (int)mVar3.~r1.day;
  mVar7.~r1.kind = local_30;
  mVar7.~r1.mon = mVar3.~r1.mon;
  mVar7.~r2.str = (uint8 *)in_R8;
  mVar7.~r1.time = uVar2;
  mVar7.~r3 = (bool)in_R10B;
  mVar7.~r2.len = in_R9;
  return mVar7;
}

