
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void callRet(void)

{
  runtime__type *in_RAX;
  void *in_RCX;
  void *unaff_RBX;
  internal_abi_RegArgs *in_RSI;
  uintptr in_RDI;
  
  runtime_reflectcallmove(in_RAX,unaff_RBX,in_RCX,in_RDI,in_RSI);
  return;
}

