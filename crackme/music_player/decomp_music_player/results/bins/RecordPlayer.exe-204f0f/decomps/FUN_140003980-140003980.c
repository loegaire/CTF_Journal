
undefined8 FUN_140003980(longlong param_1)

{
  HICON lParam;
  
  lParam = LoadIconW(*(HINSTANCE *)(param_1 + 8),(LPCWSTR)0x8f);
  SendMessageW(*(HWND *)(param_1 + 0x10),0x80,0,(LPARAM)lParam);
  FUN_140003160(*(undefined8 **)(param_1 + 0x38),*(HWND *)(param_1 + 0x10));
  FUN_140003160(*(undefined8 **)(param_1 + 0x40),*(HWND *)(param_1 + 0x10));
  FUN_140003160(*(undefined8 **)(param_1 + 0x48),*(HWND *)(param_1 + 0x10));
  FUN_140001350(*(HANDLE *)(param_1 + 0x20),*(HWND *)(param_1 + 0x10));
  FUN_140001320(*(longlong *)(param_1 + 0x20),1);
  return 1;
}

