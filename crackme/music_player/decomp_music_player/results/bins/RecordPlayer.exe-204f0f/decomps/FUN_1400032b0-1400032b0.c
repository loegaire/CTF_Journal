
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1400032b0(undefined8 *param_1,HINSTANCE param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  HBRUSH pHVar4;
  HFONT pHVar5;
  undefined8 *puVar6;
  undefined1 auStackY_138 [32];
  undefined **local_c0;
  undefined8 *local_b8;
  undefined ***local_88;
  undefined8 *local_80;
  longlong local_78 [7];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_140009000 ^ (ulonglong)auStackY_138;
  local_80 = param_1;
  FUN_140002c20(param_1,param_2,0x65);
  *param_1 = MainDialog::vftable;
  puVar6 = param_1 + 0xb;
  *puVar6 = 0;
  param_1[0xc] = 0;
  puVar3 = (undefined8 *)0x0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  *(undefined1 *)puVar6 = 0;
  puVar1 = (undefined8 *)FUN_1400042c4(0x1b8);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = FUN_1400016f0(puVar1);
  }
  param_1[10] = puVar2;
  local_c0 = std::
             _Func_impl_no_alloc<class_<lambda_254f7f3896517544d5a333cbd1c27e47>,void,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64>
             ::vftable;
  local_88 = &local_c0;
  local_40 = (longlong *)0x0;
  local_b8 = param_1;
  local_40 = FUN_140003a30((longlong)&local_c0,local_78);
  FUN_140003ad0(local_78,puVar2 + 0x1a);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x20))(local_40,local_40 != local_78);
  }
  if (local_88 != (undefined ***)0x0) {
    (*(code *)(*local_88)[4])(local_88,local_88 != &local_c0);
  }
  puVar1 = (undefined8 *)FUN_1400042c4(0x48);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = FUN_1400010c0(puVar1,0x6f,0x6e);
  }
  param_1[4] = puVar2;
  puVar1 = (undefined8 *)FUN_1400042c4(0x38);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = FUN_140002ee0(puVar1,0x3e9,0x6a,0x6b,param_2);
  }
  param_1[7] = puVar2;
  puVar1 = (undefined8 *)FUN_1400042c4(0x38);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = FUN_140002ee0(puVar1,0x3eb,0x68,0x69,param_2);
  }
  param_1[8] = puVar2;
  puVar2 = (undefined8 *)FUN_1400042c4(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = FUN_140002ee0(puVar2,0x3ea,0x66,0x67,param_2);
  }
  param_1[9] = puVar3;
  pHVar4 = CreateSolidBrush(0x33312f);
  param_1[5] = pHVar4;
  pHVar5 = CreateFontW(0x12,0,1,0,700,0,0,0,0,0,0,2,0,L"Consolas");
  param_1[6] = pHVar5;
  if (0xf < (ulonglong)param_1[0xe]) {
    puVar6 = (undefined8 *)*puVar6;
  }
  param_1[0xd] = 0;
  *(undefined1 *)puVar6 = 0;
  return param_1;
}

