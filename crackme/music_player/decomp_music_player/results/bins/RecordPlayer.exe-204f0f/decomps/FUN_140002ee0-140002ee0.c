
undefined8 *
FUN_140002ee0(undefined8 *param_1,undefined4 param_2,ushort param_3,uint param_4,HINSTANCE param_5)

{
  HBITMAP pHVar1;
  
  *(undefined4 *)(param_1 + 2) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0;
  pHVar1 = LoadBitmapW(param_5,(LPCWSTR)(ulonglong)param_3);
  param_1[4] = pHVar1;
  pHVar1 = LoadBitmapW(param_5,(LPCWSTR)(ulonglong)(param_4 & 0xffff));
  param_1[5] = pHVar1;
  return param_1;
}

