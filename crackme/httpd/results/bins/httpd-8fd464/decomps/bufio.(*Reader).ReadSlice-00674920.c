
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Reader).ReadSlice(bufio.Reader * b, uint8 delim, []uint8
   line, error err) */

multireturn___uint8_error__conflict6 bufio___Reader__ReadSlice(bufio_Reader *b,uint8 delim)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bufio_Reader *b_00;
  uint8 *puVar4;
  uint8 *extraout_RAX;
  long lVar5;
  runtime_itab *prVar6;
  runtime_itab *prVar7;
  long in_FS_OFFSET;
  multireturn___uint8_error__conflict6 mVar8;
  bufio_Reader *b_spill;
  uint8 delim_spill;
  long local_20;
  
                    /* Unresolved local var: int s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  b_00 = (bufio_Reader *)0x0;
  while( true ) {
    if ((ulong)(b_spill->buf).cap < (ulong)b_spill->w) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    if ((ulong)b_spill->w < (ulong)((long)&(b_00->buf).array + b_spill->r)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    internal_bytealg_IndexByte();
    if (-1 < local_20) break;
    if ((b_spill->err).tab != (runtime_itab *)0x0) {
      uVar1 = (b_spill->buf).cap;
      puVar4 = (b_spill->buf).array;
      uVar2 = b_spill->r;
      uVar3 = b_spill->w;
      if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      b_spill->r = uVar3;
                    /* Unresolved local var: error err@[???] */
      prVar6 = (b_spill->err).tab;
      prVar7 = (b_spill->err).data;
      (b_spill->err).tab = (runtime_itab *)0x0;
      lVar5 = uVar3 - uVar2;
      puVar4 = puVar4 + (uVar2 & (long)-(uVar1 - uVar2) >> 0x3f);
      if (runtime_writeBarrier._0_4_ == 0) {
        (b_spill->err).data = (void *)0x0;
      }
      else {
        runtime_gcWriteBarrierDX();
        puVar4 = extraout_RAX;
      }
      goto LAB_00674afb;
    }
    b_00 = (bufio_Reader *)(b_spill->w - b_spill->r);
    if ((b_spill->buf).len <= (long)b_00) {
      b_spill->r = b_spill->w;
      puVar4 = (b_spill->buf).array;
      lVar5 = (b_spill->buf).len;
      prVar6 = bufio_ErrBufferFull.tab;
      prVar7 = bufio_ErrBufferFull.data;
      goto LAB_00674afb;
    }
                    /* Unresolved local var: int ~R0@[???] */
    bufio___Reader__fill(b_00);
                    /* Unresolved local var: int i@[???] */
  }
  uVar2 = (b_spill->buf).cap;
  puVar4 = (b_spill->buf).array;
  uVar3 = b_spill->r;
  uVar1 = (long)&(b_00->buf).array + uVar3 + local_20 + 1;
  if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  b_spill->r = uVar1;
  puVar4 = puVar4 + (uVar3 & (long)-(uVar2 - uVar3) >> 0x3f);
  lVar5 = (long)&(b_00->buf).array + local_20 + 1;
  prVar6 = (runtime_itab *)0x0;
  prVar7 = (runtime_itab *)0x0;
LAB_00674afb:
  if (-1 < lVar5 + -1) {
    b_spill->lastByte = (ulong)puVar4[lVar5 + -1];
    b_spill->lastRuneSize = -1;
  }
  mVar8.line.len = (int)b_spill;
  mVar8.line.array = puVar4;
  mVar8.line.cap = lVar5;
  mVar8.err.data = prVar6;
  mVar8.err.tab = prVar7;
  return mVar8;
}

