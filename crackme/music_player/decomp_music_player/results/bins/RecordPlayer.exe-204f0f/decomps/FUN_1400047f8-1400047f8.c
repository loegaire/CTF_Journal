
longlong FUN_1400047f8(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_1400098d0 = 1;
  }
  FUN_140004dec();
  cVar1 = FUN_140004ac4();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_140004ac4();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_140004ac4();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}

