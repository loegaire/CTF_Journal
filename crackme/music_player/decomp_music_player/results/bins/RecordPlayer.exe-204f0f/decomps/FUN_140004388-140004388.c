
void FUN_140004388(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined7 extraout_var;
  
  _set_app_type(2);
  uVar5 = FUN_140004aac();
  _set_fmode((int)uVar5);
  uVar5 = FUN_140002e00();
  puVar6 = (undefined4 *)__p__commode();
  *puVar6 = (int)uVar5;
  uVar5 = __scrt_initialize_onexit_tables(1);
  if ((char)uVar5 != '\0') {
    FUN_140004d74();
    atexit(FUN_140004db0);
    uVar7 = FUN_140002e10();
    iVar4 = _configure_narrow_argv(uVar7 & 0xffffffff);
    if (iVar4 == 0) {
      FUN_140004ab4();
      bVar2 = FUN_140004af4();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        __setusermatherr(FUN_140002e00);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_140002e00();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_140004ac4();
      if (cVar3 != '\0') {
        _initialize_narrow_environment();
      }
      FUN_140002e00();
      uVar5 = thunk_FUN_140002e00();
      if ((int)uVar5 == 0) {
        return;
      }
    }
  }
  FUN_140004b1c(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

