
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_futexsleep_func1(void)

{
  long in_RDX;
  long extraout_RDX;
  uint32 unaff_EBX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: uint32 * addr@[???]
                       Unresolved local var: uint32 val@[???]
                       Unresolved local var: int64 ns@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  runtime_futexsleep1((uint32 *)(ulong)*(uint *)(in_RDX + 0x10),unaff_EBX,*(int64 *)(in_RDX + 0x18))
  ;
  return;
}

