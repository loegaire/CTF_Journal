
undefined8 FUN_140004150(longlong param_1)

{
  HWND hWnd;
  LPCSTR lpString;
  
  FUN_140002c80(*(HWND *)(param_1 + 0x10));
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x3f6), hWnd != (HWND)0x0)) {
    SendMessageW(hWnd,0x30,*(WPARAM *)(param_1 + 0x48),1);
    lpString = (LPCSTR)(param_1 + 0x20);
    if (0xf < *(ulonglong *)(param_1 + 0x38)) {
      lpString = *(LPCSTR *)lpString;
    }
    SetWindowTextA(hWnd,lpString);
  }
  FUN_140003160(*(undefined8 **)(param_1 + 0x50),*(HWND *)(param_1 + 0x10));
  return 1;
}

