
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140001060(HINSTANCE param_1)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98 [16];
  ulonglong local_18;
  
  local_18 = DAT_140009000 ^ (ulonglong)auStack_b8;
  FUN_1400032b0(local_98,param_1);
  FUN_140002e20((longlong)local_98,(HWND)0x0);
  FUN_140003570(local_98);
  return 0;
}

