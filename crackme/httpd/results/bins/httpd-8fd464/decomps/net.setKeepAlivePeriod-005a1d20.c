
/* WARNING: Removing unreachable block (ram,0x005a1e7a) */
/* WARNING: Removing unreachable block (ram,0x005a1e7f) */
/* WARNING: Removing unreachable block (ram,0x005a1e85) */
/* WARNING: Removing unreachable block (ram,0x005a1ed3) */
/* WARNING: Removing unreachable block (ram,0x005a1ec8) */
/* WARNING: Removing unreachable block (ram,0x005a1ee5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.setKeepAlivePeriod(net.netFD * fd, time.Duration d, error ~r2)
    */

error net_setKeepAlivePeriod(net_netFD *fd,time_Duration d)

{
  runtime_itab *extraout_RAX;
  runtime_itab *prVar1;
  long lVar2;
  int in_RDI;
  long in_FS_OFFSET;
  error eVar3;
  net_netFD *fd_spill;
  time_Duration d_spill;
  undefined1 *local_38;
  runtime_itab *local_30;
  
                    /* Unresolved local var: int secs@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: time.Duration ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: error err@[???] */
  lVar2 = d_spill + 999999999;
  internal_poll___FD__SetsockoptInt
            ((internal_poll_FD *)(lVar2 * 0x44b82fa09b5a52cc),lVar2 >> 0x3f,(int)fd_spill,in_RDI);
  if (local_38 != (undefined1 *)0x0) {
    prVar1 = local_30;
    if (local_38 == go_itab_syscall_Errno_error) {
      runtime_newobject((runtime__type *)&DAT_0024d4a0);
      prVar1 = (runtime_itab *)&DAT_00000006;
      _DAT_0000000e = 10;
      _DAT_00000006 = &DAT_00290376;
      _DAT_00000016 = local_38;
      if (runtime_writeBarrier._0_4_ == 0) {
        _DAT_0000001e = local_30;
      }
      else {
        runtime_gcWriteBarrierCX();
        prVar1 = extraout_RAX;
      }
    }
    eVar3.data = local_38;
    eVar3.tab = prVar1;
    return eVar3;
  }
  internal_poll___FD__SetsockoptInt(&fd_spill->pfd,0,lVar2 / 1000000000,in_RDI);
  return (error)(ZEXT816(0x2f9c40) << 0x40);
}

