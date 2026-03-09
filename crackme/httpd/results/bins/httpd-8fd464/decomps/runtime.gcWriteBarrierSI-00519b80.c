
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcWriteBarrierSI(void)

{
  runtime_gcWriteBarrier();
  return;
}

