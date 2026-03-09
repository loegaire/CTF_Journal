
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*deadlineExceededError).Error(string ~r0) */

string context___deadlineExceededError__Error(void)

{
  long *plVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string sVar2;
  long in_stack_00000008;
  
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_00573d2a;
  while (in_stack_00000008 == 0) {
    runtime_panicwrap();
LAB_00573d2a:
    if ((undefined8 *)*plVar1 == &stack0x00000008) {
      *plVar1 = (long)&stack0xfffffffffffffff8;
    }
  }
  sVar2.len = unaff_RBX;
  sVar2.str = &DAT_0029ec45;
  return sVar2;
}

