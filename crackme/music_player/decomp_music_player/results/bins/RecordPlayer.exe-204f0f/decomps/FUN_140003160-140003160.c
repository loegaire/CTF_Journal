
void FUN_140003160(undefined8 *param_1,HWND param_2)

{
  HWND hWnd;
  LONG_PTR LVar1;
  LPARAM lParam;
  
  param_1[1] = param_2;
  hWnd = GetDlgItem(param_2,*(int *)(param_1 + 2));
  *param_1 = hWnd;
  if (hWnd != (HWND)0x0) {
    SetWindowLongPtrW(hWnd,-0x15,(LONG_PTR)param_1);
    LVar1 = SetWindowLongPtrW((HWND)*param_1,-4,0x140002f80);
    param_1[3] = LVar1;
    if ((*(char *)((longlong)param_1 + 0x31) == '\0') || (*(char *)(param_1 + 6) == '\0')) {
      lParam = param_1[4];
    }
    else {
      lParam = param_1[5];
    }
                    /* WARNING: Could not recover jumptable at 0x0001400031d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SendMessageW((HWND)*param_1,0x172,0,lParam);
    return;
  }
  return;
}

