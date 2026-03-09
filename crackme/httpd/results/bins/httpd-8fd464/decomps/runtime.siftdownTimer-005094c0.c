
/* WARNING: Unknown calling convention */

void runtime_siftdownTimer(___runtime_timer t,int i)

{
  long lVar1;
  long lVar2;
  long extraout_RDX;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  long in_stack_00000008;
  int n;
  int i_spill;
  
                    /* Unresolved local var: int64 when@[???]
                       Unresolved local var: runtime.timer * tmp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (n <= i_spill) {
    runtime_badTimer();
  }
  if ((ulong)n <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  lVar1 = *(long *)(*(long *)(in_stack_00000008 + i_spill * 8) + 8);
  if (lVar1 < 1) {
    runtime_badTimer();
                    /* Unresolved local var: int c@[???]
                       Unresolved local var: int c3@[???]
                       Unresolved local var: int64 w@[???] */
  }
  lVar3 = *(long *)(in_stack_00000008 + i_spill * 8);
  while( true ) {
    lVar2 = i_spill * 4;
    uVar4 = lVar2 + 1;
    if (n <= (long)uVar4) break;
    if ((ulong)n <= uVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    lVar5 = *(long *)(*(long *)(in_stack_00000008 + 8 + i_spill * 0x20) + 8);
    uVar6 = lVar2 + 2;
    if ((long)uVar6 < n) {
      if ((ulong)n <= uVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      lVar8 = *(long *)(*(long *)(in_stack_00000008 + 0x10 + i_spill * 0x20) + 8);
      if (lVar8 < lVar5) {
                    /* Unresolved local var: int64 w3@[???] */
        uVar4 = uVar6;
        lVar5 = lVar8;
      }
    }
    uVar6 = lVar2 + 3;
    uVar7 = uVar4;
    lVar8 = lVar5;
    if ((long)uVar6 < n) {
      if ((ulong)n <= uVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      lVar8 = *(long *)(*(long *)(in_stack_00000008 + 0x18 + i_spill * 0x20) + 8);
      uVar7 = lVar2 + 4;
      if ((long)uVar7 < n) {
        if ((ulong)n <= uVar7) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        lVar2 = *(long *)(*(long *)(in_stack_00000008 + 0x20 + i_spill * 0x20) + 8);
        if (lVar2 < lVar8) {
          uVar6 = uVar7;
          lVar8 = lVar2;
        }
      }
      uVar7 = uVar6;
      if (lVar5 <= lVar8) {
        uVar7 = uVar4;
        lVar8 = lVar5;
      }
    }
    if (lVar1 <= lVar8) break;
    if ((ulong)n <= uVar7) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if ((ulong)n <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(in_stack_00000008 + i_spill * 8) =
           *(undefined8 *)(in_stack_00000008 + uVar7 * 8);
      i_spill = uVar7;
    }
    else {
      i_spill = uVar7;
      runtime_gcWriteBarrierR9();
      in_stack_00000008 = extraout_RDX;
    }
  }
  if ((ulong)n <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (*(long *)(in_stack_00000008 + i_spill * 8) != lVar3) {
    if (runtime_writeBarrier._0_4_ == 0) {
      *(long *)(in_stack_00000008 + i_spill * 8) = lVar3;
    }
    else {
      runtime_gcWriteBarrierSI();
    }
  }
  return;
}

