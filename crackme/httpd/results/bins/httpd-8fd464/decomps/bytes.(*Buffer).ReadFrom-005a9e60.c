
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Buffer).ReadFrom(bytes.Buffer * b, io.Reader r, int64 n,
   error err) */

multireturn_int64_error__conflict bytes___Buffer__ReadFrom(bytes_Buffer *b,io_Reader r)

{
  runtime__type *prVar1;
  void *pvVar2;
  runtime_itab *prVar3;
  long in_FS_OFFSET;
  interface___ e;
  multireturn_int64_error__conflict mVar4;
  multireturn_int64_error__conflict mVar5;
  bytes_Buffer *b_spill;
  io_Reader r_spill;
  void *local_60;
  char local_58;
  long local_50;
  runtime_itab *local_48;
  
  prVar3 = r.tab;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  b_spill->lastRead = 0;
  mVar4.n = (runtime_itab *)0x0;
  while( true ) {
    bytes___Buffer__grow(b_spill,(int)prVar3);
    if ((void *)(b_spill->buf).cap < local_60) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    (b_spill->buf).len = (int)local_60;
    pvVar2 = (void *)(b_spill->buf).cap;
    if (pvVar2 < local_60) break;
    pvVar2 = (void *)((long)pvVar2 - (long)local_60);
    (*(code *)(r_spill.tab)->fun[0])();
    if (local_50 < 0) {
      prVar1 = (runtime__type *)0x0;
      if (bytes_errNegativeRead.tab != (runtime_itab *)0x0) {
        prVar1 = (bytes_errNegativeRead.tab)->_type;
      }
      e.data = local_48;
      e._type = prVar1;
      runtime_gopanic(e);
      break;
    }
    if ((ulong)(b_spill->buf).cap < (ulong)((long)local_60 + local_50)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    (b_spill->buf).len = (long)local_60 + local_50;
    mVar4.n = (runtime_itab *)((mVar4.n)->_ + local_50 + -0x14);
    prVar3 = local_48;
    local_60 = pvVar2;
    if (io_EOF.tab == local_48) {
      local_60 = io_EOF.data;
      runtime_ifaceeq(mVar4.n,local_48,local_48);
      local_58 = (char)pvVar2;
      if (local_58 != '\0') {
        mVar5.err.tab = local_48;
        mVar5.n = (int64)mVar4.n;
        mVar5.err.data = prVar3;
        return mVar5;
      }
    }
    if (local_48 != (runtime_itab *)0x0) {
      mVar4.err.tab = local_48;
      mVar4.err.data = prVar3;
      return mVar4;
    }
    prVar3 = (runtime_itab *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

