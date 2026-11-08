
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_freedefer_func1(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  runtime__defer *prVar5;
  runtime__defer *prVar6;
  long in_RDX;
  runtime__defer *prVar7;
  runtime__defer *extraout_RDX;
  runtime__defer *prVar8;
  runtime__defer *extraout_RDX_00;
  long extraout_RDX_01;
  long lVar9;
  ulong uVar10;
  runtime__defer *prVar11;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: uintptr sc@[???]
                       Unresolved local var: runtime._defer * first@[???]
                       Unresolved local var: runtime._defer * last@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX_01;
  }
  uVar4 = *(ulong *)(in_RDX + 0x10);
  lVar1 = *(long *)(in_RDX + 8);
  prVar5 = (runtime__defer *)0x0;
  prVar7 = (runtime__defer *)0x0;
  while( true ) {
    if (4 < uVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    lVar9 = uVar4 * 3;
    uVar2 = *(ulong *)(lVar1 + 0x70 + uVar4 * 0x18);
    lVar3 = *(long *)(lVar1 + 0x68 + uVar4 * 0x18);
    if ((long)uVar2 <= (long)(*(ulong *)(lVar1 + 0x78 + uVar4 * 0x18) >> 1)) {
      runtime_lock2(&runtime_sched.deferlock);
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar5->link = runtime_sched.deferpool[uVar4];
        runtime_sched.deferpool[uVar4] = prVar7;
      }
      else {
        runtime_gcWriteBarrierBX();
        runtime_gcWriteBarrier();
      }
      runtime_unlock2(&runtime_sched.deferlock);
      return;
    }
                    /* Unresolved local var: runtime._defer * d@[???] */
    uVar10 = uVar2 - 1;
    if (uVar2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar11 = *(runtime__defer **)(lVar3 + -8 + uVar2 * 8);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(lVar3 + -8 + uVar2 * 8) = 0;
      prVar6 = prVar5;
      prVar8 = prVar7;
      prVar5 = prVar11;
    }
    else {
      runtime_gcWriteBarrierR8();
      uVar4 = extraout_RAX;
      prVar6 = prVar5;
      prVar8 = extraout_RDX;
      prVar5 = prVar11;
    }
    if (*(ulong *)(lVar1 + 0x78 + lVar9 * 8) < uVar10) break;
    *(ulong *)(lVar1 + 0x70 + lVar9 * 8) = uVar10;
    prVar7 = prVar5;
    if (prVar8 != (runtime__defer *)0x0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar6->link = prVar5;
        prVar7 = prVar8;
      }
      else {
        runtime_gcWriteBarrierSI();
        uVar4 = extraout_RAX_00;
        prVar7 = extraout_RDX_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}

