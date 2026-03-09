
longlong FUN_140004954(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_140008820 = 1;
  }
  FUN_140004f50();
  cVar1 = FUN_140004c2c();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_140004c2c();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_140004c2c();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}

