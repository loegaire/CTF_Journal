
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_memhash(void)

{
  void *in_RAX;
  uintptr in_RCX;
  uintptr unaff_RBX;
  
  if (runtime_useAeshash) {
    aeshashbody();
    return;
  }
  runtime_memhashFallback(in_RAX,unaff_RBX,in_RCX);
  return;
}

