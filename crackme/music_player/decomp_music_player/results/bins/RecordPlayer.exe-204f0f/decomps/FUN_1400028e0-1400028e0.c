
void FUN_1400028e0(longlong param_1,ulonglong param_2)

{
  size_t sVar1;
  code *pcVar2;
  void *_Dst;
  ulonglong uVar3;
  void *_Memory;
  ulonglong uVar4;
  ulonglong uVar5;
  size_t sVar6;
  void *pvVar7;
  
  uVar5 = *(ulonglong *)(param_1 + 0x10);
  uVar4 = 1;
  if (uVar5 != 0) {
    uVar4 = uVar5;
  }
  for (; (uVar4 - uVar5 < param_2 || (uVar4 < 8)); uVar4 = uVar4 * 2) {
    if (0x7ffffffffffffff - uVar4 < uVar4) {
      FUN_140002bc0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = *(ulonglong *)(param_1 + 0x18) >> 4;
  if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_140002ab0();
  }
  _Dst = (void *)FUN_140001650(uVar4 * 8);
  sVar1 = uVar5 * 8;
  uVar3 = uVar4 >> 1;
  for (; uVar4 <= uVar3; uVar4 = uVar4 * 2) {
  }
  uVar4 = uVar4 - *(longlong *)(param_1 + 0x10);
  pvVar7 = (void *)(*(longlong *)(param_1 + 8) + sVar1);
  sVar6 = (*(longlong *)(param_1 + 0x10) * 8 - (longlong)pvVar7) + *(longlong *)(param_1 + 8);
  memmove((void *)(sVar1 + (longlong)_Dst),pvVar7,sVar6);
  pvVar7 = (void *)((longlong)(sVar1 + (longlong)_Dst) + sVar6);
  if (uVar4 < uVar5) {
    sVar6 = uVar4 * 8;
    memmove(pvVar7,*(void **)(param_1 + 8),sVar6);
    pvVar7 = (void *)(sVar6 + *(longlong *)(param_1 + 8));
    sVar1 = (*(longlong *)(param_1 + 8) - (longlong)pvVar7) + sVar1;
    memmove(_Dst,pvVar7,sVar1);
    pvVar7 = (void *)(sVar1 + (longlong)_Dst);
  }
  else {
    memmove(pvVar7,*(void **)(param_1 + 8),sVar1);
    memset((void *)(sVar1 + (longlong)pvVar7),0,(uVar4 - uVar5) * 8);
    pvVar7 = _Dst;
    sVar6 = sVar1;
  }
  memset(pvVar7,0,sVar6);
  pvVar7 = *(void **)(param_1 + 8);
  if (pvVar7 != (void *)0x0) {
    _Memory = pvVar7;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 3)) &&
       (_Memory = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar4;
  *(void **)(param_1 + 8) = _Dst;
  return;
}

