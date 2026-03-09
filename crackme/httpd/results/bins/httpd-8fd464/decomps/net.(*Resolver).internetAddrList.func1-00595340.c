
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).internetAddrList.func1(net.IPAddr ip, net.Addr
   ~r1) */

net_Addr net___Resolver__internetAddrList_func1(net_IPAddr ip)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  long in_RDX;
  undefined8 *extraout_RDX;
  undefined8 *extraout_RDX_00;
  undefined8 *extraout_RDX_01;
  long extraout_RDX_02;
  undefined1 *puVar5;
  undefined1 *unaff_RBP;
  int iVar6;
  uint8 *puVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  net_Addr nVar9;
  net_Addr nVar10;
  net_Addr nVar11;
  string sVar12;
  interface___ e;
  string a0;
  string a1;
  net_IPAddr ip_spill;
  
  iVar6 = ip.Zone.len;
  puVar7 = ip.Zone.str;
  sVar12.len = ip.IP.len;
  do {
                    /* Unresolved local var: int portnum@[???]
                       Unresolved local var: string net@[???] */
    puVar5 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar5 = (undefined1 *)((long)register0x00000020 + -0x58);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      piVar4 = *(int **)(in_RDX + 8);
      lVar1 = *(long *)(in_RDX + 0x10);
      *(long *)((long)register0x00000020 + -0x18) = lVar1;
      if (lVar1 == 2) {
        if ((short)*piVar4 == 0x7069) {
LAB_00595475:
          *(undefined **)((long)register0x00000020 + -0x58) = &DAT_0024c960;
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x595485;
          runtime_newobject((runtime__type *)&DAT_0024c960);
          puVar8 = *(undefined8 **)((long)register0x00000020 + -0x50);
          uVar2 = *(undefined8 *)((long)register0x00000020 + 8);
          uVar3 = *(undefined8 *)((long)register0x00000020 + 0x18);
          puVar8[1] = *(undefined8 *)((long)register0x00000020 + 0x10);
          puVar8[2] = uVar3;
          if (runtime_writeBarrier._0_4_ == 0) {
            *puVar8 = uVar2;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5954b4;
            runtime_gcWriteBarrier();
          }
          uVar2 = *(undefined8 *)((long)register0x00000020 + 0x20);
          puVar8[4] = *(undefined8 *)((long)register0x00000020 + 0x28);
          if (runtime_writeBarrier._0_4_ == 0) {
            puVar8[3] = uVar2;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5954e5;
            runtime_gcWriteBarrier();
            puVar8 = extraout_RDX;
          }
          *(undefined1 **)((long)register0x00000020 + 0x30) = go_itab__net_IPAddr_net_Addr;
          *(undefined8 **)((long)register0x00000020 + 0x38) = puVar8;
          nVar9.data = sVar12.len;
          nVar9.tab = (runtime_itab *)go_itab__net_IPAddr_net_Addr;
          return nVar9;
        }
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x20) = *(undefined8 *)(in_RDX + 0x18);
        *(int **)((long)register0x00000020 + -0x10) = piVar4;
        if (lVar1 == 3) {
          *(int **)((long)register0x00000020 + -0x58) = piVar4;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 3;
          *(undefined **)((long)register0x00000020 + -0x48) = &DAT_00287b85;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 3;
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x59543c;
          runtime_cmpstring();
          if (*(long *)((long)register0x00000020 + -0x38) < 1) {
            piVar4 = *(int **)((long)register0x00000020 + -0x10);
            if ((((short)*piVar4 == 0x7069) && (*(char *)((long)piVar4 + 2) == '4')) ||
               (((short)*piVar4 == 0x7069 && (*(char *)((long)piVar4 + 2) == '6'))))
            goto LAB_00595475;
          }
          else {
            piVar4 = *(int **)((long)register0x00000020 + -0x10);
            if (((short)*piVar4 == 0x6374) && (*(char *)((long)piVar4 + 2) == 'p')) {
LAB_00595526:
              *(undefined **)((long)register0x00000020 + -0x58) = &DAT_00257460;
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x595536;
              runtime_newobject((runtime__type *)&DAT_00257460);
              puVar8 = *(undefined8 **)((long)register0x00000020 + -0x50);
              uVar2 = *(undefined8 *)((long)register0x00000020 + 8);
              uVar3 = *(undefined8 *)((long)register0x00000020 + 0x18);
              puVar8[1] = *(undefined8 *)((long)register0x00000020 + 0x10);
              puVar8[2] = uVar3;
              if (runtime_writeBarrier._0_4_ == 0) {
                *puVar8 = uVar2;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x595567;
                runtime_gcWriteBarrier();
              }
              puVar8[3] = *(undefined8 *)((long)register0x00000020 + -0x20);
              uVar2 = *(undefined8 *)((long)register0x00000020 + 0x20);
              puVar8[5] = *(undefined8 *)((long)register0x00000020 + 0x28);
              if (runtime_writeBarrier._0_4_ == 0) {
                puVar8[4] = uVar2;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x59559f;
                runtime_gcWriteBarrier();
                puVar8 = extraout_RDX_00;
              }
              *(undefined1 **)((long)register0x00000020 + 0x30) = go_itab__net_TCPAddr_net_Addr;
              *(undefined8 **)((long)register0x00000020 + 0x38) = puVar8;
              nVar10.data = sVar12.len;
              nVar10.tab = (runtime_itab *)go_itab__net_TCPAddr_net_Addr;
              return nVar10;
            }
            if (((short)*piVar4 == 0x6475) && (*(char *)((long)piVar4 + 2) == 'p'))
            goto LAB_005955d8;
          }
        }
        else if (lVar1 == 4) {
          *(int **)((long)register0x00000020 + -0x58) = piVar4;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 4;
          *(undefined **)((long)register0x00000020 + -0x48) = &DAT_00288785;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 4;
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5953cd;
          runtime_cmpstring();
          if (*(long *)((long)register0x00000020 + -0x38) < 1) {
            piVar4 = *(int **)((long)register0x00000020 + -0x10);
            if ((*piVar4 == 0x34706374) || (*piVar4 == 0x36706374)) goto LAB_00595526;
          }
          else {
            piVar4 = *(int **)((long)register0x00000020 + -0x10);
            if ((*piVar4 == 0x34706475) || (*piVar4 == 0x36706475)) {
LAB_005955d8:
              *(undefined **)((long)register0x00000020 + -0x58) = &DAT_00257520;
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5955e8;
              runtime_newobject((runtime__type *)&DAT_00257520);
              puVar8 = *(undefined8 **)((long)register0x00000020 + -0x50);
              uVar2 = *(undefined8 *)((long)register0x00000020 + 8);
              uVar3 = *(undefined8 *)((long)register0x00000020 + 0x18);
              puVar8[1] = *(undefined8 *)((long)register0x00000020 + 0x10);
              puVar8[2] = uVar3;
              if (runtime_writeBarrier._0_4_ == 0) {
                *puVar8 = uVar2;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x595617;
                runtime_gcWriteBarrier();
              }
              puVar8[3] = *(undefined8 *)((long)register0x00000020 + -0x20);
              uVar2 = *(undefined8 *)((long)register0x00000020 + 0x20);
              puVar8[5] = *(undefined8 *)((long)register0x00000020 + 0x28);
              if (runtime_writeBarrier._0_4_ == 0) {
                puVar8[4] = uVar2;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x595651;
                runtime_gcWriteBarrier();
                puVar8 = extraout_RDX_01;
              }
              *(undefined1 **)((long)register0x00000020 + 0x30) = go_itab__net_UDPAddr_net_Addr;
              *(undefined8 **)((long)register0x00000020 + 0x38) = puVar8;
              nVar11.data = sVar12.len;
              nVar11.tab = (runtime_itab *)go_itab__net_UDPAddr_net_Addr;
              return nVar11;
            }
          }
        }
      }
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
      *(undefined **)((long)register0x00000020 + -0x50) = &DAT_0029c1ee;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x14;
      *(int **)((long)register0x00000020 + -0x40) = piVar4;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x38) =
           *(runtime_tmpBuf **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5956a6;
      a0.len = (int)&DAT_0029c1ee;
      a0.str = sVar12.len;
      a1.len = iVar6;
      a1.str = puVar7;
      sVar12 = runtime_concatstring2(*(runtime_tmpBuf **)((long)register0x00000020 + -0x18),a0,a1);
      *(uint8 **)((long)register0x00000020 + -0x58) = *(uint8 **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x50) =
           *(undefined8 *)((long)register0x00000020 + -0x28);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5956be;
      sVar12.str = *(uint8 **)((long)register0x00000020 + -0x30);
      runtime_convTstring(sVar12);
      *(undefined **)((long)register0x00000020 + -0x58) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x50) =
           *(runtime__type **)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5956d8;
      e.data = sVar12.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x48);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar5 + -8) = 0x5956de;
    runtime_morestack();
    in_RDX = extraout_RDX_02;
    register0x00000020 = (BADSPACEBASE *)puVar5;
  } while( true );
}

