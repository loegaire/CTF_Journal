
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*cancelCtx).Value(context.cancelCtx * c, interface_{}
   key, interface_{} ~r1) */

interface___ context___cancelCtx__Value(context_cancelCtx *c,interface___ key)

{
  long in_FS_OFFSET;
  interface___ iVar1;
  interface___ iVar2;
  context_cancelCtx *c_spill;
  interface___ key_spill;
  runtime__type *local_18;
  
  iVar1.data = key._type;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((key_spill._type == (runtime__type *)&DAT_0021c720) &&
     (key_spill.data == &context_cancelCtxKey)) {
    iVar1._type = (runtime__type *)c_spill;
    return iVar1;
  }
  (**(code **)&(c_spill->Context).tab[1].hash)();
  iVar2.data = iVar1.data;
  iVar2._type = local_18;
  return iVar2;
}

