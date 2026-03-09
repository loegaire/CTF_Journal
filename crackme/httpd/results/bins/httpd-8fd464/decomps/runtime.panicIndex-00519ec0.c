
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_panicIndex(void)

{
  int in_RAX;
  int unaff_RBX;
  
  runtime_goPanicIndex(in_RAX,unaff_RBX);
  return;
}

