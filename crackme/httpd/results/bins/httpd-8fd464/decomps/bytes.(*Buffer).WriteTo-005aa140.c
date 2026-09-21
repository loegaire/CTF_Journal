
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Buffer).WriteTo(bytes.Buffer * b, io.Writer w, int64 n,
   error err) */

multireturn_int64_error__conflict bytes___Buffer__WriteTo(bytes_Buffer *b,io_Writer w)

{
  ulong uVar1;
  void *pvVar2;
  uint8 *puVar3;
  long in_FS_OFFSET;
  interface___ e;
  multireturn_int64_error__conflict mVar4;
  multireturn_int64_error__conflict mVar5;
  multireturn_int64_error__conflict mVar6;
  bytes_Buffer *b_spill;
  io_Writer w_spill;
  void *local_28;
  void *local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  b_spill->lastRead = 0;
  uVar1 = (b_spill->buf).len;
  puVar3 = (b_spill->buf).array;
  pvVar2 = (void *)(uVar1 - b_spill->off);
                    /* Unresolved local var: int nBytes@[???]
                       Unresolved local var: int ~R0@[???] */
  if ((long)pvVar2 < 1) {
    local_28 = (void *)0x0;
code_r0x005aa209:
    (b_spill->buf).len = 0;
    b_spill->off = 0;
    b_spill->lastRead = 0;
    mVar4.err.tab = (runtime_itab *)puVar3;
    mVar4.n = (int64)local_28;
    mVar4.err.data = pvVar2;
    return mVar4;
  }
                    /* Unresolved local var: int m@[???]
                       Unresolved local var: error e@[???] */
  if ((ulong)b_spill->off <= uVar1) {
    (*(code *)(w_spill.tab)->fun[0])();
    mVar6.err.tab = local_20;
    mVar6.n = (int64)local_28;
    mVar5.err.tab = local_20;
    mVar5.n = (int64)local_28;
    if ((long)local_28 <= (long)pvVar2) {
      b_spill->off = b_spill->off + (long)local_28;
      if (local_20 != (void *)0x0) {
        mVar6.err.data = local_20;
        return mVar6;
      }
      if (local_28 != pvVar2) {
        mVar5.err.data = io_ErrShortWrite.tab;
        return mVar5;
      }
      pvVar2 = (void *)0x0;
      puVar3 = (uint8 *)0x0;
      goto code_r0x005aa209;
    }
    e.data = local_20;
    e._type = (runtime__type *)bytes__stmp_2;
    runtime_gopanic(e);
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

