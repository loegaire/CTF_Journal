
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*netFD).listenStream(net.netFD * fd, net.sockaddr laddr, int
   backlog, func(string,_string,_syscall.RawConn)_error * * ctrlFn, error ~r3) */

error net___netFD__listenStream
                (net_netFD *fd,net_sockaddr laddr,int backlog,
                func_string__string__syscall_RawConn__error **ctrlFn)

{
  string *psVar1;
  char cVar2;
  runtime_itab *prVar3;
  long lVar4;
  runtime_itab *prVar5;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *prVar6;
  runtime_itab *extraout_RAX_01;
  runtime__type *prVar7;
  net_netFD *extraout_RDX;
  net_netFD *pnVar8;
  error *peVar9;
  undefined **ppuVar10;
  runtime_itab *prVar11;
  uint8 *puVar12;
  void **ppvVar13;
  runtime_itab *in_R8;
  void *in_R9;
  long in_FS_OFFSET;
  error eVar14;
  error eVar15;
  error eVar16;
  interface___ obj;
  error eVar17;
  error eVar18;
  error eVar19;
  error eVar20;
  syscall_Sockaddr sa;
  string net;
  string a1;
  string a1_00;
  string sVar21;
  interface___ finalizer;
  syscall_RawConn sVar22;
  multireturn_syscall_Sockaddr_error__conflict mVar23;
  string sVar24;
  net_netFD *fd_spill;
  net_sockaddr laddr_spill;
  int backlog_spill;
  func_string__string__syscall_RawConn__error **ctrlFn_spill;
  runtime_itab *local_70;
  runtime_itab *local_68;
  runtime_itab *local_60;
  runtime_itab *local_58;
  error *local_50;
  runtime_itab *local_48;
  
  prVar5 = local_60;
  prVar6 = local_68;
                    /* Unresolved local var: error err@[???]
                       Unresolved local var: syscall.Sockaddr lsa@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  eVar14 = net_setDefaultListenerSockopts((int)fd_spill);
  if (local_70 != (runtime_itab *)0x0) {
    eVar14.tab = local_70;
    return eVar14;
  }
  puVar12 = (uint8 *)fd_spill->family;
  (*(code *)laddr_spill.tab[1].fun[0])();
  if (local_58 != (runtime_itab *)0x0) {
    eVar20.data = local_60;
    eVar20.tab = local_58;
    return eVar20;
  }
  if (ctrlFn_spill != (func_string__string__syscall_RawConn__error **)0x0) {
                    /* Unresolved local var: net.rawConn * c@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: net.rawConn * ~R0@[???] */
    runtime_newobject((runtime__type *)&DAT_00243c20);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(net_netFD **)puVar12 = fd_spill;
      pnVar8 = fd_spill;
      prVar11 = laddr_spill.data;
    }
    else {
      runtime_gcWriteBarrierDX();
      pnVar8 = extraout_RDX;
      prVar11 = laddr_spill.data;
    }
    prVar3 = (runtime_itab *)(pnVar8->net).len;
    psVar1 = &pnVar8->net;
    peVar9 = (error *)psVar1->str;
    laddr_spill.data = prVar3;
    backlog = (int)puVar12;
    if (prVar3 == (runtime_itab *)&DAT_00000004) {
      if (*(int *)&peVar9->tab != 0x78696e75) goto LAB_0059efd1;
    }
    else if (prVar3 == (runtime_itab *)&DAT_00000008) {
      prVar11 = (runtime_itab *)0x6d61726778696e75;
      if (peVar9->tab != (runtime_itab *)0x6d61726778696e75) {
LAB_0059efd1:
        if (prVar3 <= (runtime_itab *)((long)prVar3[-1].fun + 7)) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        cVar2 = ((undefined1 *)((long)prVar3[-1].fun + 7))[(long)peVar9];
        if ((cVar2 != '4') && (cVar2 != '6')) {
          laddr_spill.data = local_48;
          peVar9 = local_50;
          local_68 = prVar3;
          if (pnVar8->family == 2) {
            a1.len = (int)prVar11;
            a1.str = puVar12;
            runtime_concatstring2((runtime_tmpBuf *)((long)&go_string__ + 6),*psVar1,a1);
                    /* Unresolved local var: error err@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
          }
          else {
            a1_00.len = (int)prVar11;
            a1_00.str = puVar12;
            runtime_concatstring2((runtime_tmpBuf *)&math_big__stmp_47,*psVar1,a1_00);
          }
        }
      }
    }
    else if (((prVar3 != (runtime_itab *)&DAT_0000000a) ||
             (prVar11 = (runtime_itab *)0x6b63617078696e75,
             peVar9->tab != (runtime_itab *)0x6b63617078696e75)) ||
            (*(short *)&peVar9->data != 0x7465)) goto LAB_0059efd1;
    (*(code *)laddr_spill.tab[1].inter)();
    local_60 = local_68;
    local_58 = (runtime_itab *)go_itab__net_rawConn_syscall_RawConn;
    sVar21.len = (int)laddr_spill.data;
    sVar21.str = (uint8 *)backlog;
    sVar22.data = in_R9;
    sVar22.tab = in_R8;
    sVar24.len = (int)puVar12;
    sVar24.str = (uint8 *)ctrlFn_spill;
    (**ctrlFn_spill)(sVar21,sVar24,sVar22,peVar9);
    if (local_48 != (runtime_itab *)0x0) {
      eVar19.data = local_68;
      eVar19.tab = local_48;
      return eVar19;
    }
  }
  sa.data = (void *)(fd_spill->pfd).Sysfd;
  sa.tab = prVar5;
  eVar14 = syscall_Bind((int)fd_spill,sa);
  eVar15.data = eVar14.data;
  if (local_60 != (runtime_itab *)0x0) {
    runtime_newobject((runtime__type *)&DAT_0024d4a0);
    prVar6->_type = (runtime__type *)&DAT_00000004;
    prVar6->inter = (runtime_interfacetype *)&DAT_00288075;
    *(runtime_itab **)&prVar6->hash = local_60;
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar6->fun[0] = (uintptr)local_58;
    }
    else {
      runtime_gcWriteBarrierCX();
      prVar6 = extraout_RAX;
    }
    eVar15.tab = prVar6;
    return eVar15;
  }
  (**net_listenFunc)(backlog,(int)laddr_spill.data,(error *)net_listenFunc);
  if (prVar5 != (runtime_itab *)0x0) {
    runtime_newobject((runtime__type *)&DAT_0024d4a0);
    *(undefined8 *)(backlog_spill + 8) = 6;
    *(undefined **)backlog_spill = &DAT_00289c48;
    *(runtime_itab **)(backlog_spill + 0x10) = prVar5;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(backlog_spill + 0x18) = 0;
      prVar6 = (runtime_itab *)backlog_spill;
    }
    else {
      runtime_gcWriteBarrierCX();
      prVar6 = extraout_RAX_00;
    }
    eVar16.data = (void *)backlog_spill;
    eVar16.tab = prVar6;
    return eVar16;
  }
  prVar7 = (runtime__type *)(fd_spill->net).len;
  net.len = (int)(fd_spill->net).str;
  net.str = (uint8 *)backlog_spill;
  eVar14 = internal_poll___FD__Init(&fd_spill->pfd,net,SUB81(backlog,0));
  eVar18.data = eVar14.data;
  if (local_58 != (runtime_itab *)0x0) {
    eVar18.tab = local_58;
    return eVar18;
  }
  mVar23 = syscall_Getsockname((int)fd_spill);
  ppvVar13 = mVar23.err.data;
  lVar4 = fd_spill->family;
  if (lVar4 == 1) {
    lVar4 = fd_spill->sotype;
    if (lVar4 == 1) {
      ppuVar10 = &PTR_net_sockaddrToUnix_002b3540;
      goto LAB_0059f33e;
    }
    if (lVar4 == 2) {
      ppuVar10 = &PTR_net_sockaddrToUnixgram_002b3530;
      goto LAB_0059f33e;
    }
    if (lVar4 == 5) {
      ppuVar10 = &PTR_net_sockaddrToUnixpacket_002b3538;
      goto LAB_0059f33e;
    }
  }
  else if ((lVar4 == 2) || (lVar4 == 0x1c)) {
    lVar4 = fd_spill->sotype;
    if (lVar4 == 1) {
      ppuVar10 = &PTR_net_sockaddrToTCP_002b3520;
      goto LAB_0059f33e;
    }
    if (lVar4 == 2) {
      ppuVar10 = &PTR_net_sockaddrToUDP_002b3528;
      goto LAB_0059f33e;
    }
    if (lVar4 == 3) {
      ppuVar10 = &PTR_net_sockaddrToIP_002b3518;
      goto LAB_0059f33e;
    }
  }
  ppuVar10 = &PTR_net___netFD__listenStream_func1_002b3488;
LAB_0059f33e:
  (*(code *)*ppuVar10)(ppvVar13,*ppuVar10,ppuVar10);
  (fd_spill->laddr).tab = (runtime_itab *)prVar7;
  if (runtime_writeBarrier._0_4_ == 0) {
    (fd_spill->laddr).data = (void *)0x1;
  }
  else {
    ppvVar13 = &(fd_spill->laddr).data;
    runtime_gcWriteBarrier();
  }
  (fd_spill->raddr).tab = (runtime_itab *)0x0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (fd_spill->raddr).data = (void *)0x0;
  }
  else {
    ppvVar13 = &(fd_spill->raddr).data;
    runtime_gcWriteBarrier();
  }
  obj.data = fd_spill;
  obj._type = (runtime__type *)&PTR_net___netFD__Close_002b3430;
  finalizer.data = ppvVar13;
  finalizer._type = prVar7;
  runtime_SetFinalizer(obj,finalizer);
  eVar17.data = fd_spill;
  eVar17.tab = extraout_RAX_01;
  return eVar17;
}

