
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Reader).writeBuf(bufio.Reader * b, io.Writer w, int64 ~r1,
   error ~r2) */

multireturn_int64_error_ bufio___Reader__writeBuf(bufio_Reader *b,io_Writer w)

{
  code *pcVar1;
  runtime__type *prVar2;
  long in_FS_OFFSET;
  interface___ e;
  multireturn_int64_error_ mVar3;
  bufio_Reader *b_spill;
  io_Writer w_spill;
  long local_20;
  void *local_18;
  
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((ulong)b_spill->w <= (ulong)(b_spill->buf).cap) {
    if ((ulong)b_spill->r <= (ulong)b_spill->w) {
      pcVar1 = (code *)(w_spill.tab)->fun[0];
      (*pcVar1)();
      if (-1 < local_20) {
        b_spill->r = b_spill->r + local_20;
        mVar3.~r2.tab = (runtime_itab *)b_spill;
        mVar3.~r1 = local_20;
        mVar3.~r2.data = local_18;
        return mVar3;
      }
      prVar2 = (runtime__type *)0x0;
      if (bufio_errNegativeWrite.tab != (runtime_itab *)0x0) {
        prVar2 = (bufio_errNegativeWrite.tab)->_type;
      }
      e.data = pcVar1;
      e._type = prVar2;
      runtime_gopanic(e);
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}

