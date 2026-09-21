
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_setg(void)

{
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(in_FS_OFFSET + -8) = in_stack_00000008;
  return;
}

