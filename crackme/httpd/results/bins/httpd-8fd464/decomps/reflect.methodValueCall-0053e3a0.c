
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void reflect_methodValueCall(void)

{
  long *plVar1;
  reflect_makeFuncCtxt *ctxt;
  undefined8 extraout_RDX;
  internal_abi_RegArgs *unaff_RBX;
  internal_abi_RegArgs *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_140;
  reflect_methodValue *local_138;
  undefined1 *local_130;
  reflect_methodValue *local_128;
  undefined1 local_120 [8];
  reflect_methodValue local_118 [4];
  
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
    *plVar1 = (long)&local_140;
  }
  runtime_spillArgs();
  local_138 = local_118;
  local_128 = (reflect_methodValue *)extraout_RDX;
  reflect_moveMakeFuncArgPtrs(ctxt,unaff_RBX);
  local_140 = local_128;
  local_138 = (reflect_methodValue *)&stack0x00000008;
  local_120[0] = 0;
  local_130 = local_120;
  local_128 = local_118;
  reflect_callMethod(local_128,unaff_RBX,(bool *)local_138,in_RDI);
  runtime_unspillArgs();
  return;
}

