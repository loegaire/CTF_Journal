
/* WARNING: Unknown calling convention */

void runtime_siftupTimer(___runtime_timer t,int i)

{
  long lVar1;
  runtime_timer **extraout_RDX;
  runtime_timer *prVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ___runtime_timer t_spill;
  int i_spill;
  
                    /* Unresolved local var: int64 when@[???]
                       Unresolved local var: runtime.timer * tmp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (t_spill.len <= i_spill) {
    runtime_badTimer();
  }
  if ((ulong)t_spill.len <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  lVar1 = t_spill.array[i_spill]->when;
  if (lVar1 < 1) {
    runtime_badTimer();
                    /* Unresolved local var: int p@[???] */
  }
  prVar2 = t_spill.array[i_spill];
  while (0 < i_spill) {
    uVar3 = (long)(i_spill - 1U) >> 2;
    if ((ulong)t_spill.len <= uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (t_spill.array[uVar3]->when <= lVar1) break;
    if ((ulong)t_spill.len <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      t_spill.array[i_spill] = t_spill.array[uVar3];
      i_spill = uVar3;
    }
    else {
      i_spill = uVar3;
      runtime_gcWriteBarrierR9();
      t_spill.array = extraout_RDX;
    }
  }
  if ((ulong)t_spill.len <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (t_spill.array[i_spill] != prVar2) {
    if (runtime_writeBarrier._0_4_ == 0) {
      t_spill.array[i_spill] = prVar2;
    }
    else {
      runtime_gcWriteBarrierSI();
    }
  }
  return;
}

