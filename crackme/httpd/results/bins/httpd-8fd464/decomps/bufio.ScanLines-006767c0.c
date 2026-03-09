
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.ScanLines([]uint8 data, bool atEOF, int advance, []uint8
   token, error err) */

multireturn_int___uint8_error_ bufio_ScanLines(__uint8 data,bool atEOF)

{
  undefined1 auVar1 [48];
  ulong uVar2;
  ulong in_RSI;
  undefined7 in_register_00000039;
  undefined8 uVar3;
  undefined8 in_R8;
  long in_FS_OFFSET;
  multireturn_int___uint8_error_ mVar4;
  multireturn_int___uint8_error_ mVar5;
  multireturn_int___uint8_error_ mVar6;
  __uint8 data_spill;
  bool atEOF_spill;
  ulong local_10;
  
  uVar3 = CONCAT71(in_register_00000039,atEOF);
  mVar4.token.array = data.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((atEOF_spill) && (data_spill.len == 0)) {
    mVar4.advance = 1;
    mVar4.err.tab = (runtime_itab *)in_RSI;
    mVar4.token.cap = uVar3;
    mVar4.token.len = 0;
    mVar4.err.data = (void *)in_R8;
    return mVar4;
  }
  internal_bytealg_IndexByte();
                    /* Unresolved local var: int i@[???] */
  if ((long)local_10 < 0) {
    if (atEOF_spill) {
      if ((0 < data_spill.len) && (data_spill.array[data_spill.len + -1] == 0xd)) {
        mVar4.token.array = data_spill.len + -1;
      }
      mVar6.token.array = (uint8 *)mVar4.token.array;
      mVar6.advance = data_spill.cap;
      mVar6.err.tab = (runtime_itab *)in_RSI;
      mVar6.token.cap = uVar3;
      mVar6.token.len = (int)data_spill.array;
      mVar6.err.data = (void *)in_R8;
      return mVar6;
    }
    auVar1._24_8_ = in_RSI;
    auVar1._16_8_ = uVar3;
    auVar1._8_8_ = local_10;
    auVar1._0_8_ = mVar4.token.array;
    auVar1._32_8_ = in_R8;
    auVar1._40_8_ = 0;
    return (multireturn_int___uint8_error_)(auVar1 << 0x40);
  }
  if (local_10 <= (ulong)data_spill.cap) {
    uVar2 = local_10;
    if ((0 < (long)local_10) && (data_spill.array[local_10 - 1] == 0xd)) {
      in_RSI = local_10 - 1;
      uVar2 = in_RSI;
    }
    mVar5.token.array = local_10 + 1;
    mVar5.advance = (int)data_spill.array;
    mVar5.err.tab = (runtime_itab *)in_RSI;
    mVar5.token.cap = uVar3;
    mVar5.token.len = uVar2;
    mVar5.err.data = (void *)in_R8;
    return mVar5;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}

