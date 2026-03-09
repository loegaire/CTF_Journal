
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*OpError).Timeout(net.OpError * e, bool ~r0) */

bool net___OpError__Timeout(net_OpError *e)

{
  runtime_itab *prVar1;
  void *pvVar2;
  void *pvVar3;
  runtime_itab *unaff_RBX;
  long in_FS_OFFSET;
  runtime_iface i;
  runtime_iface i_00;
  net_OpError *e_spill;
  undefined1 local_28;
  long local_18;
  
                    /* Unresolved local var: net.timeout t@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: os.SyscallError * ne@[???] */
  prVar1 = (e_spill->Err).tab;
  pvVar2 = (e_spill->Err).data;
  if (prVar1 == (runtime_itab *)go_itab__os_SyscallError_error) {
                    /* Unresolved local var: net.timeout t@[???] */
    pvVar3 = *(void **)((long)pvVar2 + 0x10);
    i.data = pvVar3;
    i.tab = unaff_RBX;
    runtime_assertI2I2(*(runtime_interfacetype **)((long)pvVar2 + 0x18),i);
    if (local_18 == 0) {
      local_28 = 0;
    }
    else {
      (**(code **)(local_18 + 0x18))();
      local_28 = SUB81(pvVar3,0);
    }
    return (bool)local_28;
  }
  i_00.data = prVar1;
  i_00.tab = unaff_RBX;
  runtime_assertI2I2((runtime_interfacetype *)&DAT_0023d1c0,i_00);
  if (local_18 == 0) {
    local_28 = 0;
  }
  else {
    (**(code **)(local_18 + 0x18))();
    local_28 = SUB81(prVar1,0);
  }
  return (bool)local_28;
}

