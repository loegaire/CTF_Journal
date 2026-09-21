
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void math_archLog(void)

{
  ulong in_stack_00000008;
  
  if ((in_stack_00000008 & 0x7fffffffffffffff) == 0) {
    return;
  }
  if (in_stack_00000008 < 0x8000000000000000) {
    if ((long)in_stack_00000008 < 0x7ff0000000000000) {
      return;
    }
    return;
  }
  return;
}

