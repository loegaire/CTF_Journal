
uint FUN_140001030(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0x811c9dc5;
  if (param_3 != 0) {
    do {
      pbVar1 = (byte *)(param_2 + uVar2);
      uVar2 = uVar2 + 1;
      uVar3 = (*pbVar1 ^ uVar3) * 0x1000193;
    } while (uVar2 < param_3);
  }
  return uVar3;
}

