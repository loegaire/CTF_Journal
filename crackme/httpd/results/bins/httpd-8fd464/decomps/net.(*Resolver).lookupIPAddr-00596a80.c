
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).lookupIPAddr(net.Resolver * r, context.Context
   ctx, string network, string host, []net.IPAddr ~r3, error ~r4) */

multireturn___net_IPAddr_error__conflict
net___Resolver__lookupIPAddr(net_Resolver *r,context_Context ctx,string network,string host)

{
  undefined8 *puVar1;
  runtime_tmpBuf *buf;
  runtime__type *iface;
  net_Resolver *pnVar2;
  uintptr extraout_RAX;
  uintptr uVar3;
  long *plVar4;
  runtime_itab *extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  runtime_itab *prVar5;
  long extraout_RAX_02;
  internal_singleflight_Group *extraout_RAX_03;
  internal_singleflight_Group *extraout_RAX_04;
  internal_singleflight_Group *extraout_RAX_05;
  internal_singleflight_Group *g;
  runtime_itab *tab;
  int iVar6;
  runtime_itab *prVar7;
  net_Resolver *pnVar8;
  net_Resolver *pnVar9;
  void *y;
  long extraout_RDX;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 *puVar13;
  undefined1 *unaff_RBP;
  void *pvVar14;
  undefined8 uVar15;
  undefined1 block;
  uint8 *puVar16;
  int iVar17;
  long in_FS_OFFSET;
  bool bVar18;
  string s;
  context_Context parent;
  string sVar19;
  multireturn_<_chan_internal_singleflight_Result_bool_ mVar20;
  multireturn_int_bool_ mVar21;
  string a1;
  __net_IPAddr addrs;
  string a0;
  string key;
  multireturn___net_IPAddr_error__conflict mVar22;
  multireturn_net_IP_string_ mVar23;
  multireturn___net_IPAddr_error__conflict mVar24;
  multireturn___net_IPAddr_error__conflict mVar25;
  multireturn___net_IPAddr_error__conflict mVar26;
  string a2;
  net_Resolver *r_spill;
  context_Context ctx_spill;
  string network_spill;
  string host_spill;
  uint16 *order0;
  
  iVar17 = host.len;
  sVar19.str = (runtime__type *)ctx.tab;
  pvVar14 = (void *)network.len;
  do {
                    /* Unresolved local var: internal/nettrace.Trace * trace@[???]
                       Unresolved local var:
                       func(context.Context,_string,_string)_([]net.IPAddr,_error) * *
                       resolverFunc@[???]
                       Unresolved local var: context.CancelFunc * * lookupGroupCancel@[???]
                       Unresolved local var: <-chan_internal/singleflight.Result ch@[???]
                       Unresolved local var: context.Context lookupGroupCtx@[???]
                       Unresolved local var: string lookupKey@[???]
                       Unresolved local var: internal/singleflight.Group * ~R0@[???] */
    puVar13 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x108)) {
      puVar13 = (undefined1 *)((long)register0x00000020 + -0x188);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      puVar16 = *(uint8 **)((long)register0x00000020 + 0x38);
      if (puVar16 == (uint8 *)0x0) {
        pcVar12 = (code *)(net_errNoSuchHost.tab)->fun[0];
        *(void **)((long)register0x00000020 + -0x188) = net_errNoSuchHost.data;
        *(undefined8 *)((long)register0x00000020 + -400) = 0x596ae2;
        (*pcVar12)();
        *(runtime__type **)((long)register0x00000020 + -0x80) =
             *(runtime__type **)((long)register0x00000020 + -0x180);
        prVar5 = *(runtime_itab **)((long)register0x00000020 + -0x178);
        *(runtime_itab **)((long)register0x00000020 + -0x100) = prVar5;
        *(undefined **)((long)register0x00000020 + -0x188) = &DAT_0026dea0;
        *(undefined8 *)((long)register0x00000020 + -400) = 0x596b0c;
        runtime_newobject(*(runtime__type **)((long)register0x00000020 + -0x180));
        prVar7 = *(runtime_itab **)((long)register0x00000020 + -0x180);
        prVar7->_type = *(runtime__type **)((long)register0x00000020 + -0x100);
        if (runtime_writeBarrier._0_4_ == 0) {
          prVar7->inter = *(runtime_interfacetype **)((long)register0x00000020 + -0x80);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -400) = 0x596b45;
          runtime_gcWriteBarrier();
        }
        prVar7->fun[0] = *(uintptr *)((long)register0x00000020 + 0x38);
        if (runtime_writeBarrier._0_4_ == 0) {
          uVar11 = *(undefined8 *)((long)register0x00000020 + 0x30);
          prVar7->hash = (int)uVar11;
          prVar7->_[0] = (char)((ulong)uVar11 >> 0x20);
          prVar7->_[1] = (char)((ulong)uVar11 >> 0x28);
          prVar7->_[2] = (char)((ulong)uVar11 >> 0x30);
          prVar7->_[3] = (char)((ulong)uVar11 >> 0x38);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -400) = 0x596b7f;
          runtime_gcWriteBarrierDX();
          prVar5 = prVar7;
        }
        *(undefined1 *)((long)&prVar7[1].hash + 2) = 1;
        *(undefined8 *)((long)register0x00000020 + 0x40) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x48) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x50) = 0;
        *(undefined1 **)((long)register0x00000020 + 0x58) = go_itab__net_DNSError_error;
        *(runtime_itab **)((long)register0x00000020 + 0x60) = prVar7;
        mVar22.~r3.len = (int)sVar19.str;
        mVar22.~r3.array = (net_IPAddr *)go_itab__net_DNSError_error;
        mVar22.~r3.cap = (int)prVar5;
        mVar22.~r4.data = pvVar14;
        mVar22.~r4.tab = prVar7;
        return mVar22;
      }
                    /* Unresolved local var: net.IP ip@[???]
                       Unresolved local var: string zone@[???] */
      *(undefined8 *)((long)register0x00000020 + -0x188) =
           *(undefined8 *)((long)register0x00000020 + 0x30);
      *(uint8 **)((long)register0x00000020 + -0x180) = puVar16;
      *(undefined8 *)((long)register0x00000020 + -400) = 0x596bdc;
      s.len = (int)sVar19.str;
      s.str = puVar16;
      mVar23 = net_parseIPZone(s);
      prVar5 = *(runtime_itab **)((long)register0x00000020 + -0x170);
      uVar11 = *(undefined8 *)((long)register0x00000020 + -0x160);
      pvVar14 = *(void **)((long)register0x00000020 + -0x158);
      if (*(long *)((long)register0x00000020 + -0x178) != 0) {
        *(long *)((long)register0x00000020 + -0xb8) = *(long *)((long)register0x00000020 + -0x178);
        *(runtime_itab **)((long)register0x00000020 + -0x120) = prVar5;
        *(undefined8 *)((long)register0x00000020 + -0x118) =
             *(undefined8 *)((long)register0x00000020 + -0x168);
        *(void **)((long)register0x00000020 + -0x130) = pvVar14;
        *(undefined8 *)((long)register0x00000020 + -0xe8) = uVar11;
        *(undefined **)((long)register0x00000020 + -0x188) = &DAT_002266e0;
        *(undefined8 *)((long)register0x00000020 + -400) = 0x596c2d;
        runtime_newobject((runtime__type *)&DAT_002266e0);
        prVar7 = *(runtime_itab **)((long)register0x00000020 + -0x180);
        prVar7->_type = *(runtime__type **)((long)register0x00000020 + -0x120);
        uVar15 = *(undefined8 *)((long)register0x00000020 + -0x118);
        prVar7->hash = (int)uVar15;
        prVar7->_[0] = (char)((ulong)uVar15 >> 0x20);
        prVar7->_[1] = (char)((ulong)uVar15 >> 0x28);
        prVar7->_[2] = (char)((ulong)uVar15 >> 0x30);
        prVar7->_[3] = (char)((ulong)uVar15 >> 0x38);
        if (runtime_writeBarrier._0_4_ == 0) {
          prVar7->inter = *(runtime_interfacetype **)((long)register0x00000020 + -0xb8);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -400) = 0x596c67;
          runtime_gcWriteBarrier();
        }
        prVar7[1].inter = *(runtime_interfacetype **)((long)register0x00000020 + -0x130);
        if (runtime_writeBarrier._0_4_ == 0) {
          uVar3 = *(uintptr *)((long)register0x00000020 + -0xe8);
          prVar7->fun[0] = uVar3;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -400) = 0x596c9e;
          runtime_gcWriteBarrierDX();
          uVar3 = extraout_RAX;
          prVar5 = prVar7;
        }
        *(runtime_itab **)((long)register0x00000020 + 0x40) = prVar7;
        *(undefined8 *)((long)register0x00000020 + 0x48) = 1;
        *(undefined8 *)((long)register0x00000020 + 0x50) = 1;
        *(undefined8 *)((long)register0x00000020 + 0x58) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x60) = 0;
        mVar24.~r3.len = uVar11;
        mVar24.~r3.array = (net_IPAddr *)uVar3;
        mVar24.~r3.cap = (int)prVar5;
        mVar24.~r4.data = pvVar14;
        mVar24.~r4.tab = prVar7;
        return mVar24;
      }
      pcVar12 = *(code **)(*(long *)((long)register0x00000020 + 0x10) + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0x188) =
           *(undefined8 *)((long)register0x00000020 + 0x18);
      *(undefined8 **)((long)register0x00000020 + -0x180) = &DAT_002378e0;
      *(uintptr **)((long)register0x00000020 + -0x178) = &runtime_zerobase;
      *(undefined8 *)((long)register0x00000020 + -400) = 0x596d10;
      (*pcVar12)(mVar23.~r2.str);
      plVar4 = *(long **)((long)register0x00000020 + -0x168);
      if (*(undefined **)((long)register0x00000020 + -0x170) != &DAT_0021c920) {
        plVar4 = (long *)0x0;
      }
      *(long **)((long)register0x00000020 + -0xe0) = plVar4;
      if ((plVar4 != (long *)0x0) && ((undefined8 *)*plVar4 != (undefined8 *)0x0)) {
        pcVar12 = *(code **)*plVar4;
        *(undefined8 *)((long)register0x00000020 + -0x188) =
             *(undefined8 *)((long)register0x00000020 + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0x180) =
             *(undefined8 *)((long)register0x00000020 + 0x38);
        *(undefined8 *)((long)register0x00000020 + -400) = 0x596d5c;
        (*pcVar12)();
      }
      *(undefined **)((long)register0x00000020 + -0x188) = &DAT_002453a0;
      *(undefined8 *)((long)register0x00000020 + -400) = 0x596d6c;
      runtime_newobject((runtime__type *)&DAT_002453a0);
      puVar1 = *(undefined8 **)((long)register0x00000020 + -0x180);
      *(undefined8 **)((long)register0x00000020 + -0x88) = puVar1;
      *puVar1 = net___Resolver__lookupIP_fm;
      if (runtime_writeBarrier._0_4_ == 0) {
        puVar1[1] = *(undefined8 *)((long)register0x00000020 + 8);
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -400) = 0x596dab;
        runtime_gcWriteBarrierCX();
      }
                    /* Unresolved local var:
                       func(context.Context,_string,_string)_([]net.IPAddr,_error) * * alt@[???] */
      pcVar12 = *(code **)(*(long *)((long)register0x00000020 + 0x10) + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0x188) =
           *(undefined8 *)((long)register0x00000020 + 0x18);
      *(undefined8 **)((long)register0x00000020 + -0x180) = &DAT_00237880;
      *(uintptr **)((long)register0x00000020 + -0x178) = &runtime_zerobase;
      *(undefined8 *)((long)register0x00000020 + -400) = 0x596ddd;
      (*pcVar12)();
      sVar19.str = *(runtime__type **)((long)register0x00000020 + -0x168);
      if (*(undefined **)((long)register0x00000020 + -0x170) != &DAT_002373a0) {
        sVar19.str = (runtime__type *)0x0;
      }
      *(runtime__type **)((long)register0x00000020 + -0xd8) = sVar19.str;
      *(context_emptyCtx **)((long)register0x00000020 + -0x90) = context_background;
      *(undefined **)((long)register0x00000020 + -0x188) = &DAT_00263160;
      *(undefined8 *)((long)register0x00000020 + -400) = 0x596e19;
      runtime_newobject(sVar19.str);
      prVar5 = *(runtime_itab **)((long)register0x00000020 + -0x180);
      prVar5->inter = (runtime_interfacetype *)&go_itab__context_emptyCtx_context_Context;
      lVar10 = *(long *)((long)register0x00000020 + -0x88);
      if (*(long *)((long)register0x00000020 + -0xd8) != 0) {
        lVar10 = *(long *)((long)register0x00000020 + -0xd8);
      }
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar5->_type = *(runtime__type **)((long)register0x00000020 + -0x90);
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -400) = 0x596e67;
        runtime_gcWriteBarrierCX();
        prVar5 = extraout_RAX_00;
        lVar10 = extraout_RDX;
      }
      *(long *)((long)register0x00000020 + -0xd8) = lVar10;
      uVar11 = *(undefined8 *)((long)register0x00000020 + 0x10);
      prVar5->hash = (int)uVar11;
      prVar5->_[0] = (char)((ulong)uVar11 >> 0x20);
      prVar5->_[1] = (char)((ulong)uVar11 >> 0x28);
      prVar5->_[2] = (char)((ulong)uVar11 >> 0x30);
      prVar5->_[3] = (char)((ulong)uVar11 >> 0x38);
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar5->fun[0] = *(uintptr *)((long)register0x00000020 + 0x18);
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -400) = 0x596ea5;
        runtime_gcWriteBarrierCX();
        prVar5 = extraout_RAX_01;
      }
      *(undefined1 **)((long)register0x00000020 + -0x188) =
           go_itab__net_onlyValuesCtx_context_Context;
      *(runtime_itab **)((long)register0x00000020 + -0x180) = prVar5;
      *(undefined8 *)((long)register0x00000020 + -400) = 0x596eba;
      parent.data = &runtime_zerobase;
      parent.tab = prVar5;
      context_WithCancel(parent);
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x168);
      *(runtime_tmpBuf **)((long)register0x00000020 + -0xc0) = buf;
      iVar6 = *(int *)((long)register0x00000020 + -0x170);
      *(int *)((long)register0x00000020 + -200) = iVar6;
      *(undefined8 *)((long)register0x00000020 + -0x80) =
           *(undefined8 *)((long)register0x00000020 + -0x178);
      *(undefined8 *)((long)register0x00000020 + -0x188) = 0;
      *(uint8 **)((long)register0x00000020 + -0x180) = *(uint8 **)((long)register0x00000020 + 0x20);
      pvVar14 = *(void **)((long)register0x00000020 + 0x28);
      *(void **)((long)register0x00000020 + -0x178) = pvVar14;
      *(undefined8 **)((long)register0x00000020 + -0x170) = &crypto_x509__stmp_64;
      *(undefined8 *)((long)register0x00000020 + -0x168) = 1;
      prVar5 = *(runtime_itab **)((long)register0x00000020 + 0x30);
      *(runtime_itab **)((long)register0x00000020 + -0x160) = prVar5;
      puVar16 = *(uint8 **)((long)register0x00000020 + 0x38);
      *(uint8 **)((long)register0x00000020 + -0x158) = puVar16;
      *(undefined8 *)((long)register0x00000020 + -400) = 0x596f37;
      a1.len = (int)pvVar14;
      a1.str = (uint8 *)prVar5;
      a0.len = iVar6;
      a0.str = *(uint8 **)((long)register0x00000020 + 0x20);
      a2.len = iVar17;
      a2.str = puVar16;
      sVar19 = runtime_concatstring3(buf,a0,a1,a2);
      block = SUB81(puVar16,0);
      key.str = (uint8 *)sVar19.len;
      *(sync_WaitGroup **)((long)register0x00000020 + -0x128) =
           *(sync_WaitGroup **)((long)register0x00000020 + -0x148);
                    /* Unresolved local var: error err@[???]
                       Unresolved local var: uint8 * ~R0.data@[???]
                       Unresolved local var: uintptr ~R0.itab@[???] */
      *(undefined8 *)((long)register0x00000020 + -0xd0) =
           *(undefined8 *)((long)register0x00000020 + -0x150);
      *(sync_WaitGroup **)((long)register0x00000020 + -0x188) = &net_dnsWaitGroup;
      *(undefined8 *)((long)register0x00000020 + -0x180) = 1;
      *(undefined8 *)((long)register0x00000020 + -400) = 0x596f67;
      sync___WaitGroup__Add(*(sync_WaitGroup **)((long)register0x00000020 + -0x148),(int)key.str);
      pnVar8 = net_DefaultResolver;
      if (*(net_Resolver **)((long)register0x00000020 + 8) != (net_Resolver *)0x0) {
        pnVar8 = *(net_Resolver **)((long)register0x00000020 + 8);
      }
      *(internal_singleflight_Group **)((long)register0x00000020 + -0xf0) = &pnVar8->lookupGroup;
      *(undefined **)((long)register0x00000020 + -0x188) = &DAT_00265f00;
      *(undefined8 *)((long)register0x00000020 + -400) = 0x596f9f;
      runtime_newobject((runtime__type *)&DAT_00265f00);
      g = *(internal_singleflight_Group **)((long)register0x00000020 + -0x180);
      g->mu = (sync_Mutex)net___Resolver__lookupIPAddr_func1;
      g->m = *(map_string__internal_singleflight_call *)((long)register0x00000020 + -0x80);
      if (runtime_writeBarrier._0_4_ == 0) {
        g[1].mu = *(sync_Mutex *)((long)register0x00000020 + -200);
        g[1].m = *(map_string__internal_singleflight_call *)((long)register0x00000020 + -0xd8);
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -400) = 0x596fee;
        runtime_gcWriteBarrierCX();
        prVar5 = (runtime_itab *)(extraout_RAX_02 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -400) = 0x596fff;
        runtime_gcWriteBarrierCX();
        g = extraout_RAX_03;
      }
      g[2].m = *(map_string__internal_singleflight_call *)((long)register0x00000020 + 0x28);
      if (runtime_writeBarrier._0_4_ == 0) {
        g[2].mu = *(sync_Mutex *)((long)register0x00000020 + 0x20);
      }
      else {
        prVar5 = (runtime_itab *)(g + 2);
        *(undefined8 *)((long)register0x00000020 + -400) = 0x597033;
        runtime_gcWriteBarrierCX();
        g = extraout_RAX_04;
      }
      g[3].m = *(map_string__internal_singleflight_call *)((long)register0x00000020 + 0x38);
      if (runtime_writeBarrier._0_4_ == 0) {
        g[3].mu = *(sync_Mutex *)((long)register0x00000020 + 0x30);
      }
      else {
        prVar5 = (runtime_itab *)(g + 3);
        *(undefined8 *)((long)register0x00000020 + -400) = 0x597067;
        runtime_gcWriteBarrierCX();
        g = extraout_RAX_05;
      }
      *(undefined8 *)((long)register0x00000020 + -0x188) =
           *(undefined8 *)((long)register0x00000020 + -0xf0);
      *(int *)((long)register0x00000020 + -0x180) = *(int *)((long)register0x00000020 + -0xd0);
      *(undefined8 *)((long)register0x00000020 + -0x178) =
           *(undefined8 *)((long)register0x00000020 + -0x128);
      *(internal_singleflight_Group **)((long)register0x00000020 + -0x170) = g;
      *(undefined8 *)((long)register0x00000020 + -400) = 0x597094;
      key.len = *(int *)((long)register0x00000020 + -0xd0);
      mVar20 = internal_singleflight___Group__DoChan(g,key,(func____interface_____error_ **)prVar5);
      order0 = (uint16 *)CONCAT71(sVar19.len._1_7_,mVar20.~r3);
      *(undefined8 *)((long)register0x00000020 + -0xa0) =
           *(undefined8 *)((long)register0x00000020 + -0x168);
      if (*(char *)((long)register0x00000020 + -0x160) == '\0') {
        *(sync_WaitGroup **)((long)register0x00000020 + -0x188) = &net_dnsWaitGroup;
        *(undefined8 *)((long)register0x00000020 + -0x180) = 0xffffffffffffffff;
        *(undefined8 *)((long)register0x00000020 + -400) = 0x5970c5;
        sync___WaitGroup__Add(&net_dnsWaitGroup,(int)order0);
      }
      pcVar12 = *(code **)(*(long *)((long)register0x00000020 + 0x10) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x188) =
           *(undefined8 *)((long)register0x00000020 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -400) = 0x5970df;
      (*pcVar12)();
                    /* Unresolved local var: internal/singleflight.Result r@[???]
                       Unresolved local var: int ~R0.len@[???] */
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x180);
      *(runtime_scase **)((long)register0x00000020 + -0x78) =
           *(runtime_scase **)((long)register0x00000020 + -0xa0);
      *(undefined1 **)((long)register0x00000020 + -0x70) =
           (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -0x188) =
           (undefined1 *)((long)register0x00000020 + -0x78);
      pnVar8 = (net_Resolver *)((long)register0x00000020 + -0x108);
      *(net_Resolver **)((long)register0x00000020 + -0x180) = pnVar8;
      *(undefined8 *)((long)register0x00000020 + -0x178) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x170) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x168) = 2;
      *(undefined1 *)((long)register0x00000020 + -0x160) = 1;
      *(undefined8 *)((long)register0x00000020 + -400) = 0x59718e;
      mVar21 = runtime_selectgo(*(runtime_scase **)((long)register0x00000020 + -0xa0),order0,
                                (uintptr *)pnVar8,(int)prVar5,(int)pvVar14,(bool)block);
      sVar19.str = (runtime__type *)CONCAT71(sVar19.len._1_7_,mVar21.~r7);
      if (*(long *)((long)register0x00000020 + -0x158) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x58) =
             *(undefined8 *)((long)register0x00000020 + -0x30);
        *(undefined8 *)((long)register0x00000020 + -0x50) =
             *(undefined8 *)((long)register0x00000020 + -0x28);
        *(undefined8 *)((long)register0x00000020 + -0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x20);
        *(undefined4 *)((long)register0x00000020 + -0x40) =
             *(undefined4 *)((long)register0x00000020 + -0x18);
        *(undefined4 *)((long)register0x00000020 + -0x3c) =
             *(undefined4 *)((long)register0x00000020 + -0x14);
        *(undefined4 *)((long)register0x00000020 + -0x38) =
             *(undefined4 *)((long)register0x00000020 + -0x10);
        *(undefined4 *)((long)register0x00000020 + -0x34) =
             *(undefined4 *)((long)register0x00000020 + -0xc);
        pcVar12 = (code *)**(undefined8 **)((long)register0x00000020 + -0xc0);
        *(undefined8 *)((long)register0x00000020 + -400) = 0x597415;
        (*pcVar12)();
        lVar10 = *(long *)((long)register0x00000020 + -0xe0);
        if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
                    /* Unresolved local var: []net.IPAddr addrs@[???] */
          puVar1 = *(undefined8 **)((long)register0x00000020 + -0x50);
          if (*(undefined **)((long)register0x00000020 + -0x58) == &DAT_00221720) {
            uVar11 = *puVar1;
            uVar15 = puVar1[1];
            iVar17 = puVar1[2];
          }
          else {
            iVar17 = 0;
            uVar15 = 0;
            uVar11 = 0;
          }
          *(undefined8 *)((long)register0x00000020 + -0x188) = uVar11;
          *(undefined8 *)((long)register0x00000020 + -0x180) = uVar15;
          *(int *)((long)register0x00000020 + -0x178) = iVar17;
          *(undefined8 *)((long)register0x00000020 + -400) = 0x597473;
          addrs.len = uVar11;
          addrs.array = (net_IPAddr *)lVar10;
          addrs.cap = iVar17;
          net_ipAddrsEface(addrs);
          pcVar12 = (code *)**(undefined8 **)(*(long *)((long)register0x00000020 + -0xe0) + 8);
          prVar5 = (runtime_itab *)(ulong)*(byte *)((long)register0x00000020 + -0x38);
          iVar17 = *(int *)((long)register0x00000020 + -0x40);
          *(undefined8 *)((long)register0x00000020 + -0x188) =
               *(undefined8 *)((long)register0x00000020 + -0x170);
          *(undefined8 *)((long)register0x00000020 + -0x180) =
               *(undefined8 *)((long)register0x00000020 + -0x168);
          *(undefined8 *)((long)register0x00000020 + -0x178) =
               *(undefined8 *)((long)register0x00000020 + -0x160);
          *(byte *)((long)register0x00000020 + -0x170) = *(byte *)((long)register0x00000020 + -0x38)
          ;
          *(undefined8 *)((long)register0x00000020 + -0x168) =
               *(undefined8 *)((long)register0x00000020 + -0x48);
          *(int *)((long)register0x00000020 + -0x160) = iVar17;
          *(undefined8 *)((long)register0x00000020 + -400) = 0x5974c8;
          (*pcVar12)();
        }
        puVar1 = *(undefined8 **)((long)register0x00000020 + -0x50);
        iface = *(runtime__type **)((long)register0x00000020 + -0x58);
        lVar10 = *(long *)((long)register0x00000020 + -0x48);
        sVar19.str = *(runtime__type **)((long)register0x00000020 + -0x40);
        pvVar14 = (void *)(ulong)*(byte *)((long)register0x00000020 + -0x38);
                    /* Unresolved local var: []net.IPAddr addrs@[???]
                       Unresolved local var: []net.IPAddr clone@[???] */
        if (lVar10 != 0) {
          iVar6 = 0;
          iVar17 = 0;
          uVar11 = 0;
LAB_00597556:
          *(undefined8 *)((long)register0x00000020 + 0x40) = uVar11;
          *(int *)((long)register0x00000020 + 0x48) = iVar17;
          *(int *)((long)register0x00000020 + 0x50) = iVar6;
          *(long *)((long)register0x00000020 + 0x58) = lVar10;
          *(runtime__type **)((long)register0x00000020 + 0x60) = sVar19.str;
          mVar26.~r3.len = lVar10;
          mVar26.~r3.array = (net_IPAddr *)iVar6;
          mVar26.~r3.cap = iVar17;
          mVar26.~r4.data = sVar19.str;
          mVar26.~r4.tab = prVar5;
          return mVar26;
        }
        if (iface == (runtime__type *)&DAT_00221720) {
          iVar17 = puVar1[1];
          uVar11 = *puVar1;
          iVar6 = puVar1[2];
          if (*(byte *)((long)register0x00000020 + -0x38) != 0) {
            *(int *)((long)register0x00000020 + -0x140) = iVar17;
            *(undefined **)((long)register0x00000020 + -0x188) = &DAT_0024c960;
            *(int *)((long)register0x00000020 + -0x180) = iVar17;
            *(int *)((long)register0x00000020 + -0x178) = iVar17;
            *(undefined8 *)((long)register0x00000020 + -0x170) = uVar11;
            *(undefined8 *)((long)register0x00000020 + -400) = 0x597545;
            runtime_makeslicecopy((runtime__type *)&DAT_0024c960,(int)sVar19.str,iVar17,prVar5);
            uVar11 = *(undefined8 *)((long)register0x00000020 + -0x168);
            iVar6 = *(int *)((long)register0x00000020 + -0x140);
            iVar17 = iVar6;
          }
          lVar10 = 0;
          sVar19.str = (runtime__type *)0x0;
          goto LAB_00597556;
        }
        *(runtime__type **)((long)register0x00000020 + -0x188) = iface;
        *(undefined **)((long)register0x00000020 + -0x180) = &DAT_00221720;
        *(undefined8 **)((long)register0x00000020 + -0x178) = &DAT_0022dfe0;
        *(undefined8 *)((long)register0x00000020 + -400) = 0x5975a8;
        runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,sVar19.str,iface);
      }
      else {
        puVar13 = (undefined1 *)((long)register0x00000020 + -0x188);
        if (*(long *)((long)register0x00000020 + -0x158) == 1) break;
      }
    }
    *(undefined8 *)(puVar13 + -8) = 0x5975ae;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar13;
  } while( true );
  pnVar9 = net_DefaultResolver;
  pnVar2 = net_DefaultResolver;
  if (*(net_Resolver **)((long)register0x00000020 + 8) != (net_Resolver *)0x0) {
    pnVar9 = pnVar8;
    pnVar2 = *(net_Resolver **)((long)register0x00000020 + 8);
  }
  *(internal_singleflight_Group **)((long)register0x00000020 + -0x188) = &pnVar2->lookupGroup;
  *(undefined8 *)((long)register0x00000020 + -0x180) =
       *(undefined8 *)((long)register0x00000020 + -0xd0);
  *(internal_singleflight_Group **)((long)register0x00000020 + -0x178) =
       *(internal_singleflight_Group **)((long)register0x00000020 + -0x128);
  *(undefined8 *)((long)register0x00000020 + -400) = 0x5971ea;
  sVar19.len = (int)pnVar9;
  internal_singleflight___Group__ForgetUnshared
            (*(internal_singleflight_Group **)((long)register0x00000020 + -0x128),sVar19);
  if (*(char *)((long)register0x00000020 + -0x170) == '\0') {
    *(undefined4 *)((long)register0x00000020 + -0x188) = 0x10;
    *(undefined ***)((long)register0x00000020 + -0x180) =
         &PTR_net___Resolver__lookupIPAddr_func2_002b3418;
    *(undefined8 *)((long)register0x00000020 + -0x178) =
         *(undefined8 *)((long)register0x00000020 + -0xa0);
    *(undefined8 *)((long)register0x00000020 + -0x170) =
         *(undefined8 *)((long)register0x00000020 + -0xc0);
    *(undefined8 *)((long)register0x00000020 + -400) = 0x597234;
    runtime_newproc((int32)*(undefined8 *)((long)register0x00000020 + -0xc0),
                    (runtime_funcval *)sVar19.str);
  }
  else {
    pcVar12 = (code *)**(undefined8 **)((long)register0x00000020 + -0xc0);
    *(undefined8 *)((long)register0x00000020 + -400) = 0x5971fe;
    (*pcVar12)();
  }
  pcVar12 = *(code **)(*(long *)((long)register0x00000020 + 0x10) + 0x28);
  *(undefined8 *)((long)register0x00000020 + -0x188) =
       *(undefined8 *)((long)register0x00000020 + 0x18);
  *(undefined8 *)((long)register0x00000020 + -400) = 0x59724e;
  (*pcVar12)();
  tab = *(runtime_itab **)((long)register0x00000020 + -0x180);
  *(runtime_itab **)((long)register0x00000020 + -0x110) = tab;
  y = *(void **)((long)register0x00000020 + -0x178);
  *(void **)((long)register0x00000020 + -0xa8) = y;
  prVar7 = *(runtime_itab **)((long)register0x00000020 + -0x180);
  pvVar14 = *(void **)((long)register0x00000020 + -0x178);
  if (context_Canceled.tab == prVar7) {
    *(runtime_itab **)((long)register0x00000020 + -0x98) = prVar7;
    *(void **)((long)register0x00000020 + -0xb0) = pvVar14;
    *(runtime_itab **)((long)register0x00000020 + -0x188) = prVar7;
    *(void **)((long)register0x00000020 + -0x180) = pvVar14;
    *(void **)((long)register0x00000020 + -0x178) = context_Canceled.data;
    *(undefined8 *)((long)register0x00000020 + -400) = 0x5972a5;
    runtime_ifaceeq(tab,context_Canceled.data,y);
    if (*(char *)((long)register0x00000020 + -0x170) != '\0') {
      pcVar12 = *(code **)((long)register0x00000020 + -0xe0);
      bVar18 = pcVar12 == (code *)0x0;
      tab = net_errCanceled.tab;
      y = net_errCanceled.data;
      goto LAB_00597354;
    }
    tab = *(runtime_itab **)((long)register0x00000020 + -0x110);
    y = *(void **)((long)register0x00000020 + -0xa8);
    prVar7 = *(runtime_itab **)((long)register0x00000020 + -0x98);
    pvVar14 = *(void **)((long)register0x00000020 + -0xb0);
  }
  if (context_DeadlineExceeded.tab == prVar7) {
    *(runtime_itab **)((long)register0x00000020 + -0x188) = prVar7;
    *(void **)((long)register0x00000020 + -0x180) = pvVar14;
    *(void **)((long)register0x00000020 + -0x178) = context_DeadlineExceeded.data;
    *(undefined8 *)((long)register0x00000020 + -400) = 0x597317;
    runtime_ifaceeq(tab,context_DeadlineExceeded.data,y);
    if (*(char *)((long)register0x00000020 + -0x170) == '\0') {
      pcVar12 = *(code **)((long)register0x00000020 + -0xe0);
      bVar18 = pcVar12 == (code *)0x0;
      y = *(void **)((long)register0x00000020 + -0xa8);
      tab = *(runtime_itab **)((long)register0x00000020 + -0x110);
    }
    else {
      pcVar12 = *(code **)((long)register0x00000020 + -0xe0);
      bVar18 = pcVar12 == (code *)0x0;
      tab = net_errTimeout.tab;
      y = net_errTimeout.data;
    }
  }
  else {
    pcVar12 = *(code **)((long)register0x00000020 + -0xe0);
    bVar18 = pcVar12 == (code *)0x0;
  }
LAB_00597354:
  if ((!bVar18) && (puVar1 = *(undefined8 **)(pcVar12 + 8), puVar1 != (undefined8 *)0x0)) {
    *(void **)((long)register0x00000020 + -0xf8) = y;
    *(runtime_itab **)((long)register0x00000020 + -0x138) = tab;
    pcVar12 = (code *)*puVar1;
    *(undefined8 *)((long)register0x00000020 + -0x188) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x180) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0;
    *(undefined1 *)((long)register0x00000020 + -0x170) = 0;
    *(runtime_itab **)((long)register0x00000020 + -0x168) = tab;
    *(void **)((long)register0x00000020 + -0x160) = y;
    *(undefined8 *)((long)register0x00000020 + -400) = 0x597392;
    (*pcVar12)();
    tab = *(runtime_itab **)((long)register0x00000020 + -0x138);
    y = *(void **)((long)register0x00000020 + -0xf8);
  }
  *(undefined8 *)((long)register0x00000020 + 0x40) = 0;
  *(undefined8 *)((long)register0x00000020 + 0x48) = 0;
  *(undefined8 *)((long)register0x00000020 + 0x50) = 0;
  *(runtime_itab **)((long)register0x00000020 + 0x58) = tab;
  *(void **)((long)register0x00000020 + 0x60) = y;
  mVar25.~r3.len = (int)pcVar12;
  mVar25.~r3.array = (net_IPAddr *)tab;
  mVar25.~r3.cap = (int)y;
  mVar25.~r4.data = pvVar14;
  mVar25.~r4.tab = prVar5;
  return mVar25;
}

