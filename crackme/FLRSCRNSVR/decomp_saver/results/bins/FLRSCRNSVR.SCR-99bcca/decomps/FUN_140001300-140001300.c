
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140001300(longlong param_1)

{
  ushort *puVar1;
  undefined2 uVar2;
  DWORD DVar3;
  BOOL BVar4;
  LSTATUS LVar5;
  UINT UVar6;
  HWND pHVar7;
  HDC pHVar8;
  HDC pHVar9;
  HBITMAP pHVar10;
  HGDIOBJ pvVar11;
  wchar_t *pwVar12;
  HANDLE pvVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStackY_6b8 [32];
  short local_688 [12];
  DWORD local_670;
  undefined4 uStack_66c;
  HKEY local_668;
  HKEY local_660;
  DWORD local_658 [2];
  undefined1 local_650 [16];
  undefined1 local_640 [16];
  undefined1 local_630 [24];
  _WIN32_FIND_DATAW local_618;
  WCHAR local_3c8 [32];
  wchar_t local_388 [80];
  wchar_t local_2e8 [80];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_140008000 ^ (ulonglong)auStackY_6b8;
  DVar3 = GetTickCount();
  local_670 = DVar3 % 100 + 5;
  SetLastError(local_670);
  wcscpy_s(local_388,0x50,L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOP");
  pHVar7 = GetDesktopWindow();
  IsWindow(pHVar7);
  wcscat_s(local_388,0x50,L"QRSTUVWXYZ0123456789}_{=-");
  local_658[0] = 0x20;
  BVar4 = GetComputerNameW(local_3c8,local_658);
  if (BVar4 != 0) {
    local_670 = (DWORD)(ushort)local_3c8[0];
  }
  wcscpy_s(local_2e8,0x50,L"-={_}9876543210ZYXWVUTSRQPONMLKJIHGF");
  pHVar8 = GetDC((HWND)0x0);
  pHVar9 = CreateCompatibleDC(pHVar8);
  pHVar10 = CreateCompatibleBitmap(pHVar8,1,1);
  DeleteObject(pHVar10);
  DeleteDC(pHVar9);
  ReleaseDC((HWND)0x0,pHVar8);
  pHVar8 = GetDC((HWND)0x0);
  pHVar9 = CreateCompatibleDC(pHVar8);
  pHVar10 = CreateCompatibleBitmap(pHVar8,1,1);
  DeleteObject(pHVar10);
  DeleteDC(pHVar9);
  ReleaseDC((HWND)0x0,pHVar8);
  wcscat_s(local_2e8,0x50,L"EDCBAzyxwvutsrqponmlkjihgfedcba");
  pvVar11 = GetStockObject(4);
  GetObjectW(pvVar11,0x10,local_650);
  uVar19 = 0xffffffffffffffff;
  uVar20 = 0xffffffffffffffff;
  do {
    uVar20 = uVar20 + 1;
  } while (*(short *)(param_1 + uVar20 * 2) != 0);
  uVar17 = 0;
  lVar18 = 5;
  local_670 = 0;
  lVar14 = 5;
  do {
    local_670 = local_670 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  uVar15 = uVar17;
  if (uVar20 != 0) {
    do {
      pHVar7 = GetDesktopWindow();
      IsWindow(pHVar7);
      pwVar12 = wcschr(local_388,*(wchar_t *)(param_1 + uVar15 * 2));
      if (pwVar12 != (wchar_t *)0x0) {
        local_670 = 0;
        lVar14 = 5;
        do {
          local_670 = local_670 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        *(wchar_t *)(param_1 + uVar15 * 2) = local_2e8[(longlong)pwVar12 - (longlong)local_388 >> 1]
        ;
      }
      LVar5 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,&local_668)
      ;
      if (LVar5 == 0) {
        RegCloseKey(local_668);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar20);
  }
  pvVar11 = GetStockObject(4);
  GetObjectW(pvVar11,0x10,local_640);
  local_688[0] = 0x46;
  local_688[1] = 0x4c;
  local_670 = 0;
  do {
    local_670 = local_670 + 1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  local_688[2] = 0x41;
  local_688[3] = 0x52;
  local_688[4] = 0x45;
  local_688[5] = 0x52;
  pvVar11 = GetStockObject(4);
  GetObjectW(pvVar11,0x10,local_630);
  DVar3 = GetTickCount();
  local_670 = DVar3 % 100 + 5;
  SetLastError(local_670);
  local_688[6] = 0x41;
  local_688[7] = 0x4c;
  local_670 = GetSystemMetrics(0);
  local_688[8] = 0x46;
  local_688[9] = 0;
  pHVar8 = GetDC((HWND)0x0);
  pHVar9 = CreateCompatibleDC(pHVar8);
  pHVar10 = CreateCompatibleBitmap(pHVar8,1,1);
  DeleteObject(pHVar10);
  DeleteDC(pHVar9);
  ReleaseDC((HWND)0x0,pHVar8);
  do {
    uVar19 = uVar19 + 1;
  } while (local_688[uVar19] != 0);
  LVar5 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,&local_660);
  if (LVar5 == 0) {
    RegCloseKey(local_660);
  }
  uVar15 = uVar17;
  if (uVar20 != 0) {
    do {
      UVar6 = GetWindowsDirectoryW(local_248,0x104);
      if (UVar6 != 0) {
        wcscat_s(local_248,0x104,L"*.dll");
        pvVar13 = FindFirstFileW(local_248,&local_618);
        if (pvVar13 != (HANDLE)0xffffffffffffffff) {
          FindClose(pvVar13);
        }
      }
      puVar1 = (ushort *)(param_1 + uVar15 * 2);
      *puVar1 = *puVar1 ^ (short)uVar15 + local_688[uVar15 % uVar19];
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar20);
  }
  if (uVar20 >> 1 != 0) {
    puVar16 = (undefined2 *)(param_1 + -2 + uVar20 * 2);
    do {
      LVar5 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,&local_668)
      ;
      if (LVar5 == 0) {
        RegCloseKey(local_668);
      }
      uVar2 = *(undefined2 *)(param_1 + uVar17 * 2);
      UVar6 = GetWindowsDirectoryW(local_248,0x104);
      if (UVar6 != 0) {
        wcscat_s(local_248,0x104,L"*.dll");
        pvVar13 = FindFirstFileW(local_248,&local_618);
        if (pvVar13 != (HANDLE)0xffffffffffffffff) {
          FindClose(pvVar13);
        }
      }
      *(undefined2 *)(param_1 + uVar17 * 2) = *puVar16;
      *puVar16 = uVar2;
      LVar5 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,
                            (PHKEY)&local_670);
      if (LVar5 == 0) {
        RegCloseKey((HKEY)CONCAT44(uStack_66c,local_670));
      }
      uVar17 = uVar17 + 1;
      puVar16 = puVar16 + -1;
    } while (uVar17 < uVar20 >> 1);
  }
  return;
}

