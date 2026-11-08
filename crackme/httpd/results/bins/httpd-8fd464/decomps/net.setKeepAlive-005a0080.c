
/* WARNING: Removing unreachable block (ram,0x005a00ed) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.setKeepAlive(net.netFD * fd, bool keepalive, error ~r2) */

error net_setKeepAlive(net_netFD *fd,bool keepalive)

{
  undefined7 unaff_00000019;
  int in_RDI;
  long in_FS_OFFSET;
  error eVar1;
  net_netFD *fd_spill;
  bool keepalive_spill;
  runtime_itab *local_28;
  undefined8 local_20;
  
                    /* Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  internal_poll___FD__SetsockoptInt
            (&fd_spill->pfd,CONCAT71(unaff_00000019,keepalive),(ulong)keepalive_spill,in_RDI);
  if (local_28 == (runtime_itab *)go_itab_syscall_Errno_error) {
    runtime_newobject((runtime__type *)&DAT_0024d4a0);
    _DAT_00010007 = 10;
    _DAT_0000ffff = &DAT_00290376;
    _DAT_0001000f = local_28;
    if (runtime_writeBarrier._0_4_ == 0) {
      _DAT_00010017 = local_20;
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

