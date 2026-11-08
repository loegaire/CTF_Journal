
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.(*Errno).Timeout(bool ~r0) */

bool syscall___Errno__Timeout(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  long *in_stack_00000008;
  
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_0054a312;
  while (in_stack_00000008 == (long *)0x0) {
    runtime_panicwrap();
LAB_0054a312:
    if ((long **)*plVar1 == &stack0x00000008) {
      *plVar1 = (long)&stack0xfffffffffffffff8;
    }
  }
  return *in_stack_00000008 == 0x23 || *in_stack_00000008 == 0x3c;
}

