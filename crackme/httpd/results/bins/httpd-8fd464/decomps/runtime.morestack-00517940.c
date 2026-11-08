
void runtime_morestack(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 unaff_RBP;
  long in_FS_OFFSET;
  undefined8 unaff_retaddr;
  long in_stack_00000008;
  
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  if (*(long *)(in_FS_OFFSET + -8) == *plVar1) {
    runtime_badmorestackg0();
    runtime_abort();
    param_3 = extraout_RDX;
  }
  if (*(long *)(in_FS_OFFSET + -8) == plVar1[10]) {
    runtime_badmorestackgsignal();
    runtime_abort();
    param_3 = extraout_RDX_00;
  }
  plVar1[2] = in_stack_00000008;
  plVar1[1] = (long)&stack0x00000010;
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  plVar1[3] = lVar2;
  *(undefined8 *)(lVar2 + 0x40) = unaff_retaddr;
  *(long **)(lVar2 + 0x38) = &stack0x00000008;
  *(undefined8 *)(lVar2 + 0x68) = unaff_RBP;
  *(undefined8 *)(lVar2 + 0x50) = param_3;
  lVar2 = *plVar1;
  *(long *)(in_FS_OFFSET + -8) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x38);
  *(undefined8 *)(lVar2 + -8) = 0x5179cb;
  runtime_newstack();
  *(undefined8 *)(lVar2 + -8) = 0x5179d0;
  runtime_abort();
  return;
}

