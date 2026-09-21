
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Reader).Peek(bufio.Reader * b, int n, []uint8 ~r1, error
   ~r2) */

multireturn___uint8_error_ bufio___Reader__Peek(bufio_Reader *b,int n)

{
  bufio_Reader *pbVar1;
  bufio_Reader *b_00;
  bufio_Reader *pbVar2;
  ulong uVar3;
  runtime_itab *prVar4;
  ulong uVar5;
  runtime_itab *prVar6;
  void *pvVar7;
  void *in_RSI;
  runtime_itab *in_RDI;
  long in_FS_OFFSET;
  multireturn___uint8_error_ mVar8;
  multireturn___uint8_error_ mVar9;
  multireturn___uint8_error_ mVar10;
  bufio_Reader *b_spill;
  int n_spill;
  
                    /* Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (n_spill < 0) {
    mVar8.~r1.len = n_spill;
    mVar8.~r1.array = (uint8 *)bufio_ErrNegativeCount.tab;
    mVar8.~r1.cap = (int)bufio_ErrNegativeCount.data;
    mVar8.~r2.data = in_RSI;
    mVar8.~r2.tab = in_RDI;
    return mVar8;
  }
  b_spill->lastByte = -1;
  b_spill->lastRuneSize = -1;
  while( true ) {
    pbVar1 = (bufio_Reader *)b_spill->w;
    b_00 = (bufio_Reader *)b_spill->r;
    mVar9.~r1.cap = (long)pbVar1 - (long)b_00;
    if (((n_spill <= mVar9.~r1.cap) || ((b_spill->buf).len <= mVar9.~r1.cap)) ||
       ((b_spill->err).tab != (runtime_itab *)0x0)) break;
    bufio___Reader__fill(b_00);
  }
  pbVar2 = (bufio_Reader *)(b_spill->buf).cap;
  if ((b_spill->buf).len < n_spill) {
    if (pbVar2 < pbVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    if (b_00 <= pbVar1) {
      prVar6 = (runtime_itab *)((long)pbVar2 - (long)b_00);
      mVar9.~r1.len = (int)bufio_ErrBufferFull.tab;
      mVar9.~r1.array = (b_spill->buf).array + (-(long)prVar6 >> 0x3f & (ulong)b_00);
      mVar9.~r2.data = bufio_ErrBufferFull.data;
      mVar9.~r2.tab = prVar6;
      return mVar9;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  if (mVar9.~r1.cap < n_spill) {
                    /* Unresolved local var: error err@[???] */
    prVar6 = (b_spill->err).tab;
    (b_spill->err).tab = (runtime_itab *)0x0;
    if (runtime_writeBarrier._0_4_ == 0) {
      (b_spill->err).data = (void *)0x0;
    }
    else {
      runtime_gcWriteBarrierR9();
    }
    if (prVar6 == (runtime_itab *)0x0) {
      prVar6 = bufio_ErrBufferFull.tab;
    }
  }
  else {
    prVar6 = (runtime_itab *)0x0;
    mVar9.~r1.cap = n_spill;
  }
  uVar3 = (b_spill->buf).cap;
  prVar4 = (runtime_itab *)(b_spill->buf).array;
  uVar5 = b_spill->r;
  if (uVar5 + mVar9.~r1.cap <= uVar3) {
    if (uVar5 <= uVar5 + mVar9.~r1.cap) {
      pvVar7 = (void *)(uVar3 - uVar5);
      mVar10.~r1.len = (int)prVar6;
      mVar10.~r1.array = prVar4->_ + ((-(long)pvVar7 >> 0x3f & uVar5) - 0x14);
      mVar10.~r1.cap = mVar9.~r1.cap;
      mVar10.~r2.data = pvVar7;
      mVar10.~r2.tab = prVar4;
      return mVar10;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}

