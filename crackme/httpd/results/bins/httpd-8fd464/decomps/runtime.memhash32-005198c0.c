
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_memhash32(void)

{
  void *in_RAX;
  uintptr unaff_RBX;
  undefined1 auVar1 [16];
  undefined4 *in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (runtime_useAeshash) {
    auVar1._8_4_ = *in_stack_00000008;
    auVar1._0_8_ = in_stack_00000010;
    auVar1._12_4_ = 0;
    auVar1 = aesenc(auVar1,runtime_aeskeysched._0_16_);
    auVar1 = aesenc(auVar1,runtime_aeskeysched._16_16_);
    aesenc(auVar1,runtime_aeskeysched._32_16_);
    return;
  }
  runtime_memhash32Fallback(in_RAX,unaff_RBX);
  return;
}

