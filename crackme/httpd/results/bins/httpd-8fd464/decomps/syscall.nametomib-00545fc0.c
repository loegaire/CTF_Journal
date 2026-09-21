
/* WARNING: Removing unreachable block (ram,0x005461a8) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.nametomib(string name, []syscall._C_int mib, error err) */

multireturn___syscall__C_int_error_ syscall_nametomib(string name)

{
  runtime__type *et;
  int tolen;
  undefined1 *puVar1;
  void *in_RDI;
  runtime_itab *old;
  uint8 *in_R8;
  uintptr in_R9;
  long in_FS_OFFSET;
  __syscall__C_int mib;
  error eVar2;
  multireturn___syscall__C_int_error_ mVar3;
  multireturn___syscall__C_int_error_ mVar4;
  multireturn___syscall__C_int_error_ mVar5;
  string name_spill;
  ulong local_68;
  uintptr *local_50;
  long local_38;
  int local_30;
  
                    /* Unresolved local var: syscall._C_int[26] * &buf@[???]
                       Unresolved local var: []uint8 bytes@[???]
                       Unresolved local var: uintptr n@[???]
                       Unresolved local var: int ~R0.len@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00226d40);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: []uint8 a@[???] */
  tolen = 0;
  do {
    if (name_spill.len <= tolen) {
      et = (runtime__type *)(name_spill.len + 1);
      runtime_makeslicecopy(et,tolen,name_spill.len,in_RDI);
      puVar1 = (undefined1 *)0x0;
      old = (runtime_itab *)0x0;
LAB_00546083:
      if (puVar1 != (undefined1 *)0x0) {
        mVar5.mib.len = (int)puVar1;
        mVar5.mib.array = (syscall__C_int *)local_68;
        mVar5.mib.cap = name_spill.len;
        mVar5.err.data = local_50;
        mVar5.err.tab = old;
        return mVar5;
      }
      if (et == (runtime__type *)0x0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      mib.len = 0;
      mib.array = (syscall__C_int *)local_68;
      mib.cap = name_spill.len;
      eVar2 = syscall_sysctl(mib,(uint8 *)old,local_50,in_R8,in_R9);
      mVar3.mib.len = eVar2.data;
      if (local_38 == 0) {
        mVar3.mib.array = (syscall__C_int *)local_68;
        mVar3.mib.cap = 0x18;
        mVar3.err.data = local_50;
        mVar3.err.tab = old;
        return mVar3;
      }
      mVar4.mib.len = (int)mVar3.mib.len;
      mVar4.mib.array = (syscall__C_int *)local_38;
      mVar4.mib.cap = local_30;
      mVar4.err.data = local_50;
      mVar4.err.tab = old;
      return mVar4;
    }
    if (name_spill.str[tolen] == 0) {
      et = (runtime__type *)0x0;
      puVar1 = go_itab_syscall_Errno_error;
      local_50 = (uintptr *)0x0;
      old = (runtime_itab *)&DAT_002b2e10;
      goto LAB_00546083;
    }
    tolen = tolen + 1;
  } while( true );
}

