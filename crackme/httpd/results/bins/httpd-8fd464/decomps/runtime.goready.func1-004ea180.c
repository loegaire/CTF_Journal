
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_goready_func1(void)

{
  long in_RDX;
  long extraout_RDX;
  int unaff_RBX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: int traceskip@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  runtime_ready(*(runtime_g **)(in_RDX + 0x10),unaff_RBX,SUB81(*(undefined8 *)(in_RDX + 8),0));
  return;
}

