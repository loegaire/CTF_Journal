
/* WARNING: Unknown calling convention */

void net_sortByRFC6724withSrcs(__net_IPAddr addrs,__net_IP srcs)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int cap;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *extraout_RDX;
  undefined1 *puVar10;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  sort_Interface data;
  interface___ e;
  net_IP ip;
  net_IP ip_00;
  __net_IPAddr addrs_spill;
  __net_IP srcs_spill;
  
  e.data = (void *)addrs.len;
  do {
                    /* Unresolved local var: []net.ipAttr addrAttr@[???]
                       Unresolved local var: []net.ipAttr srcAttr@[???] */
    puVar10 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar10 = (undefined1 *)((long)register0x00000020 + -0x78);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar8 = *(long *)((long)register0x00000020 + 0x10);
      if (*(long *)((long)register0x00000020 + 0x28) == lVar8) {
        *(undefined **)((long)register0x00000020 + -0x78) = &DAT_00257760;
        *(long *)((long)register0x00000020 + -0x70) = lVar8;
        *(long *)((long)register0x00000020 + -0x68) = lVar8;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x57e0f4;
        runtime_makeslice((runtime__type *)&DAT_00257760,(int)e.data,lVar8);
        *(runtime__type **)((long)register0x00000020 + -0x38) =
             *(runtime__type **)((long)register0x00000020 + -0x60);
        *(undefined **)((long)register0x00000020 + -0x78) = &DAT_00257760;
        cap = *(int *)((long)register0x00000020 + 0x28);
        *(int *)((long)register0x00000020 + -0x70) = cap;
        *(int *)((long)register0x00000020 + -0x68) = cap;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x57e125;
        runtime_makeslice(*(runtime__type **)((long)register0x00000020 + -0x60),(int)e.data,cap);
        *(undefined8 *)((long)register0x00000020 + -0x40) =
             *(undefined8 *)((long)register0x00000020 + -0x60);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: net.IPAddr v@[???] */
        if (0 < *(long *)((long)register0x00000020 + 0x10)) {
          puVar9 = *(undefined8 **)((long)register0x00000020 + 8);
          lVar8 = 0;
          while( true ) {
            *(long *)((long)register0x00000020 + -0x58) = lVar8;
            *(undefined8 **)((long)register0x00000020 + -0x48) = puVar9;
            *(undefined8 *)((long)register0x00000020 + -0x30) = *puVar9;
            uVar7 = puVar9[2];
            *(undefined8 *)((long)register0x00000020 + -0x28) = puVar9[1];
            *(undefined8 *)((long)register0x00000020 + -0x20) = uVar7;
            uVar7 = puVar9[4];
            *(undefined8 *)((long)register0x00000020 + -0x18) = puVar9[3];
            *(undefined8 *)((long)register0x00000020 + -0x10) = uVar7;
            *(undefined8 *)((long)register0x00000020 + -0x78) =
                 *(undefined8 *)((long)register0x00000020 + -0x30);
            *(int *)((long)register0x00000020 + -0x70) = *(int *)((long)register0x00000020 + -0x28);
            *(undefined8 *)((long)register0x00000020 + -0x68) =
                 *(undefined8 *)((long)register0x00000020 + -0x20);
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x57e2c5;
            ip.len = lVar8;
            ip.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + -0x30);
            ip.cap = *(int *)((long)register0x00000020 + -0x28);
            net_ipAttrOf(ip);
            lVar8 = *(long *)((long)register0x00000020 + -0x58);
            lVar6 = lVar8 * 3;
            *(long *)((long)register0x00000020 + -0x50) = lVar6;
            uVar1 = *(undefined1 *)((long)register0x00000020 + -0x5f);
            uVar2 = *(undefined1 *)((long)register0x00000020 + -0x5e);
            lVar3 = *(long *)((long)register0x00000020 + -0x38);
            *(undefined1 *)(lVar3 + lVar6) = *(undefined1 *)((long)register0x00000020 + -0x60);
            *(undefined1 *)(lVar3 + 1 + lVar6) = uVar1;
            *(undefined1 *)(lVar3 + 2 + lVar6) = uVar2;
            lVar3 = *(long *)((long)register0x00000020 + 0x20);
            uVar7 = *(undefined8 *)(lVar3 + lVar8 * 0x18);
            uVar4 = *(undefined8 *)(lVar3 + 8 + lVar8 * 0x18);
            uVar5 = *(undefined8 *)(lVar3 + 0x10 + lVar8 * 0x18);
            *(undefined8 *)((long)register0x00000020 + -0x78) = uVar7;
            *(undefined8 *)((long)register0x00000020 + -0x70) = uVar4;
            *(undefined8 *)((long)register0x00000020 + -0x68) = uVar5;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x57e31c;
            ip_00.len = uVar7;
            ip_00.array = (uint8 *)lVar8;
            ip_00.cap = lVar6;
            net_ipAttrOf(ip_00);
            uVar1 = *(undefined1 *)((long)register0x00000020 + -0x5f);
            uVar2 = *(undefined1 *)((long)register0x00000020 + -0x5e);
            e.data = *(void **)((long)register0x00000020 + -0x50);
            lVar8 = *(long *)((long)register0x00000020 + -0x40);
            *(undefined1 *)(lVar8 + (long)e.data) =
                 *(undefined1 *)((long)register0x00000020 + -0x60);
            *(undefined1 *)(lVar8 + 1 + (long)e.data) = uVar1;
            *(undefined1 *)(lVar8 + 2 + (long)e.data) = uVar2;
            lVar8 = *(long *)((long)register0x00000020 + -0x58) + 1;
            if (*(long *)((long)register0x00000020 + 0x10) <= lVar8) break;
            puVar9 = (undefined8 *)(*(long *)((long)register0x00000020 + -0x48) + 0x28);
          }
        }
        *(undefined **)((long)register0x00000020 + -0x78) = &DAT_002630a0;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x57e15b;
        runtime_newobject((runtime__type *)&DAT_002630a0);
        puVar9 = *(undefined8 **)((long)register0x00000020 + -0x70);
        uVar7 = *(undefined8 *)((long)register0x00000020 + 0x10);
        puVar9[1] = uVar7;
        puVar9[2] = *(undefined8 *)((long)register0x00000020 + 0x18);
        if (runtime_writeBarrier._0_4_ == 0) {
          *puVar9 = *(undefined8 *)((long)register0x00000020 + 8);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x57e19c;
          runtime_gcWriteBarrierCX();
          uVar7 = extraout_RAX;
        }
        puVar9[4] = uVar7;
        puVar9[5] = uVar7;
        if (runtime_writeBarrier._0_4_ == 0) {
          puVar9[3] = *(undefined8 *)((long)register0x00000020 + -0x38);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x57e1cc;
          runtime_gcWriteBarrierDX();
        }
        uVar7 = *(undefined8 *)((long)register0x00000020 + 0x28);
        puVar9[7] = uVar7;
        puVar9[8] = *(undefined8 *)((long)register0x00000020 + 0x30);
        if (runtime_writeBarrier._0_4_ == 0) {
          puVar9[6] = *(undefined8 *)((long)register0x00000020 + 0x20);
        }
        else {
          e.data = *(void **)((long)register0x00000020 + 0x20);
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x57e215;
          runtime_gcWriteBarrierBX();
          uVar7 = extraout_RAX_00;
          puVar9 = extraout_RDX;
        }
        puVar9[10] = uVar7;
        puVar9[0xb] = uVar7;
        if (runtime_writeBarrier._0_4_ == 0) {
          puVar9[9] = *(undefined8 *)((long)register0x00000020 + -0x40);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x57e248;
          runtime_gcWriteBarrierDX();
        }
        *(undefined1 **)((long)register0x00000020 + -0x78) = go_itab__net_byRFC6724_sort_Interface;
        *(undefined8 **)((long)register0x00000020 + -0x70) = puVar9;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x57e265;
        data.data = e.data;
        data.tab = (runtime_itab *)go_itab__net_byRFC6724_sort_Interface;
        sort_Stable(data);
        return;
      }
      *(undefined **)((long)register0x00000020 + -0x78) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x70) = &net_http__stmp_270;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x57e37a;
      e._type = (runtime__type *)&net_http__stmp_270;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar10 + -8) = 0x57e385;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar10;
  } while( true );
}

