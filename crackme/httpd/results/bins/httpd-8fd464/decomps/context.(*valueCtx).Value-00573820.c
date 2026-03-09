
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*valueCtx).Value(context.valueCtx * c, interface_{} key,
   interface_{} ~r1) */

interface___ context___valueCtx__Value(context_valueCtx *c,interface___ key)

{
  runtime__type *y;
  long in_FS_OFFSET;
  interface___ iVar1;
  interface___ iVar2;
  context_valueCtx *c_spill;
  interface___ key_spill;
  char local_18;
  undefined7 uStack_17;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  y = (c_spill->key)._type;
  if ((key_spill._type == y) &&
     (runtime_efaceeq(key_spill.data,key_spill._type,y), local_18 != '\0')) {
    iVar2.data = key_spill._type;
    iVar2._type = (c_spill->val).data;
    return iVar2;
  }
  (**(code **)&(c_spill->Context).tab[1].hash)();
  iVar1._type._1_7_ = uStack_17;
  iVar1._type._0_1_ = local_18;
  iVar1.data = key_spill._type;
  return iVar1;
}

