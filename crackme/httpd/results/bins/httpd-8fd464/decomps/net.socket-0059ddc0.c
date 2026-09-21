
/* WARNING: Removing unreachable block (ram,0x0059e067) */
/* WARNING: Removing unreachable block (ram,0x0059e1d5) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.socket(context.Context ctx, string net, int family, int
   sotype, int proto, bool ipv6only, net.sockaddr laddr, net.sockaddr raddr,
   func(string,_string,_syscall.RawConn)_error * * ctrlFn, net.netFD * fd, error err) */

multireturn_net_netFD___error__conflict
net_socket(context_Context ctx,string net,int family,int sotype,int proto,bool ipv6only,
          net_sockaddr laddr,net_sockaddr raddr,func_string__string__syscall_RawConn__error **ctrlFn
          )

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  net_netFD *extraout_RAX;
  void *pvVar3;
  runtime_itab *ctrlFn_00;
  undefined7 in_register_00000091;
  long in_FS_OFFSET;
  context_Context ctx_00;
  error eVar4;
  multireturn_int_error__conflict10 mVar5;
  multireturn_net_netFD___error__conflict mVar6;
  multireturn_net_netFD___error__conflict mVar7;
  multireturn_net_netFD___error__conflict mVar8;
  multireturn_net_netFD___error__conflict mVar9;
  multireturn_net_netFD___error__conflict mVar10;
  multireturn_net_netFD___error__conflict mVar11;
  net_sockaddr laddr_00;
  net_sockaddr raddr_00;
  context_Context ctx_spill;
  string net_spill;
  int family_spill;
  int sotype_spill;
  int proto_spill;
  bool ipv6only_spill;
  func_string__string__syscall_RawConn__error **ctrlFn_spill;
  int local_80;
  void *local_78;
  void *local_70;
  void *local_68;
  long local_58;
  void *local_50;
  undefined1 local_18 [16];
  
  ctrlFn_00 = (runtime_itab *)net.len;
                    /* Unresolved local var: int s@[???] */
  while (local_18 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mVar5 = net_sysSocket((int)ctx_spill.tab,(int)ctx.data,(int)ctx_spill.data);
  mVar11.err.tab = mVar5.~r4.tab;
  if (local_78 != (void *)0x0) {
    mVar11.fd = (net_netFD *)local_80;
    mVar11.err.data = local_78;
    return mVar11;
  }
  net_setDefaultSockopts(local_80,(ulong)(byte)net_spill.len,(int)ctx_spill.tab,SUB81(ctrlFn_00,0));
                    /* Unresolved local var: net.netFD * ret@[???] */
  runtime_newobject((runtime__type *)&DAT_00270cc0);
  (ctx_spill.tab)->hash = (undefined4)local_80;
  (ctx_spill.tab)->_[0] = local_80._4_1_;
  (ctx_spill.tab)->_[1] = local_80._5_1_;
  (ctx_spill.tab)->_[2] = local_80._6_1_;
  (ctx_spill.tab)->_[3] = local_80._7_1_;
  *(bool *)&ctx_spill.tab[1].hash = ctx_spill.data == (void *)0x1;
  *(bool *)((long)&ctx_spill.tab[1].hash + 1) =
       ctx_spill.data != (void *)0x2 && ctx_spill.data != (void *)0x3;
  ctx_spill.tab[1].fun[0] = (uintptr)ctx_spill.tab;
  ctx_spill.tab[2].inter = ctx_spill.data;
  ctx_spill.tab[2].fun[0] = (uintptr)raddr.data;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(runtime_itab **)&ctx_spill.tab[2].hash = raddr.tab;
  }
  else {
    ctrlFn_00 = (runtime_itab *)&ctx_spill.tab[2].hash;
    runtime_gcWriteBarrierDX();
    ctx_spill.tab = (runtime_itab *)extraout_RAX;
  }
  if ((family_spill != 0) && (proto_spill == 0)) {
    if (ctx_spill.data != (undefined1 *)0x1) {
      if (ctx_spill.data == (undefined1 *)0x2) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = ctrlFn_spill;
                    /* Unresolved local var: error err@[???] */
        eVar4 = net___netFD__listenDatagram
                          ((net_netFD *)ctx_spill.tab,(net_sockaddr)(auVar2 << 0x40),
                           (func_string__string__syscall_RawConn__error **)ctrlFn_00);
        mVar8.err.tab = eVar4.data;
        mVar8.fd = (net_netFD *)ctx_spill.tab;
        mVar8.err.data = local_70;
        return mVar8;
      }
      if (ctx_spill.data != &DAT_00000005) goto LAB_0059e0f0;
    }
                    /* Unresolved local var: error err@[???] */
    net_listenerBacklog();
    auVar1._8_8_ = 0;
    auVar1._0_8_ = ctx_spill.tab;
    eVar4 = net___netFD__listenStream
                      ((net_netFD *)ctrlFn_spill,(net_sockaddr)(auVar1 << 0x40),(int)ctrlFn_00,
                       (func_string__string__syscall_RawConn__error **)family);
    mVar7.err.tab = eVar4.data;
    if (local_70 == (void *)0x0) {
      mVar7.fd = (net_netFD *)ctx_spill.tab;
      mVar7.err.data = local_68;
      return mVar7;
    }
    pvVar3 = local_68;
    eVar4 = net___netFD__Close((net_netFD *)ctx_spill.tab);
    mVar6.err.tab = eVar4.data;
    mVar6.fd = local_68;
    mVar6.err.data = pvVar3;
    return mVar6;
  }
LAB_0059e0f0:
  ctx_00.data = ctrlFn_spill;
  ctx_00.tab = (runtime_itab *)proto_spill;
  laddr_00.data = (void *)family;
  laddr_00.tab = ctrlFn_00;
  raddr_00.data = (void *)proto;
  raddr_00.tab = (runtime_itab *)sotype;
  eVar4 = net___netFD__dial((net_netFD *)ctx_spill.tab,ctx_00,laddr_00,raddr_00,
                            (func_string__string__syscall_RawConn__error **)
                            CONCAT71(in_register_00000091,ipv6only));
  mVar10.err.tab = eVar4.data;
  if (local_58 == 0) {
    mVar10.fd = (net_netFD *)ctx_spill.tab;
    mVar10.err.data = local_50;
    return mVar10;
  }
  pvVar3 = local_50;
  eVar4 = net___netFD__Close((net_netFD *)ctx_spill.tab);
  mVar9.err.tab = eVar4.data;
  mVar9.fd = local_50;
  mVar9.err.data = pvVar3;
  return mVar9;
}

