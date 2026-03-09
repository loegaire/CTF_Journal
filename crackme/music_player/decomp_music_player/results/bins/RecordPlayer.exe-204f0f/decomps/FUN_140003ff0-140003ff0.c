
HGDIOBJ FUN_140003ff0(longlong *param_1,int param_2,HWND param_3,undefined8 param_4)

{
  int iVar1;
  HGDIOBJ pvVar2;
  HCURSOR hCursor;
  
  if (param_2 == 0x133) {
    SetBkColor((HDC)param_3,0x3f5d8a);
    SetTextColor((HDC)param_3,0xffffff);
    pvVar2 = (HGDIOBJ)param_1[8];
  }
  else if (param_2 == 0x138) {
    SetBkMode((HDC)param_3,1);
    pvVar2 = GetStockObject(5);
  }
  else {
    if ((param_2 == 0x20) && ((iVar1 = GetDlgCtrlID(param_3), iVar1 == 0x3f1 || (iVar1 == 0x3f4))))
    {
      hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f89);
      SetCursor(hCursor);
      SetWindowLongPtrW((HWND)param_1[2],0,1);
      return (HGDIOBJ)0x1;
    }
    pvVar2 = (HGDIOBJ)FUN_140002d70(param_1,param_2,param_3,param_4);
  }
  return pvVar2;
}

