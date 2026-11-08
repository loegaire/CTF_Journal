
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Reader).ReadByte(bufio.Reader * b, uint8 ~r0, error ~r1)
    */

multireturn_uint8_error_ bufio___Reader__ReadByte(bufio_Reader *b)

{
  byte bVar1;
  ulong uVar2;
  uint8 *puVar3;
  runtime_itab *extraout_RAX;
  runtime_itab *prVar4;
  void *pvVar5;
  undefined8 unaff_RBX;
  long in_FS_OFFSET;
  multireturn_uint8_error_ mVar6;
  multireturn_uint8_error_ mVar7;
  bufio_Reader *b_spill;
  
                    /* Unresolved local var: uint8 c@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  b_spill->lastRuneSize = -1;
  while( true ) {
    uVar2 = b_spill->r;
    if (b_spill->w != uVar2) {
      puVar3 = (b_spill->buf).array;
      if (uVar2 < (ulong)(b_spill->buf).len) {
        bVar1 = puVar3[uVar2];
        b_spill->r = uVar2 + 1;
        b_spill->lastByte = (ulong)bVar1;
        mVar7.~r0 = (undefined1)(uVar2 + 1);
        mVar7.~r1.tab = (runtime_itab *)puVar3;
        mVar7.~r1.data._0_1_ = bVar1;
        mVar7.~r1.data._1_7_ = 0;
        return mVar7;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar4 = (b_spill->err).tab;
    pvVar5 = (b_spill->err).data;
    if (prVar4 != (runtime_itab *)0x0) break;
    bufio___Reader__fill((bufio_Reader *)0x0);
  }
  (b_spill->err).tab = (runtime_itab *)0x0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (b_spill->err).data = (void *)0x0;
  }
  else {
    runtime_gcWriteBarrierDX();
    prVar4 = extraout_RAX;
  }
  mVar6.~r0 = SUB81(prVar4,0);
  mVar6.~r1.tab = (runtime_itab *)unaff_RBX;
  mVar6.~r1.data = pvVar5;
  return mVar6;
}

