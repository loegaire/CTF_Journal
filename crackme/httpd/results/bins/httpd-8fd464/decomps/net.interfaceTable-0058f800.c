
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.interfaceTable(int ifindex, []net.Interface ~r1, error ~r2) */

multireturn___net_Interface_error_ net_interfaceTable(int ifindex)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  vendor_golang_org_x_net_route_InterfaceMessage *pvVar4;
  vendor_golang_org_x_net_route_InterfaceMessage *pvVar5;
  vendor_golang_org_x_net_route_InterfaceMessage *pvVar6;
  vendor_golang_org_x_net_route_InterfaceMessage *extraout_RAX;
  vendor_golang_org_x_net_route_InterfaceMessage *extraout_RAX_00;
  vendor_golang_org_x_net_route_InterfaceMessage *pvVar7;
  vendor_golang_org_x_net_route_InterfaceMessage *pvVar8;
  long lVar9;
  long extraout_RDX;
  vendor_golang_org_x_net_route_InterfaceMessage *extraout_RDX_00;
  vendor_golang_org_x_net_route_InterfaceMessage *pvVar10;
  long lVar11;
  vendor_golang_org_x_net_route_InterfaceMessage *pvVar12;
  void *pvVar13;
  vendor_golang_org_x_net_route_InterfaceMessage *pvVar14;
  runtime_itab *prVar15;
  runtime_itab *prVar16;
  long lVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  multireturn___vendor_golang_org_x_net_route_Message_error__conflict mVar19;
  multireturn___net_Interface_error_ mVar20;
  multireturn___net_Interface_error_ mVar21;
  multireturn___net_Interface_error_ mVar22;
  int ifindex_spill;
  vendor_golang_org_x_net_route_InterfaceMessage *local_88;
  vendor_golang_org_x_net_route_InterfaceMessage *local_80;
  vendor_golang_org_x_net_route_InterfaceMessage *local_78;
  long local_70;
  int local_68;
  vendor_golang_org_x_net_route_InterfaceMessage *local_10;
  
  pvVar6 = local_80;
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: []vendor/golang.org/x/net/route.Message msgs@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: []net.Interface ift@[???] */
  while (&local_10 <=
         *(vendor_golang_org_x_net_route_InterfaceMessage ***)(*(long *)(in_FS_OFFSET + -8) + 0x10))
  {
    runtime_morestack_noctxt();
  }
  mVar19 = net_interfaceMessages(ifindex_spill);
  pvVar13 = mVar19.~r2.data;
  pvVar14 = mVar19.~r2.tab;
                    /* Unresolved local var: vendor/golang.org/x/net/route.Message m@[???] */
  if (local_70 != 0) {
    mVar20.~r1.len = (int)local_88;
    mVar20.~r1.array = (net_Interface *)local_70;
    mVar20.~r1.cap = local_68;
    mVar20.~r2 = mVar19.~r2;
    return mVar20;
  }
  pvVar8 = local_80;
  if (ifindex_spill != 0) {
    pvVar8 = (vendor_golang_org_x_net_route_InterfaceMessage *)0x1;
  }
  runtime_makeslice((runtime__type *)ifindex_spill,(int)local_88,1);
  pvVar7 = local_78;
  pvVar12 = local_88;
  if ((long)local_80 < 1) {
    mVar22.~r1.len = (vendor_golang_org_x_net_route_InterfaceMessage *)0x0;
    ifindex_spill = (int)pvVar13;
LAB_0058f909:
    if (pvVar8 < mVar22.~r1.len) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    mVar21.~r1.len = (int)pvVar12;
    mVar21.~r1.array = (net_Interface *)pvVar7;
    mVar21.~r1.cap = (int)mVar22.~r1.len;
    mVar21.~r2.data = (void *)ifindex_spill;
    mVar21.~r2.tab = (runtime_itab *)pvVar14;
    return mVar21;
  }
  local_10 = local_78;
  lVar9 = 0;
  mVar22.~r1.len = (vendor_golang_org_x_net_route_InterfaceMessage *)0x0;
  local_88 = pvVar8;
  local_80 = pvVar8;
  do {
    lVar17 = *(long *)((long)pvVar12 + 8);
    puVar1 = *(undefined1 **)pvVar12;
    if ((((puVar1 != (undefined1 *)0x0) && (*(int *)(puVar1 + 0x10) == -0x7da05c83)) &&
        (puVar1 == 
         go_itab__vendor_golang_org_x_net_route_InterfaceMessage_vendor_golang_org_x_net_route_Message
        )) && ((ifindex_spill == 0 || (*(long *)(lVar17 + 0x18) == ifindex_spill)))) {
      if (pvVar8 <= mVar22.~r1.len) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      prVar15 = (runtime_itab *)((long)mVar22.~r1.len * 0x40);
      *(undefined8 *)(prVar15->_ + (long)((long)&pvVar7[-1].raw.array + 4)) =
           *(undefined8 *)(lVar17 + 0x18);
      iVar2 = *(int *)(lVar17 + 0x20);
      (&pvVar7->Index)[(long)mVar22.~r1.len * 8] = *(int *)(lVar17 + 0x28);
      pvVar14 = pvVar6;
      if (runtime_writeBarrier._0_4_ == 0) {
        (&pvVar7->Flags)[(long)mVar22.~r1.len * 8] = iVar2;
      }
      else {
        runtime_gcWriteBarrierR9();
        pvVar7 = extraout_RAX;
        lVar9 = extraout_RDX;
      }
      uVar3 = *(ulong *)(lVar17 + 0x10);
                    /* Unresolved local var: net.Flags f@[???] */
      uVar18 = (ulong)((byte)uVar3 & 1);
      if ((uVar3 & 2) != 0) {
        uVar18 = uVar18 | 2;
      }
      if ((uVar3 & 8) != 0) {
        uVar18 = uVar18 | 4;
      }
      if ((uVar3 & 0x10) != 0) {
        uVar18 = uVar18 | 8;
      }
      if ((uVar3 & 0x8000) != 0) {
        uVar18 = uVar18 | 0x10;
      }
      *(ulong *)((long)&pvVar7->Addrs + (long)mVar22.~r1.len * 0x40 + 8) = uVar18;
                    /* Unresolved local var: vendor/golang.org/x/net/route.LinkAddr * sa@[???] */
      if (*(ulong *)(lVar17 + 0x38) < 5) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      lVar11 = *(long *)(*(long *)(lVar17 + 0x30) + 0x48);
      prVar16 = prVar15;
      if ((*(undefined1 **)(*(long *)(lVar17 + 0x30) + 0x40) ==
           go_itab__vendor_golang_org_x_net_route_LinkAddr_vendor_golang_org_x_net_route_Addr) &&
         (pvVar4 = *(vendor_golang_org_x_net_route_InterfaceMessage **)(lVar11 + 0x20),
         0 < (long)pvVar4)) {
        runtime_makeslice((runtime__type *)&DAT_00225720,(int)pvVar12,(int)pvVar14);
        pvVar14 = local_10;
        (&local_10->Name)[(long)mVar22.~r1.len * 4].len = (int)pvVar4;
        *(vendor_golang_org_x_net_route_InterfaceMessage **)((long)&local_10->Addrs + (long)prVar15)
             = pvVar4;
        prVar16 = (runtime_itab *)(prVar15[1]._ + (long)((long)&local_10[-1].raw.array + 4));
        if (runtime_writeBarrier._0_4_ == 0) {
          (&local_10->Name)[(long)mVar22.~r1.len * 4].str = (uint8 *)local_78;
          pvVar10 = pvVar4;
        }
        else {
          runtime_gcWriteBarrier();
          pvVar10 = extraout_RDX_00;
        }
        if ((long)*(vendor_golang_org_x_net_route_InterfaceMessage **)(lVar11 + 0x20) <
            (long)pvVar10) {
          pvVar10 = *(vendor_golang_org_x_net_route_InterfaceMessage **)(lVar11 + 0x20);
        }
        pvVar5 = *(vendor_golang_org_x_net_route_InterfaceMessage **)(lVar11 + 0x18);
        pvVar7 = pvVar5;
        local_88 = pvVar4;
        local_80 = pvVar4;
        if (*(vendor_golang_org_x_net_route_InterfaceMessage **)
             (prVar15->_ + (long)((long)&pvVar14->Type + 4)) != pvVar5) {
          runtime_memmove();
                    /* Unresolved local var: vendor/golang.org/x/net/route.Sys sys@[???]
                       Unresolved local var: vendor/golang.org/x/net/route.InterfaceMetrics *
                       imx@[???] */
          pvVar7 = extraout_RAX_00;
          local_88 = pvVar5;
          local_80 = pvVar10;
        }
      }
      vendor_golang_org_x_net_route___InterfaceMessage__Sys(pvVar7);
      pvVar14 = local_88;
      if (0 < (long)local_80) {
        lVar11 = 0;
        for (; (undefined1 *)pvVar14->Version !=
               go_itab__vendor_golang_org_x_net_route_InterfaceMetrics_vendor_golang_org_x_net_route_Sys
            ; pvVar14 = (vendor_golang_org_x_net_route_InterfaceMessage *)&pvVar14->Flags) {
          lVar11 = lVar11 + 1;
          if ((long)local_80 <= lVar11) goto LAB_0058fb85;
        }
        (&local_10->Type)[(long)mVar22.~r1.len * 8] = *(int *)(pvVar14->Type + 8);
      }
LAB_0058fb85:
      mVar22.~r1.len =
           (vendor_golang_org_x_net_route_InterfaceMessage *)((long)&(mVar22.~r1.len)->Version + 1);
      pvVar7 = local_10;
      if (*(long *)(lVar17 + 0x18) == ifindex_spill) {
        mVar22.~r1.array = (net_Interface *)pvVar8;
        mVar22.~r1.cap = (int)pvVar14;
        mVar22.~r2.data = (void *)ifindex_spill;
        mVar22.~r2.tab = prVar16;
        return mVar22;
      }
    }
    lVar9 = lVar9 + 1;
    pvVar14 = mVar22.~r1.len;
    if ((long)pvVar6 <= lVar9) goto LAB_0058f909;
    pvVar12 = (vendor_golang_org_x_net_route_InterfaceMessage *)((long)pvVar12 + 0x10);
  } while( true );
}

