
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_panicIndexU(void)

{
  uint in_RAX;
  int unaff_RBX;
  
  runtime_goPanicIndexU(in_RAX,unaff_RBX);
  return;
}

