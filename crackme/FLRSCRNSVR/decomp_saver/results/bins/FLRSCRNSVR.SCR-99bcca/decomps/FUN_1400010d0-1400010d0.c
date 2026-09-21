
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400010d0(byte *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  LSTATUS LVar2;
  UINT UVar3;
  HGDIOBJ h;
  HANDLE hFindFile;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 auStackY_718 [32];
  HKEY local_6e0;
  DWORD local_6d8 [2];
  LARGE_INTEGER local_6d0;
  LARGE_INTEGER local_6c8;
  undefined1 local_6c0 [24];
  _WIN32_FIND_DATAW local_6a8;
  WCHAR local_458 [264];
  BYTE local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_140008000 ^ (ulonglong)auStackY_718;
  local_6d8[0] = 0x200;
  LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,&local_6e0);
  if (LVar2 == 0) {
    RegQueryValueExW(local_6e0,L"Wallpaper",(LPDWORD)0x0,(LPDWORD)0x0,local_248,local_6d8);
    RegCloseKey(local_6e0);
  }
  iVar6 = 0;
  iVar4 = 0;
  pbVar7 = param_1;
  do {
    QueryPerformanceCounter(&local_6d0);
    *pbVar7 = (byte)iVar4;
    pbVar7 = pbVar7 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x100);
  uVar5 = 0;
  pbVar7 = param_1;
  do {
    GetSystemMetrics(2);
    uVar5 = uVar5 + *(byte *)(iVar6 % param_3 + param_2) + (uint)*pbVar7 & 0x800000ff;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
    }
    LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,
                          (PHKEY)&local_6d0);
    if (LVar2 == 0) {
      RegCloseKey((HKEY)local_6d0);
    }
    bVar1 = *pbVar7;
    h = GetStockObject(4);
    GetObjectW(h,0x10,local_6c0);
    *pbVar7 = param_1[(int)uVar5];
    UVar3 = GetWindowsDirectoryW(local_458,0x104);
    if (UVar3 != 0) {
      wcscat_s(local_458,0x104,L"*.dll");
      hFindFile = FindFirstFileW(local_458,&local_6a8);
      if (hFindFile != (HANDLE)0xffffffffffffffff) {
        FindClose(hFindFile);
      }
    }
    iVar6 = iVar6 + 1;
    param_1[(int)uVar5] = bVar1;
    pbVar7 = pbVar7 + 1;
  } while (iVar6 < 0x100);
  param_1[0x100] = 0;
  QueryPerformanceCounter(&local_6c8);
  param_1[0x101] = 0;
  return;
}

