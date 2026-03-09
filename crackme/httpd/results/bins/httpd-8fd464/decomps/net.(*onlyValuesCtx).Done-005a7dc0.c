
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*onlyValuesCtx).Done(<-chan_struct_{} ~r0) */

<_chan_struct___ net___onlyValuesCtx__Done(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  long *in_stack_00000008;
  long local_18;
  <_chan_struct___ local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((long **)*plVar1 == &stack0x00000008)) {
    *plVar1 = (long)&local_18;
  }
  local_18 = in_stack_00000008[1];
  (**(code **)(*in_stack_00000008 + 0x20))();
  return local_10;
}

