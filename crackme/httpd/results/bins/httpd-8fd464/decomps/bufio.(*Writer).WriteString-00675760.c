
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Writer).WriteString(bufio.Writer * b, string s, int ~r1,
   error ~r2) */

multireturn_int_error__conflict bufio___Writer__WriteString(bufio_Writer *b,string s)

{
  ulong uVar1;
  uint8 *puVar2;
  long lVar3;
  ulong uVar4;
  bufio_Writer *b_00;
  void *pvVar5;
  long in_FS_OFFSET;
  multireturn_int_error__conflict mVar6;
  multireturn_int_error__conflict mVar7;
  bufio_Writer *b_spill;
  string s_spill;
  
                    /* Unresolved local var: int nn@[???]
                       Unresolved local var: int n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int ~R0@[???] */
  b_00 = (bufio_Writer *)0x0;
  while( true ) {
    uVar1 = (b_spill->buf).len;
    puVar2 = (b_spill->buf).array;
    lVar3 = (b_spill->buf).cap;
    uVar4 = b_spill->n;
    mVar7.~r2.data = (void *)(uVar1 - uVar4);
    if ((s_spill.len <= (long)mVar7.~r2.data) || ((b_spill->err).tab != (runtime_itab *)0x0)) {
      if ((b_spill->err).tab != (runtime_itab *)0x0) {
        mVar7.~r2.tab = (runtime_itab *)s_spill.len;
        mVar7.~r1 = (int)b_00;
        return mVar7;
      }
      if (uVar4 <= uVar1) {
        pvVar5 = mVar7.~r2.data;
        if (s_spill.len < (long)mVar7.~r2.data) {
          pvVar5 = (void *)s_spill.len;
        }
        mVar6.~r2.tab = puVar2 + (uVar4 & (long)(uVar4 - lVar3) >> 0x3f);
        if (s_spill.str != mVar6.~r2.tab) {
          runtime_memmove();
        }
        b_spill->n = b_spill->n + (long)pvVar5;
        mVar6.~r1 = (long)&(b_00->err).tab + (long)pvVar5;
        mVar6.~r2.data = pvVar5;
        return mVar6;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if (uVar1 < uVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if (s_spill.str != puVar2 + (uVar4 & (long)(uVar4 - lVar3) >> 0x3f)) {
      runtime_memmove();
    }
    b_spill->n = b_spill->n + (long)mVar7.~r2.data;
    if ((ulong)s_spill.len < mVar7.~r2.data) break;
                    /* Unresolved local var: int n@[???] */
    bufio___Writer__Flush(b_00);
    s_spill.len = s_spill.len - (long)mVar7.~r2.data;
    s_spill.str = s_spill.str + (-s_spill.len >> 0x3f & (ulong)mVar7.~r2.data);
    b_00 = (bufio_Writer *)((long)mVar7.~r2.data + (long)b_00);
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

