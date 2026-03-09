
/* WARNING: Unknown calling convention */

void net___byMaskLength__Swap(int i,int j)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_RDX;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *unaff_RBP;
  undefined1 uVar8;
  undefined1 uVar9;
  long lVar10;
  long in_FS_OFFSET;
  int i_spill;
  int i_1;
  int j_1;
  
  do {
                    /* Unresolved local var: net.byMaskLength s@[???] */
    lVar2 = *(long *)(in_FS_OFFSET + -8);
    puVar7 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar2 + 0x10) < register0x00000020) {
      puVar7 = (undefined1 *)((long)register0x00000020 + -0x18);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar3 = *(long **)(lVar2 + 0x20);
      if ((plVar3 != (long *)0x0) &&
         ((undefined1 *)*plVar3 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar3 = (long)((long)register0x00000020 + -0x18);
      }
      plVar3 = *(long **)((long)register0x00000020 + 8);
      if (plVar3 != (long *)0x0) {
        lVar2 = *plVar3;
        if ((ulong)plVar3[1] <= *(ulong *)((long)register0x00000020 + 0x10)) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x5a9285;
          runtime_panicIndex();
        }
        lVar5 = *(ulong *)((long)register0x00000020 + 0x10) * 0x10;
        uVar6 = *(undefined8 *)(lVar5 + lVar2);
        uVar8 = *(undefined1 *)(lVar5 + 8 + lVar2);
        uVar9 = *(undefined1 *)(lVar5 + 9 + lVar2);
        if (*(ulong *)((long)register0x00000020 + 0x18) < (ulong)plVar3[1]) {
          lVar10 = *(ulong *)((long)register0x00000020 + 0x18) * 0x10;
          uVar4 = *(undefined8 *)(lVar2 + lVar10);
          uVar1 = *(undefined1 *)(lVar2 + 9 + lVar10);
          *(undefined1 *)(lVar2 + 8 + lVar5) = *(undefined1 *)(lVar2 + 8 + lVar10);
          *(undefined1 *)(lVar2 + 9 + lVar5) = uVar1;
          if (runtime_writeBarrier._0_4_ == 0) {
            *(undefined8 *)(lVar2 + lVar5) = uVar4;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x5a9248;
            runtime_gcWriteBarrierCX();
            uVar6 = extraout_RDX;
          }
          *(undefined1 *)(lVar2 + 8 + lVar10) = uVar8;
          *(undefined1 *)(lVar2 + 9 + lVar10) = uVar9;
          if (runtime_writeBarrier._0_4_ == 0) {
            *(undefined8 *)(lVar2 + lVar10) = uVar6;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x5a926a;
            runtime_gcWriteBarrierDX();
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x5a927c;
        runtime_panicIndex();
      }
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x5a928a;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar7 + -8) = 0x5a9290;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar7;
  } while( true );
}

