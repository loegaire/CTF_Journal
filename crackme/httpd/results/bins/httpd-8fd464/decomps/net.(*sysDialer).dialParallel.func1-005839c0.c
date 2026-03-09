
/* WARNING: Unknown calling convention */

void net___sysDialer__dialParallel_func1(context_Context ctx,bool primary)

{
  net_sysDialer *sd;
  void *pvVar1;
  runtime_itab *prVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uintptr *pc0;
  code *pcVar5;
  long in_RDX;
  long extraout_RDX;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  net_addrList ras;
  context_Context ctx_00;
  context_Context ctx_spill;
  bool primary_spill;
  runtime_itab *prVar7;
  
  do {
                    /* Unresolved local var: net.sysDialer * sd@[???]
                       Unresolved local var: chan_net.dialResult.1 results@[DW_OP_reg0(RAX)]
                       Unresolved local var: chan_struct_{} returned@[???]
                       Unresolved local var: net.addrList primaries@[???]
                       Unresolved local var: net.addrList fallbacks@[???]
                       Unresolved local var: net.addrList ras@[???]
                       Unresolved local var: net.Conn c@[???]
                       Unresolved local var: error err@[???] */
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x48)) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -200);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      sd = *(net_sysDialer **)(in_RDX + 0x40);
      *(net_sysDialer **)((long)register0x00000020 + -0x60) = sd;
      pvVar1 = *(void **)(in_RDX + 0x48);
      *(void **)((long)register0x00000020 + -0x68) = pvVar1;
      prVar2 = *(runtime_itab **)(in_RDX + 8);
      uVar3 = *(undefined8 *)(in_RDX + 0x10);
      uVar4 = *(undefined8 *)(in_RDX + 0x18);
      prVar7 = *(runtime_itab **)(in_RDX + 0x20);
      uVar8 = *(undefined8 *)(in_RDX + 0x28);
      uVar9 = *(undefined8 *)(in_RDX + 0x30);
      *(undefined8 *)((long)register0x00000020 + -200) = *(undefined8 *)(in_RDX + 0x38);
      *(undefined8 *)((long)register0x00000020 + -0xc0) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0xb8) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      bVar10 = *(char *)((long)register0x00000020 + 0x18) != '\0';
      if (bVar10) {
        prVar7 = prVar2;
      }
      *(runtime_itab **)((long)register0x00000020 + -0xb0) = prVar7;
      if (bVar10) {
        uVar8 = uVar3;
      }
      *(undefined8 *)((long)register0x00000020 + -0xa8) = uVar8;
      if (bVar10) {
        uVar9 = uVar4;
      }
      *(undefined8 *)((long)register0x00000020 + -0xa0) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x583a66;
      ras.len = uVar3;
      ras.array = (net_Addr *)uVar4;
      ras.cap = (int)prVar7;
      ctx_00.data = pvVar1;
      ctx_00.tab = prVar2;
      net___sysDialer__dialSerial(sd,ctx_00,ras);
      pc0 = *(uintptr **)((long)register0x00000020 + -0x90);
      *(uintptr **)((long)register0x00000020 + -0x58) = pc0;
      *(int *)((long)register0x00000020 + -0x78) = *(int *)((long)register0x00000020 + -0x98);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x30) =
           *(undefined8 *)((long)register0x00000020 + -0x98);
      *(uintptr **)((long)register0x00000020 + -0x28) = pc0;
      *(undefined8 *)((long)register0x00000020 + -0x20) =
           *(undefined8 *)((long)register0x00000020 + -0x88);
      *(uint16 **)((long)register0x00000020 + -0x18) =
           *(uint16 **)((long)register0x00000020 + -0x80);
      *(undefined1 *)((long)register0x00000020 + -0x10) =
           *(undefined1 *)((long)register0x00000020 + 0x18);
      *(undefined1 *)((long)register0x00000020 + -0xf) = 1;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) =
           *(undefined8 *)((long)register0x00000020 + -0x60);
      *(undefined1 **)((long)register0x00000020 + -0x48) =
           (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x40) =
           *(undefined8 *)((long)register0x00000020 + -0x68);
      *(undefined1 **)((long)register0x00000020 + -200) =
           (undefined1 *)((long)register0x00000020 + -0x50);
      *(runtime_scase **)((long)register0x00000020 + -0xc0) =
           (runtime_scase *)((long)register0x00000020 + -0x70);
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 1;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 1;
      *(undefined1 *)((long)register0x00000020 + -0xa0) = 1;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x583b68;
      runtime_selectgo((runtime_scase *)((long)register0x00000020 + -0x70),
                       *(uint16 **)((long)register0x00000020 + -0x80),pc0,
                       (int)((long)register0x00000020 + -0x18),
                       *(int *)((long)register0x00000020 + -0x98),SUB81(prVar7,0));
      if (*(long *)((long)register0x00000020 + -0x98) == 0) {
        return;
      }
      if (*(long *)((long)register0x00000020 + -0x98) == 1) {
        if (*(long *)((long)register0x00000020 + -0x78) != 0) {
          pcVar5 = *(code **)(*(long *)((long)register0x00000020 + -0x78) + 0x18);
          *(undefined8 *)((long)register0x00000020 + -200) =
               *(undefined8 *)((long)register0x00000020 + -0x58);
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x583b94;
          (*pcVar5)();
        }
        return;
      }
    }
    *(undefined8 *)(puVar6 + -8) = 0x583baa;
    runtime_morestack();
    in_RDX = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}

