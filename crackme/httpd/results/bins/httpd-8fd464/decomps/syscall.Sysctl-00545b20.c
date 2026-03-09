
/* WARNING: Removing unreachable block (ram,0x00545d16) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Sysctl(string name, string value, error err) */

multireturn_string_error__conflict1 syscall_Sysctl(string name)

{
  runtime__type *prVar1;
  byte bVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  uint8 *ptr;
  uint8 *in_R8;
  uintptr in_R9;
  long in_FS_OFFSET;
  error eVar5;
  string sVar6;
  __syscall__C_int mib;
  __syscall__C_int mib_00;
  multireturn_string_error__conflict1 mVar7;
  multireturn_string_error__conflict1 mVar8;
  multireturn___syscall__C_int_error_ mVar9;
  string name_spill;
  int local_68;
  uintptr *local_60;
  uint8 *local_58;
  runtime_itab *prStack_50;
  uint8 *local_48;
  runtime_itab *local_40;
  runtime__type *local_38 [3];
  runtime__type *local_20;
  long local_10;
  
  sVar6.len = name.len;
                    /* Unresolved local var: []syscall._C_int mib@[???]
                       Unresolved local var: []uint8 buf@[???]
                       Unresolved local var: uintptr n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar6.str = (uint8 *)name_spill.len;
  mVar9 = syscall_nametomib(sVar6);
  mVar8.err.data = mVar9.err.tab;
  if (local_58 != (uint8 *)0x0) {
    mVar8.value.len = local_68;
    mVar8.value.str = local_58;
    mVar8.err.tab = prStack_50;
    return mVar8;
  }
  local_38[0] = (runtime__type *)0x0;
  mib.len = local_68;
  mib.array = (syscall__C_int *)local_38;
  mib.cap = (int)prStack_50;
  eVar5 = syscall_sysctl(mib,(uint8 *)mVar8.err.data,local_60,in_R8,in_R9);
  mib_00.len = eVar5.data;
  if (local_48 != (uint8 *)0x0) {
    mVar7.value.len = (int)mib_00.len;
    mVar7.value.str = local_48;
    mVar7.err.data = mVar8.err.data;
    mVar7.err.tab = local_40;
    return mVar7;
  }
  if (local_38[0] == (runtime__type *)0x0) {
    auVar4._16_8_ = mVar8.err.data;
    auVar4._8_8_ = local_40;
    auVar4._0_8_ = mib_00.len;
    auVar4._24_8_ = 0;
    return (multireturn_string_error__conflict1)(auVar4 << 0x40);
  }
  runtime_makeslice(local_38[0],(int)mib_00.len,0x225720);
  if (local_38[0] == (runtime__type *)0x0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  local_10 = 0;
  local_20 = local_38[0];
  mib_00.array = (syscall__C_int *)local_38;
  mib_00.cap = (int)local_38[0];
  syscall_sysctl(mib_00,(uint8 *)mVar8.err.data,local_60,in_R8,in_R9);
  if (local_38[0] == (runtime__type *)0x0) {
    ptr = (uint8 *)0x0;
  }
  else {
    prVar1 = (runtime__type *)((long)&local_38[0][-1].ptrToThis + 3);
    if (local_20 <= prVar1) goto LAB_00545dba;
    bVar2 = *(byte *)((long)local_38[0] + local_10 + -1);
    ptr = (uint8 *)(ulong)bVar2;
    if (bVar2 == 0) {
      local_38[0] = prVar1;
    }
  }
  if (local_38[0] <= local_20) {
    sVar6 = runtime_slicebytetostring((runtime_tmpBuf *)local_38[0],ptr,(int)local_20);
    auVar3._16_8_ = mVar8.err.data;
    auVar3._8_8_ = local_38;
    auVar3._0_8_ = sVar6.len;
    auVar3._24_8_ = 0;
    return (multireturn_string_error__conflict1)(auVar3 << 0x40);
  }
  runtime_panicSliceAcapU();
LAB_00545dba:
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

