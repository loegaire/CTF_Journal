
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.cgoLookupPort(context.Context ctx, string network, string
   service, int port, error err, bool completed) */

multireturn_int_error_bool_ net_cgoLookupPort(context_Context ctx,string network,string service)

{
  byte bVar1;
  runtime_tmpBuf *buf;
  undefined8 uVar2;
  long lVar3;
  runtime_itab *tab;
  long lVar4;
  code *pcVar5;
  void *y;
  undefined8 uVar6;
  short *psVar7;
  runtime_itab *prVar8;
  long extraout_RDX;
  uint8 *puVar9;
  runtime_funcval *fn;
  void *x;
  undefined1 *puVar10;
  undefined1 *unaff_RBP;
  undefined1 uVar11;
  char cVar12;
  uint8 *nrecvs;
  uint8 *nsends;
  uint8 *puVar13;
  int in_R9;
  long in_FS_OFFSET;
  bool bVar14;
  string sVar15;
  string service_00;
  multireturn_int_bool_ mVar16;
  multireturn_int_error__conflict13 mVar17;
  string network_00;
  string a0;
  string a2;
  multireturn_int_error_bool_ mVar18;
  multireturn_int_error_bool_ mVar19;
  multireturn_int_error_bool_ mVar20;
  multireturn_int_error_bool_ mVar21;
  context_Context ctx_spill;
  string network_spill;
  string service_spill;
  
  puVar13 = (uint8 *)service.len;
  nrecvs = service.str;
  nsends = (uint8 *)network.len;
  puVar9 = ctx.data;
  do {
                    /* Unresolved local var: net._Ctype_struct_addrinfo * &hints@[???]
                       Unresolved local var: chan_net.portLookupResult result@[???] */
    puVar10 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x48)) {
      puVar10 = (undefined1 *)((long)register0x00000020 + -200);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(undefined **)((long)register0x00000020 + -200) = &DAT_00272e80;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a44ff;
      runtime_newobject((runtime__type *)&DAT_00272e80);
      lVar3 = *(long *)((long)register0x00000020 + -0xc0);
      *(long *)((long)register0x00000020 + -0x48) = lVar3;
      lVar4 = *(long *)((long)register0x00000020 + 0x20);
      if (lVar4 == 0) {
                    /* Unresolved local var: uint8 n@[???] */
        psVar7 = *(short **)((long)register0x00000020 + 0x18);
        bVar14 = true;
      }
      else {
        if (lVar4 == 3) {
          psVar7 = *(short **)((long)register0x00000020 + 0x18);
          if ((*psVar7 != 0x6374) || ((char)psVar7[1] != 'p')) {
            if ((*psVar7 != 0x6475) || ((char)psVar7[1] != 'p')) goto LAB_005a49ed;
            bVar14 = false;
LAB_005a4661:
            *(undefined8 *)(lVar3 + 8) = 0x1100000002;
            goto LAB_005a466f;
          }
          bVar14 = false;
        }
        else {
          if (lVar4 != 4) {
LAB_005a49ed:
            *(undefined **)((long)register0x00000020 + -200) = &DAT_0026dea0;
            *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a49fd;
            runtime_newobject((runtime__type *)&DAT_0026dea0);
            buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0xc0);
            *(runtime_tmpBuf **)((long)register0x00000020 + -0x58) = buf;
            *(uint8 *)((long)buf + 8) = 0xf;
            *(uint8 *)((long)buf + 9) = 0;
            *(uint8 *)((long)buf + 10) = 0;
            *(uint8 *)((long)buf + 0xb) = 0;
            *(uint8 *)((long)buf + 0xc) = 0;
            *(uint8 *)((long)buf + 0xd) = 0;
            *(uint8 *)((long)buf + 0xe) = 0;
            *(uint8 *)((long)buf + 0xf) = 0;
            *(undefined **)*buf = &DAT_002991cc;
            *(undefined8 *)((long)register0x00000020 + -200) = 0;
            *(undefined8 *)((long)register0x00000020 + -0xc0) =
                 *(undefined8 *)((long)register0x00000020 + 0x18);
            *(undefined8 *)((long)register0x00000020 + -0xb8) =
                 *(undefined8 *)((long)register0x00000020 + 0x20);
            *(undefined1 **)((long)register0x00000020 + -0xb0) = &net__stmp_87;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 1;
            *(undefined8 *)((long)register0x00000020 + -0xa0) =
                 *(undefined8 *)((long)register0x00000020 + 0x28);
            *(int *)((long)register0x00000020 + -0x98) = *(int *)((long)register0x00000020 + 0x30);
            *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a4a6f;
            sVar15.len = (int)nrecvs;
            sVar15.str = nsends;
            a0.len = *(int *)((long)register0x00000020 + 0x30);
            a0.str = puVar9;
            a2.len = in_R9;
            a2.str = puVar13;
            sVar15 = runtime_concatstring3(buf,a0,sVar15,a2);
            cVar12 = (char)nsends;
            mVar21.err.tab = sVar15.len;
            uVar2 = *(undefined8 *)((long)register0x00000020 + -0x90);
            uVar6 = *(undefined8 *)((long)register0x00000020 + -0x88);
            lVar3 = *(long *)((long)register0x00000020 + -0x58);
            *(undefined8 *)(lVar3 + 0x18) = uVar6;
            if (runtime_writeBarrier._0_4_ == 0) {
              *(undefined8 *)(lVar3 + 0x10) = uVar2;
            }
            else {
              cVar12 = (char)lVar3 + '\x10';
              *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a4a9a;
              runtime_gcWriteBarrier();
              lVar3 = extraout_RDX;
            }
            *(undefined8 *)((long)register0x00000020 + 0x38) = 0;
            *(undefined1 **)((long)register0x00000020 + 0x40) = go_itab__net_DNSError_error;
            *(long *)((long)register0x00000020 + 0x48) = lVar3;
            *(undefined1 *)((long)register0x00000020 + 0x50) = 1;
            mVar21.port = (int)go_itab__net_DNSError_error;
            mVar21.completed = (bool)cVar12;
            mVar21.err.data = (void *)uVar6;
            return mVar21;
          }
          *(undefined8 *)((long)register0x00000020 + -200) =
               *(undefined8 *)((long)register0x00000020 + 0x18);
          *(undefined8 *)((long)register0x00000020 + -0xc0) = 4;
          *(undefined **)((long)register0x00000020 + -0xb8) = &DAT_00288785;
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 4;
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a459c;
          runtime_cmpstring();
          if (0 < *(long *)((long)register0x00000020 + -0xa8)) {
            if (**(int **)((long)register0x00000020 + 0x18) == 0x34706475) {
              lVar4 = *(long *)((long)register0x00000020 + 0x20);
              bVar14 = lVar4 == 0;
              lVar3 = *(long *)((long)register0x00000020 + -0x48);
              psVar7 = *(short **)((long)register0x00000020 + 0x18);
            }
            else {
              if (**(int **)((long)register0x00000020 + 0x18) != 0x36706475) goto LAB_005a49ed;
              lVar4 = *(long *)((long)register0x00000020 + 0x20);
              bVar14 = lVar4 == 0;
              lVar3 = *(long *)((long)register0x00000020 + -0x48);
              psVar7 = *(short **)((long)register0x00000020 + 0x18);
            }
            goto LAB_005a4661;
          }
          if (**(int **)((long)register0x00000020 + 0x18) == 0x34706374) {
            lVar4 = *(long *)((long)register0x00000020 + 0x20);
            bVar14 = lVar4 == 0;
            lVar3 = *(long *)((long)register0x00000020 + -0x48);
            psVar7 = *(short **)((long)register0x00000020 + 0x18);
          }
          else {
            if (**(int **)((long)register0x00000020 + 0x18) != 0x36706374) goto LAB_005a49ed;
            lVar4 = *(long *)((long)register0x00000020 + 0x20);
            bVar14 = lVar4 == 0;
            lVar3 = *(long *)((long)register0x00000020 + -0x48);
            psVar7 = *(short **)((long)register0x00000020 + 0x18);
          }
        }
        *(undefined8 *)(lVar3 + 8) = 0x600000001;
      }
LAB_005a466f:
      if (bVar14) {
        fn = (runtime_funcval *)0x0;
      }
      else {
        bVar1 = *(byte *)(lVar4 + -1 + (long)psVar7);
        fn = (runtime_funcval *)(ulong)bVar1;
        if ((bVar1 != 0x34) && (bVar1 != 0x36)) {
          fn = (runtime_funcval *)0x0;
        }
      }
      if ((char)fn == '4') {
        *(undefined4 *)(lVar3 + 4) = 2;
      }
      else if ((char)fn == '6') {
        *(undefined4 *)(lVar3 + 4) = 0x1c;
      }
      pcVar5 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -200) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a46bb;
      (*pcVar5)();
      if (*(long *)((long)register0x00000020 + -0xc0) == 0) {
                    /* Unresolved local var: int port@[???]
                       Unresolved local var: error err@[???] */
        *(undefined8 *)((long)register0x00000020 + -200) =
             *(undefined8 *)((long)register0x00000020 + -0x48);
        *(undefined8 *)((long)register0x00000020 + -0xc0) =
             *(undefined8 *)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0xb8) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(undefined8 *)((long)register0x00000020 + -0xb0) =
             *(undefined8 *)((long)register0x00000020 + 0x28);
        *(net__Ctype_struct_addrinfo **)((long)register0x00000020 + -0xa8) =
             *(net__Ctype_struct_addrinfo **)((long)register0x00000020 + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a49a6;
        service_00.len = (int)nrecvs;
        service_00.str = nsends;
        network_00.len = (int)pcVar5;
        network_00.str = (uint8 *)fn;
        mVar17 = net_cgoLookupServicePort
                           (*(net__Ctype_struct_addrinfo **)((long)register0x00000020 + 0x30),
                            network_00,service_00);
        mVar20.err.tab = mVar17.err.tab;
        *(undefined8 *)((long)register0x00000020 + 0x38) =
             *(undefined8 *)((long)register0x00000020 + -0xa0);
        *(undefined8 *)((long)register0x00000020 + 0x40) =
             *(undefined8 *)((long)register0x00000020 + -0x98);
        *(undefined8 *)((long)register0x00000020 + 0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x90);
        *(undefined1 *)((long)register0x00000020 + 0x50) = 1;
        mVar20.port = *(undefined8 *)((long)register0x00000020 + -0xa0);
        mVar20.completed = SUB81(nsends,0);
        mVar20.err.data = (void *)*(undefined8 *)((long)register0x00000020 + -0x98);
        return mVar20;
      }
      *(undefined **)((long)register0x00000020 + -200) = &DAT_00222d20;
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 1;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a46e5;
      runtime_makechan((runtime_chantype *)&DAT_00222d20,(int)fn);
      *(undefined8 *)((long)register0x00000020 + -0x70) =
           *(undefined8 *)((long)register0x00000020 + -0xb8);
      *(undefined4 *)((long)register0x00000020 + -200) = 0x30;
      *(undefined ***)((long)register0x00000020 + -0xc0) = &PTR_net_cgoPortLookup_002b34b0;
      *(undefined8 *)((long)register0x00000020 + -0xb0) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0xa8) =
           *(undefined8 *)((long)register0x00000020 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -0xa0) =
           *(undefined8 *)((long)register0x00000020 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x98) =
           *(undefined8 *)((long)register0x00000020 + 0x28);
      *(undefined8 *)((long)register0x00000020 + -0x90) =
           *(undefined8 *)((long)register0x00000020 + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a4748;
      runtime_newproc((int32)*(undefined8 *)((long)register0x00000020 + -0xb8),fn);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
      pcVar5 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -200) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a477b;
      (*pcVar5)();
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x18) =
           *(undefined8 *)((long)register0x00000020 + -0x70);
      *(uintptr **)((long)register0x00000020 + -0x10) =
           (uintptr *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x28) =
           *(undefined8 *)((long)register0x00000020 + -0xc0);
      *(undefined1 **)((long)register0x00000020 + -200) =
           (undefined1 *)((long)register0x00000020 + -0x28);
      *(runtime_scase **)((long)register0x00000020 + -0xc0) =
           (runtime_scase *)((long)register0x00000020 + -0x78);
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 2;
      *(undefined1 *)((long)register0x00000020 + -0xa0) = 1;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a47f8;
      mVar16 = runtime_selectgo((runtime_scase *)((long)register0x00000020 + -0x78),(uint16 *)fn,
                                (uintptr *)((long)register0x00000020 + -0x40),(int)nsends,
                                (int)nrecvs,SUB81(puVar13,0));
      mVar18.err.tab._0_1_ = mVar16.~r7;
      puVar9 = (uint8 *)(ulong)mVar18.err.tab._0_1_;
      if (*(long *)((long)register0x00000020 + -0x98) == 0) {
        pcVar5 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x28);
        *(undefined8 *)((long)register0x00000020 + -200) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a4871;
        (*pcVar5)();
        uVar11 = SUB81(nsends,0);
        tab = *(runtime_itab **)((long)register0x00000020 + -0xc0);
        *(runtime_itab **)((long)register0x00000020 + -0x80) = tab;
        y = *(void **)((long)register0x00000020 + -0xb8);
        *(void **)((long)register0x00000020 + -0x68) = y;
        prVar8 = *(runtime_itab **)((long)register0x00000020 + -0xc0);
        x = *(void **)((long)register0x00000020 + -0xb8);
        if (context_Canceled.tab == prVar8) {
          *(void **)((long)register0x00000020 + -0x60) = x;
          *(runtime_itab **)((long)register0x00000020 + -0x50) = prVar8;
          *(runtime_itab **)((long)register0x00000020 + -200) = prVar8;
          *(void **)((long)register0x00000020 + -0xc0) = x;
          *(void **)((long)register0x00000020 + -0xb8) = context_Canceled.data;
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a48bc;
          runtime_ifaceeq(tab,x,y);
          tab = net_errCanceled.tab;
          y = net_errCanceled.data;
          if (*(char *)((long)register0x00000020 + -0xb0) != '\0') goto LAB_005a492c;
          tab = *(runtime_itab **)((long)register0x00000020 + -0x80);
          y = *(void **)((long)register0x00000020 + -0x68);
          prVar8 = *(runtime_itab **)((long)register0x00000020 + -0x50);
          x = *(void **)((long)register0x00000020 + -0x60);
        }
        if (context_DeadlineExceeded.tab == prVar8) {
          *(runtime_itab **)((long)register0x00000020 + -200) = prVar8;
          *(void **)((long)register0x00000020 + -0xc0) = x;
          *(void **)((long)register0x00000020 + -0xb8) = context_DeadlineExceeded.data;
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x5a490a;
          runtime_ifaceeq(tab,x,y);
          tab = net_errTimeout.tab;
          y = net_errTimeout.data;
          if (*(char *)((long)register0x00000020 + -0xb0) == '\0') {
            tab = *(runtime_itab **)((long)register0x00000020 + -0x80);
            y = *(void **)((long)register0x00000020 + -0x68);
          }
        }
LAB_005a492c:
        *(undefined8 *)((long)register0x00000020 + 0x38) = 0;
        *(runtime_itab **)((long)register0x00000020 + 0x40) = tab;
        *(void **)((long)register0x00000020 + 0x48) = y;
        *(undefined1 *)((long)register0x00000020 + 0x50) = 0;
        mVar19.err.tab = x;
        mVar19.port = (int)tab;
        mVar19.completed = (bool)uVar11;
        mVar19.err.data = y;
        return mVar19;
      }
      if (*(long *)((long)register0x00000020 + -0x98) == 1) {
        *(undefined8 *)((long)register0x00000020 + 0x38) =
             *(undefined8 *)((long)register0x00000020 + -0x40);
        *(undefined8 *)((long)register0x00000020 + 0x40) =
             *(undefined8 *)((long)register0x00000020 + -0x38);
        *(undefined8 *)((long)register0x00000020 + 0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x30);
        *(undefined1 *)((long)register0x00000020 + 0x50) = 1;
        mVar18.port = *(undefined8 *)((long)register0x00000020 + -0x40);
        mVar18.err.tab._1_7_ = 0;
        mVar18.completed = SUB81(nsends,0);
        mVar18.err.data = (void *)*(undefined8 *)((long)register0x00000020 + -0x38);
        return mVar18;
      }
    }
    *(undefined8 *)(puVar10 + -8) = 0x5a4adb;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar10;
  } while( true );
}

