
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_memhash64(void)

{
  void *in_RAX;
  uintptr unaff_RBX;
  undefined1 auVar1 [16];
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (runtime_useAeshash) {
    auVar1._8_8_ = *in_stack_00000008;
    auVar1._0_8_ = in_stack_00000010;
    auVar1 = aesenc(auVar1,runtime_aeskeysched._0_16_);
    auVar1 = aesenc(auVar1,runtime_aeskeysched._16_16_);
    aesenc(auVar1,runtime_aeskeysched._32_16_);
    return;
  }
  runtime_memhash64Fallback(in_RAX,unaff_RBX);
  return;
}

