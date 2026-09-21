
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcWriteBarrierCX(void)

{
  runtime_gcWriteBarrier();
  return;
}

