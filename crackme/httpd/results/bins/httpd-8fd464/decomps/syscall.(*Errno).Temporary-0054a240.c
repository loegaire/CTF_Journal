
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.(*Errno).Temporary(bool ~r0) */

bool syscall___Errno__Temporary(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long *in_stack_00000008;
  
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_0054a2ab;
  while (in_stack_00000008 == (long *)0x0) {
    runtime_panicwrap();
LAB_0054a2ab:
    if ((long **)*plVar1 == &stack0x00000008) {
      *plVar1 = (long)&stack0xfffffffffffffff8;
    }
  }
  lVar2 = *in_stack_00000008;
  if (((lVar2 == 4) || (lVar2 == 0x18)) || (lVar2 == 0x17)) {
    bVar3 = true;
  }
  else if (lVar2 == 0x23) {
    bVar3 = true;
  }
  else {
    bVar3 = lVar2 == 0x3c;
  }
  return bVar3;
}

