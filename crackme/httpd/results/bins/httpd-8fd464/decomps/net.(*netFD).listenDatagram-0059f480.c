
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*netFD).listenDatagram(net.netFD * fd, net.sockaddr laddr,
   func(string,_string,_syscall.RawConn)_error * * ctrlFn, error ~r2) */

error net___netFD__listenDatagram
                (net_netFD *fd,net_sockaddr laddr,
                func_string__string__syscall_RawConn__error **ctrlFn)

{
  string *psVar1;
  net_UDPAddr *pnVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  net_UDPAddr *pnVar6;
  net_netFD *extraout_RAX;
  net_netFD *extraout_RAX_00;
  net_netFD *pnVar7;
  net_UDPAddr *extraout_RAX_01;
  net_UDPAddr *pnVar8;
  runtime_itab *extraout_RAX_02;
  char cVar9;
  net_UDPAddr *pnVar10;
  runtime__type *prVar11;
  net_netFD *extraout_RDX;
  error *peVar12;
  undefined **ppuVar13;
  int in_RSI;
  undefined1 pollable;
  uint8 *puVar14;
  void **ppvVar16;
  runtime_itab *in_R8;
  void *in_R9;
  long in_FS_OFFSET;
  error eVar17;
  error eVar18;
  interface___ obj;
  error eVar19;
  error eVar20;
  error eVar21;
  error eVar22;
  syscall_Sockaddr sa;
  string net;
  string a1;
  string a1_00;
  string sVar23;
  net_IP ip;
  interface___ finalizer;
  syscall_RawConn sVar24;
  multireturn_syscall_Sockaddr_error__conflict mVar25;
  string sVar26;
  net_netFD *fd_spill;
  undefined1 *in_stack_00000010;
  net_UDPAddr *addr;
  func_string__string__syscall_RawConn__error **ctrlFn_spill;
  net_UDPAddr *local_88;
  net_UDPAddr *local_80;
  net_UDPAddr *local_78;
  runtime_itab *local_70;
  error *local_68;
  net_UDPAddr *local_60;
  net_UDPAddr *local_10;
  uint8 *puVar15;
  
  pnVar6 = local_78;
                    /* Unresolved local var: error err@[???]
                       Unresolved local var: syscall.Sockaddr lsa@[???] */
  while (&local_10 <= *(net_UDPAddr ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  pnVar7 = fd_spill;
  if (((in_stack_00000010 != (undefined1 *)0x0) &&
      (*(int *)(in_stack_00000010 + 0x10) == -0x282ea215)) &&
     (in_stack_00000010 == go_itab__net_UDPAddr_net_sockaddr)) {
    puVar14 = (addr->IP).array;
    pnVar8 = (net_UDPAddr *)(addr->IP).len;
    pnVar2 = (net_UDPAddr *)(addr->IP).cap;
    if (puVar14 == (uint8 *)0x0) {
      cVar9 = '\0';
    }
    else {
      ip.len = (int)pnVar2;
      ip.array = (uint8 *)addr;
      ip.cap = (int)puVar14;
      net_IP_IsMulticast(ip);
                    /* Unresolved local var: net.UDPAddr * &addr@[???] */
      cVar9 = (char)local_78;
      local_88 = pnVar8;
      local_80 = pnVar2;
    }
    if (cVar9 != '\0') {
                    /* Unresolved local var: error err@[???] */
      eVar17 = net_setDefaultMulticastSockopts((int)fd_spill);
      if (local_88 != (net_UDPAddr *)0x0) {
        eVar17.tab = (runtime_itab *)local_88;
        return eVar17;
      }
      pnVar8 = local_80;
      runtime_newobject((runtime__type *)&DAT_00257520);
      if (runtime_writeBarrier._0_4_ == 0) {
        _DAT_00000000 = (addr->IP).array;
        _DAT_00000008 = (addr->IP).len;
        _DAT_00000010 = (addr->IP).cap;
        _DAT_00000018 = addr->Port;
        _DAT_00000020 = (addr->Zone).str;
        _DAT_00000028 = (addr->Zone).len;
        addr = local_88;
      }
      else {
        local_10 = local_88;
        local_80 = addr;
        runtime_typedmemmove((runtime__type *)addr,eVar17.data,pnVar8);
        addr = local_10;
      }
      iVar5 = net_IPv4zero.cap;
      puVar15 = net_IPv4zero.array;
      iVar4 = net_IPv6unspecified.cap;
      puVar14 = net_IPv6unspecified.array;
      if (fd_spill->family == 2) {
        (addr->IP).len = net_IPv4zero.len;
        (addr->IP).cap = iVar5;
        if (runtime_writeBarrier._0_4_ == 0) {
          (addr->IP).array = puVar15;
        }
        else {
          runtime_gcWriteBarrierCX();
          pnVar7 = extraout_RAX;
        }
      }
      else if (fd_spill->family == 0x1c) {
        (addr->IP).len = net_IPv6unspecified.len;
        (addr->IP).cap = iVar4;
        if (runtime_writeBarrier._0_4_ == 0) {
          (addr->IP).array = puVar14;
        }
        else {
          runtime_gcWriteBarrierCX();
          pnVar7 = extraout_RAX_00;
        }
      }
      in_stack_00000010 = go_itab__net_UDPAddr_net_sockaddr;
    }
  }
  pnVar8 = local_80;
  pollable = SUB81(addr,0);
  puVar14 = (uint8 *)pnVar7->family;
  (**(code **)(in_stack_00000010 + 0x38))();
  if (local_70 != (runtime_itab *)0x0) {
    eVar22.data = local_78;
    eVar22.tab = local_70;
    return eVar22;
  }
  if (ctrlFn_spill != (func_string__string__syscall_RawConn__error **)0x0) {
                    /* Unresolved local var: net.rawConn * c@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: net.rawConn * ~R0@[???] */
    runtime_newobject((runtime__type *)&DAT_00243c20);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(net_netFD **)puVar14 = fd_spill;
      pnVar7 = fd_spill;
    }
    else {
      runtime_gcWriteBarrierDX();
      pnVar7 = extraout_RDX;
    }
    pnVar2 = (net_UDPAddr *)(pnVar7->net).len;
    psVar1 = &pnVar7->net;
    peVar12 = (error *)psVar1->str;
    pnVar10 = pnVar2;
    puVar15 = puVar14;
    if (pnVar2 == (net_UDPAddr *)&DAT_00000004) {
      if (*(int *)&peVar12->tab != 0x78696e75) goto LAB_0059f7b1;
    }
    else if (pnVar2 == (net_UDPAddr *)&DAT_00000008) {
      in_RSI = 0x6d61726778696e75;
      if (peVar12->tab != (runtime_itab *)0x6d61726778696e75) {
LAB_0059f7b1:
        if (pnVar2 <= (net_UDPAddr *)((long)&pnVar2[-1].Zone.len + 7)) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        cVar9 = ((undefined1 *)((long)&pnVar2[-1].Zone.len + 7))[(long)peVar12];
        if ((cVar9 != '4') && (cVar9 != '6')) {
          pnVar10 = local_60;
          peVar12 = local_68;
          local_80 = pnVar2;
          if (pnVar7->family == 2) {
            a1.len = in_RSI;
            a1.str = puVar14;
            runtime_concatstring2((runtime_tmpBuf *)((long)&go_string__ + 6),*psVar1,a1);
                    /* Unresolved local var: error err@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
          }
          else {
            a1_00.len = in_RSI;
            a1_00.str = puVar14;
            runtime_concatstring2((runtime_tmpBuf *)&math_big__stmp_47,*psVar1,a1_00);
          }
        }
      }
    }
    else if (((pnVar2 != (net_UDPAddr *)&DAT_0000000a) ||
             (in_RSI = 0x6b63617078696e75, peVar12->tab != (runtime_itab *)0x6b63617078696e75)) ||
            (*(short *)&peVar12->data != 0x7465)) goto LAB_0059f7b1;
    (**(code **)(in_stack_00000010 + 0x20))();
    local_78 = local_80;
    local_70 = (runtime_itab *)go_itab__net_rawConn_syscall_RawConn;
    sVar23.len = (int)pnVar10;
    sVar23.str = puVar15;
    sVar24.data = in_R9;
    sVar24.tab = in_R8;
    sVar26.len = (int)puVar14;
    sVar26.str = (uint8 *)ctrlFn_spill;
    (**ctrlFn_spill)(sVar23,sVar26,sVar24,peVar12);
    pollable = SUB81(puVar15,0);
    if (local_60 != (net_UDPAddr *)0x0) {
      eVar21.data = local_80;
      eVar21.tab = (runtime_itab *)local_60;
      return eVar21;
    }
  }
  sa.data = (void *)(fd_spill->pfd).Sysfd;
  sa.tab = (runtime_itab *)pnVar6;
  eVar17 = syscall_Bind((int)fd_spill,sa);
  eVar18.data = eVar17.data;
  if (local_78 != (net_UDPAddr *)0x0) {
    runtime_newobject((runtime__type *)&DAT_0024d4a0);
    (pnVar8->IP).len = (int)&DAT_00000004;
    (pnVar8->IP).array = (uint8 *)&DAT_00288075;
    (pnVar8->IP).cap = (int)local_78;
    if (runtime_writeBarrier._0_4_ == 0) {
      pnVar8->Port = (int)local_70;
    }
    else {
      runtime_gcWriteBarrierCX();
      pnVar8 = extraout_RAX_01;
    }
    eVar18.tab = (runtime_itab *)pnVar8;
    return eVar18;
  }
  prVar11 = (runtime__type *)(fd_spill->net).len;
  net.len = (int)(fd_spill->net).str;
  net.str = eVar18.data;
  eVar17 = internal_poll___FD__Init(&fd_spill->pfd,net,(bool)pollable);
  eVar20.data = eVar17.data;
  if (local_70 != (runtime_itab *)0x0) {
    eVar20.tab = local_70;
    return eVar20;
  }
  mVar25 = syscall_Getsockname((int)fd_spill);
  ppvVar16 = mVar25.err.data;
  lVar3 = fd_spill->family;
  if (lVar3 == 1) {
    lVar3 = fd_spill->sotype;
    if (lVar3 == 1) {
      ppuVar13 = &PTR_net_sockaddrToUnix_002b3540;
      goto LAB_0059fa76;
    }
    if (lVar3 == 2) {
      ppuVar13 = &PTR_net_sockaddrToUnixgram_002b3530;
      goto LAB_0059fa76;
    }
    if (lVar3 == 5) {
      ppuVar13 = &PTR_net_sockaddrToUnixpacket_002b3538;
      goto LAB_0059fa76;
    }
  }
  else if ((lVar3 == 2) || (lVar3 == 0x1c)) {
    lVar3 = fd_spill->sotype;
    if (lVar3 == 1) {
      ppuVar13 = &PTR_net_sockaddrToTCP_002b3520;
      goto LAB_0059fa76;
    }
    if (lVar3 == 2) {
      ppuVar13 = &PTR_net_sockaddrToUDP_002b3528;
      goto LAB_0059fa76;
    }
    if (lVar3 == 3) {
      ppuVar13 = &PTR_net_sockaddrToIP_002b3518;
      goto LAB_0059fa76;
    }
  }
  ppuVar13 = &PTR_net___netFD__listenDatagram_func1_002b3480;
LAB_0059fa76:
  (*(code *)*ppuVar13)(ppvVar16,*ppuVar13,ppuVar13);
  (fd_spill->laddr).tab = (runtime_itab *)prVar11;
  if (runtime_writeBarrier._0_4_ == 0) {
    (fd_spill->laddr).data = (void *)0x1;
  }
  else {
    ppvVar16 = &(fd_spill->laddr).data;
    runtime_gcWriteBarrier();
  }
  (fd_spill->raddr).tab = (runtime_itab *)0x0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (fd_spill->raddr).data = (void *)0x0;
  }
  else {
    ppvVar16 = &(fd_spill->raddr).data;
    runtime_gcWriteBarrier();
  }
  obj.data = fd_spill;
  obj._type = (runtime__type *)&PTR_net___netFD__Close_002b3430;
  finalizer.data = ppvVar16;
  finalizer._type = prVar11;
  runtime_SetFinalizer(obj,finalizer);
  eVar19.data = fd_spill;
  eVar19.tab = extraout_RAX_02;
  return eVar19;
}

