
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_stopTheWorld_func1(void)

{
  uint32 newval;
  long in_RDX;
  long extraout_RDX;
  uint32 unaff_EBX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  newval = 2;
  runtime_casgstatus(*(runtime_g **)(in_RDX + 8),unaff_EBX,2);
  runtime_stopTheWorldWithSema();
  runtime_casgstatus((runtime_g *)0x200000004,unaff_EBX,newval);
  return;
}

