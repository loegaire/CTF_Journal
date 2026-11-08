
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_fallback_nanotime(void)

{
  syscall();
  return;
}

