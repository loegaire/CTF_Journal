
void FUN_140002f40(longlong param_1)

{
  if (*(HGDIOBJ *)(param_1 + 0x20) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x20));
  }
  if (*(HGDIOBJ *)(param_1 + 0x28) != (HGDIOBJ)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140002f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x28));
    return;
  }
  return;
}

