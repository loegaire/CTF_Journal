
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_fallback_walltime(void)

{
  syscall();
  return;
}

