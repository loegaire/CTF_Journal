
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.(*nopCloser).Close(error ~r0) */

error io___nopCloser__Close(void)

{
  long *plVar1;
  runtime_itab *in_RAX;
  runtime_itab *extraout_RAX;
  void *unaff_RBX;
  long in_FS_OFFSET;
  error eVar2;
  long in_stack_00000008;
  
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_0054497f;
  while (in_stack_00000008 == 0) {
    runtime_panicwrap();
    in_RAX = extraout_RAX;
LAB_0054497f:
    if ((undefined8 *)*plVar1 == &stack0x00000008) {
      *plVar1 = (long)&stack0xfffffffffffffff8;
    }
  }
  eVar2.data = unaff_RBX;
  eVar2.tab = in_RAX;
  return eVar2;
}

