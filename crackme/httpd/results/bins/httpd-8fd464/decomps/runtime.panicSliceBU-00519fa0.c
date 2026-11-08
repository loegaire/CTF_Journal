
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_panicSliceBU(void)

{
  uint in_RAX;
  int unaff_RBX;
  
  runtime_goPanicSliceBU(in_RAX,unaff_RBX);
  return;
}

