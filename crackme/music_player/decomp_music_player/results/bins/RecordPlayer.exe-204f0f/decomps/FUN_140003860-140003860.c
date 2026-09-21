
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140003860(longlong param_1,short param_2)

{
  undefined1 auStack_c8 [32];
  longlong local_a8 [6];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_140009000 ^ (ulonglong)auStack_c8;
  if (param_2 == 0x3e9) {
    FUN_140003c20((longlong *)(param_1 + 0x58),&DAT_14000665a,0);
    if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x1c) == '\0') {
      FUN_140001f50(*(undefined8 **)(param_1 + 0x50),0x8d);
      FUN_140003a00(*(longlong *)(param_1 + 0x50),1);
      FUN_140003a20(*(longlong *)(param_1 + 0x50),1);
      FUN_1400020f0(*(longlong **)(param_1 + 0x50));
    }
    else {
      FUN_1400027a0((longlong)*(undefined8 **)(param_1 + 0x50));
    }
  }
  else if (param_2 == 0x3ea) {
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0xf;
    local_a8[0] = 0;
    FUN_140003d40(local_78,*(HINSTANCE *)(param_1 + 8),0x84,local_a8);
    FUN_140002e20((longlong)local_78,*(HWND *)(param_1 + 0x10));
    FUN_140003ef0(local_78);
  }
  else {
    if (param_2 != 0x3eb) {
      return 0;
    }
    EndDialog(*(HWND *)(param_1 + 0x10),0);
  }
  return 1;
}

