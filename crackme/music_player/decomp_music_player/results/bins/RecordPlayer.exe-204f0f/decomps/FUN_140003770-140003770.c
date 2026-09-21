
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HGDIOBJ FUN_140003770(longlong *param_1,int param_2,HDC param_3,undefined8 param_4)

{
  HGDIOBJ pvVar1;
  longlong *plVar2;
  undefined1 auStack_e8 [40];
  undefined8 local_c0 [5];
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_140009000 ^ (ulonglong)auStack_e8;
  if (param_2 == 0x133) {
    SetBkColor(param_3,0x3f5d8a);
    SetTextColor(param_3,0xffffff);
    pvVar1 = (HGDIOBJ)param_1[5];
  }
  else if (param_2 == 0x138) {
    SetBkMode(param_3,1);
    pvVar1 = GetStockObject(5);
  }
  else {
    if (param_2 == 0x8001) {
      plVar2 = FUN_1400031f0(local_c0,param_1 + 0xb);
      FUN_140003d40(local_98,(HINSTANCE)param_1[1],0x86,plVar2);
      FUN_140002e20((longlong)local_98,(HWND)param_1[2]);
      FUN_140003ef0(local_98);
    }
    pvVar1 = (HGDIOBJ)FUN_140002d70(param_1,param_2,param_3,param_4);
  }
  return pvVar1;
}

