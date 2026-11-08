
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_usleep(void)

{
  syscall();
  return;
}

