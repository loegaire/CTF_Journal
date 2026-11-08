
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.sockaddrToUnix(syscall.Sockaddr sa, net.Addr ~r1) */

net_Addr net_sockaddrToUnix(syscall_Sockaddr sa)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  net_Addr nVar2;
  net_Addr nVar3;
  syscall_Sockaddr sa_spill;
  undefined8 *local_10;
  
  nVar2.data = sa.data;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (sa_spill.tab == (runtime_itab *)go_itab__syscall_SockaddrUnix_syscall_Sockaddr) {
    runtime_newobject((runtime__type *)&DAT_0024cc80);
    uVar1 = *(undefined8 *)sa_spill.data;
    local_10[1] = *(undefined8 *)((long)sa_spill.data + 8);
    if (runtime_writeBarrier._0_4_ == 0) {
      *local_10 = uVar1;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
    local_10[3] = 4;
    local_10[2] = &DAT_002887fd;
    nVar2.tab = (runtime_itab *)go_itab__net_UnixAddr_net_Addr;
    return nVar2;
  }
  nVar3.data = nVar2.data;
  nVar3.tab = sa_spill.tab;
  return nVar3;
}

