
/* WARNING: Removing unreachable block (ram,0x0058c59b) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*netFD).shutdown(net.netFD * fd, int how, error ~r1) */

error net___netFD__shutdown(net_netFD *fd,int how)

{
  long in_FS_OFFSET;
  error eVar1;
  net_netFD *fd_spill;
  int how_spill;
  runtime_itab *local_28;
  undefined8 local_20;
  
                    /* Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  internal_poll___FD__Shutdown(&fd_spill->pfd,how);
  if (local_28 == (runtime_itab *)go_itab_syscall_Errno_error) {
    runtime_newobject((runtime__type *)&DAT_0024d4a0);
    *(undefined8 *)(how_spill + 8) = 8;
    *(undefined **)how_spill = &DAT_0028cd72;
    *(undefined1 **)(how_spill + 0x10) = go_itab_syscall_Errno_error;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(how_spill + 0x18) = local_20;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
    local_28 = (runtime_itab *)go_itab__os_SyscallError_error;
  }
  eVar1.data = go_itab_syscall_Errno_error;
  eVar1.tab = local_28;
  return eVar1;
}

