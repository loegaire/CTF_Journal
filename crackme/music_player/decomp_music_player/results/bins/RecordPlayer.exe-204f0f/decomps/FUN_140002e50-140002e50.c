
longlong FUN_140002e50(HWND param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 == 0x110) {
    param_4[2] = (longlong)param_1;
    SetWindowLongPtrW(param_1,-0x15,(LONG_PTR)param_4);
    iVar1 = (**(code **)(*param_4 + 8))(param_4);
    return (longlong)iVar1;
  }
  plVar2 = (longlong *)GetWindowLongPtrW(param_1,-0x15);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140002ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3,param_4);
    return lVar3;
  }
  return 0;
}

