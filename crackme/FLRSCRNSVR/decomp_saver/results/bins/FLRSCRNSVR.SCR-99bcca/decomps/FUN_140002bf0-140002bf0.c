
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140002bf0(HINSTANCE param_1,int param_2,int param_3,HWND param_4)

{
  UINT UVar1;
  BOOL BVar2;
  LSTATUS LVar3;
  DWORD DVar4;
  HANDLE pvVar5;
  HWND pHVar6;
  HDC pHVar7;
  HDC pHVar8;
  HBITMAP pHVar9;
  HGDIOBJ pvVar10;
  __time64_t _Var11;
  HWND hWnd;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  undefined1 auStackY_a28 [32];
  tagRECT local_9b8;
  HKEY local_9a8;
  DWORD local_9a0;
  undefined4 uStack_99c;
  longlong local_990;
  LARGE_INTEGER local_988;
  LARGE_INTEGER local_980;
  undefined1 local_978 [4];
  int local_974;
  int local_970;
  undefined1 local_958 [16];
  _WIN32_FIND_DATAW local_948;
  _WIN32_FIND_DATAW local_6f8;
  WCHAR local_4a8 [32];
  WCHAR local_468 [264];
  WCHAR local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_140008000 ^ (ulonglong)auStackY_a28;
  UVar1 = GetWindowsDirectoryW(local_468,0x104);
  iVar18 = 0;
  if (UVar1 != 0) {
    wcscat_s(local_468,0x104,L"\\*.dll");
    pvVar5 = FindFirstFileW(local_468,&local_948);
    if (pvVar5 != (HANDLE)0xffffffffffffffff) {
      local_990 = 0;
      iVar14 = iVar18;
      do {
        iVar14 = iVar14 + 1;
        local_990 = local_990 + (ulonglong)local_948.nFileSizeLow;
        BVar2 = FindNextFileW(pvVar5,&local_948);
        if (BVar2 == 0) break;
      } while (iVar14 < 10);
      FindClose(pvVar5);
    }
  }
  QueryPerformanceCounter(&local_988);
  DAT_140008890 = param_1;
  LVar3 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,&local_9a8);
  if (LVar3 == 0) {
    RegCloseKey(local_9a8);
  }
  local_9b8.left = 0;
  local_9b8.top = 0;
  local_9b8.right = GetSystemMetrics(0);
  local_9b8.bottom = GetSystemMetrics(1);
  DVar4 = GetTickCount();
  local_9a0 = DVar4 % 100 + 5;
  SetLastError(local_9a0);
  if (param_3 == 0) {
    pHVar7 = GetDC((HWND)0x0);
    pHVar8 = CreateCompatibleDC(pHVar7);
    pHVar9 = CreateCompatibleBitmap(pHVar7,1,1);
    DeleteObject(pHVar9);
    DeleteDC(pHVar8);
    ReleaseDC((HWND)0x0,pHVar7);
    SetCursor((HCURSOR)0x0);
    ShowCursor(0);
    iVar14 = GetSystemMetrics(0);
    local_990 = CONCAT44(local_990._4_4_,iVar14);
    pHVar6 = CreateWindowExW(0,(LPCWSTR)&DAT_1400088a0,(LPCWSTR)0x0,0x90000000,local_9b8.left,
                             local_9b8.top,local_9b8.right,local_9b8.bottom,(HWND)0x0,(HMENU)0x0,
                             param_1,(LPVOID)0x0);
  }
  else {
    local_990 = CONCAT44(local_990._4_4_,0x20);
    BVar2 = GetComputerNameW(local_4a8,(LPDWORD)&local_990);
    if (BVar2 != 0) {
      local_9a0 = (DWORD)(ushort)local_4a8[0];
    }
    GetClientRect(param_4,&local_9b8);
    pHVar6 = CreateWindowExW(0,(LPCWSTR)&DAT_1400088a0,(LPCWSTR)0x0,0x50000000,local_9b8.left,
                             local_9b8.top,local_9b8.right - local_9b8.left,
                             local_9b8.bottom - local_9b8.top,param_4,(HMENU)0x0,param_1,(LPVOID)0x0
                            );
    UVar1 = GetWindowsDirectoryW((LPWSTR)&local_948,0x104);
    if (UVar1 != 0) {
      wcscat_s((wchar_t *)&local_948,0x104,L"*.dll");
      pvVar5 = FindFirstFileW((LPCWSTR)&local_948,&local_6f8);
      if (pvVar5 != (HANDLE)0xffffffffffffffff) {
        FindClose(pvVar5);
      }
    }
  }
  if (pHVar6 == (HWND)0x0) {
    pHVar6 = GetDesktopWindow();
    IsWindow(pHVar6);
    uVar12 = 0;
  }
  else {
    DAT_140008998 = LoadBitmapW(param_1,(LPCWSTR)0x82);
    UVar1 = GetWindowsDirectoryW(local_258,0x104);
    if (UVar1 != 0) {
      wcscat_s(local_258,0x104,L"*.dll");
      pvVar5 = FindFirstFileW(local_258,&local_6f8);
      if (pvVar5 != (HANDLE)0xffffffffffffffff) {
        FindClose(pvVar5);
      }
    }
    if (DAT_140008998 == (HBITMAP)0x0) {
      DAT_140008988 = 0x20;
      DAT_1400089a0 = 0x20;
      LVar3 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,
                            (PHKEY)&local_9a0);
      if (LVar3 == 0) {
        RegCloseKey((HKEY)CONCAT44(uStack_99c,local_9a0));
      }
    }
    else {
      pHVar7 = GetDC((HWND)0x0);
      if (pHVar7 != (HDC)0x0) {
        pHVar8 = CreateCompatibleDC(pHVar7);
        pHVar9 = CreateCompatibleBitmap(pHVar7,0x10,0x10);
        if ((pHVar8 != (HDC)0x0) && (pHVar9 != (HBITMAP)0x0)) {
          pvVar10 = SelectObject(pHVar8,pHVar9);
          Rectangle(pHVar8,0,0,0x10,0x10);
          Ellipse(pHVar8,2,2,0xe,0xe);
          SelectObject(pHVar8,pvVar10);
          DeleteObject(pHVar9);
          DeleteDC(pHVar8);
        }
        ReleaseDC((HWND)0x0,pHVar7);
      }
      pHVar7 = GetDC((HWND)0x0);
      pHVar8 = CreateCompatibleDC(pHVar7);
      pHVar9 = CreateCompatibleBitmap(pHVar7,1,1);
      DeleteObject(pHVar9);
      DeleteDC(pHVar8);
      ReleaseDC((HWND)0x0,pHVar7);
      GetObjectW(DAT_140008998,0x20,local_978);
      DAT_140008988 = local_974;
      pvVar10 = GetStockObject(4);
      GetObjectW(pvVar10,0x10,&local_9a0);
      DAT_1400089a0 = local_970;
    }
    _Var11 = _time64((__time64_t *)0x0);
    srand((uint)_Var11);
    pHVar7 = GetDC((HWND)0x0);
    pHVar8 = CreateCompatibleDC(pHVar7);
    pHVar9 = CreateCompatibleBitmap(pHVar7,1,1);
    DeleteObject(pHVar9);
    DeleteDC(pHVar8);
    ReleaseDC((HWND)0x0,pHVar7);
    iVar14 = rand();
    DAT_1400089a4 = iVar14 % 0x33 + 10;
    FUN_140001ae0(u_Crackmes_one_140008080);
    DVar4 = GetTickCount();
    local_9a0 = DVar4 % 100 + 5;
    SetLastError(local_9a0);
    iVar14 = MulDiv(local_9b8.bottom,1,10);
    DAT_1400089a8 = CreateFontW(-iVar14,0,0,0,700,0,0,0,1,0,0,0,0x20,L"Impact");
    QueryPerformanceCounter(&local_980);
    pHVar7 = GetDC(pHVar6);
    lVar15 = 5;
    local_9a0 = 0;
    lVar13 = 5;
    do {
      local_9a0 = local_9a0 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    DAT_140008978 = CreateCompatibleDC(pHVar7);
    local_9a0 = 0;
    do {
      local_9a0 = local_9a0 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    DAT_140008968 = CreateCompatibleBitmap(pHVar7,local_9b8.right,local_9b8.bottom);
    local_9a0 = GetSystemMetrics(0);
    DAT_140008990 = SelectObject(DAT_140008978,DAT_140008968);
    DVar4 = GetTickCount();
    local_9a0 = DVar4 % 100 + 5;
    SetLastError(local_9a0);
    ReleaseDC(pHVar6,pHVar7);
    if (0 < DAT_1400089a4) {
      piVar16 = &DAT_140008a88;
      do {
        hWnd = GetDesktopWindow();
        IsWindow(hWnd);
        pvVar10 = GetStockObject(4);
        GetObjectW(pvVar10,0x10,local_958);
        iVar17 = local_9b8.right - DAT_140008988;
        iVar14 = rand();
        piVar16[-2] = iVar14 % iVar17;
        pHVar7 = GetDC((HWND)0x0);
        pHVar8 = CreateCompatibleDC(pHVar7);
        pHVar9 = CreateCompatibleBitmap(pHVar7,1,1);
        DeleteObject(pHVar9);
        DeleteDC(pHVar8);
        ReleaseDC((HWND)0x0,pHVar7);
        iVar17 = local_9b8.bottom - DAT_1400089a0;
        iVar14 = rand();
        piVar16[-1] = iVar14 % iVar17;
        local_9a0 = GetSystemMetrics(0);
        iVar14 = rand();
        *piVar16 = iVar14 % 9 + -4;
        iVar14 = rand();
        piVar16[1] = iVar14 % 9 + -4;
        local_9a0 = GetSystemMetrics(0);
        if (*piVar16 == 0) {
          *piVar16 = 1;
        }
        pvVar10 = GetStockObject(4);
        GetObjectW(pvVar10,0x10,local_978);
        if (piVar16[1] == 0) {
          piVar16[1] = 1;
        }
        iVar18 = iVar18 + 1;
        piVar16 = piVar16 + 4;
      } while (iVar18 < DAT_1400089a4);
    }
    ShowWindow(pHVar6,param_2);
    UpdateWindow(pHVar6);
    pHVar7 = GetDC((HWND)0x0);
    pHVar8 = CreateCompatibleDC(pHVar7);
    pHVar9 = CreateCompatibleBitmap(pHVar7,1,1);
    DeleteObject(pHVar9);
    DeleteDC(pHVar8);
    ReleaseDC((HWND)0x0,pHVar7);
    SetTimer(pHVar6,1,0x32,(TIMERPROC)0x0);
    uVar12 = 1;
  }
  return uVar12;
}

