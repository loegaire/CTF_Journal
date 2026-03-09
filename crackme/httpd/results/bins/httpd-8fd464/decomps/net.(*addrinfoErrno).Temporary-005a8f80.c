
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*addrinfoErrno).Temporary(bool ~r0) */

bool net___addrinfoErrno__Temporary(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_005a8fc0;
  while (in_stack_00000008 == 0) {
    runtime_panicwrap();
LAB_005a8fc0:
    if ((undefined8 *)*plVar1 == &stack0x00000008) {
      *plVar1 = (long)&stack0xfffffffffffffff8;
    }
  }
  return SUB81(in_stack_00000008,0);
}

