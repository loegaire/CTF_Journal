
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Writer).Write(bufio.Writer * b, []uint8 p, int nn, error
   err) */

multireturn_int_error__conflict11 bufio___Writer__Write(bufio_Writer *b,__uint8 p)

{
  ulong uVar1;
  uint8 *puVar2;
  long lVar3;
  ulong uVar4;
  runtime_itab *prVar5;
  bufio_Writer *pbVar6;
  bufio_Writer *extraout_RAX;
  bufio_Writer *b_00;
  long in_FS_OFFSET;
  multireturn_int_error__conflict11 mVar7;
  multireturn_int_error__conflict11 mVar8;
  bufio_Writer *b_spill;
  __uint8 p_spill;
  void *local_50;
  runtime_itab *local_48;
  void *local_40;
  
                    /* Unresolved local var: int n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int ~R0@[???] */
  pbVar6 = (bufio_Writer *)0x0;
  while( true ) {
    uVar1 = (b_spill->buf).len;
    puVar2 = (b_spill->buf).array;
    lVar3 = (b_spill->buf).cap;
    uVar4 = b_spill->n;
    mVar8.err.data = (void *)(uVar1 - uVar4);
    if ((p_spill.len <= (long)mVar8.err.data) || ((b_spill->err).tab != (runtime_itab *)0x0)) {
      prVar5 = (b_spill->err).tab;
      if (prVar5 != (runtime_itab *)0x0) {
        mVar8.err.tab = prVar5;
        mVar8.nn = (int)pbVar6;
        return mVar8;
      }
      if (uVar4 <= uVar1) {
        if (p_spill.len < (long)mVar8.err.data) {
          mVar8.err.data = (void *)p_spill.len;
        }
        mVar7.err.tab = puVar2 + (uVar4 & (long)(uVar4 - lVar3) >> 0x3f);
        if (p_spill.array != mVar7.err.tab) {
          runtime_memmove();
        }
        b_spill->n = b_spill->n + (long)mVar8.err.data;
        mVar7.nn = (long)&(pbVar6->err).tab + (long)mVar8.err.data;
        mVar7.err.data = mVar8.err.data;
        return mVar7;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if (uVar4 == 0) {
      (*(code *)((b_spill->wr).tab)->fun[0])();
      (b_spill->err).tab = local_48;
      mVar8.err.data = local_50;
      if (runtime_writeBarrier._0_4_ == 0) {
        (b_spill->err).data = local_40;
      }
      else {
        runtime_gcWriteBarrier();
      }
    }
    else {
      if (uVar1 < uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      b_00 = pbVar6;
      if (p_spill.array != puVar2 + (uVar4 & (long)(uVar4 - lVar3) >> 0x3f)) {
        runtime_memmove();
        b_00 = extraout_RAX;
      }
      b_spill->n = b_spill->n + (long)mVar8.err.data;
      bufio___Writer__Flush(b_00);
    }
    pbVar6 = (bufio_Writer *)((long)&(pbVar6->err).tab + (long)mVar8.err.data);
    if ((ulong)p_spill.len < mVar8.err.data) break;
                    /* Unresolved local var: int n@[???] */
    p_spill.cap = p_spill.cap - (long)mVar8.err.data;
    p_spill.len = p_spill.len - (long)mVar8.err.data;
    p_spill.array = p_spill.array + (-p_spill.cap >> 0x3f & (ulong)mVar8.err.data);
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

