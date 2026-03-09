
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

int FUN_140004790(void)

{
  bool bVar1;
  bool bVar2;
  WORD WVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  IMAGE_DOS_HEADER *pIVar9;
  undefined8 unaff_RBX;
  
  iVar4 = (int)unaff_RBX;
  uVar5 = FUN_140004954(1);
  if ((char)uVar5 == '\0') {
    FUN_140004c80(7);
  }
  else {
    bVar1 = false;
    uVar5 = __scrt_acquire_startup_lock();
    iVar4 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar5);
    if (DAT_140008810 != 1) {
      if (DAT_140008810 == 0) {
        DAT_140008810 = 1;
        iVar4 = _initterm_e(&DAT_140006468,&DAT_140006480);
        if (iVar4 != 0) {
          return 0xff;
        }
        _initterm(&DAT_140006450);
        DAT_140008810 = 2;
      }
      else {
        bVar1 = true;
      }
      __scrt_release_startup_lock((char)uVar5);
      plVar6 = (longlong *)FUN_140004c64();
      if ((*plVar6 != 0) && (uVar7 = FUN_140004a1c((longlong)plVar6), (char)uVar7 != '\0')) {
        (*(code *)*plVar6)(0);
      }
      plVar6 = (longlong *)FUN_140004c6c();
      if ((*plVar6 != 0) && (uVar7 = FUN_140004a1c((longlong)plVar6), (char)uVar7 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar6);
      }
      WVar3 = __scrt_get_show_window_mode();
      pwVar8 = (wchar_t *)_get_wide_winmain_command_line();
      pIVar9 = &IMAGE_DOS_HEADER_140000000;
      iVar4 = FUN_140002360((HINSTANCE)&IMAGE_DOS_HEADER_140000000,0,pwVar8,(uint)WVar3);
      bVar2 = FUN_140004e10();
      if (bVar2) {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)((ulonglong)pIVar9 >> 8),1),'\0');
        return iVar4;
      }
      goto LAB_1400048f1;
    }
  }
  FUN_140004c80(7);
LAB_1400048f1:
                    /* WARNING: Subroutine does not return */
  exit(iVar4);
}

