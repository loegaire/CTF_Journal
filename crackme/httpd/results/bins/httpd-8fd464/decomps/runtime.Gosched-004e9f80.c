
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_Gosched(void)

{
  runtime_mcall();
  return;
}

