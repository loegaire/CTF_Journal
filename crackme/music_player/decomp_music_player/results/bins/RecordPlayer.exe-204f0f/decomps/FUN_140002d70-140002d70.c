
longlong FUN_140002d70(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (param_2 == 0x10) {
    iVar1 = (**(code **)(*param_1 + 0x18))();
    return (longlong)iVar1;
  }
  if (param_2 != 0x111) {
    if (param_2 != 0x201) {
      return 0;
    }
    SendMessageW((HWND)param_1[2],0xa1,2,0);
    return 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_3,param_4);
  return (longlong)iVar1;
}

