
void FUN_1400046ac(void)

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
  uVar5 = FUN_140004c14();
  _set_fmode((int)uVar5);
  uVar5 = FUN_140004c08();
  puVar6 = (undefined4 *)__p__commode();
  *puVar6 = (int)uVar5;
  uVar5 = __scrt_initialize_onexit_tables(1);
  if ((char)uVar5 != '\0') {
    FUN_140004ed8();
    atexit(FUN_140004f14);
    uVar7 = FUN_140004c0c();
    iVar4 = _configure_wide_argv(uVar7 & 0xffffffff);
    if (iVar4 == 0) {
      FUN_140004c1c();
      bVar2 = FUN_140004c58();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        __setusermatherr(FUN_140004c08);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_140004c08();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_140004c2c();
      if (cVar3 != '\0') {
        _initialize_wide_environment();
      }
      FUN_140004c08();
      uVar5 = thunk_FUN_140004c08();
      if ((int)uVar5 == 0) {
        return;
      }
    }
  }
  FUN_140004c80(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

