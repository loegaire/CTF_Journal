
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_osyield(void)

{
  syscall();
  return;
}

