
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_sigtramp(void)

{
  uint32 in_EAX;
  void *in_RCX;
  runtime_siginfo *unaff_RBX;
  
  runtime_sigtrampgo(in_EAX,unaff_RBX,in_RCX);
  return;
}

