
void FUN_1400012b0(longlong param_1)

{
  FUN_1400015c0(param_1);
  if (*(HDC *)(param_1 + 0x20) != (HDC)0x0) {
    SelectObject(*(HDC *)(param_1 + 0x20),*(HGDIOBJ *)(param_1 + 0x30));
    DeleteDC(*(HDC *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(HGDIOBJ *)(param_1 + 0x28) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(HGDIOBJ *)(param_1 + 0x18) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

