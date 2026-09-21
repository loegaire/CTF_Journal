
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.hostname(string name, error err) */

multireturn_string_error__conflict2 os_hostname(void)

{
  uint8 *extraout_RAX;
  uint8 *puVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string name;
  multireturn_string_error__conflict1 mVar2;
  multireturn_string_error__conflict2 mVar3;
  multireturn_string_error__conflict2 mVar4;
  ulong local_38;
  runtime_itab *local_30;
  long local_28;
  undefined8 local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  name.len = unaff_RBX;
  name.str = &DAT_002955f9;
  mVar2 = syscall_Sysctl(name);
  mVar4.err.data = mVar2.err.data;
  if (local_28 != 0) {
    runtime_newobject((runtime__type *)&DAT_0024d4a0);
    puVar1 = &DAT_0000000d;
    _DAT_00000015 = 0x14;
    _DAT_0000000d = &DAT_0029c19e;
    _DAT_0000001d = local_28;
    if (runtime_writeBarrier._0_4_ == 0) {
      _DAT_00000025 = local_20;
    }
    else {
      mVar4.err.data = &DAT_00000025;
      runtime_gcWriteBarrierCX();
      puVar1 = extraout_RAX;
    }
    mVar3.name.len = local_28;
    mVar3.name.str = puVar1;
    mVar3.err.data = mVar4.err.data;
    mVar3.err.tab = (runtime_itab *)go_itab__os_SyscallError_error;
    return mVar3;
  }
  mVar4.name.len = 0;
  mVar4.name.str = (uint8 *)local_38;
  mVar4.err.tab = local_30;
  return mVar4;
}

