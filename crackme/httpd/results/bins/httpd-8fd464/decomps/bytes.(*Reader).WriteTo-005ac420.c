
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Reader).WriteTo(bytes.Reader * r, io.Writer w, int64 n,
   error err) */

multireturn_int64_error__conflict bytes___Reader__WriteTo(bytes_Reader *r,io_Writer w)

{
  void *pvVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  interface___ e;
  multireturn_int64_error__conflict mVar3;
  multireturn_int64_error__conflict mVar4;
  bytes_Reader *r_spill;
  io_Writer w_spill;
  void *local_28;
  runtime_itab *local_20;
  
                    /* Unresolved local var: int m@[???]
                       Unresolved local var: []uint8 b@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  r_spill->prevRune = -1;
  pvVar1 = (void *)r_spill->i;
  pvVar2 = (void *)(r_spill->s).len;
  if ((long)pvVar2 <= (long)pvVar1) {
    mVar3.err.tab = (runtime_itab *)(r_spill->s).array;
    mVar3.n = (int64)pvVar1;
    mVar3.err.data = pvVar2;
    return mVar3;
  }
  if (pvVar1 <= pvVar2) {
    pvVar2 = (void *)((long)pvVar2 - (long)pvVar1);
    (*(code *)(w_spill.tab)->fun[0])();
    if ((long)local_28 <= (long)pvVar2) {
      r_spill->i = r_spill->i + (long)local_28;
      if ((local_28 != pvVar2) && (local_20 == (runtime_itab *)0x0)) {
        local_20 = io_ErrShortWrite.tab;
      }
      mVar4.err.tab = pvVar2;
      mVar4.n = (int64)local_28;
      mVar4.err.data = local_20;
      return mVar4;
    }
    e.data = pvVar2;
    e._type = (runtime__type *)bytes__stmp_5;
    runtime_gopanic(e);
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

