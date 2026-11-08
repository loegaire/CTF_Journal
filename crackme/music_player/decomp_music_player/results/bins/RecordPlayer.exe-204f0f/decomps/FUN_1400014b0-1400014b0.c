
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400014b0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  HANDLE pvVar1;
  undefined1 auStackY_d8 [32];
  tagPAINTSTRUCT local_88;
  ulonglong local_38;
  
  local_38 = DAT_140009000 ^ (ulonglong)auStackY_d8;
  pvVar1 = GetPropW(param_1,L"skin");
  if (pvVar1 == (HANDLE)0x0) {
    DefWindowProcW(param_1,param_2,param_3,param_4);
  }
  else {
    if (param_2 == 0xf) {
      BeginPaint(param_1,&local_88);
      BitBlt(local_88.hdc,0,0,*(int *)((longlong)pvVar1 + 0x38),*(int *)((longlong)pvVar1 + 0x3c),
             *(HDC *)((longlong)pvVar1 + 0x20),0,0,0xcc0020);
      EndPaint(param_1,&local_88);
    }
    else if (param_2 == 0x201) {
      SendMessageW(param_1,0xa1,2,0);
    }
    CallWindowProcW(*(WNDPROC *)((longlong)pvVar1 + 8),param_1,param_2,param_3,param_4);
  }
  return;
}

