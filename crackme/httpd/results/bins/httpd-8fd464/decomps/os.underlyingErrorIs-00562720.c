
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.underlyingErrorIs(error err, error target, bool ~r2) */

bool os_underlyingErrorIs(error err,error target)

{
  uint32 uVar1;
  runtime_interfacetype *prVar2;
  bool bVar3;
  long in_FS_OFFSET;
  runtime_itab *in_stack_00000008;
  io_fs_PathError *err_1;
  error target_spill;
  char local_28;
  
                    /* Unresolved local var: syscall.Errno e@[???]
                       Unresolved local var: uint8 * ~R0.data@[???]
                       Unresolved local var: uintptr ~R0.itab@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (in_stack_00000008 != (runtime_itab *)0x0) {
    uVar1 = in_stack_00000008->hash;
    if (uVar1 == 0xd29941b) {
      if (in_stack_00000008 == (runtime_itab *)go_itab__io_fs_PathError_error) {
        in_stack_00000008 = (err_1->Err).tab;
        err_1 = (err_1->Err).data;
      }
    }
    else if (uVar1 == 0xeb9c6bd4) {
      if (in_stack_00000008 == (runtime_itab *)go_itab__os_LinkError_error) {
        in_stack_00000008 = (runtime_itab *)err_1[1].Op.str;
        err_1 = (io_fs_PathError *)err_1[1].Op.len;
      }
    }
    else if ((uVar1 == 0xfdb7e30c) &&
            (in_stack_00000008 == (runtime_itab *)go_itab__os_SyscallError_error)) {
      in_stack_00000008 = (runtime_itab *)(err_1->Path).str;
      err_1 = (io_fs_PathError *)(err_1->Path).len;
    }
  }
  if ((target_spill.tab == in_stack_00000008) &&
     (bVar3 = runtime_ifaceeq((runtime_itab *)err_1,err.data,in_stack_00000008), local_28 != '\0'))
  {
    return bVar3;
  }
  if (in_stack_00000008 == (runtime_itab *)go_itab_syscall_Errno_error) {
    prVar2 = (runtime_interfacetype *)(err_1->Op).str;
    if ((internal_oserror_ErrPermission.tab == target_spill.tab) &&
       (runtime_ifaceeq(target_spill.data,go_itab_syscall_Errno_error,
                        internal_oserror_ErrPermission.data), local_28 != '\0')) {
      if (prVar2 == (runtime_interfacetype *)0xd) {
        bVar3 = true;
      }
      else {
        bVar3 = prVar2 == (runtime_interfacetype *)0x1;
      }
    }
    else if ((internal_oserror_ErrExist.tab == target_spill.tab) &&
            (runtime_ifaceeq(target_spill.data,go_itab_syscall_Errno_error,
                             internal_oserror_ErrExist.data), local_28 != '\0')) {
      if (prVar2 == (runtime_interfacetype *)0x11) {
        bVar3 = true;
      }
      else {
        bVar3 = prVar2 == (runtime_interfacetype *)0x42;
      }
    }
    else if ((internal_oserror_ErrNotExist.tab == target_spill.tab) &&
            (runtime_ifaceeq(target_spill.data,go_itab_syscall_Errno_error,
                             internal_oserror_ErrNotExist.data), local_28 != '\0')) {
      bVar3 = prVar2 == (runtime_interfacetype *)0x2;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

