
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_stackcheck(void)

{
  ulong *extraout_RAX;
  ulong *puVar1;
  long in_FS_OFFSET;
  
  puVar1 = *(ulong **)(in_FS_OFFSET + -8);
  if ((undefined1 *)puVar1[1] <= &stack0x00000000) {
    runtime_abort();
    puVar1 = extraout_RAX;
  }
  if (&stack0x00000000 <= (undefined1 *)*puVar1) {
    runtime_abort();
  }
  return;
}

