
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_panicSliceAlen(void)

{
  int in_RAX;
  int unaff_RBX;
  
  runtime_goPanicSliceAlen(in_RAX,unaff_RBX);
  return;
}

