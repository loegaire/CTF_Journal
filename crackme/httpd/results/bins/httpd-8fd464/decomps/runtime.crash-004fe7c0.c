
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_crash(void)

{
  uint32 in_EAX;
  
  runtime_dieFromSignal(in_EAX);
  return;
}

