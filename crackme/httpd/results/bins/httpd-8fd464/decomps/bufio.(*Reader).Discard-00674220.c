
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Reader).Discard(bufio.Reader * b, int n, int discarded,
   error err) */

multireturn_int_error__conflict16 bufio___Reader__Discard(bufio_Reader *b,int n)

{
  runtime_itab *prVar1;
  undefined1 auVar2 [24];
  undefined1 auVar3 [24];
  bufio_Reader *extraout_RAX;
  undefined8 in_RCX;
  bufio_Reader *pbVar4;
  long in_FS_OFFSET;
  multireturn_int_error__conflict16 mVar5;
  multireturn_int_error__conflict16 mVar6;
  bufio_Reader *b_spill;
  int remain;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (remain < 0) {
    mVar5.err.tab = (runtime_itab *)n;
    mVar5.discarded = (int)bufio_ErrNegativeCount.tab;
    mVar5.err.data = bufio_ErrNegativeCount.data;
    return mVar5;
  }
  if (remain == 0) {
    auVar2._8_8_ = in_RCX;
    auVar2._0_8_ = n;
    auVar2._16_8_ = 0;
    return (multireturn_int_error__conflict16)(auVar2 << 0x40);
  }
  while( true ) {
    pbVar4 = (bufio_Reader *)(b_spill->w - b_spill->r);
    if (pbVar4 == (bufio_Reader *)0x0) {
      bufio___Reader__fill((bufio_Reader *)remain);
      pbVar4 = (bufio_Reader *)(b_spill->w - b_spill->r);
    }
    if (remain < (long)pbVar4) {
      pbVar4 = (bufio_Reader *)remain;
    }
    b_spill->r = (long)&(pbVar4->buf).array + b_spill->r;
    remain = remain - (long)pbVar4;
    if ((bufio_Reader *)remain == (bufio_Reader *)0x0) break;
    prVar1 = (b_spill->err).tab;
    if (prVar1 != (runtime_itab *)0x0) {
      (b_spill->err).tab = (runtime_itab *)0x0;
      if (runtime_writeBarrier._0_4_ == 0) {
        (b_spill->err).data = (void *)0x0;
      }
      else {
        runtime_gcWriteBarrier();
        remain = (int)extraout_RAX;
      }
      mVar6.err.tab = prVar1;
      mVar6.discarded = remain;
      mVar6.err.data = b_spill;
      return mVar6;
    }
  }
  auVar3._8_8_ = b_spill;
  auVar3._0_8_ = pbVar4;
  auVar3._16_8_ = 0;
  return (multireturn_int_error__conflict16)(auVar3 << 0x40);
}

