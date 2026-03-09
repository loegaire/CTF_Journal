
undefined8 FUN_1400040d0(longlong param_1,short param_2)

{
  char *lpFile;
  
  if ((param_2 != 0x3eb) && (param_2 != 0x3f0)) {
    if (param_2 == 0x3f1) {
      lpFile = "https://crackmes.one";
    }
    else {
      if (param_2 != 0x3f4) {
        return 0;
      }
      lpFile = "https://crackmes.one/user/Fatmike";
    }
    ShellExecuteA((HWND)0x0,"open",lpFile,(LPCSTR)0x0,(LPCSTR)0x0,3);
    return 1;
  }
  EndDialog(*(HWND *)(param_1 + 0x10),1);
  return 1;
}

