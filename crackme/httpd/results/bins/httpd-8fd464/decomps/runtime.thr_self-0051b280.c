
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_thr_self(void)

{
  syscall();
  return;
}

