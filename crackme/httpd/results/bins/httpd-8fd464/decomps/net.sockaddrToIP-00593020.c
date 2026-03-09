
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.sockaddrToIP(syscall.Sockaddr sa, net.Addr ~r1) */

net_Addr net_sockaddrToIP(syscall_Sockaddr sa)

{
  uint uVar1;
  runtime_itab *prVar2;
  long *plVar3;
  long in_FS_OFFSET;
  net_Addr nVar4;
  string sVar5;
  net_Addr nVar6;
  net_Addr nVar7;
  runtime_itab *in_stack_00000008;
  syscall_SockaddrInet4 *sa_1;
  long *local_30;
  runtime__type *local_28;
  long local_20;
  
  nVar4.data = sa.data;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar2 = in_stack_00000008;
  if (in_stack_00000008 != (runtime_itab *)0x0) {
    uVar1 = in_stack_00000008->hash;
    if (uVar1 == 0x61a1523f) {
      if (in_stack_00000008 == (runtime_itab *)go_itab__syscall_SockaddrInet4_syscall_Sockaddr) {
        runtime_newobject((runtime__type *)sa_1);
        local_30[1] = 4;
        local_30[2] = 4;
        if (runtime_writeBarrier._0_4_ == 0) {
          *local_30 = (long)sa_1->Addr;
        }
        else {
          runtime_gcWriteBarrier();
        }
        nVar4.tab = (runtime_itab *)go_itab__net_IPAddr_net_Addr;
        return nVar4;
      }
    }
    else {
      prVar2 = (runtime_itab *)(ulong)uVar1;
      if ((uVar1 == 0x98d3a9ba) &&
         (prVar2 = in_stack_00000008,
         in_stack_00000008 == (runtime_itab *)go_itab__syscall_SockaddrInet6_syscall_Sockaddr)) {
        plVar3 = (long *)(ulong)*(uint *)sa_1->Addr;
        sVar5 = net___ipv6ZoneCache__name((net_ipv6ZoneCache *)sa_1,(int)nVar4.data);
        nVar6.data = (void *)sVar5.len;
        runtime_newobject(local_28);
        plVar3[1] = 0x10;
        plVar3[2] = 0x10;
        if (runtime_writeBarrier._0_4_ == 0) {
          *plVar3 = (long)&sa_1->raw;
        }
        else {
          runtime_gcWriteBarrier();
        }
        plVar3[4] = local_20;
        if (runtime_writeBarrier._0_4_ == 0) {
          plVar3[3] = (long)local_28;
        }
        else {
          runtime_gcWriteBarrierDX();
        }
        nVar6.tab = (runtime_itab *)go_itab__net_IPAddr_net_Addr;
        return nVar6;
      }
    }
  }
  nVar7.data = nVar4.data;
  nVar7.tab = prVar2;
  return nVar7;
}

