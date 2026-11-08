
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*plainError).Error(string ~r0) */

string runtime___plainError__Error(void)

{
  long *plVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string sVar2;
  long in_stack_00000008;
  
                    /* Unresolved local var: runtime.plainError e@[???] */
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_0051c888;
  while (in_stack_00000008 == 0) {
    runtime_panicwrap();
LAB_0051c888:
    if ((undefined8 *)*plVar1 == &stack0x00000008) {
      *plVar1 = (long)&stack0xfffffffffffffff8;
    }
  }
  sVar2.len = unaff_RBX;
  sVar2.str = *(uint8 **)(in_stack_00000008 + 8);
  return sVar2;
}

