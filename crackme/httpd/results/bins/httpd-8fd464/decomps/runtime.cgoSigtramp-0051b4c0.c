
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_cgoSigtramp(void)

{
  long lVar1;
  int in_EDI;
  long in_FS_OFFSET;
  bool bVar2;
  
  if ((runtime_cgoTraceback != (void *)0x0) && (_cgo_callers != (void *)0x0)) {
    if (*(long *)(in_FS_OFFSET + -8) == 0) {
      if (in_EDI == 0x1b) {
        LOCK();
        bVar2 = runtime_sigprofCallersUse == 0;
        if (bVar2) {
          runtime_sigprofCallersUse = 1;
        }
        UNLOCK();
        if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x0051b579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*_cgo_callers)();
          return;
        }
      }
    }
    else {
      lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
      if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x140) != 0)) && (*(long *)(lVar1 + 200) != 0)) &&
         (((*(long *)(*(long *)(lVar1 + 200) + 0x70) != 0 && (*(long *)(lVar1 + 0x148) != 0)) &&
          (*(int *)(lVar1 + 0x144) == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x0051b539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*_cgo_callers)();
        return;
      }
    }
  }
  runtime_sigtramp();
  return;
}

