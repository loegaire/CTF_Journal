
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void gosave_systemstack_switch(void)

{
  long lVar1;
  undefined8 unaff_RBP;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  *(code **)(lVar1 + 0x40) = runtime_systemstack_switch;
  *(undefined1 **)(lVar1 + 0x38) = &stack0x00000008;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x68) = unaff_RBP;
  if (*(long *)(lVar1 + 0x50) != 0) {
    runtime_abort();
  }
  return;
}

