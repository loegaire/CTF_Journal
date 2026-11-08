
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_closeonexec(void)

{
  syscall();
  return;
}

