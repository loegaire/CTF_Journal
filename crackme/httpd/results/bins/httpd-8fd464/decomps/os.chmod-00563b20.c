
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.chmod(string name, io/fs.FileMode mode, error ~r2) */

error os_chmod(string name,io_fs_FileMode mode)

{
  runtime__type *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime__type *prVar1;
  long in_FS_OFFSET;
  error eVar2;
  error eVar3;
  string name_spill;
  io_fs_FileMode mode_spill;
  void *local_48;
  runtime__type *local_40;
  
                    /* Unresolved local var: string longName@[???]
                       Unresolved local var: error e@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
                    /* Unresolved local var: error err@[???] */
    os_chmod_func1();
    if ((local_48 == (void *)0x0) || (*(undefined **)((long)local_48 + 8) != &DAT_002463a0)) break;
  } while (local_40->size == 4);
  if (local_48 == (void *)0x0) {
    eVar3.data = (void *)0x0;
    eVar3.tab = (runtime_itab *)local_40;
    return eVar3;
  }
  runtime_newobject((runtime__type *)&DAT_00257220);
  local_40->ptrdata = 5;
  local_40->size = (uintptr)&DAT_00288c7d;
  local_40->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)name_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)&local_40->hash = name_spill.str;
    prVar1 = local_40;
  }
  else {
    runtime_gcWriteBarrierCX();
    prVar1 = extraout_RAX;
  }
  ((runtime_itab *)&prVar1->gcdata)->inter = local_48;
  if (runtime_writeBarrier._0_4_ == 0) {
    ((runtime_itab *)&prVar1->str)->inter = (runtime_interfacetype *)local_40;
  }
  else {
    runtime_gcWriteBarrierCX();
    prVar1 = (runtime__type *)extraout_RAX_00;
  }
  eVar2.data = local_48;
  eVar2.tab = (runtime_itab *)prVar1;
  return eVar2;
}

