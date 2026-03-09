
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.cgoLookupIP(context.Context ctx, string network, string name,
   []net.IPAddr addrs, error err, bool completed) */

multireturn___net_IPAddr_error_bool_ net_cgoLookupIP(context_Context ctx,string network,string name)

{
  runtime_itab *tab;
  code *pcVar1;
  void *y;
  runtime_itab *prVar2;
  runtime_funcval *fn;
  void *pvVar3;
  undefined1 *puVar4;
  undefined1 *unaff_RBP;
  uint8 *nrecvs;
  undefined8 uVar5;
  int nsends;
  int iVar6;
  long in_FS_OFFSET;
  string network_00;
  string name_00;
  multireturn_int_bool_ mVar7;
  multireturn___net_IPAddr_error_bool_ mVar8;
  multireturn___net_IPAddr_error_bool_ mVar9;
  multireturn___net_IPAddr_error_bool_ mVar10;
  multireturn___net_IPAddr_string_error_ mVar11;
  context_Context ctx_spill;
  string network_spill;
  string name_spill;
  
  iVar6 = name.len;
  nrecvs = name.str;
  nsends = network.len;
  fn = ctx.data;
  do {
                    /* Unresolved local var: chan_net.ipLookupResult result@[???] */
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0xa0)) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x120);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x120) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x5a5ecc;
      (*pcVar1)();
      if (*(long *)((long)register0x00000020 + -0x118) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x120) =
             *(undefined8 *)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x118) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(undefined8 *)((long)register0x00000020 + -0x110) =
             *(undefined8 *)((long)register0x00000020 + 0x28);
        *(uint8 **)((long)register0x00000020 + -0x108) =
             *(uint8 **)((long)register0x00000020 + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x5a6236;
        network_00.len = (int)fn;
        network_00.str = *(uint8 **)((long)register0x00000020 + 0x30);
        name_00.len = nsends;
        name_00.str = (uint8 *)pcVar1;
        mVar11 = net_cgoLookupIPCNAME(network_00,name_00);
        mVar10.err.tab = mVar11.cname.str;
        *(undefined8 *)((long)register0x00000020 + 0x38) =
             *(undefined8 *)((long)register0x00000020 + -0x100);
        *(undefined8 *)((long)register0x00000020 + 0x40) =
             *(undefined8 *)((long)register0x00000020 + -0xf8);
        *(undefined8 *)((long)register0x00000020 + 0x48) =
             *(undefined8 *)((long)register0x00000020 + -0xf0);
        *(int *)((long)register0x00000020 + 0x50) = *(int *)((long)register0x00000020 + -0xd8);
        *(undefined8 *)((long)register0x00000020 + 0x58) =
             *(undefined8 *)((long)register0x00000020 + -0xd0);
        *(undefined1 *)((long)register0x00000020 + 0x60) = 1;
        mVar10.addrs.len = *(undefined8 *)((long)register0x00000020 + -0xf0);
        mVar10.addrs.array = (net_IPAddr *)*(undefined8 *)((long)register0x00000020 + -0x100);
        mVar10.err.data = (void *)*(undefined8 *)((long)register0x00000020 + -0xd0);
        mVar10.addrs.cap = *(int *)((long)register0x00000020 + -0xd8);
        mVar10.completed = mVar11.err.tab._0_1_;
        return mVar10;
      }
      *(undefined **)((long)register0x00000020 + -0x120) = &DAT_00222ce0;
      *(undefined8 *)((long)register0x00000020 + -0x118) = 1;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x5a5ef1;
      runtime_makechan((runtime_chantype *)&DAT_00222ce0,(int)fn);
      *(undefined8 *)((long)register0x00000020 + -0xb8) =
           *(undefined8 *)((long)register0x00000020 + -0x110);
      *(undefined4 *)((long)register0x00000020 + -0x120) = 0x28;
      *(undefined ***)((long)register0x00000020 + -0x118) = &PTR_net_cgoIPLookup_002b34a8;
      *(undefined8 *)((long)register0x00000020 + -0x108) =
           *(undefined8 *)((long)register0x00000020 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -0x100) =
           *(undefined8 *)((long)register0x00000020 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0xf8) =
           *(undefined8 *)((long)register0x00000020 + 0x28);
      *(undefined8 *)((long)register0x00000020 + -0xf0) =
           *(undefined8 *)((long)register0x00000020 + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x5a5f47;
      runtime_newproc((int32)*(undefined8 *)((long)register0x00000020 + -0x110),fn);
                    /* Unresolved local var: net.ipLookupResult r@[???] */
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
      pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x120) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x5a5f9d;
      (*pcVar1)();
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x88) =
           *(undefined8 *)((long)register0x00000020 + -0xb8);
      *(uintptr **)((long)register0x00000020 + -0x80) =
           (uintptr *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x98) =
           *(undefined8 *)((long)register0x00000020 + -0x118);
      *(undefined1 **)((long)register0x00000020 + -0x120) =
           (undefined1 *)((long)register0x00000020 + -0x98);
      *(runtime_scase **)((long)register0x00000020 + -0x118) =
           (runtime_scase *)((long)register0x00000020 + -0xc0);
      *(undefined8 *)((long)register0x00000020 + -0x110) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x108) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 2;
      *(undefined1 *)((long)register0x00000020 + -0xf8) = 1;
      *(undefined8 *)((long)register0x00000020 + -0x128) = 0x5a601a;
      mVar7 = runtime_selectgo((runtime_scase *)((long)register0x00000020 + -0xc0),(uint16 *)fn,
                               (uintptr *)((long)register0x00000020 + -0x40),nsends,(int)nrecvs,
                               SUB81(iVar6,0));
      mVar8.completed = (undefined1)iVar6;
      fn = (runtime_funcval *)CONCAT71((int7)((ulong)fn >> 8),mVar7.~r7);
      if (*(long *)((long)register0x00000020 + -0xf0) == 0) {
        pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x120) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x128) = 0x5a60f5;
        (*pcVar1)();
        pvVar3 = context_Canceled.data;
        tab = *(runtime_itab **)((long)register0x00000020 + -0x118);
        *(runtime_itab **)((long)register0x00000020 + -200) = tab;
        y = *(void **)((long)register0x00000020 + -0x110);
        *(void **)((long)register0x00000020 + -0xb0) = y;
        prVar2 = *(runtime_itab **)((long)register0x00000020 + -0x118);
        uVar5 = *(undefined8 *)((long)register0x00000020 + -0x110);
        if (context_Canceled.tab == prVar2) {
          *(runtime_itab **)((long)register0x00000020 + -0xa0) = prVar2;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = uVar5;
          *(runtime_itab **)((long)register0x00000020 + -0x120) = prVar2;
          *(undefined8 *)((long)register0x00000020 + -0x118) = uVar5;
          *(void **)((long)register0x00000020 + -0x110) = context_Canceled.data;
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x5a6149;
          runtime_ifaceeq(tab,context_Canceled.data,y);
          tab = net_errCanceled.tab;
          y = net_errCanceled.data;
          if (*(char *)((long)register0x00000020 + -0x108) != '\0') goto LAB_005a61bd;
          tab = *(runtime_itab **)((long)register0x00000020 + -200);
          y = *(void **)((long)register0x00000020 + -0xb0);
          prVar2 = *(runtime_itab **)((long)register0x00000020 + -0xa0);
          uVar5 = *(undefined8 *)((long)register0x00000020 + -0xa8);
        }
        pvVar3 = context_DeadlineExceeded.data;
        if (context_DeadlineExceeded.tab == prVar2) {
          *(runtime_itab **)((long)register0x00000020 + -0x120) = prVar2;
          *(undefined8 *)((long)register0x00000020 + -0x118) = uVar5;
          *(void **)((long)register0x00000020 + -0x110) = context_DeadlineExceeded.data;
          *(undefined8 *)((long)register0x00000020 + -0x128) = 0x5a619c;
          runtime_ifaceeq(tab,context_DeadlineExceeded.data,y);
          tab = net_errTimeout.tab;
          y = net_errTimeout.data;
          if (*(char *)((long)register0x00000020 + -0x108) == '\0') {
            tab = *(runtime_itab **)((long)register0x00000020 + -200);
            y = *(void **)((long)register0x00000020 + -0xb0);
          }
        }
LAB_005a61bd:
        *(undefined8 *)((long)register0x00000020 + 0x38) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x40) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x48) = 0;
        *(runtime_itab **)((long)register0x00000020 + 0x50) = tab;
        *(void **)((long)register0x00000020 + 0x58) = y;
        *(undefined1 *)((long)register0x00000020 + 0x60) = 0;
        mVar9.addrs.len = (int)pvVar3;
        mVar9.addrs.array = (net_IPAddr *)tab;
        mVar9.err.data = (void *)uVar5;
        mVar9.err.tab = (runtime_itab *)nsends;
        mVar9.addrs.cap = (int)y;
        mVar9.completed = (bool)mVar8.completed;
        return mVar9;
      }
      if (*(long *)((long)register0x00000020 + -0xf0) == 1) {
        *(undefined8 *)((long)register0x00000020 + -0x78) =
             *(undefined8 *)((long)register0x00000020 + -0x40);
        *(undefined8 *)((long)register0x00000020 + -0x70) =
             *(undefined8 *)((long)register0x00000020 + -0x38);
        *(undefined8 *)((long)register0x00000020 + -0x68) =
             *(undefined8 *)((long)register0x00000020 + -0x30);
        *(undefined8 *)((long)register0x00000020 + -0x60) =
             *(undefined8 *)((long)register0x00000020 + -0x28);
        *(undefined8 *)((long)register0x00000020 + -0x58) =
             *(undefined8 *)((long)register0x00000020 + -0x20);
        *(undefined8 *)((long)register0x00000020 + -0x50) =
             *(undefined8 *)((long)register0x00000020 + -0x18);
        *(undefined8 *)((long)register0x00000020 + -0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        *(undefined8 *)((long)register0x00000020 + 0x38) =
             *(undefined8 *)((long)register0x00000020 + -0x78);
        *(int *)((long)register0x00000020 + 0x40) = *(int *)((long)register0x00000020 + -0x70);
        *(undefined8 *)((long)register0x00000020 + 0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x68);
        *(undefined8 *)((long)register0x00000020 + 0x50) =
             *(undefined8 *)((long)register0x00000020 + -0x50);
        *(undefined8 *)((long)register0x00000020 + 0x58) =
             *(undefined8 *)((long)register0x00000020 + -0x48);
        *(undefined1 *)((long)register0x00000020 + 0x60) = 1;
        mVar8.addrs.len = *(undefined8 *)((long)register0x00000020 + -0x50);
        mVar8.addrs.array = (net_IPAddr *)*(undefined8 *)((long)register0x00000020 + -0x78);
        mVar8.err.data = (void *)*(undefined8 *)((long)register0x00000020 + -0x48);
        mVar8.err.tab = (runtime_itab *)nsends;
        mVar8.addrs.cap = *(int *)((long)register0x00000020 + -0x70);
        return mVar8;
      }
    }
    *(undefined8 *)(puVar4 + -8) = 0x5a6295;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}

