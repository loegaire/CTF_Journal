
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Writer).Flush(bufio.Writer * b, error ~r0) */

error bufio___Writer__Flush(bufio_Writer *b)

{
  ulong uVar1;
  ulong uVar2;
  runtime_itab *extraout_RAX;
  runtime_itab *prVar3;
  runtime_itab *extraout_RAX_00;
  long in_FS_OFFSET;
  error eVar4;
  error eVar5;
  error eVar6;
  error eVar7;
  bufio_Writer *b_spill;
  runtime_itab *local_38;
  runtime_itab *local_30;
  void *local_28;
  
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar3 = (b_spill->err).tab;
  if (prVar3 != (runtime_itab *)0x0) {
    eVar7.data = prVar3;
    eVar7.tab = (runtime_itab *)b_spill;
    return eVar7;
  }
  if (b_spill->n == 0) {
    eVar6.data = (void *)0x0;
    eVar6.tab = (runtime_itab *)b_spill;
    return eVar6;
  }
  if ((ulong)(b_spill->buf).cap < (ulong)b_spill->n) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  (*(code *)((b_spill->wr).tab)->fun[0])();
  uVar1 = b_spill->n;
  if (((long)local_38 < (long)uVar1) && (local_30 == (runtime_itab *)0x0)) {
    local_30 = io_ErrShortWrite.tab;
    local_28 = io_ErrShortWrite.data;
  }
  if (local_30 == (runtime_itab *)0x0) {
    b_spill->n = 0;
    eVar5.data = (void *)0x0;
    eVar5.tab = local_38;
    return eVar5;
  }
  prVar3 = local_38;
  if ((0 < (long)local_38) && ((long)local_38 < (long)uVar1)) {
    uVar2 = (b_spill->buf).cap;
    if (uVar2 < uVar1 - (long)local_38) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    prVar3 = (runtime_itab *)0x0;
    if (((long)((long)local_38 - uVar2) >> 0x3f & (ulong)local_38) != 0) {
      runtime_memmove();
      prVar3 = extraout_RAX;
    }
  }
  b_spill->n = b_spill->n - (long)local_38;
  (b_spill->err).tab = local_30;
  if (runtime_writeBarrier._0_4_ == 0) {
    (b_spill->err).data = local_28;
  }
  else {
    runtime_gcWriteBarrierSI();
    prVar3 = extraout_RAX_00;
  }
  eVar4.data = local_30;
  eVar4.tab = prVar3;
  return eVar4;
}

