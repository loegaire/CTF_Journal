
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*deadlineExceededError).Timeout(bool ~r0) */

bool context___deadlineExceededError__Timeout(void)

{
  long *plVar1;
  undefined1 in_AL;
  undefined1 extraout_AL;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_00573dda;
  while (in_stack_00000008 == 0) {
    runtime_panicwrap();
    in_AL = extraout_AL;
LAB_00573dda:
    if ((undefined8 *)*plVar1 == &stack0x00000008) {
      *plVar1 = (long)&stack0xfffffffffffffff8;
    }
  }
  return (bool)in_AL;
}

