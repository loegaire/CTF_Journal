
uint FUN_140001e20(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = param_1[2];
  uVar6 = (int)param_1[3] + lVar3;
  if ((longlong)uVar6 < 0) {
    uVar6 = (ulonglong)((int)param_1[1] - 1);
  }
  fVar8 = *(float *)((longlong)param_1 + 0x15c);
  uVar5 = *(uint *)(param_1 + 1);
  uVar2 = 0;
  if ((longlong)uVar6 < (longlong)(ulonglong)uVar5) {
    uVar2 = uVar6;
  }
  bVar1 = *(byte *)(uVar2 + *param_1);
  fVar7 = (float)*(byte *)(*param_1 + lVar3) - 128.0;
  fVar9 = fVar8 + *(float *)(param_1 + 0x2b);
  *(float *)((longlong)param_1 + 0x15c) = fVar9;
  uVar4 = (uint)((((float)bVar1 - 128.0) - fVar7) * fVar8 + fVar7 + 128.0);
  if (1.0 <= fVar9) {
    do {
      fVar9 = fVar9 - 1.0;
      lVar3 = lVar3 + (int)param_1[3];
    } while (1.0 <= fVar9);
    uVar5 = *(uint *)(param_1 + 1);
    *(float *)((longlong)param_1 + 0x15c) = fVar9;
    param_1[2] = lVar3;
  }
  fVar8 = *(float *)(param_1 + 0x2c) * 5e-05 + *(float *)(param_1 + 0x2b);
  *(float *)(param_1 + 0x2b) = fVar8;
  if ((fVar8 <= 0.3) || (1.2 <= fVar8)) {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * -1.0;
  }
  if (lVar3 < 0) {
    param_1[4] = param_1[4] + 1;
    param_1[2] = (ulonglong)(uVar5 - 1);
    return uVar4 & 0xff;
  }
  if ((longlong)(ulonglong)uVar5 <= lVar3) {
    param_1[2] = 0;
  }
  param_1[4] = param_1[4] + 1;
  return uVar4 & 0xff;
}

