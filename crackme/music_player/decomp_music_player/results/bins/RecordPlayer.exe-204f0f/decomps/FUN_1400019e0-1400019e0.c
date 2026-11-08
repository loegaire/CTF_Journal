
void FUN_1400019e0(undefined8 *param_1)

{
  void *pvVar1;
  void *_Memory;
  longlong lVar2;
  
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      param_1[4] = lVar2;
    } while (lVar2 != 0);
    param_1[3] = 0;
  }
  if (param_1[1] != 0) {
    lVar2 = param_1[2];
    while (0 < lVar2) {
      lVar2 = lVar2 + -1;
      pvVar1 = *(void **)(param_1[1] + lVar2 * 8);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
    }
    pvVar1 = (void *)param_1[1];
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] << 3)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  free(pvVar1);
  return;
}

