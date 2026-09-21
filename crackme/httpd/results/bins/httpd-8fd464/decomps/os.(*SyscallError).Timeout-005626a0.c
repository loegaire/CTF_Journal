
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*SyscallError).Timeout(os.SyscallError * e, bool ~r0) */

bool os___SyscallError__Timeout(os_SyscallError *e)

{
  runtime_itab *prVar1;
  runtime_itab *unaff_RBX;
  long in_FS_OFFSET;
  runtime_iface i;
  os_SyscallError *e_spill;
  undefined1 local_28;
  long local_18;
  
                    /* Unresolved local var: os.timeout t@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = (e_spill->Err).tab;
  i.data = prVar1;
  i.tab = unaff_RBX;
  runtime_assertI2I2((e_spill->Err).data,i);
  if (local_18 == 0) {
    local_28 = 0;
  }
  else {
    (**(code **)(local_18 + 0x18))();
    local_28 = SUB81(prVar1,0);
  }
  return (bool)local_28;
}

