
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*valueCtx).Err(error ~r0) */

error context___valueCtx__Err(void)

{
  long *plVar1;
  void *unaff_RBX;
  long in_FS_OFFSET;
  error eVar2;
  long *in_stack_00000008;
  long local_20;
  runtime_itab *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((long **)*plVar1 == &stack0x00000008)) {
    *plVar1 = (long)&local_20;
  }
  local_20 = in_stack_00000008[1];
  (**(code **)(*in_stack_00000008 + 0x28))();
  eVar2.data = unaff_RBX;
  eVar2.tab = local_18;
  return eVar2;
}

