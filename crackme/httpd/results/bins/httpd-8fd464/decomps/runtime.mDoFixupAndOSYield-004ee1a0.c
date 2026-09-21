
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_mDoFixupAndOSYield(void)

{
  runtime_mDoFixup();
  runtime_osyield();
  return;
}

