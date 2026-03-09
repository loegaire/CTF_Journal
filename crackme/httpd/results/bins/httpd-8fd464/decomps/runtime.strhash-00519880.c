
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_strhash(void)

{
  void *in_RAX;
  uintptr unaff_RBX;
  
  if (runtime_useAeshash) {
    aeshashbody();
    return;
  }
  runtime_strhashFallback(in_RAX,unaff_RBX);
  return;
}

