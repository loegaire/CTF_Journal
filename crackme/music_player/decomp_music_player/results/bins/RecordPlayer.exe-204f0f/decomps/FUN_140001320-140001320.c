
undefined1 FUN_140001320(longlong param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x41) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x40) = param_2;
  InvalidateRect(*(HWND *)(param_1 + 0x10),(RECT *)0x0,1);
  return 1;
}

