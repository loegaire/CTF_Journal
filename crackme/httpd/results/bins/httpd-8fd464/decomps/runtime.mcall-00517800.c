
void runtime_mcall(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 unaff_RBP;
  long in_FS_OFFSET;
  undefined8 unaff_retaddr;
  undefined8 *in_stack_00000008;
  
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  *(undefined8 *)(lVar1 + 0x40) = unaff_retaddr;
  *(undefined8 ***)(lVar1 + 0x38) = &stack0x00000008;
  *(undefined8 *)(lVar1 + 0x68) = unaff_RBP;
  lVar2 = **(long **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  if (lVar2 == lVar1) {
    runtime_badmcall((func__runtime_g_ **)runtime_badmcall);
    return;
  }
  *(long *)(in_FS_OFFSET + -8) = lVar2;
  lVar3 = *(long *)(lVar2 + 0x38);
  *(long *)(lVar3 + -8) = lVar1;
  pcVar4 = (code *)*in_stack_00000008;
  *(undefined8 *)(lVar3 + -0x10) = 0x51785a;
  (*pcVar4)(pcVar4,lVar2,in_stack_00000008);
  runtime_badmcall2((func__runtime_g_ **)runtime_badmcall2);
  return;
}

