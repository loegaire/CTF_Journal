
/* std::to_chars_result std::__detail::__to_chars_16<unsigned long>(char*, char*, unsigned long) */

undefined1  [16]
std::__detail::__to_chars_16<unsigned_long>(char *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  char local_18 [24];
  
  if (param_3 == 0) {
    uVar4 = 0x4b;
    if ((long)param_2 - (long)param_1 < 0) goto LAB_00108b21;
    builtin_strncpy(local_18,"0123456789abcdef",0x10);
    uVar5 = 0;
LAB_00108b77:
    cVar2 = local_18[param_3];
  }
  else {
    lVar1 = 0x3f;
    if (param_3 != 0) {
      for (; param_3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar5 = 0x43 - ((uint)lVar1 ^ 0x3f) >> 2;
    if ((long)param_2 - (long)param_1 < (long)(ulong)uVar5) {
      uVar4 = 0x4b;
      goto LAB_00108b21;
    }
    builtin_strncpy(local_18,"0123456789abcdef",0x10);
    uVar3 = uVar5 - 1;
    for (; 0xff < param_3; param_3 = param_3 >> 8) {
      param_1[uVar3] = local_18[(uint)param_3 & 0xf];
      param_1[uVar3 - 1] = local_18[(uint)(param_3 >> 4) & 0xf];
      uVar3 = uVar3 - 2;
    }
    if (param_3 < 0x10) goto LAB_00108b77;
    param_1[1] = local_18[(uint)param_3 & 0xf];
    cVar2 = local_18[param_3 >> 4];
  }
  *param_1 = cVar2;
  param_2 = param_1 + uVar5;
  uVar4 = 0;
LAB_00108b21:
  auVar6._8_4_ = uVar4;
  auVar6._0_8_ = param_2;
  auVar6._12_4_ = 0;
  return auVar6;
}

