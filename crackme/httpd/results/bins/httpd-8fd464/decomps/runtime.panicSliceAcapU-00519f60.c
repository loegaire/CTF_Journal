
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_panicSliceAcapU(void)

{
  uint in_RAX;
  int unaff_RBX;
  
  runtime_goPanicSliceAcapU(in_RAX,unaff_RBX);
  return;
}

