
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*Value).Kind(reflect.Kind ~r0) */

reflect_Kind reflect___Value__Kind(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_0053e7c6;
  while (in_stack_00000008 == 0) {
    runtime_panicwrap();
LAB_0053e7c6:
    if ((undefined8 *)*plVar1 == &stack0x00000008) {
      *plVar1 = (long)&stack0xfffffffffffffff8;
    }
  }
  return *(ulong *)(in_stack_00000008 + 0x10) & 0x1f;
}

