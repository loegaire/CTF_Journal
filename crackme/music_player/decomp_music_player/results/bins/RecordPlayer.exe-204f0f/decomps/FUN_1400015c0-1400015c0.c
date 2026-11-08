
bool FUN_1400015c0(longlong param_1)

{
  LONG_PTR LVar1;
  
  if (*(char *)(param_1 + 0x41) == '\0') {
    return true;
  }
  SetWindowRgn(*(HWND *)(param_1 + 0x10),(HRGN)0x0,1);
  LVar1 = SetWindowLongPtrW(*(HWND *)(param_1 + 0x10),-4,*(LONG_PTR *)(param_1 + 8));
  RemovePropW(*(HWND *)(param_1 + 0x10),L"skin");
  *(bool *)(param_1 + 0x41) = LVar1 == 0;
  InvalidateRect(*(HWND *)(param_1 + 0x10),(RECT *)0x0,1);
  return *(char *)(param_1 + 0x41) == '\0';
}

