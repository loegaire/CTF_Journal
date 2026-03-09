
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.lookupProtocol(string name, int ~r2, error ~r3) */

multireturn_int_error__conflict2 net_lookupProtocol(string name)

{
  long in_FS_OFFSET;
  string name_00;
  multireturn_int_error__conflict mVar1;
  multireturn_int_error__conflict2 mVar2;
  string name_spill;
  uint8 *in_stack_00000020;
  undefined8 local_20;
  void *local_18;
  
  name_00.len = (func__ **)name.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (net_onceReadProtocols.done == 0) {
    sync___Once__doSlow((sync_Once *)&PTR_net_readProtocols_002b3500,name_00.len);
  }
  name_00.str = in_stack_00000020;
  mVar1 = net_lookupProtocolMap(name_00);
  mVar2.~r3.tab = mVar1.~r2.tab;
  mVar2.~r2 = local_20;
  mVar2.~r3.data = local_18;
  return mVar2;
}

