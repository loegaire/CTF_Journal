
ulonglong FUN_140001350(HANDLE param_1,HWND param_2)

{
  BOOL BVar1;
  LONG_PTR LVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar3;
  
  if (*(char *)((longlong)param_1 + 0x41) != '\0') {
    SetWindowRgn(*(HWND *)((longlong)param_1 + 0x10),(HRGN)0x0,1);
    LVar2 = SetWindowLongPtrW(*(HWND *)((longlong)param_1 + 0x10),-4,
                              *(LONG_PTR *)((longlong)param_1 + 8));
    RemovePropW(*(HWND *)((longlong)param_1 + 0x10),L"skin");
    *(bool *)((longlong)param_1 + 0x41) = LVar2 == 0;
    InvalidateRect(*(HWND *)((longlong)param_1 + 0x10),(RECT *)0x0,1);
  }
  *(HWND *)((longlong)param_1 + 0x10) = param_2;
  SetWindowRgn(param_2,*(HRGN *)((longlong)param_1 + 0x18),1);
  LVar2 = SetWindowLongPtrW(*(HWND *)((longlong)param_1 + 0x10),-4,0x1400014b0);
  *(LONG_PTR *)((longlong)param_1 + 8) = LVar2;
  BVar1 = SetPropW(*(HWND *)((longlong)param_1 + 0x10),L"skin",param_1);
  uVar3 = CONCAT44(extraout_var,BVar1);
  if (BVar1 == 0) {
    if (*(char *)((longlong)param_1 + 0x41) != '\0') {
      SetWindowRgn(*(HWND *)((longlong)param_1 + 0x10),(HRGN)0x0,1);
      LVar2 = SetWindowLongPtrW(*(HWND *)((longlong)param_1 + 0x10),-4,
                                *(LONG_PTR *)((longlong)param_1 + 8));
      RemovePropW(*(HWND *)((longlong)param_1 + 0x10),L"skin");
      *(bool *)((longlong)param_1 + 0x41) = LVar2 == 0;
      BVar1 = InvalidateRect(*(HWND *)((longlong)param_1 + 0x10),(RECT *)0x0,1);
      uVar3 = CONCAT44(extraout_var_00,BVar1);
    }
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    *(bool *)((longlong)param_1 + 0x41) = *(longlong *)((longlong)param_1 + 8) != 0;
    InvalidateRect(*(HWND *)((longlong)param_1 + 0x10),(RECT *)0x0,1);
    uVar3 = (ulonglong)*(byte *)((longlong)param_1 + 0x41);
  }
  return uVar3;
}

