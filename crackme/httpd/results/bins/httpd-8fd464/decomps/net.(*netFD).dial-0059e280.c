
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*netFD).dial(net.netFD * fd, context.Context ctx,
   net.sockaddr laddr, net.sockaddr raddr, func(string,_string,_syscall.RawConn)_error * * ctrlFn,
   error ~r4) */

error net___netFD__dial(net_netFD *fd,context_Context ctx,net_sockaddr laddr,net_sockaddr raddr,
                       func_string__string__syscall_RawConn__error **ctrlFn)

{
  char cVar1;
  func_string__string__syscall_RawConn__error *pfVar2;
  long lVar3;
  runtime_interfacetype *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_interfacetype *extraout_RAX_01;
  runtime_itab *extraout_RAX_02;
  runtime_interfacetype *extraout_RAX_03;
  runtime_itab *extraout_RAX_04;
  runtime_interfacetype *extraout_RAX_05;
  runtime_interfacetype *prVar4;
  runtime_itab *prVar5;
  runtime_interfacetype *prVar6;
  void *pvVar7;
  undefined **ppuVar8;
  runtime_interfacetype *prVar9;
  void **ppvVar10;
  runtime_itab *prVar11;
  runtime_itab *prVar12;
  error *peVar13;
  long in_FS_OFFSET;
  error eVar14;
  error eVar15;
  error eVar16;
  interface___ obj;
  interface___ obj_00;
  interface___ obj_01;
  error eVar17;
  error eVar18;
  error eVar19;
  error eVar20;
  string a1;
  string a1_00;
  string sVar21;
  syscall_Sockaddr la;
  string a0;
  string a0_00;
  syscall_Sockaddr sa;
  context_Context ctx_00;
  string net;
  runtime_iface i;
  interface___ finalizer;
  interface___ finalizer_00;
  interface___ finalizer_01;
  syscall_RawConn sVar22;
  syscall_Sockaddr ra;
  multireturn_syscall_Sockaddr_error__conflict mVar23;
  string sVar24;
  net_netFD *fd_spill;
  context_Context ctx_spill;
  net_sockaddr laddr_spill;
  net_sockaddr raddr_spill;
  func_string__string__syscall_RawConn__error **ctrlFn_spill;
  runtime_interfacetype *local_c8;
  runtime_interfacetype *local_c0;
  runtime_interfacetype *local_b8;
  runtime_interfacetype *local_b0;
  error *local_a8;
  runtime_itab *local_a0;
  long local_98;
  void *local_90;
  runtime_itab *local_88;
  runtime_interfacetype *local_50;
  runtime_interfacetype *local_48;
  runtime_interfacetype *local_40;
  runtime_interfacetype *local_38;
  runtime_interfacetype *local_30;
  runtime_interfacetype *local_28;
  void *local_20;
  runtime_itab *local_18;
  runtime_interfacetype *local_10;
  
  prVar12 = raddr.data;
  prVar11 = raddr.tab;
  prVar9 = (runtime_interfacetype *)laddr.tab;
                    /* Unresolved local var: error err@[???]
                       Unresolved local var: syscall.Sockaddr lsa@[???]
                       Unresolved local var: syscall.Sockaddr rsa@[???]
                       Unresolved local var: syscall.Sockaddr crsa@[???] */
  while (&local_50 <= *(runtime_interfacetype ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar4 = local_c0;
  if (ctrlFn_spill != (func_string__string__syscall_RawConn__error **)0x0) {
    runtime_newobject((runtime__type *)&DAT_00243c20);
    prVar9 = local_c8;
    if (runtime_writeBarrier._0_4_ == 0) {
      (local_c8->typ).size = (uintptr)fd_spill;
    }
    else {
      runtime_gcWriteBarrierBX();
    }
    if (raddr_spill.tab == (runtime_itab *)0x0) {
      if (laddr_spill.tab == (runtime_itab *)0x0) {
        local_c0 = (runtime_interfacetype *)0x0;
        local_c8 = (runtime_interfacetype *)0x0;
      }
      else {
        (*(code *)laddr_spill.tab[1].inter)();
                    /* Unresolved local var: error err@[???] */
      }
    }
    else {
      (*(code *)raddr_spill.tab[1].inter)();
    }
    prVar12 = (runtime_itab *)(fd_spill->net).len;
    peVar13 = (error *)(fd_spill->net).str;
    prVar5 = raddr_spill.tab;
    prVar11 = laddr_spill.tab;
    if (prVar12 == (runtime_itab *)&DAT_00000004) {
      if (*(int *)&peVar13->tab != 0x78696e75) goto LAB_0059e406;
    }
    else if (prVar12 == (runtime_itab *)&DAT_00000008) {
      if (peVar13->tab != (runtime_itab *)0x6d61726778696e75) {
LAB_0059e406:
        if (prVar12 <= (runtime_itab *)((long)prVar12[-1].fun + 7)) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        cVar1 = ((undefined1 *)((long)prVar12[-1].fun + 7))[(long)peVar13];
        if ((cVar1 != '4') && (cVar1 != '6')) {
          prVar12 = local_a0;
          peVar13 = local_a8;
          local_28 = local_c8;
          if (fd_spill->family == 2) {
            a1.len = (int)raddr_spill.tab;
            a1.str = (uint8 *)prVar9;
            a0.len = (int)local_c0;
            a0.str = (uint8 *)fd_spill;
            runtime_concatstring2((runtime_tmpBuf *)((long)&go_string__ + 6),a0,a1);
            local_c8 = local_28;
          }
          else {
            a1_00.len = (int)raddr_spill.tab;
            a1_00.str = (uint8 *)prVar9;
            a0_00.len = (int)local_c0;
            a0_00.str = (uint8 *)fd_spill;
            runtime_concatstring2((runtime_tmpBuf *)&math_big__stmp_47,a0_00,a1_00);
            local_c8 = local_28;
          }
        }
      }
    }
    else if (((prVar12 != (runtime_itab *)&DAT_0000000a) ||
             (peVar13->tab != (runtime_itab *)0x6b63617078696e75)) ||
            (*(short *)&peVar13->data != 0x7465)) goto LAB_0059e406;
    pfVar2 = *ctrlFn_spill;
    local_b0 = (runtime_interfacetype *)go_itab__net_rawConn_syscall_RawConn;
    sVar21.len = (int)prVar5;
    sVar21.str = (uint8 *)prVar9;
    sVar22.data = prVar12;
    sVar22.tab = prVar11;
    sVar24.len = (int)local_c0;
    sVar24.str = (uint8 *)ctrlFn_spill;
    (*pfVar2)(sVar21,sVar24,sVar22,peVar13);
    prVar4 = local_c8;
    local_b8 = local_c0;
    if (local_a0 != (runtime_itab *)0x0) {
      eVar16.data = pfVar2;
      eVar16.tab = local_a0;
      return eVar16;
    }
  }
  local_c0 = prVar4;
  if (laddr_spill.tab == (runtime_itab *)0x0) {
    prVar4 = (runtime_interfacetype *)0x0;
    prVar6 = (runtime_interfacetype *)0x0;
  }
  else {
    (*(code *)laddr_spill.tab[1].fun[0])();
    if (local_b0 != (runtime_interfacetype *)0x0) {
      eVar20.data = local_c0;
      eVar20.tab = (runtime_itab *)local_b0;
      return eVar20;
    }
    prVar4 = local_c0;
    prVar6 = local_b8;
    if (local_c0 != (runtime_interfacetype *)0x0) {
      local_50 = local_b8;
      sa.data = (void *)(fd_spill->pfd).Sysfd;
      sa.tab = (runtime_itab *)local_c0;
      eVar16 = syscall_Bind((int)fd_spill,sa);
      eVar19.data = eVar16.data;
      prVar6 = local_50;
      if (local_b8 != (runtime_interfacetype *)0x0) {
        local_30 = local_b0;
        local_10 = local_b8;
        runtime_newobject((runtime__type *)&DAT_0024d4a0);
        (local_c0->typ).ptrdata = (uintptr)&DAT_00000004;
        (local_c0->typ).size = (uintptr)&DAT_00288075;
        *(runtime_interfacetype **)&(local_c0->typ).hash = local_10;
        if (runtime_writeBarrier._0_4_ == 0) {
          (local_c0->typ).equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)local_30;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_c0 = extraout_RAX_05;
        }
        eVar19.tab = (runtime_itab *)local_c0;
        return eVar19;
      }
    }
  }
  if (raddr_spill.tab == (runtime_itab *)0x0) {
    local_c8 = (runtime_interfacetype *)(fd_spill->net).str;
    local_c0 = (runtime_interfacetype *)(fd_spill->net).len;
    local_b8 = (runtime_interfacetype *)CONCAT71(local_b8._1_7_,1);
    net.len = (int)local_c8;
    net.str = (uint8 *)prVar4;
    eVar16 = internal_poll___FD__Init(&fd_spill->pfd,net,SUB81(prVar9,0));
    eVar18.data = eVar16.data;
                    /* Unresolved local var: error err@[???] */
    if (local_b0 != (runtime_interfacetype *)0x0) {
      eVar18.tab = (runtime_itab *)local_b0;
      return eVar18;
    }
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  else {
    pvVar7 = raddr_spill.data;
    local_50 = prVar6;
    (*(code *)raddr_spill.tab[1].fun[0])();
    if (local_b0 != (runtime_interfacetype *)0x0) {
      eVar15.data = local_b8;
      eVar15.tab = (runtime_itab *)local_b0;
      return eVar15;
    }
    local_c8 = (runtime_interfacetype *)ctx_spill.tab;
    local_c0 = ctx_spill.data;
    local_b0 = local_50;
    la.data = pvVar7;
    la.tab = (runtime_itab *)prVar9;
    ctx_00.data = local_50;
    ctx_00.tab = (runtime_itab *)local_b8;
    ra.data = prVar12;
    ra.tab = prVar11;
    net___netFD__connect(fd_spill,ctx_00,la,ra);
    if (local_88 != (runtime_itab *)0x0) {
      eVar14.data = local_90;
      eVar14.tab = local_88;
      return eVar14;
    }
    fd_spill->isConnected = true;
    local_b8 = prVar4;
  }
  local_20 = local_90;
  mVar23 = syscall_Getsockname((int)fd_spill);
  ppvVar10 = mVar23.err.data;
  if (local_98 == 0) {
    local_10 = local_c8;
    local_50 = local_c0;
    mVar23 = syscall_Getpeername((int)fd_spill);
    ppvVar10 = mVar23.err.data;
    if (local_c8 == (runtime_interfacetype *)0x0) {
      lVar3 = fd_spill->family;
      if (lVar3 == 1) {
        lVar3 = fd_spill->sotype;
        if (lVar3 == 1) {
          ppuVar8 = &PTR_net_sockaddrToUnix_002b3540;
        }
        else if (lVar3 == 2) {
          ppuVar8 = &PTR_net_sockaddrToUnixgram_002b3530;
        }
        else {
          if (lVar3 != 5) goto LAB_0059ec3e;
          ppuVar8 = &PTR_net_sockaddrToUnixpacket_002b3538;
        }
      }
      else if ((lVar3 == 2) || (lVar3 == 0x1c)) {
        lVar3 = fd_spill->sotype;
        if (lVar3 == 1) {
          ppuVar8 = &PTR_net_sockaddrToTCP_002b3520;
        }
        else if (lVar3 == 2) {
          ppuVar8 = &PTR_net_sockaddrToUDP_002b3528;
        }
        else {
          if (lVar3 != 3) goto LAB_0059ec3e;
          ppuVar8 = &PTR_net_sockaddrToIP_002b3518;
        }
      }
      else {
LAB_0059ec3e:
        ppuVar8 = &PTR_net___netFD__dial_func5_002b3478;
      }
      (*(code *)*ppuVar8)();
      local_40 = local_b8;
      local_10 = local_c0;
      i.data = local_c0;
      i.tab = raddr_spill.data;
      runtime_convI2I(local_b8,i);
      prVar9 = local_10;
      (fd_spill->laddr).tab = (runtime_itab *)local_10;
      if (runtime_writeBarrier._0_4_ == 0) {
        (fd_spill->laddr).data = local_40;
      }
      else {
        ppvVar10 = &(fd_spill->laddr).data;
        runtime_gcWriteBarrierDX();
        local_b0 = extraout_RAX_03;
      }
      (fd_spill->raddr).tab = (runtime_itab *)local_b8;
      if (runtime_writeBarrier._0_4_ == 0) {
        (fd_spill->raddr).data = local_b0;
      }
      else {
        ppvVar10 = &(fd_spill->raddr).data;
        runtime_gcWriteBarrier();
      }
      obj_01.data = prVar9;
      obj_01._type = (runtime__type *)&PTR_net___netFD__Close_002b3430;
      finalizer_01.data = ppvVar10;
      finalizer_01._type = &local_b8->typ;
      runtime_SetFinalizer(obj_01,finalizer_01);
      prVar12 = extraout_RAX_04;
      goto LAB_0059ed39;
    }
    local_18 = (runtime_itab *)local_c8;
    lVar3 = fd_spill->family;
    if (lVar3 == 1) {
      lVar3 = fd_spill->sotype;
      if (lVar3 == 1) {
        ppuVar8 = &PTR_net_sockaddrToUnix_002b3540;
      }
      else if (lVar3 == 2) {
        ppuVar8 = &PTR_net_sockaddrToUnixgram_002b3530;
      }
      else {
        if (lVar3 != 5) goto LAB_0059ea37;
        ppuVar8 = &PTR_net_sockaddrToUnixpacket_002b3538;
      }
    }
    else if ((lVar3 == 2) || (lVar3 == 0x1c)) {
      lVar3 = fd_spill->sotype;
      if (lVar3 == 1) {
        ppuVar8 = &PTR_net_sockaddrToTCP_002b3520;
      }
      else if (lVar3 == 2) {
        ppuVar8 = &PTR_net_sockaddrToUDP_002b3528;
      }
      else {
        if (lVar3 != 3) goto LAB_0059ea37;
        ppuVar8 = &PTR_net_sockaddrToIP_002b3518;
      }
    }
    else {
LAB_0059ea37:
      ppuVar8 = &PTR_net___netFD__dial_func3_002b3468;
    }
    (*(code *)*ppuVar8)();
    lVar3 = fd_spill->family;
    local_38 = local_b8;
    local_10 = local_c0;
    if (lVar3 == 1) {
      lVar3 = fd_spill->sotype;
      if (lVar3 == 1) {
        ppuVar8 = &PTR_net_sockaddrToUnix_002b3540;
      }
      else if (lVar3 == 2) {
        ppuVar8 = &PTR_net_sockaddrToUnixgram_002b3530;
      }
      else {
        if (lVar3 != 5) goto LAB_0059eafe;
        ppuVar8 = &PTR_net_sockaddrToUnixpacket_002b3538;
      }
    }
    else if ((lVar3 == 2) || (lVar3 == 0x1c)) {
      lVar3 = fd_spill->sotype;
      if (lVar3 == 1) {
        ppuVar8 = &PTR_net_sockaddrToTCP_002b3520;
      }
      else if (lVar3 == 2) {
        ppuVar8 = &PTR_net_sockaddrToUDP_002b3528;
      }
      else {
        if (lVar3 != 3) goto LAB_0059eafe;
        ppuVar8 = &PTR_net_sockaddrToIP_002b3518;
      }
    }
    else {
LAB_0059eafe:
      ppuVar8 = &PTR_net___netFD__dial_func4_002b3470;
    }
    (*(code *)*ppuVar8)();
    prVar9 = local_10;
    (fd_spill->laddr).tab = (runtime_itab *)local_10;
    if (runtime_writeBarrier._0_4_ == 0) {
      (fd_spill->laddr).data = local_38;
    }
    else {
      ppvVar10 = &(fd_spill->laddr).data;
      runtime_gcWriteBarrierDX();
      local_b8 = extraout_RAX_01;
    }
    (fd_spill->raddr).tab = (runtime_itab *)local_c0;
    if (runtime_writeBarrier._0_4_ == 0) {
      (fd_spill->raddr).data = local_b8;
    }
    else {
      ppvVar10 = &(fd_spill->raddr).data;
      runtime_gcWriteBarrier();
    }
    obj_00.data = prVar9;
    obj_00._type = (runtime__type *)&PTR_net___netFD__Close_002b3430;
    finalizer_00.data = ppvVar10;
    finalizer_00._type = &local_c0->typ;
    runtime_SetFinalizer(obj_00,finalizer_00);
    prVar12 = extraout_RAX_02;
    goto LAB_0059ed39;
  }
  lVar3 = fd_spill->family;
  if (lVar3 == 1) {
    lVar3 = fd_spill->sotype;
    if (lVar3 == 1) {
      ppuVar8 = &PTR_net_sockaddrToUnix_002b3540;
    }
    else if (lVar3 == 2) {
      ppuVar8 = &PTR_net_sockaddrToUnixgram_002b3530;
    }
    else {
      if (lVar3 != 5) goto LAB_0059e7f7;
      ppuVar8 = &PTR_net_sockaddrToUnixpacket_002b3538;
    }
  }
  else if ((lVar3 == 2) || (lVar3 == 0x1c)) {
    lVar3 = fd_spill->sotype;
    if (lVar3 == 1) {
      ppuVar8 = &PTR_net_sockaddrToTCP_002b3520;
    }
    else if (lVar3 == 2) {
      ppuVar8 = &PTR_net_sockaddrToUDP_002b3528;
    }
    else {
      if (lVar3 != 3) goto LAB_0059e7f7;
      ppuVar8 = &PTR_net_sockaddrToIP_002b3518;
    }
  }
  else {
LAB_0059e7f7:
    ppuVar8 = &PTR_net___netFD__dial_func1_002b3458;
  }
  (*(code *)*ppuVar8)(ppvVar10,ppuVar8,ppuVar8);
  lVar3 = fd_spill->family;
  local_48 = local_b8;
  local_10 = local_c0;
  if (lVar3 == 1) {
    lVar3 = fd_spill->sotype;
    if (lVar3 == 1) {
      ppuVar8 = &PTR_net_sockaddrToUnix_002b3540;
    }
    else if (lVar3 == 2) {
      ppuVar8 = &PTR_net_sockaddrToUnixgram_002b3530;
    }
    else {
      if (lVar3 != 5) goto LAB_0059e8af;
      ppuVar8 = &PTR_net_sockaddrToUnixpacket_002b3538;
    }
  }
  else if ((lVar3 == 2) || (lVar3 == 0x1c)) {
    lVar3 = fd_spill->sotype;
    if (lVar3 == 1) {
      ppuVar8 = &PTR_net_sockaddrToTCP_002b3520;
    }
    else if (lVar3 == 2) {
      ppuVar8 = &PTR_net_sockaddrToUDP_002b3528;
    }
    else {
      if (lVar3 != 3) goto LAB_0059e8af;
      ppuVar8 = &PTR_net_sockaddrToIP_002b3518;
    }
  }
  else {
LAB_0059e8af:
    ppuVar8 = &PTR_net___netFD__dial_func2_002b3460;
  }
  (*(code *)*ppuVar8)();
  prVar9 = local_10;
  (fd_spill->laddr).tab = (runtime_itab *)local_10;
  if (runtime_writeBarrier._0_4_ == 0) {
    (fd_spill->laddr).data = local_48;
  }
  else {
    ppvVar10 = &(fd_spill->laddr).data;
    runtime_gcWriteBarrierDX();
    local_b8 = extraout_RAX;
  }
  (fd_spill->raddr).tab = (runtime_itab *)local_c0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (fd_spill->raddr).data = local_b8;
  }
  else {
    ppvVar10 = &(fd_spill->raddr).data;
    runtime_gcWriteBarrier();
  }
  obj.data = prVar9;
  obj._type = (runtime__type *)&PTR_net___netFD__Close_002b3430;
  finalizer.data = ppvVar10;
  finalizer._type = &local_c0->typ;
  runtime_SetFinalizer(obj,finalizer);
  prVar12 = extraout_RAX_00;
LAB_0059ed39:
  eVar17.data = prVar9;
  eVar17.tab = prVar12;
  return eVar17;
}

