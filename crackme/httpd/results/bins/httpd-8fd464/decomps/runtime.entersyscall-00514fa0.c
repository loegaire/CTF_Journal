
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_entersyscall(void)

{
  uintptr unaff_RBX;
  
  runtime_reentersyscall((uintptr)&stack0x00000008,unaff_RBX);
  return;
}

