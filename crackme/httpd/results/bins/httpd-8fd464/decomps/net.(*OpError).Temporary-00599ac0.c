
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*OpError).Temporary(net.OpError * e, bool ~r0) */

bool net___OpError__Temporary(net_OpError *e)

{
  uint8 *puVar1;
  long lVar2;
  runtime_itab *prVar3;
  void *pvVar4;
  void *pvVar5;
  runtime_itab *unaff_RBX;
  long in_FS_OFFSET;
  runtime_iface i;
  runtime_iface i_00;
  net_OpError *e_spill;
  undefined1 local_28;
  long local_18;
  
                    /* Unresolved local var: net.temporary t@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar1 = (e_spill->Op).str;
                    /* Unresolved local var: syscall.Errno se@[???] */
  if (((((e_spill->Op).len == 6) && (*(int *)puVar1 == 0x65636361)) &&
      (*(short *)(puVar1 + 4) == 0x7470)) &&
     (((e_spill->Err).tab == (runtime_itab *)go_itab_syscall_Errno_error &&
      ((lVar2 = *(long *)(e_spill->Err).data, lVar2 == 0x36 || (lVar2 == 0x35)))))) {
    return SUB81(e_spill,0);
  }
                    /* Unresolved local var: os.SyscallError * ne@[???] */
  prVar3 = (e_spill->Err).tab;
  pvVar4 = (e_spill->Err).data;
  if (prVar3 != (runtime_itab *)go_itab__os_SyscallError_error) {
    i_00.data = prVar3;
    i_00.tab = unaff_RBX;
    runtime_assertI2I2((runtime_interfacetype *)&DAT_0023d140,i_00);
    if (local_18 == 0) {
      local_28 = 0;
    }
    else {
      (**(code **)(local_18 + 0x18))();
      local_28 = SUB81(prVar3,0);
    }
    return (bool)local_28;
  }
                    /* Unresolved local var: net.temporary t@[???] */
  pvVar5 = *(void **)((long)pvVar4 + 0x10);
  i.data = pvVar5;
  i.tab = unaff_RBX;
  runtime_assertI2I2(*(runtime_interfacetype **)((long)pvVar4 + 0x18),i);
  if (local_18 == 0) {
    local_28 = 0;
  }
  else {
    (**(code **)(local_18 + 0x18))();
    local_28 = SUB81(pvVar5,0);
  }
  return (bool)local_28;
}

