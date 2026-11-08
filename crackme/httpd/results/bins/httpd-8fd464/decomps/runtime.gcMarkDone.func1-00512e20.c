
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcMarkDone_func1(void)

{
  uint32 newval;
  uint32 unaff_EBX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  newval = 2;
  runtime_casgstatus(*(runtime_g **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200),unaff_EBX
                     ,2);
  runtime_forEachP((func__runtime_p_ **)&PTR_runtime_gcMarkDone_func1_1_002b3848);
  runtime_casgstatus((runtime_g *)0x200000004,unaff_EBX,newval);
  return;
}

