
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*Reader).WriteTo(strings.Reader * r, io.Writer w, int64
   n, error err) */

multireturn_int64_error__conflict strings___Reader__WriteTo(strings_Reader *r,io_Writer w)

{
  void *pvVar1;
  uint8 *puVar2;
  void *pvVar3;
  int in_RDI;
  long in_FS_OFFSET;
  multireturn_int64_error__conflict mVar4;
  multireturn_int64_error__conflict mVar5;
  io_Writer w_00;
  interface___ e;
  string s;
  strings_Reader *r_spill;
  io_Writer w_spill;
  void *local_28;
  runtime_itab *local_20;
  
                    /* Unresolved local var: int m@[???]
                       Unresolved local var: string s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  r_spill->prevRune = -1;
  pvVar1 = (void *)r_spill->i;
  pvVar3 = (void *)(r_spill->s).len;
  puVar2 = (r_spill->s).str;
  if ((long)pvVar3 <= (long)pvVar1) {
    mVar4.err.tab = (runtime_itab *)puVar2;
    mVar4.n = (int64)pvVar1;
    mVar4.err.data = pvVar3;
    return mVar4;
  }
  if (pvVar1 <= pvVar3) {
    pvVar3 = (void *)((long)pvVar3 - (long)pvVar1);
    s.str = (uint8 *)(-(long)pvVar3 >> 0x3f);
    w_00.tab = (runtime_itab *)(puVar2 + ((ulong)pvVar1 & (ulong)s.str));
    w_00.data = puVar2;
    s.len = in_RDI;
    io_WriteString(w_00,s);
    if ((long)local_28 <= (long)pvVar3) {
      r_spill->i = r_spill->i + (long)local_28;
      if ((local_28 != pvVar3) && (local_20 == (runtime_itab *)0x0)) {
        local_20 = io_ErrShortWrite.tab;
      }
      mVar5.err.tab = pvVar3;
      mVar5.n = (int64)local_28;
      mVar5.err.data = local_20;
      return mVar5;
    }
    e.data = pvVar3;
    e._type = (runtime__type *)strings__stmp_7;
    runtime_gopanic(e);
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

