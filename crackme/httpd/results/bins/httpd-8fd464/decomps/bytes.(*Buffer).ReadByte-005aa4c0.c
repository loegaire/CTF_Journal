
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Buffer).ReadByte(bytes.Buffer * b, uint8 ~r0, error ~r1)
    */

multireturn_uint8_error_ bytes___Buffer__ReadByte(bytes_Buffer *b)

{
  uint8 uVar1;
  ulong uVar2;
  uint8 *puVar3;
  ulong uVar4;
  multireturn_uint8_error_ mVar5;
  multireturn_uint8_error_ mVar6;
  bytes_Buffer *b_spill;
  
                    /* Unresolved local var: uint8 c@[???] */
  uVar2 = (b_spill->buf).len;
  puVar3 = (b_spill->buf).array;
  uVar4 = b_spill->off;
  if ((long)uVar2 <= (long)uVar4) {
    (b_spill->buf).len = 0;
    b_spill->off = 0;
    b_spill->lastRead = 0;
    mVar6.~r0 = SUB81(io_EOF.tab,0);
    mVar6.~r1.tab = (runtime_itab *)puVar3;
    mVar6.~r1.data = io_EOF.data;
    return mVar6;
  }
  if (uVar4 < uVar2) {
    uVar1 = puVar3[uVar4];
    b_spill->off = uVar4 + 1;
    b_spill->lastRead = -1;
    mVar5.~r0 = (undefined1)(uVar4 + 1);
    mVar5.~r1.tab = (runtime_itab *)puVar3;
    mVar5.~r1.data._0_1_ = uVar1;
    mVar5.~r1.data._1_7_ = 0;
    return mVar5;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

