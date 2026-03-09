
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*sysDialer).dialParallel(net.sysDialer * sd, context.Context
   ctx, net.addrList primaries, net.addrList fallbacks, net.Conn ~r3, error ~r4) */

multireturn_net_Conn_error_
net___sysDialer__dialParallel
          (net_sysDialer *sd,context_Context ctx,net_addrList primaries,net_addrList fallbacks)

{
  runtime__defer *prVar1;
  time_Duration d;
  runtime_hchan *prVar2;
  runtime_timer *t;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  undefined8 *extraout_RAX;
  undefined8 *puVar3;
  long extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  runtime_itab *extraout_RAX_02;
  runtime_itab *extraout_RAX_03;
  runtime_itab *extraout_RAX_04;
  runtime_itab *extraout_RAX_05;
  runtime_itab *extraout_RAX_06;
  runtime_itab *extraout_RAX_07;
  uintptr *pc0;
  runtime_itab *prVar4;
  time_Duration tVar5;
  void *pvVar6;
  undefined1 *puVar7;
  undefined1 *unaff_RBP;
  int nrecvs;
  net_Addr *nsends;
  int iVar9;
  long in_FS_OFFSET;
  context_Context parent;
  context_Context parent_00;
  interface___ e;
  multireturn_int_bool_ mVar10;
  multireturn_context_Context_context_CancelFunc_____ mVar11;
  context_Context ctx_00;
  net_addrList ras;
  multireturn_net_Conn_error_ mVar12;
  multireturn_net_Conn_error_ mVar13;
  multireturn_net_Conn_error_ mVar14;
  multireturn_net_Conn_error__conflict1 mVar15;
  multireturn_net_Conn_error_ mVar16;
  multireturn_net_Conn_error_ mVar17;
  multireturn_net_Conn_error_ mVar18;
  multireturn_net_Conn_error_ mVar19;
  net_sysDialer *sd_spill;
  context_Context ctx_spill;
  net_addrList primaries_spill;
  net_addrList fallbacks_spill;
  void *pvVar8;
  
  iVar9 = primaries.cap;
  nrecvs = primaries.len;
  nsends = primaries.array;
  pc0 = ctx.data;
  parent_00.data = ctx.tab;
  do {
                    /* Unresolved local var: chan_struct_{} returned@[???]
                       Unresolved local var: chan_net.dialResult.1 results@[???]
                       Unresolved local var: func(context.Context,_bool) * * startRacer@[???]
                       Unresolved local var: context.CancelFunc * * primaryCancel@[???]
                       Unresolved local var: time.Timer * fallbackTimer@[???]
                       Unresolved local var: context.Context primaryCtx@[???]
                       Unresolved local var: net.dialResult.1 primary@[???]
                       Unresolved local var: net.dialResult.1 fallback@[???] */
    puVar7 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x1d0)) {
      puVar7 = (undefined1 *)((long)register0x00000020 + -0x250);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(undefined8 *)((long)register0x00000020 + 0x50) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x58) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x60) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x68) = 0;
      if (*(long *)((long)register0x00000020 + 0x40) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x250) =
             *(undefined8 *)((long)register0x00000020 + 8);
        *(undefined8 *)((long)register0x00000020 + -0x248) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x240) =
             *(undefined8 *)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x238) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(undefined8 *)((long)register0x00000020 + -0x230) =
             *(undefined8 *)((long)register0x00000020 + 0x28);
        *(net_sysDialer **)((long)register0x00000020 + -0x228) =
             *(net_sysDialer **)((long)register0x00000020 + 0x30);
        *(undefined8 *)((long)register0x00000020 + -600) = 0x58361d;
        ctx_00.data = pc0;
        ctx_00.tab = parent_00.data;
        ras.len = nrecvs;
        ras.array = nsends;
        ras.cap = iVar9;
        mVar15 = net___sysDialer__dialSerial
                           (*(net_sysDialer **)((long)register0x00000020 + 0x30),ctx_00,ras);
        pvVar8 = mVar15.~r3.data;
        parent_00.data = *(runtime_itab **)((long)register0x00000020 + -0x210);
        pvVar6 = *(void **)((long)register0x00000020 + -0x208);
        *(undefined8 *)((long)register0x00000020 + 0x50) =
             *(undefined8 *)((long)register0x00000020 + -0x220);
        *(undefined8 *)((long)register0x00000020 + 0x58) =
             *(undefined8 *)((long)register0x00000020 + -0x218);
        *(runtime_itab **)((long)register0x00000020 + 0x60) = parent_00.data;
        *(void **)((long)register0x00000020 + 0x68) = pvVar6;
        *(undefined8 *)((long)register0x00000020 + -600) = 0x583657;
        runtime_deferreturn();
        mVar16.~r3.data = pvVar6;
        mVar16.~r3.tab = extraout_RAX_04;
        mVar16.~r4.data = pvVar8;
        mVar16.~r4.tab = parent_00.data;
        return mVar16;
      }
      *(undefined **)((long)register0x00000020 + -0x250) = &DAT_00222ea0;
      *(undefined8 *)((long)register0x00000020 + -0x248) = 0;
      *(undefined8 *)((long)register0x00000020 + -600) = 0x5832b6;
      runtime_makechan((runtime_chantype *)&DAT_00222ea0,(int)parent_00.data);
      prVar1 = *(runtime__defer **)((long)register0x00000020 + -0x240);
      *(runtime__defer **)((long)register0x00000020 + -0x100) = prVar1;
      *(undefined4 *)((long)register0x00000020 + -0x1a8) = 8;
      *(undefined ***)((long)register0x00000020 + -400) = &PTR_runtime_closechan_002b37c8;
      *(runtime__defer **)((long)register0x00000020 + -0x160) = prVar1;
      prVar4 = (runtime_itab *)((long)register0x00000020 + -0x1a8);
      *(runtime_itab **)((long)register0x00000020 + -0x250) = prVar4;
      *(undefined8 *)((long)register0x00000020 + -600) = 0x5832f6;
      runtime_deferprocStack(prVar1);
      if (extraout_EAX != 0) {
        *(undefined8 *)((long)register0x00000020 + -600) = 0x5835bb;
        runtime_deferreturn();
        mVar14.~r3.data = parent_00.data;
        mVar14.~r3.tab = extraout_RAX_03;
        mVar14.~r4.data = nsends;
        mVar14.~r4.tab = prVar4;
        return mVar14;
      }
      *(undefined **)((long)register0x00000020 + -0x250) = &DAT_00222ca0;
      *(undefined8 *)((long)register0x00000020 + -0x248) = 0;
      *(undefined8 *)((long)register0x00000020 + -600) = 0x583317;
      runtime_makechan((runtime_chantype *)&DAT_00222ca0,(int)parent_00.data);
      *(runtime__type **)((long)register0x00000020 + -0xf8) =
           *(runtime__type **)((long)register0x00000020 + -0x240);
      *(undefined **)((long)register0x00000020 + -0x250) = &DAT_0026bae0;
      *(undefined8 *)((long)register0x00000020 + -600) = 0x583334;
      runtime_newobject(*(runtime__type **)((long)register0x00000020 + -0x240));
      puVar3 = *(undefined8 **)((long)register0x00000020 + -0x248);
      *puVar3 = net___sysDialer__dialParallel_func1;
      puVar3[2] = *(undefined8 *)((long)register0x00000020 + 0x28);
      puVar3[3] = *(undefined8 *)((long)register0x00000020 + 0x30);
      if (runtime_writeBarrier._0_4_ == 0) {
        puVar3[1] = *(undefined8 *)((long)register0x00000020 + 0x20);
      }
      else {
        nsends = (net_Addr *)(puVar3 + 1);
        *(undefined8 *)((long)register0x00000020 + -600) = 0x583385;
        runtime_gcWriteBarrierCX();
        puVar3 = extraout_RAX;
      }
      *(undefined8 **)((long)register0x00000020 + -0xd0) = puVar3;
      puVar3[5] = *(undefined8 *)((long)register0x00000020 + 0x40);
      puVar3[6] = *(undefined8 *)((long)register0x00000020 + 0x48);
      if (runtime_writeBarrier._0_4_ == 0) {
        puVar3[4] = *(undefined8 *)((long)register0x00000020 + 0x38);
        puVar3[7] = *(undefined8 *)((long)register0x00000020 + 8);
        puVar3[8] = *(undefined8 *)((long)register0x00000020 + -0xf8);
        pvVar6 = *(void **)((long)register0x00000020 + -0x100);
        puVar3[9] = pvVar6;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -600) = 0x5833f3;
        runtime_gcWriteBarrierCX();
        *(undefined8 *)((long)register0x00000020 + -600) = 0x583405;
        runtime_gcWriteBarrierCX();
        *(undefined8 *)((long)register0x00000020 + -600) = 0x583416;
        runtime_gcWriteBarrierDX();
        nsends = (net_Addr *)(extraout_RAX_00 + 0x48);
        pvVar6 = *(void **)((long)register0x00000020 + -0x100);
        *(undefined8 *)((long)register0x00000020 + -600) = 0x583427;
        runtime_gcWriteBarrierBX();
      }
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
      *(runtime_itab **)((long)register0x00000020 + -0x250) =
           *(runtime_itab **)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x248) =
           *(undefined8 *)((long)register0x00000020 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -600) = 0x58349d;
      parent.data = pvVar6;
      parent.tab = *(runtime_itab **)((long)register0x00000020 + 0x10);
      mVar11 = context_WithCancel(parent);
      mVar12.~r3.data = mVar11.ctx.data;
      parent_00.data = *(runtime_itab **)((long)register0x00000020 + -0x240);
      *(runtime_itab **)((long)register0x00000020 + -0xd8) = parent_00.data;
      *(undefined8 *)((long)register0x00000020 + -0xf0) =
           *(undefined8 *)((long)register0x00000020 + -0x238);
      *(undefined4 *)((long)register0x00000020 + -0x1f8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x1e0) =
           *(undefined8 *)((long)register0x00000020 + -0x230);
      *(runtime__defer **)((long)register0x00000020 + -0x250) =
           (runtime__defer *)((long)register0x00000020 + -0x1f8);
      *(undefined8 *)((long)register0x00000020 + -600) = 0x5834d7;
      runtime_deferprocStack((runtime__defer *)((long)register0x00000020 + -0x1f8));
      if (extraout_EAX_00 != 0) {
        *(undefined8 *)((long)register0x00000020 + -600) = 0x5835a5;
        runtime_deferreturn();
        mVar13.~r3.data = mVar12.~r3.data;
        mVar13.~r3.tab = extraout_RAX_02;
        mVar13.~r4.data = nsends;
        mVar13.~r4.tab = parent_00.data;
        return mVar13;
      }
      *(undefined4 *)((long)register0x00000020 + -0x250) = 0x18;
      *(undefined8 *)((long)register0x00000020 + -0x248) =
           *(undefined8 *)((long)register0x00000020 + -0xd0);
      *(undefined8 *)((long)register0x00000020 + -0x240) =
           *(undefined8 *)((long)register0x00000020 + -0xd8);
      *(undefined8 *)((long)register0x00000020 + -0x238) =
           *(undefined8 *)((long)register0x00000020 + -0xf0);
      *(undefined1 *)((long)register0x00000020 + -0x230) = 1;
      *(undefined8 *)((long)register0x00000020 + -600) = 0x583517;
      runtime_newproc((int32)*(undefined8 *)((long)register0x00000020 + -0xd0),
                      (runtime_funcval *)mVar12.~r3.data);
      d = *(time_Duration *)(*(long *)((long)register0x00000020 + 8) + 0x38);
      tVar5 = 300000000;
      if (0 < d) {
        tVar5 = d;
      }
      *(time_Duration *)((long)register0x00000020 + -0x250) = tVar5;
      *(undefined8 *)((long)register0x00000020 + -600) = 0x583538;
      time_NewTimer(d);
      prVar1 = *(runtime__defer **)((long)register0x00000020 + -0x248);
      *(runtime__defer **)((long)register0x00000020 + -0xe8) = prVar1;
      *(undefined4 *)((long)register0x00000020 + -0x158) = 0x10;
      *(undefined ***)((long)register0x00000020 + -0x140) = &PTR_time___Timer__Stop_002b3b38;
      *(runtime__defer **)((long)register0x00000020 + -0x110) = prVar1;
      prVar4 = (runtime_itab *)((long)register0x00000020 + -0x158);
      *(runtime_itab **)((long)register0x00000020 + -0x250) = prVar4;
      *(undefined8 *)((long)register0x00000020 + -600) = 0x583578;
      runtime_deferprocStack(prVar1);
      parent_00.data = mVar12.~r3.data;
      if (extraout_EAX_01 != 0) {
        *(undefined8 *)((long)register0x00000020 + -600) = 0x58358b;
        runtime_deferreturn();
        mVar12.~r3.tab = extraout_RAX_01;
        mVar12.~r4.data = nsends;
        mVar12.~r4.tab = prVar4;
        return mVar12;
      }
      while( true ) {
        while( true ) {
                    /* Unresolved local var: context.CancelFunc * * fallbackCancel@[???]
                       Unresolved local var: context.Context fallbackCtx@[???] */
          prVar2 = (*(runtime_scase **)((long)register0x00000020 + -0xe8))->c;
                    /* Unresolved local var: net.dialResult.1 res@[???] */
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
          *(undefined8 *)((long)register0x00000020 + -200) = 0;
          *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
          *(undefined8 *)((long)register0x00000020 + -0xb8) = 0;
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
          *(runtime_hchan **)((long)register0x00000020 + -0xb8) = prVar2;
          pc0 = *(uintptr **)((long)register0x00000020 + -0xf8);
          *(uintptr **)((long)register0x00000020 + -200) = pc0;
          *(undefined1 **)((long)register0x00000020 + -0xc0) =
               (undefined1 *)((long)register0x00000020 + -0x30);
          *(undefined1 **)((long)register0x00000020 + -0x250) =
               (undefined1 *)((long)register0x00000020 + -200);
          *(undefined1 **)((long)register0x00000020 + -0x248) =
               (undefined1 *)((long)register0x00000020 + -0x200);
          *(undefined8 *)((long)register0x00000020 + -0x240) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x238) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x230) = 2;
          *(undefined1 *)((long)register0x00000020 + -0x228) = 1;
          *(undefined8 *)((long)register0x00000020 + -600) = 0x583719;
          mVar10 = runtime_selectgo(*(runtime_scase **)((long)register0x00000020 + -0xe8),
                                    (uint16 *)parent_00.data,pc0,(int)nsends,nrecvs,SUB81(iVar9,0));
          parent_00.data = (runtime_itab *)CONCAT71((int7)((ulong)parent_00.data >> 8),mVar10.~r7);
          if (*(long *)((long)register0x00000020 + -0x220) != 0) break;
          *(undefined8 *)((long)register0x00000020 + -0xa8) =
               *(undefined8 *)((long)register0x00000020 + -0x30);
          *(undefined8 *)((long)register0x00000020 + -0xa0) =
               *(undefined8 *)((long)register0x00000020 + -0x28);
          *(undefined8 *)((long)register0x00000020 + -0x98) =
               *(undefined8 *)((long)register0x00000020 + -0x20);
          *(undefined8 *)((long)register0x00000020 + -0x90) =
               *(undefined8 *)((long)register0x00000020 + -0x18);
          *(undefined8 *)((long)register0x00000020 + -0x88) =
               *(undefined8 *)((long)register0x00000020 + -0x10);
          if (*(long *)((long)register0x00000020 + -0x98) == 0) {
            prVar4 = *(runtime_itab **)((long)register0x00000020 + -0xa0);
            *(undefined8 *)((long)register0x00000020 + 0x50) =
                 *(undefined8 *)((long)register0x00000020 + -0xa8);
            *(runtime_itab **)((long)register0x00000020 + 0x58) = prVar4;
            *(undefined8 *)((long)register0x00000020 + 0x60) = 0;
            *(undefined8 *)((long)register0x00000020 + 0x68) = 0;
            *(undefined8 *)((long)register0x00000020 + -600) = 0x583965;
            runtime_deferreturn();
            mVar18.~r3.data = parent_00.data;
            mVar18.~r3.tab = extraout_RAX_06;
            mVar18.~r4.data = nsends;
            mVar18.~r4.tab = prVar4;
            return mVar18;
          }
          if (*(char *)((long)register0x00000020 + -0x88) == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x58) =
                 *(undefined8 *)((long)register0x00000020 + -0xa8);
            *(undefined8 *)((long)register0x00000020 + -0x50) =
                 *(undefined8 *)((long)register0x00000020 + -0xa0);
            *(undefined8 *)((long)register0x00000020 + -0x48) =
                 *(undefined8 *)((long)register0x00000020 + -0x98);
            *(undefined8 *)((long)register0x00000020 + -0x40) =
                 *(undefined8 *)((long)register0x00000020 + -0x90);
            *(undefined8 *)((long)register0x00000020 + -0x38) =
                 *(undefined8 *)((long)register0x00000020 + -0x88);
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x80) =
                 *(undefined8 *)((long)register0x00000020 + -0xa8);
            *(undefined8 *)((long)register0x00000020 + -0x78) =
                 *(undefined8 *)((long)register0x00000020 + -0xa0);
            *(undefined8 *)((long)register0x00000020 + -0x70) =
                 *(undefined8 *)((long)register0x00000020 + -0x98);
            *(undefined8 *)((long)register0x00000020 + -0x68) =
                 *(undefined8 *)((long)register0x00000020 + -0x90);
            *(undefined8 *)((long)register0x00000020 + -0x60) =
                 *(undefined8 *)((long)register0x00000020 + -0x88);
          }
          if ((*(char *)((long)register0x00000020 + -0x5f) != '\0') &&
             (*(char *)((long)register0x00000020 + -0x37) != '\0')) {
            prVar4 = *(runtime_itab **)((long)register0x00000020 + -0x68);
            *(undefined8 *)((long)register0x00000020 + 0x50) = 0;
            *(undefined8 *)((long)register0x00000020 + 0x58) = 0;
            *(undefined8 *)((long)register0x00000020 + 0x60) =
                 *(undefined8 *)((long)register0x00000020 + -0x70);
            *(runtime_itab **)((long)register0x00000020 + 0x68) = prVar4;
            *(undefined8 *)((long)register0x00000020 + -600) = 0x58391d;
            runtime_deferreturn();
            mVar17.~r3.data = parent_00.data;
            mVar17.~r3.tab = extraout_RAX_05;
            mVar17.~r4.data = nsends;
            mVar17.~r4.tab = prVar4;
            return mVar17;
          }
          if (*(char *)((long)register0x00000020 + -0x88) != '\0') {
            t = *(runtime_timer **)((long)register0x00000020 + -0xe8);
            if ((t->arg)._type == (runtime__type *)0x0) goto LAB_0058398b;
            *(int64 **)((long)register0x00000020 + -0x250) = &t->when;
            *(undefined8 *)((long)register0x00000020 + -600) = 0x58381a;
            time_stopTimer(t);
            if (*(char *)((long)register0x00000020 + -0x248) != '\0') {
              *(time_Timer **)((long)register0x00000020 + -0x250) =
                   *(time_Timer **)((long)register0x00000020 + -0xe8);
              *(undefined8 *)((long)register0x00000020 + -0x248) = 0;
              *(undefined8 *)((long)register0x00000020 + -600) = 0x583845;
              time___Timer__Reset(*(time_Timer **)((long)register0x00000020 + -0xe8),
                                  (time_Duration)parent_00.data);
            }
          }
        }
        if (*(long *)((long)register0x00000020 + -0x220) != 1) break;
        *(runtime_itab **)((long)register0x00000020 + -0x250) =
             *(runtime_itab **)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x248) =
             *(undefined8 *)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -600) = 0x583872;
        parent_00.tab = *(runtime_itab **)((long)register0x00000020 + 0x10);
        mVar11 = context_WithCancel(parent_00);
        mVar19.~r3.data = mVar11.ctx.data;
        parent_00.data = *(runtime_itab **)((long)register0x00000020 + -0x240);
        *(runtime_itab **)((long)register0x00000020 + -0xd8) = parent_00.data;
        *(undefined8 *)((long)register0x00000020 + -0xe0) =
             *(undefined8 *)((long)register0x00000020 + -0x238);
        *(undefined4 *)((long)register0x00000020 + -0x250) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x248) =
             *(undefined8 *)((long)register0x00000020 + -0x230);
        *(undefined8 *)((long)register0x00000020 + -600) = 0x5838a5;
        runtime_deferproc((int32)*(undefined8 *)((long)register0x00000020 + -0x230),
                          (runtime_funcval *)mVar19.~r3.data);
        if (extraout_EAX_02 != 0) {
          *(undefined8 *)((long)register0x00000020 + -600) = 0x58397b;
          runtime_deferreturn();
          mVar19.~r3.tab = extraout_RAX_07;
          mVar19.~r4.data = nsends;
          mVar19.~r4.tab = parent_00.data;
          return mVar19;
        }
        *(undefined4 *)((long)register0x00000020 + -0x250) = 0x18;
        *(undefined8 *)((long)register0x00000020 + -0x248) =
             *(undefined8 *)((long)register0x00000020 + -0xd0);
        *(undefined8 *)((long)register0x00000020 + -0x240) =
             *(undefined8 *)((long)register0x00000020 + -0xd8);
        *(undefined8 *)((long)register0x00000020 + -0x238) =
             *(undefined8 *)((long)register0x00000020 + -0xe0);
        *(undefined1 *)((long)register0x00000020 + -0x230) = 0;
        *(undefined8 *)((long)register0x00000020 + -600) = 0x5838e5;
        runtime_newproc((int32)*(undefined8 *)((long)register0x00000020 + -0xd0),
                        (runtime_funcval *)mVar19.~r3.data);
        parent_00.data = mVar19.~r3.data;
      }
LAB_0058398b:
      *(undefined **)((long)register0x00000020 + -0x250) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x248) = &net_http__stmp_76;
      *(undefined8 *)((long)register0x00000020 + -600) = 0x5839a7;
      e.data = parent_00.data;
      e._type = (runtime__type *)&net_http__stmp_76;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar7 + -8) = 0x5839ad;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar7;
  } while( true );
}

