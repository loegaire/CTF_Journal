
/* std::to_chars_result std::__detail::__to_chars_16<unsigned int>(char*, char*, unsigned int) */

undefined1  [16]
std::__detail::__to_chars_16<unsigned_int>(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  char local_18 [24];
  
  if (param_3 == 0) {
    uVar3 = 0x4b;
    if ((long)param_2 - (long)param_1 < 0) goto LAB_001089db;
    builtin_strncpy(local_18,"0123456789abcdef",0x10);
    uVar4 = 0;
LAB_00108a2e:
    cVar1 = local_18[param_3];
  }
  else {
    uVar4 = 0x1f;
    if (param_3 != 0) {
      for (; param_3 >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    uVar4 = 0x23 - (uVar4 ^ 0x1f) >> 2;
    if ((long)param_2 - (long)param_1 < (long)(ulong)uVar4) {
      uVar3 = 0x4b;
      goto LAB_001089db;
    }
    builtin_strncpy(local_18,"0123456789abcdef",0x10);
    uVar2 = uVar4 - 1;
    for (; 0xff < param_3; param_3 = param_3 >> 8) {
      param_1[uVar2] = local_18[param_3 & 0xf];
      param_1[uVar2 - 1] = local_18[param_3 >> 4 & 0xf];
      uVar2 = uVar2 - 2;
    }
    if (param_3 < 0x10) goto LAB_00108a2e;
    param_1[1] = local_18[param_3 & 0xf];
    cVar1 = local_18[param_3 >> 4];
  }
  *param_1 = cVar1;
  param_2 = param_1 + uVar4;
  uVar3 = 0;
LAB_001089db:
  auVar5._8_4_ = uVar3;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}

