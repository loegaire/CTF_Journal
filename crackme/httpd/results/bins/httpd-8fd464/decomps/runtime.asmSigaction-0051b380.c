
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_asmSigaction(void)

{
  syscall();
  return;
}

