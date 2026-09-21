
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140001ae0(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  LSTATUS LVar3;
  UINT UVar4;
  HDC pHVar5;
  HDC pHVar6;
  HBITMAP pHVar7;
  undefined8 uVar8;
  HANDLE hFindFile;
  HWND pHVar9;
  size_t sVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  HGDIOBJ h;
  longlong lVar13;
  undefined1 auStackY_af8 [32];
  undefined8 local_ac0;
  HKEY local_ab8;
  HKEY local_ab0;
  DWORD local_aa8 [2];
  LARGE_INTEGER local_aa0 [3];
  _WIN32_FIND_DATAW local_a88;
  wchar_t local_838 [256];
  WCHAR local_638 [264];
  wchar_t local_428 [256];
  BYTE local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_140008000 ^ (ulonglong)auStackY_af8;
  local_aa8[1] = 0x200;
  LVar3 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,&local_ab8);
  if (LVar3 == 0) {
    LVar3 = RegQueryValueExW(local_ab8,L"Wallpaper",(LPDWORD)0x0,(LPDWORD)0x0,local_228,
                             local_aa8 + 1);
    if (LVar3 == 0) {
      local_ac0._0_4_ = 1;
    }
    RegCloseKey(local_ab8);
  }
  pHVar5 = GetDC((HWND)0x0);
  pHVar6 = CreateCompatibleDC(pHVar5);
  pHVar7 = CreateCompatibleBitmap(pHVar5,1,1);
  DeleteObject(pHVar7);
  DeleteDC(pHVar6);
  ReleaseDC((HWND)0x0,pHVar5);
  LVar3 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Software\\FLRSCRNSVR",0,0x20019,&local_ab0);
  lVar13 = 5;
  if (LVar3 == 0) {
    QueryPerformanceCounter(local_aa0);
    uVar8 = FUN_140001010();
    local_ac0._0_4_ = (int)uVar8 + 1;
    GetSystemMetrics(0);
    local_aa8[0] = 0x200;
    UVar4 = GetWindowsDirectoryW(local_638,0x104);
    if (UVar4 != 0) {
      wcscat_s(local_638,0x104,L"*.dll");
      hFindFile = FindFirstFileW(local_638,&local_a88);
      if (hFindFile != (HANDLE)0xffffffffffffffff) {
        FindClose(hFindFile);
      }
    }
    LVar3 = RegQueryValueExW(local_ab0,L"Text",(LPDWORD)0x0,(LPDWORD)&local_ac0,(LPBYTE)param_1,
                             local_aa8);
    if (LVar3 == 0) {
      lVar11 = 5;
      do {
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      sVar10 = wcsnlen(param_1,0x100);
      if (sVar10 == 0) {
        wcscpy_s(param_1,0x100,L"Crackmes.one");
      }
    }
    else {
      pHVar9 = GetDesktopWindow();
      IsWindow(pHVar9);
      wcscpy_s(param_1,0x100,L"Crackmes.one");
      pHVar5 = GetDC((HWND)0x0);
      pHVar6 = CreateCompatibleDC(pHVar5);
      pHVar7 = CreateCompatibleBitmap(pHVar5,1,1);
      DeleteObject(pHVar7);
      DeleteDC(pHVar6);
      ReleaseDC((HWND)0x0,pHVar5);
    }
    GetSystemMetrics(0);
    RegCloseKey(local_ab0);
  }
  else {
    wcscpy_s(param_1,0x100,L"Crackmes.one");
  }
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (param_1[lVar11] != L'\0');
  if (lVar11 == 0x19) {
    lVar11 = 5;
    do {
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    wcscpy_s(local_838,0x100,param_1);
    local_ac0._0_4_ = GetSystemMetrics(0);
    FUN_140001300((longlong)local_838);
    pHVar9 = GetDesktopWindow();
    IsWindow(pHVar9);
    FUN_140001890(local_428);
    local_ac0._0_4_ = GetSystemMetrics(0);
    do {
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    pwVar12 = local_838;
    lVar13 = (longlong)local_428 - (longlong)pwVar12;
    do {
      wVar1 = *pwVar12;
      wVar2 = *(wchar_t *)((longlong)pwVar12 + lVar13);
      if (wVar1 != wVar2) break;
      pwVar12 = pwVar12 + 1;
    } while (wVar2 != L'\0');
    if (wVar1 == wVar2) {
      h = GetStockObject(4);
      GetObjectW(h,0x10,local_aa0);
      DAT_140008898 = 1;
    }
    else {
      pHVar5 = GetDC((HWND)0x0);
      pHVar6 = CreateCompatibleDC(pHVar5);
      pHVar7 = CreateCompatibleBitmap(pHVar5,1,1);
      DeleteObject(pHVar7);
      DeleteDC(pHVar6);
      ReleaseDC((HWND)0x0,pHVar5);
    }
  }
  else {
    LVar3 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,
                          (PHKEY)&local_ac0);
    if (LVar3 == 0) {
      RegCloseKey((HKEY)CONCAT44(local_ac0._4_4_,(DWORD)local_ac0));
    }
  }
  return;
}

