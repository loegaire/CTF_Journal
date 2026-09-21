
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140001890(wchar_t *param_1)

{
  DWORD DVar1;
  LSTATUS LVar2;
  HDC pHVar3;
  HDC pHVar4;
  HBITMAP pHVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStackY_58 [32];
  HKEY local_20;
  DWORD local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_140008000 ^ (ulonglong)auStackY_58;
  DVar1 = GetTickCount();
  SetLastError(DVar1 % 100 + 5);
  LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Software\\FLRSCRNSVR",0,0x20019,&local_20);
  if (LVar2 == 0) {
    pHVar3 = GetDC((HWND)0x0);
    pHVar4 = CreateCompatibleDC(pHVar3);
    pHVar5 = CreateCompatibleBitmap(pHVar3,1,1);
    DeleteObject(pHVar5);
    DeleteDC(pHVar4);
    ReleaseDC((HWND)0x0,pHVar3);
    local_18[1] = 1;
    GetSystemMetrics(0);
    local_18[0] = 0x200;
    pHVar3 = GetDC((HWND)0x0);
    pHVar4 = CreateCompatibleDC(pHVar3);
    pHVar5 = CreateCompatibleBitmap(pHVar3,1,1);
    DeleteObject(pHVar5);
    DeleteDC(pHVar4);
    ReleaseDC((HWND)0x0,pHVar3);
    LVar2 = RegQueryValueExW(local_20,L"Quak",(LPDWORD)0x0,local_18 + 1,(LPBYTE)param_1,local_18);
    lVar7 = 5;
    if (LVar2 == 0) {
      lVar6 = 5;
      do {
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    else {
      wcscpy_s(param_1,0x100,L"<Qj\t\x02\a%\x030\b\x04)h$\x01$\x18kw\x0fp6\x02\x0e\v");
      pHVar3 = GetDC((HWND)0x0);
      pHVar4 = CreateCompatibleDC(pHVar3);
      pHVar5 = CreateCompatibleBitmap(pHVar3,1,1);
      DeleteObject(pHVar5);
      DeleteDC(pHVar4);
      ReleaseDC((HWND)0x0,pHVar3);
    }
    do {
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    RegCloseKey(local_20);
  }
  else {
    wcscpy_s(param_1,0x100,u_Crackmes_one_140008080);
  }
  GetSystemMetrics(0);
  return;
}

