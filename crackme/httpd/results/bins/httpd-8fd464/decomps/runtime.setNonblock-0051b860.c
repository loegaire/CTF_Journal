
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_setNonblock(void)

{
  syscall();
  syscall();
  return;
}

