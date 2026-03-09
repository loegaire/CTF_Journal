
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_140003d40(undefined8 *param_1,HINSTANCE param_2,undefined4 param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Dst;
  HBRUSH pHVar6;
  HFONT pHVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *_Src;
  
  FUN_140002c20(param_1,param_2,param_3);
  *param_1 = PopupDialog::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar9 = (undefined8 *)0x0;
  param_1[6] = 0;
  param_1[7] = 0;
  _Src = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    _Src = (longlong *)*param_4;
  }
  uVar1 = param_4[2];
  if (uVar1 < 0x8000000000000000) {
    if (uVar1 < 0x10) {
      param_1[6] = uVar1;
      param_1[7] = 0xf;
      uVar2 = *(undefined4 *)((longlong)_Src + 4);
      lVar4 = _Src[1];
      uVar3 = *(undefined4 *)((longlong)_Src + 0xc);
      *(int *)(param_1 + 4) = (int)*_Src;
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
      *(int *)(param_1 + 5) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
    }
    else {
      uVar5 = uVar1 | 0xf;
      uVar10 = 0x7fffffffffffffff;
      if ((uVar5 < 0x8000000000000000) && (uVar10 = uVar5, uVar5 < 0x16)) {
        uVar10 = 0x16;
      }
      _Dst = (void *)FUN_140001650(uVar10 + 1);
      param_1[4] = _Dst;
      param_1[6] = uVar1;
      param_1[7] = uVar10;
      memcpy(_Dst,_Src,uVar1 + 1);
    }
    pHVar6 = CreateSolidBrush(0x3f5d8a);
    param_1[8] = pHVar6;
    pHVar7 = CreateFontA(0x12,0,1,0,700,0,0,0,0,0,0,2,0,"Consolas");
    param_1[9] = pHVar7;
    puVar8 = (undefined8 *)FUN_1400042c4(0x38);
    if (puVar8 != (undefined8 *)0x0) {
      puVar9 = FUN_140002ee0(puVar8,0x3f0,0x7f,0x80,param_2);
    }
    param_1[10] = puVar9;
    thunk_FUN_140002b40(param_4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140002be0();
}

