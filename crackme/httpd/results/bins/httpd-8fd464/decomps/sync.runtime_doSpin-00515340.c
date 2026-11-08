
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sync_runtime_doSpin(void)

{
  runtime_procyield();
  return;
}

