
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140001f30(HWND param_1,int param_2,short param_3)

{
  short *psVar1;
  BOOL BVar2;
  LSTATUS LVar3;
  UINT UVar4;
  DWORD DVar5;
  HDC pHVar6;
  HDC pHVar7;
  HBITMAP pHVar8;
  HANDLE hFindFile;
  longlong lVar9;
  HGDIOBJ h;
  HWND pHVar10;
  ulonglong uVar11;
  undefined1 auStackY_958 [32];
  HKEY local_900;
  undefined8 local_8f8;
  DWORD local_8f0 [2];
  undefined1 local_8e8 [16];
  _WIN32_FIND_DATAW local_8d8;
  WCHAR local_688 [32];
  WCHAR local_648;
  short asStack_646 [255];
  WCHAR local_448 [264];
  WCHAR local_238 [256];
  ulonglong local_38;
  
  local_38 = DAT_140008000 ^ (ulonglong)auStackY_958;
  local_8f0[0] = 0x100;
  BVar2 = GetComputerNameW(local_238,local_8f0);
  if ((BVar2 != 0) && (local_8f0[0] != 0)) {
    uVar11 = (ulonglong)local_8f0[0];
    do {
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  pHVar6 = GetDC((HWND)0x0);
  pHVar7 = CreateCompatibleDC(pHVar6);
  pHVar8 = CreateCompatibleBitmap(pHVar6,1,1);
  DeleteObject(pHVar8);
  DeleteDC(pHVar7);
  ReleaseDC((HWND)0x0,pHVar6);
  if (param_2 == 0x110) {
    FUN_140001ae0(&local_648);
    SetDlgItemTextW(param_1,0x3e9,&local_648);
  }
  else {
    if (param_2 != 0x111) {
      return 0;
    }
    if (param_3 == 1) {
      GetDlgItemTextW(param_1,0x3e9,&local_648,0x100);
      GetSystemMetrics(0);
      pHVar6 = GetDC((HWND)0x0);
      pHVar7 = CreateCompatibleDC(pHVar6);
      pHVar8 = CreateCompatibleBitmap(pHVar6,1,1);
      DeleteObject(pHVar8);
      DeleteDC(pHVar7);
      ReleaseDC((HWND)0x0,pHVar6);
      local_8f8._0_4_ = GetSystemMetrics(0);
      LVar3 = RegCreateKeyExW((HKEY)0xffffffff80000001,L"Software\\FLRSCRNSVR",0,(LPWSTR)0x0,0,
                              0x20006,(LPSECURITY_ATTRIBUTES)0x0,&local_900,(LPDWORD)0x0);
      if (LVar3 == 0) {
        local_8f8._0_4_ = 0x20;
        GetComputerNameW(local_688,(LPDWORD)&local_8f8);
        UVar4 = GetWindowsDirectoryW(local_448,0x104);
        if (UVar4 != 0) {
          wcscat_s(local_448,0x104,L"*.dll");
          hFindFile = FindFirstFileW(local_448,&local_8d8);
          if (hFindFile != (HANDLE)0xffffffffffffffff) {
            FindClose(hFindFile);
          }
        }
        lVar9 = -1;
        do {
          psVar1 = asStack_646 + lVar9;
          lVar9 = lVar9 + 1;
        } while (*psVar1 != 0);
        RegSetValueExW(local_900,L"Text",0,1,(BYTE *)&local_648,(int)lVar9 * 2 + 2);
        DVar5 = GetTickCount();
        SetLastError(DVar5 % 100 + 5);
        RegCloseKey(local_900);
      }
      h = GetStockObject(4);
      GetObjectW(h,0x10,local_8e8);
      LVar3 = RegCreateKeyExW((HKEY)0xffffffff80000001,L"Software\\FLRSCRNSVR",0,(LPWSTR)0x0,0,
                              0x20006,(LPSECURITY_ATTRIBUTES)0x0,&local_900,(LPDWORD)0x0);
      if (LVar3 == 0) {
        LVar3 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,
                              (PHKEY)&local_8f8);
        if (LVar3 == 0) {
          RegCloseKey((HKEY)CONCAT44(local_8f8._4_4_,(DWORD)local_8f8));
        }
        pHVar10 = GetDesktopWindow();
        IsWindow(pHVar10);
        RegSetValueExW(local_900,L"Quak",0,1,"<",0x34);
        pHVar10 = GetDesktopWindow();
        IsWindow(pHVar10);
        RegCloseKey(local_900);
      }
      EndDialog(param_1,1);
    }
    else {
      if (param_3 != 2) {
        return 0;
      }
      EndDialog(param_1,2);
    }
  }
  return 1;
}

