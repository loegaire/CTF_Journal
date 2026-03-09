
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1400043a0(HWND param_1,int param_2,ushort param_3)

{
  DWORD DVar1;
  LSTATUS LVar2;
  undefined1 auStackY_268 [32];
  HKEY local_230;
  HKEY local_228;
  DWORD local_220 [2];
  BYTE local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_140008000 ^ (ulonglong)auStackY_268;
  DVar1 = GetTickCount();
  SetLastError(DVar1 % 100 + 5);
  local_220[0] = 0x200;
  LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,&local_230);
  if (LVar2 == 0) {
    RegQueryValueExW(local_230,L"Wallpaper",(LPDWORD)0x0,(LPDWORD)0x0,local_218,local_220);
    RegCloseKey(local_230);
  }
  LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Control Panel\\Desktop",0,0x20019,&local_228);
  if (LVar2 == 0) {
    RegCloseKey(local_228);
  }
  if (param_2 != 0x110) {
    if ((param_2 != 0x111) || ((param_3 != 1 && (param_3 != 2)))) {
      return 0;
    }
    EndDialog(param_1,(ulonglong)param_3);
  }
  return 1;
}

