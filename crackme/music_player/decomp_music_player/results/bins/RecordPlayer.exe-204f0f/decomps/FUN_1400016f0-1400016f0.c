
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1400016f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_140009000 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x100;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x52) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x62) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x82) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x92) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x21] = 0;
  puVar1 = param_1 + 0x22;
  *puVar1 = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  local_38 = param_1;
  puVar2 = (undefined8 *)FUN_1400042c4(0x10);
  puVar2[1] = 0;
  *puVar1 = puVar2;
  *puVar2 = puVar1;
  local_30 = 0xfc3d2b30;
  local_2c = 0x3b06b6f6;
  local_28 = 0xc0edb10e;
  local_24 = 0xc0748e1;
  local_20 = 0xf9f4bb0b;
  local_1c = 0x148;
  local_1a = 0x19;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  uVar3 = FUN_140001650(0x17);
  param_1[0x27] = uVar3;
  param_1[0x28] = uVar3;
  param_1[0x29] = uVar3 + 0x17;
  _Dst = (void *)param_1[0x27];
  memmove(_Dst,&local_30,0x17);
  param_1[0x28] = (longlong)_Dst + 0x17;
  *(undefined4 *)(param_1 + 0x2a) = 0x18940a3d;
  FUN_140001010((longlong)param_1 + 0x154);
  param_1[0x2b] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0xbf800000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 2;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[4] = 0;
  return param_1;
}

