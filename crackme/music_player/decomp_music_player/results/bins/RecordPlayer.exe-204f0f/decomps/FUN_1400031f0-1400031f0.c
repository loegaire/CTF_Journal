
undefined8 * FUN_1400031f0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  void *_Dst;
  undefined8 *_Src;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _Src = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Src = (undefined8 *)*param_2;
  }
  uVar1 = param_2[2];
  if (uVar1 < 0x8000000000000000) {
    if (uVar1 < 0x10) {
      param_1[2] = uVar1;
      param_1[3] = 0xf;
      uVar2 = _Src[1];
      *param_1 = *_Src;
      param_1[1] = uVar2;
    }
    else {
      uVar3 = uVar1 | 0xf;
      uVar4 = 0x7fffffffffffffff;
      if ((uVar3 < 0x8000000000000000) && (uVar4 = uVar3, uVar3 < 0x16)) {
        uVar4 = 0x16;
      }
      _Dst = (void *)FUN_140001650(uVar4 + 1);
      *param_1 = _Dst;
      param_1[2] = uVar1;
      param_1[3] = uVar4;
      memcpy(_Dst,_Src,uVar1 + 1);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140002be0();
}

