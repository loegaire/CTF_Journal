
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcWriteBarrierDX(void)

{
  runtime_gcWriteBarrier();
  return;
}

