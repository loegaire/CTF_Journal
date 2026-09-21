
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_14000446c(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  IMAGE_DOS_HEADER *pIVar7;
  undefined8 unaff_RBX;
  
  iVar3 = (int)unaff_RBX;
  uVar4 = FUN_1400047f8(1);
  if ((char)uVar4 == '\0') {
    FUN_140004b1c(7);
  }
  else {
    bVar1 = false;
    uVar4 = __scrt_acquire_startup_lock();
    iVar3 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar4);
    if (DAT_1400098c0 != 1) {
      if (DAT_1400098c0 == 0) {
        DAT_1400098c0 = 1;
        iVar3 = _initterm_e(&DAT_140006488,&DAT_1400064a0);
        if (iVar3 != 0) {
          return 0xff;
        }
        _initterm(&DAT_140006468);
        DAT_1400098c0 = 2;
      }
      else {
        bVar1 = true;
      }
      __scrt_release_startup_lock((char)uVar4);
      plVar5 = (longlong *)FUN_140004b00();
      if ((*plVar5 != 0) && (uVar6 = FUN_1400048c0((longlong)plVar5), (char)uVar6 != '\0')) {
        (*(code *)*plVar5)(0);
      }
      plVar5 = (longlong *)FUN_140004b08();
      if ((*plVar5 != 0) && (uVar6 = FUN_1400048c0((longlong)plVar5), (char)uVar6 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar5);
      }
      __scrt_get_show_window_mode();
      _get_narrow_winmain_command_line();
      pIVar7 = &IMAGE_DOS_HEADER_140000000;
      uVar6 = FUN_140001060((HINSTANCE)&IMAGE_DOS_HEADER_140000000);
      iVar3 = (int)uVar6;
      bVar2 = FUN_140004cac();
      if (bVar2) {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)((ulonglong)pIVar7 >> 8),1),'\0');
        return uVar6 & 0xffffffff;
      }
      goto LAB_1400045cd;
    }
  }
  FUN_140004b1c(7);
LAB_1400045cd:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}

