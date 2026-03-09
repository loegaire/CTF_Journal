
/* WARNING: Unknown calling convention */

void sort___StringSlice__Swap(int i,int j)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  int i_spill;
  int i_1;
  int j_1;
  
  do {
                    /* Unresolved local var: sort.StringSlice x@[???] */
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x18);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x18);
      }
      plVar2 = *(long **)((long)register0x00000020 + 8);
      if (plVar2 != (long *)0x0) {
        lVar1 = *plVar2;
        if ((ulong)plVar2[1] <= *(ulong *)((long)register0x00000020 + 0x10)) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x54194a;
          runtime_panicIndex();
        }
        lVar4 = *(ulong *)((long)register0x00000020 + 0x10) * 0x10;
        uVar5 = *(undefined8 *)(lVar1 + lVar4);
        uVar7 = *(undefined8 *)(lVar1 + 8 + lVar4);
        if (*(ulong *)((long)register0x00000020 + 0x18) < (ulong)plVar2[1]) {
          lVar8 = *(ulong *)((long)register0x00000020 + 0x18) * 0x10;
          uVar3 = *(undefined8 *)(lVar8 + lVar1);
          *(undefined8 *)(lVar1 + 8 + lVar4) = *(undefined8 *)(lVar8 + 8 + lVar1);
          if (runtime_writeBarrier._0_4_ == 0) {
            *(undefined8 *)(lVar1 + lVar4) = uVar3;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x541912;
            runtime_gcWriteBarrierCX();
            uVar5 = extraout_RDX;
          }
          *(undefined8 *)(lVar1 + 8 + lVar8) = uVar7;
          if (runtime_writeBarrier._0_4_ == 0) {
            *(undefined8 *)(lVar1 + lVar8) = uVar5;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x541930;
            runtime_gcWriteBarrierDX();
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x541945;
        runtime_panicIndex();
      }
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x54194f;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar6 + -8) = 0x541955;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}

