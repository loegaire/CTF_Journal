
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_panicSliceB(void)

{
  int in_RAX;
  int unaff_RBX;
  
  runtime_goPanicSliceB(in_RAX,unaff_RBX);
  return;
}

