
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_panicSliceAlenU(void)

{
  uint in_RAX;
  int unaff_RBX;
  
  runtime_goPanicSliceAlenU(in_RAX,unaff_RBX);
  return;
}

