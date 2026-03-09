
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Reader).ReadByte(bytes.Reader * r, uint8 ~r0, error ~r1)
    */

multireturn_uint8_error_ bytes___Reader__ReadByte(bytes_Reader *r)

{
  uint8 uVar1;
  ulong uVar2;
  ulong uVar3;
  uint8 *puVar4;
  multireturn_uint8_error_ mVar5;
  multireturn_uint8_error_ mVar6;
  bytes_Reader *r_spill;
  
                    /* Unresolved local var: uint8 b@[???] */
  r_spill->prevRune = -1;
  uVar2 = r_spill->i;
  uVar3 = (r_spill->s).len;
  puVar4 = (r_spill->s).array;
  if ((long)uVar3 <= (long)uVar2) {
    mVar6.~r0 = SUB81(io_EOF.tab,0);
    mVar6.~r1.tab = (runtime_itab *)puVar4;
    mVar6.~r1.data = io_EOF.data;
    return mVar6;
  }
  if (uVar2 < uVar3) {
    uVar1 = puVar4[uVar2];
    r_spill->i = uVar2 + 1;
    mVar5.~r0 = (undefined1)(uVar2 + 1);
    mVar5.~r1.tab = (runtime_itab *)puVar4;
    mVar5.~r1.data._0_1_ = uVar1;
    mVar5.~r1.data._1_7_ = 0;
    return mVar5;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

