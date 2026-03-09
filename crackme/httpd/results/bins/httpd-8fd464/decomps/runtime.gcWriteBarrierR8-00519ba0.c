
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcWriteBarrierR8(void)

{
  runtime_gcWriteBarrier();
  return;
}

