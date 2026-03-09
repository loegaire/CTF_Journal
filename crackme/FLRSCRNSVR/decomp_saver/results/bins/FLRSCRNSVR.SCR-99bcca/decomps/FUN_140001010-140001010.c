
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140001010(void)

{
  void *pvVar1;
  UINT UVar2;
  HWND hWnd;
  HANDLE hFindFile;
  undefined1 auStack_4a8 [48];
  _WIN32_FIND_DATAW local_478;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  pvVar1 = ProcessEnvironmentBlock;
  local_18 = DAT_140008000 ^ (ulonglong)auStack_4a8;
  hWnd = GetDesktopWindow();
  IsWindow(hWnd);
  if ((pvVar1 == (void *)0x0) || (*(char *)((longlong)pvVar1 + 1) == '\0')) {
    GetSystemMetrics(0);
  }
  else {
    UVar2 = GetWindowsDirectoryW(local_228,0x104);
    if (UVar2 != 0) {
      wcscat_s(local_228,0x104,L"*.dll");
      hFindFile = FindFirstFileW(local_228,&local_478);
      if (hFindFile != (HANDLE)0xffffffffffffffff) {
        FindClose(hFindFile);
      }
    }
  }
  return 0;
}

