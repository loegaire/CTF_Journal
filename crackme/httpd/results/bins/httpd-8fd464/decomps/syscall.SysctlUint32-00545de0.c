
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.SysctlUint32(string name, uint32 value, error err) */

multireturn_uint32_error__conflict syscall_SysctlUint32(string name)

{
  undefined1 auVar1 [20];
  uint8 *in_R8;
  uintptr in_R9;
  long in_FS_OFFSET;
  string name_00;
  error eVar2;
  __syscall__C_int mib;
  multireturn_uint32_error__conflict mVar3;
  multireturn_uint32_error__conflict mVar4;
  multireturn_uint32_error__conflict mVar5;
  multireturn___syscall__C_int_error_ mVar6;
  string name_spill;
  undefined8 local_48;
  uintptr *local_40;
  long local_38;
  void *pvStack_30;
  long local_28;
  void *local_20;
  long local_10;
  
  name_00.len = name.len;
                    /* Unresolved local var: []syscall._C_int mib@[???]
                       Unresolved local var: []uint8 buf@[???]
                       Unresolved local var: uintptr n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  name_00.str = (uint8 *)name_spill.len;
  mVar6 = syscall_nametomib(name_00);
  if (local_38 != 0) {
    mVar5.value = (undefined4)local_38;
    mVar5.err.tab = (runtime_itab *)local_48;
    mVar5.err.data = pvStack_30;
    return mVar5;
  }
  local_10 = 4;
  mib.len = local_48;
  mib.array = (syscall__C_int *)&local_10;
  mib.cap = (int)pvStack_30;
  eVar2 = syscall_sysctl(mib,(uint8 *)mVar6.err.tab,local_40,in_R8,in_R9);
  mVar3.err.tab = eVar2.data;
  if (local_28 != 0) {
    mVar4.value = (undefined4)local_28;
    mVar4.err.tab = mVar3.err.tab;
    mVar4.err.data = local_20;
    return mVar4;
  }
  if (local_10 != 4) {
    mVar3.value = 0x2b2e08;
    mVar3.err.data = local_20;
    return mVar3;
  }
  auVar1._8_8_ = local_20;
  auVar1._0_8_ = mVar3.err.tab;
  auVar1._16_4_ = 0;
  return (multireturn_uint32_error__conflict)(auVar1 << 0x20);
}

