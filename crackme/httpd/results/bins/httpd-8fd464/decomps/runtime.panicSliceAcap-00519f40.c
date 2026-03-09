
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_panicSliceAcap(void)

{
  int in_RAX;
  int unaff_RBX;
  
  runtime_goPanicSliceAcap(in_RAX,unaff_RBX);
  return;
}

