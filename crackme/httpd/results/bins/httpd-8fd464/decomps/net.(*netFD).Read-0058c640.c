
/* WARNING: Removing unreachable block (ram,0x0058c6b4) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*netFD).Read(net.netFD * fd, []uint8 p, int n, error err) */

multireturn_int_error_ net___netFD__Read(net_netFD *fd,__uint8 p)

{
  undefined1 *puVar1;
  int iVar2;
  long in_FS_OFFSET;
  __uint8 p_00;
  multireturn_int_error_ mVar3;
  net_netFD *fd_spill;
  __uint8 p_spill;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  
  iVar2 = p.cap;
  p_00.array = p.array;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  p_00.len = p_spill.cap;
  p_00.cap = iVar2;
  internal_poll___FD__Read(&fd_spill->pfd,p_00);
  puVar1 = local_30;
  if (local_30 == go_itab_syscall_Errno_error) {
    runtime_newobject((runtime__type *)&DAT_0024d4a0);
    p_spill.array[8] = 4;
    p_spill.array[9] = 0;
    p_spill.array[10] = 0;
    p_spill.array[0xb] = 0;
    p_spill.array[0xc] = 0;
    p_spill.array[0xd] = 0;
    p_spill.array[0xe] = 0;
    p_spill.array[0xf] = 0;
    *(undefined **)p_spill.array = &DAT_00288621;
    *(undefined1 **)(p_spill.array + 0x10) = go_itab_syscall_Errno_error;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(p_spill.array + 0x18) = local_28;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
    puVar1 = go_itab__os_SyscallError_error;
  }
  mVar3.err.tab = (runtime_itab *)local_30;
  mVar3.n = local_38;
  mVar3.err.data = puVar1;
  return mVar3;
}

