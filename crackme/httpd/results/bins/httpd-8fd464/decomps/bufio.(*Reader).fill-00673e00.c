
/* WARNING: Unknown calling convention */

void bufio___Reader__fill(bufio_Reader *b)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  runtime__type *prVar5;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  bufio_Reader *b_spill;
  long local_28;
  runtime_itab *local_20;
  void *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = b_spill->r;
  if (0 < (long)uVar1) {
    uVar2 = (b_spill->buf).cap;
    if (uVar2 < (ulong)b_spill->w) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    if ((ulong)b_spill->w < uVar1) goto LAB_00674009;
    if (((long)(uVar1 - uVar2) >> 0x3f & uVar1) != 0) {
      runtime_memmove();
    }
    b_spill->w = b_spill->w - b_spill->r;
    b_spill->r = 0;
  }
  if (b_spill->w < (b_spill->buf).len) {
    lVar4 = 100;
    while( true ) {
      pvVar3 = io_ErrNoProgress.data;
      if (lVar4 < 1) {
        (b_spill->err).tab = io_ErrNoProgress.tab;
        if (runtime_writeBarrier._0_4_ == 0) {
          (b_spill->err).data = pvVar3;
        }
        else {
          runtime_gcWriteBarrier();
        }
        return;
      }
      if ((ulong)(b_spill->buf).len < (ulong)b_spill->w) break;
      (*(code *)((b_spill->rd).tab)->fun[0])();
      if (local_28 < 0) {
        prVar5 = (runtime__type *)0x0;
        if (bufio_errNegativeRead.tab != (runtime_itab *)0x0) {
          prVar5 = (bufio_errNegativeRead.tab)->_type;
        }
        e.data = local_20;
        e._type = prVar5;
        runtime_gopanic(e);
        break;
      }
      b_spill->w = b_spill->w + local_28;
      if (local_20 != (runtime_itab *)0x0) {
        (b_spill->err).tab = local_20;
        if (runtime_writeBarrier._0_4_ == 0) {
          (b_spill->err).data = local_18;
        }
        else {
          runtime_gcWriteBarrierCX();
        }
        return;
      }
      if (0 < local_28) {
        return;
      }
                    /* Unresolved local var: int i@[???] */
      lVar4 = lVar4 + -1;
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: error err@[???] */
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  e_00.data = b_spill;
  e_00._type = (runtime__type *)bufio__stmp_0;
  runtime_gopanic(e_00);
LAB_00674009:
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

