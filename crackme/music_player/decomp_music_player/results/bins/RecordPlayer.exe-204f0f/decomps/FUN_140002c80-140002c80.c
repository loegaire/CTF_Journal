
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140002c80(HWND param_1)

{
  uint uVar1;
  HWND hWnd;
  HWND hWndTo;
  undefined1 auStackY_78 [32];
  tagRECT local_38;
  tagRECT local_28;
  ulonglong local_18;
  
  local_18 = DAT_140009000 ^ (ulonglong)auStackY_78;
  hWnd = GetParent(param_1);
  GetClientRect(hWnd,&local_28);
  GetWindowRect(param_1,&local_38);
  local_38.right = local_38.right - local_38.left;
  local_38.bottom = local_38.bottom - local_38.top;
  local_38.left = (local_28.right - local_38.right) / 2;
  local_38.top = (local_28.bottom - local_38.bottom) / 2;
  uVar1 = GetWindowLongW(param_1,-0x10);
  if ((uVar1 >> 0x1e & 1) == 0) {
    hWndTo = GetDesktopWindow();
    MapWindowPoints(hWnd,hWndTo,(LPPOINT)&local_38,1);
  }
  SetWindowPos(param_1,(HWND)0x0,local_38.left,local_38.top,0,0,5);
  return;
}

