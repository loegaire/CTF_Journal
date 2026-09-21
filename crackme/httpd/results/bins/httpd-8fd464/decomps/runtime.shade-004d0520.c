
/* WARNING: Unknown calling convention */

void runtime_shade(uintptr b)

{
  uintptr base;
  uintptr in_RCX;
  uintptr unaff_RBX;
  runtime_gcWork *in_RSI;
  runtime_mspan *in_RDI;
  uintptr in_R8;
  long in_FS_OFFSET;
  uintptr b_spill;
  undefined8 local_20;
  undefined8 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: uintptr obj@[???]
                       Unresolved local var: runtime.mspan * span@[???]
                       Unresolved local var: uintptr objIndex@[???] */
  runtime_findObject(b_spill,unaff_RBX,in_RCX);
  if (local_20 != 0) {
                    /* Unresolved local var: runtime.gcWork * gcw@[???] */
    base = *(uintptr *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
    runtime_greyobject(base + 0x1698,base,local_18,in_RDI,in_RSI,in_R8);
  }
  return;
}

