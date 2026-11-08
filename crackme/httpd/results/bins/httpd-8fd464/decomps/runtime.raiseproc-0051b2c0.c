
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_raiseproc(void)

{
  syscall();
  syscall();
  return;
}

