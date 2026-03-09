
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__add_grouping<char>(char*, char, char const*, unsigned long, char const*, char
   const*) */

char * std::__add_grouping<char>
                 (char *param_1,char param_2,char *param_3,ulong param_4,char *param_5,char *param_6
                 )

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  
  bVar1 = *param_3;
  if (((byte)(bVar1 - 1) < 0x7e) && ((long)(char)bVar1 < (long)param_6 - (long)param_5)) {
    lVar7 = 0;
    uVar5 = 0;
    do {
      param_6 = param_6 + -(long)(char)bVar1;
      if (uVar5 < param_4 - 1) {
        uVar5 = uVar5 + 1;
      }
      else {
        lVar7 = lVar7 + 1;
      }
      pbVar6 = (byte *)(param_3 + uVar5);
      bVar1 = *pbVar6;
    } while (((long)(char)bVar1 < (long)param_6 - (long)param_5) && ((byte)(bVar1 - 1) < 0x7e));
    if (param_5 == param_6) goto LAB_0010deda;
  }
  else {
    lVar7 = 0;
    uVar5 = 0;
    pbVar6 = (byte *)param_3;
    if (param_6 == param_5) {
      return param_1;
    }
  }
  lVar2 = 0;
  do {
    param_1[lVar2] = param_5[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != (long)param_6 - (long)param_5);
  param_1 = param_6 + ((long)param_1 - (long)param_5);
LAB_0010deda:
  lVar2 = lVar7 + -1;
  pcVar4 = param_1;
  if (lVar7 != 0) {
    do {
      param_1 = pcVar4 + 1;
      *pcVar4 = param_2;
      bVar1 = *pbVar6;
      if ('\0' < (char)bVar1) {
        uVar3 = 0;
        do {
          pcVar4[uVar3 + 1] = param_6[uVar3];
          uVar3 = uVar3 + 1;
        } while (uVar3 != bVar1);
        param_1 = param_1 + bVar1;
        param_6 = param_6 + bVar1;
      }
      lVar2 = lVar2 + -1;
      pcVar4 = param_1;
    } while (lVar2 != -1);
  }
  lVar7 = uVar5 - 1;
  pcVar4 = param_1;
  if (uVar5 != 0) {
    do {
      param_1 = pcVar4 + 1;
      *pcVar4 = param_2;
      bVar1 = param_3[lVar7];
      if ('\0' < (char)bVar1) {
        uVar5 = 0;
        do {
          pcVar4[uVar5 + 1] = param_6[uVar5];
          uVar5 = uVar5 + 1;
        } while (uVar5 != bVar1);
        uVar5 = (ulong)(bVar1 - 1 & 0xff);
        param_1 = pcVar4 + uVar5 + 2;
        param_6 = param_6 + uVar5 + 1;
      }
      lVar7 = lVar7 + -1;
      pcVar4 = param_1;
    } while (lVar7 != -1);
  }
  return param_1;
}

