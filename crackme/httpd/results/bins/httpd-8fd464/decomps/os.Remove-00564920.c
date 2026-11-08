
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.Remove(string name, error ~r1) */

error os_Remove(string name)

{
  error eVar1;
  error eVar2;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime__type *prVar3;
  long in_FS_OFFSET;
  string path;
  string path_00;
  error eVar4;
  string name_spill;
  runtime_interfacetype *local_38;
  runtime__type *local_30;
  
  prVar3 = (runtime__type *)name.len;
                    /* Unresolved local var: error e@[???]
                       Unresolved local var: error e1@[???]
                       Unresolved local var: uint8 * ~R0.data@[???]
                       Unresolved local var: uintptr ~R0.itab@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
    path.len = (int)prVar3;
    path.str = name_spill.str;
    syscall_Unlink(path);
    eVar1.data = local_30;
    eVar1.tab = (runtime_itab *)local_38;
    if ((local_38 == (runtime_interfacetype *)0x0) ||
       ((undefined *)(local_38->typ).ptrdata != &DAT_002463a0)) break;
    prVar3 = local_30;
  } while (local_30->size == 4);
  if (local_38 == (runtime_interfacetype *)0x0) {
    return eVar1;
  }
  do {
    path_00.len = (int)local_30;
    path_00.str = name_spill.str;
    syscall_Rmdir(path_00);
    eVar2.data = local_30;
    eVar2.tab = (runtime_itab *)local_38;
    if ((local_38 == (runtime_interfacetype *)0x0) ||
       ((undefined *)(local_38->typ).ptrdata != &DAT_002463a0)) break;
  } while (local_30->size == 4);
  if (local_38 != (runtime_interfacetype *)0x0) {
    runtime_newobject(&local_38->typ);
    *(undefined8 *)(name_spill.len + 8) = 6;
    *(undefined **)name_spill.len = &DAT_00289f84;
    *(int *)(name_spill.len + 0x18) = name_spill.len;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)(name_spill.len + 0x10) = name_spill.str;
    }
    else {
      runtime_gcWriteBarrierCX();
      name_spill.len = (int)extraout_RAX;
    }
    ((runtime_itab *)(name_spill.len + 0x20))->inter = local_38;
    if (runtime_writeBarrier._0_4_ == 0) {
      ((runtime_itab *)(name_spill.len + 0x20))->_type = local_30;
    }
    else {
      runtime_gcWriteBarrierCX();
      name_spill.len = (int)extraout_RAX_00;
    }
    eVar4.data = local_30;
    eVar4.tab = (runtime_itab *)name_spill.len;
    return eVar4;
  }
  return eVar2;
}

