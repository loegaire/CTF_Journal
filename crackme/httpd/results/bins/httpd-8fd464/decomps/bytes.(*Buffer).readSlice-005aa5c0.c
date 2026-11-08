
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Buffer).readSlice(bytes.Buffer * b, uint8 delim, []uint8
   line, error err) */

multireturn___uint8_error__conflict6 bytes___Buffer__readSlice(bytes_Buffer *b,uint8 delim)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  runtime_itab *prVar4;
  runtime_itab *prVar5;
  long in_FS_OFFSET;
  multireturn___uint8_error__conflict6 mVar6;
  bytes_Buffer *b_spill;
  uint8 delim_spill;
  long local_10;
  
                    /* Unresolved local var: int end@[???]
                       Unresolved local var: int i@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((ulong)b_spill->off <= (ulong)(b_spill->buf).len) {
    internal_bytealg_IndexByte();
    uVar1 = b_spill->off;
    uVar3 = local_10 + uVar1 + 1;
    if (local_10 < 0) {
      uVar3 = (b_spill->buf).len;
      prVar4 = io_EOF.tab;
      prVar5 = io_EOF.data;
    }
    else {
      prVar4 = (runtime_itab *)0x0;
      prVar5 = (runtime_itab *)0x0;
    }
    uVar2 = (b_spill->buf).cap;
    if (uVar3 <= uVar2) {
      if (uVar1 <= uVar3) {
        b_spill->off = uVar3;
        b_spill->lastRead = -1;
        mVar6.line.len = uVar3 - uVar1;
        mVar6.line.array = (uint8 *)(uVar2 - uVar1);
        mVar6.line.cap = uVar1;
        mVar6.err.data = prVar4;
        mVar6.err.tab = prVar5;
        return mVar6;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

