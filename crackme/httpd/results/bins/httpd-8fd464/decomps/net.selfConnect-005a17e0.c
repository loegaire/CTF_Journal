
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.selfConnect(net.netFD * fd, error err, bool ~r2) */

bool net_selfConnect(net_netFD *fd,error err)

{
  runtime__type *want;
  undefined1 *puVar1;
  uintptr uVar2;
  uintptr uVar3;
  int iVar4;
  uintptr uVar5;
  uintptr uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  runtime__type *iface;
  undefined1 *extraout_RDX;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *unaff_RBP;
  int in_R8;
  long in_FS_OFFSET;
  net_IP ip;
  net_IP x;
  net_netFD *fd_spill;
  error err_spill;
  
  do {
    puVar11 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar11 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(long *)((long)register0x00000020 + 0x10) != 0) {
        *(undefined1 *)((long)register0x00000020 + 0x20) = 0;
        return SUB81(*(long *)((long)register0x00000020 + 0x10),0);
      }
      lVar9 = *(long *)((long)register0x00000020 + 8);
      iface = *(runtime__type **)(lVar9 + 0x68);
      puVar10 = *(undefined1 **)(lVar9 + 0x60);
      if (puVar10 == (undefined1 *)0x0) {
LAB_005a18a7:
        *(undefined1 *)((long)register0x00000020 + 0x20) = 1;
        return SUB81(lVar9,0);
      }
      want = *(runtime__type **)(lVar9 + 0x78);
      puVar1 = *(undefined1 **)(lVar9 + 0x70);
      lVar9 = 0;
      if (puVar1 == (undefined1 *)0x0) goto LAB_005a18a7;
      if (puVar10 == go_itab__net_TCPAddr_net_Addr) {
        if (puVar1 == go_itab__net_TCPAddr_net_Addr) {
          if (want->equal == iface->equal) {
            uVar2 = iface->size;
            uVar3 = iface->ptrdata;
            iVar4._0_4_ = iface->hash;
            iVar4._4_1_ = iface->tflag;
            iVar4._5_1_ = iface->align;
            iVar4._6_1_ = iface->fieldAlign;
            iVar4._7_1_ = iface->kind;
            uVar5 = want->size;
            uVar6 = want->ptrdata;
            uVar7._0_4_ = want->hash;
            uVar7._4_1_ = want->tflag;
            uVar7._5_1_ = want->align;
            uVar7._6_1_ = want->fieldAlign;
            uVar7._7_1_ = want->kind;
            *(uintptr *)((long)register0x00000020 + -0x40) = uVar2;
            *(uintptr *)((long)register0x00000020 + -0x38) = uVar3;
            *(int *)((long)register0x00000020 + -0x30) = iVar4;
            *(uintptr *)((long)register0x00000020 + -0x28) = uVar5;
            *(uintptr *)((long)register0x00000020 + -0x20) = uVar6;
            *(undefined8 *)((long)register0x00000020 + -0x18) = uVar7;
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x5a1894;
            ip.len = uVar7;
            ip.array = (uint8 *)uVar2;
            ip.cap = iVar4;
            x.len = uVar5;
            x.array = (uint8 *)uVar6;
            x.cap = in_R8;
            net_IP_Equal(ip,x);
            uVar8 = *(undefined1 *)((long)register0x00000020 + -0x10);
          }
          else {
            uVar8 = 0;
          }
          *(undefined1 *)((long)register0x00000020 + 0x20) = uVar8;
          return (bool)uVar8;
        }
        *(undefined1 **)((long)register0x00000020 + -0x40) = puVar1;
        *(undefined **)((long)register0x00000020 + -0x38) = &DAT_0025ef60;
        *(undefined **)((long)register0x00000020 + -0x30) = &DAT_0023e7c0;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x5a18e6;
        runtime_panicdottypeI((runtime_itab *)&DAT_0023e7c0,want,iface);
        puVar10 = extraout_RDX;
      }
      *(undefined1 **)((long)register0x00000020 + -0x40) = puVar10;
      *(undefined **)((long)register0x00000020 + -0x38) = &DAT_0025ef60;
      *(undefined **)((long)register0x00000020 + -0x30) = &DAT_0023e7c0;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x5a1907;
      runtime_panicdottypeI((runtime_itab *)&DAT_0023e7c0,want,iface);
    }
    *(undefined8 *)(puVar11 + -8) = 0x5a190d;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar11;
  } while( true );
}

