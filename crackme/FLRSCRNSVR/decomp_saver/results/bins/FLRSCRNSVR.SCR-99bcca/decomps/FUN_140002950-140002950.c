
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140002950(HINSTANCE param_1)

{
  int iVar1;
  LSTATUS LVar2;
  HGDIOBJ pvVar3;
  HWND hWnd;
  HDC pHVar4;
  HDC pHVar5;
  HBITMAP pHVar6;
  longlong lVar7;
  undefined1 auStackY_d8 [32];
  HKEY local_a0;
  WNDCLASSEXW local_98;
  undefined4 local_48 [4];
  LARGE_INTEGER local_38;
  LARGE_INTEGER local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_140008000 ^ (ulonglong)auStackY_d8;
  pvVar3 = GetStockObject(0);
  iVar1 = GetObjectW(pvVar3,0x10,local_48);
  if (iVar1 != 0) {
    local_48[0] = 0;
  }
  hWnd = GetDesktopWindow();
  IsWindow(hWnd);
  local_98.cbSize = 0x50;
  LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,&local_a0);
  if (LVar2 == 0) {
    RegCloseKey(local_a0);
  }
  local_98.style = 3;
  local_98.lpfnWndProc = FUN_140003500;
  GetSystemMetrics(0);
  local_98.cbClsExtra = 0;
  QueryPerformanceCounter(&local_38);
  local_98.cbWndExtra = 0;
  local_98.hInstance = param_1;
  pHVar4 = GetDC((HWND)0x0);
  pHVar5 = CreateCompatibleDC(pHVar4);
  pHVar6 = CreateCompatibleBitmap(pHVar4,1,1);
  DeleteObject(pHVar6);
  DeleteDC(pHVar5);
  ReleaseDC((HWND)0x0,pHVar4);
  local_98.hIcon = LoadIconW(param_1,(LPCWSTR)0x6b);
  local_98.hCursor = (HCURSOR)0x0;
  QueryPerformanceCounter(&local_30);
  lVar7 = 5;
  do {
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  local_98.hbrBackground = GetStockObject(4);
  local_98.lpszMenuName = (LPCWSTR)0x0;
  pHVar4 = GetDC((HWND)0x0);
  pHVar5 = CreateCompatibleDC(pHVar4);
  pHVar6 = CreateCompatibleBitmap(pHVar4,1,1);
  DeleteObject(pHVar6);
  DeleteDC(pHVar5);
  ReleaseDC((HWND)0x0,pHVar4);
  local_98.lpszClassName = (LPCWSTR)&DAT_1400088a0;
  pvVar3 = GetStockObject(4);
  GetObjectW(pvVar3,0x10,local_28);
  local_98.hIconSm = LoadIconW(local_98.hInstance,(LPCWSTR)0x6c);
  GetSystemMetrics(0);
  pHVar4 = GetDC((HWND)0x0);
  pHVar5 = CreateCompatibleDC(pHVar4);
  pHVar6 = CreateCompatibleBitmap(pHVar4,1,1);
  DeleteObject(pHVar6);
  DeleteDC(pHVar5);
  ReleaseDC((HWND)0x0,pHVar4);
  RegisterClassExW(&local_98);
  return;
}

