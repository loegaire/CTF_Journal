
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_140002360(HINSTANCE param_1,undefined8 param_2,wchar_t *param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  DWORD DVar3;
  int iVar4;
  UINT UVar5;
  ulong uVar6;
  LSTATUS LVar7;
  BOOL BVar8;
  int iVar9;
  HWND pHVar10;
  ulonglong uVar11;
  HANDLE hFindFile;
  HGDIOBJ pvVar12;
  undefined8 uVar13;
  HACCEL hAccTable;
  HDC pHVar14;
  HDC pHVar15;
  HBITMAP pHVar16;
  longlong lVar17;
  longlong lVar18;
  HWND pHVar19;
  int iVar20;
  undefined1 auStackY_588 [32];
  HKEY local_558;
  tagMSG local_550;
  DWORD local_520 [2];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  _WIN32_FIND_DATAW local_4e8;
  WCHAR local_298 [32];
  WCHAR local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_140008000 ^ (ulonglong)auStackY_588;
  local_520[0] = GetSystemMetrics(2);
  if (0 < (int)local_520[0]) {
    local_520[0] = local_520[0] + 1;
  }
  pHVar10 = GetDesktopWindow();
  IsWindow(pHVar10);
  iVar9 = 0;
  iVar20 = 0;
  DVar3 = GetTickCount();
  local_520[0] = DVar3 % 100 + 5;
  SetLastError(local_520[0]);
  bVar2 = false;
  DVar3 = GetTickCount();
  local_520[0] = DVar3 % 100 + 5;
  SetLastError(local_520[0]);
  pHVar10 = (HWND)0x0;
  pHVar19 = (HWND)0x0;
  DVar3 = GetTickCount();
  local_520[0] = DVar3 % 100 + 5;
  SetLastError(local_520[0]);
  lVar18 = 5;
  bVar1 = false;
  if (param_3 != (wchar_t *)0x0) {
    uVar11 = 0xffffffffffffffff;
    do {
      uVar11 = uVar11 + 1;
    } while (param_3[uVar11] != L'\0');
    bVar1 = bVar2;
    if (1 < uVar11) {
      iVar4 = wcsncmp(param_3,L"/c",2);
      if ((iVar4 == 0) || (iVar4 = wcsncmp(param_3,L"-c",2), iVar4 == 0)) {
        local_520[0] = 0x20;
        GetComputerNameW(local_298,local_520);
        bVar1 = true;
        pHVar10 = pHVar19;
        iVar9 = iVar20;
      }
      else {
        iVar4 = wcsncmp(param_3,L"/p",2);
        if ((iVar4 == 0) || (iVar4 = wcsncmp(param_3,L"-p",2), iVar4 == 0)) {
          pHVar14 = GetDC((HWND)0x0);
          pHVar15 = CreateCompatibleDC(pHVar14);
          pHVar16 = CreateCompatibleBitmap(pHVar14,1,1);
          DeleteObject(pHVar16);
          DeleteDC(pHVar15);
          ReleaseDC((HWND)0x0,pHVar14);
          uVar6 = wcstoul(param_3 + 3,(wchar_t **)0x0,10);
          lVar17 = 5;
          do {
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          param_4 = 4;
          pHVar10 = (HWND)(ulonglong)uVar6;
          iVar9 = 1;
        }
        else {
          iVar4 = wcsncmp(param_3,L"/s",2);
          if ((iVar4 == 0) || (iVar4 = wcsncmp(param_3,L"-s",2), iVar4 == 0)) {
            param_4 = 3;
            local_520[0] = GetSystemMetrics(0);
            DAT_140008980 = 1;
            UVar5 = GetWindowsDirectoryW(local_258,0x104);
            pHVar10 = pHVar19;
            iVar9 = iVar20;
            if (UVar5 != 0) {
              wcscat_s(local_258,0x104,L"*.dll");
              hFindFile = FindFirstFileW(local_258,&local_4e8);
              if (hFindFile != (HANDLE)0xffffffffffffffff) {
                FindClose(hFindFile);
              }
            }
          }
        }
      }
    }
  }
  local_520[0] = 0;
  lVar17 = 5;
  do {
    local_520[0] = local_520[0] + 1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  LoadStringW(param_1,0x67,(LPWSTR)&DAT_1400089b0,100);
  LVar7 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,&local_558);
  if (LVar7 == 0) {
    RegCloseKey(local_558);
  }
  LoadStringW(param_1,0x6d,(LPWSTR)&DAT_1400088a0,100);
  pvVar12 = GetStockObject(4);
  GetObjectW(pvVar12,0x10,local_518);
  FUN_140002950(param_1);
  lVar17 = 5;
  local_520[0] = 0;
  do {
    local_520[0] = local_520[0] + 1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  uVar13 = FUN_140002bf0(param_1,param_4,iVar9,pHVar10);
  if ((int)uVar13 == 0) {
    local_520[0] = 0x20;
    BVar8 = GetComputerNameW(local_298,local_520);
    if (BVar8 != 0) {
      return 0;
    }
  }
  else {
    if (!bVar1) {
      hAccTable = LoadAcceleratorsW(param_1,(LPCWSTR)0x6d);
      pHVar10 = GetDesktopWindow();
      IsWindow(pHVar10);
      iVar9 = GetMessageW(&local_550,(HWND)0x0,0,0);
      while (iVar9 != 0) {
        pvVar12 = GetStockObject(4);
        GetObjectW(pvVar12,0x10,local_508);
        iVar9 = TranslateAcceleratorW(local_550.hwnd,hAccTable,&local_550);
        if (iVar9 == 0) {
          pvVar12 = GetStockObject(4);
          GetObjectW(pvVar12,0x10,local_4f8);
          TranslateMessage(&local_550);
          pHVar14 = GetDC((HWND)0x0);
          pHVar15 = CreateCompatibleDC(pHVar14);
          pHVar16 = CreateCompatibleBitmap(pHVar14,1,1);
          DeleteObject(pHVar16);
          DeleteDC(pHVar15);
          ReleaseDC((HWND)0x0,pHVar14);
          DispatchMessageW(&local_550);
        }
        iVar9 = GetMessageW(&local_550,(HWND)0x0,0,0);
      }
      pHVar10 = GetDesktopWindow();
      IsWindow(pHVar10);
      return (undefined4)local_550.wParam;
    }
    DVar3 = GetTickCount();
    local_520[0] = DVar3 % 100 + 5;
    SetLastError(local_520[0]);
    DialogBoxParamW(param_1,(LPCWSTR)0x82,(HWND)0x0,FUN_140001f30,0);
    do {
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return 0;
}

