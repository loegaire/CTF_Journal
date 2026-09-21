
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*onlyValuesCtx).Value(net.onlyValuesCtx * ovc, interface_{}
   key, interface_{} ~r1) */

interface___ net___onlyValuesCtx__Value(net_onlyValuesCtx *ovc,interface___ key)

{
  void *elem;
  undefined8 extraout_RAX;
  long in_FS_OFFSET;
  interface___ iVar1;
  interface___ iVar2;
  multireturn_bool_bool_ mVar3;
  net_onlyValuesCtx *ovc_spill;
  interface___ key_spill;
  char local_20;
  runtime__type *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  elem = (void *)(*(code *)(ovc_spill->lookupValues).tab[1].inter)();
  mVar3 = runtime_selectnbrecv(elem,(runtime_hchan *)key._type);
  iVar1.data = (void *)CONCAT71(key._type._1_7_,mVar3.received);
  iVar1._type._1_7_ = (undefined7)((ulong)extraout_RAX >> 8);
  iVar1._type._0_1_ = mVar3.selected;
  if (local_20 != '\0') {
    return iVar1;
  }
  (**(code **)&(ovc_spill->lookupValues).tab[1].hash)();
  iVar2.data = iVar1.data;
  iVar2._type = local_18;
  return iVar2;
}

