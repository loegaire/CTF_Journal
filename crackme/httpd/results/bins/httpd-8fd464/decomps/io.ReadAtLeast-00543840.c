
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.ReadAtLeast(io.Reader r, []uint8 buf, int min, int n, error
   err) */

multireturn_int_error_ io_ReadAtLeast(io_Reader r,__uint8 buf,int min)

{
  runtime_itab *tab;
  runtime_itab *prVar1;
  long in_FS_OFFSET;
  multireturn_int_error_ mVar2;
  multireturn_int_error_ mVar3;
  io_Reader r_spill;
  __uint8 buf_spill;
  int min_spill;
  ulong local_40;
  long local_38;
  runtime_itab *local_30;
  
  mVar2.err.tab = r.data;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (buf_spill.len < min_spill) {
    mVar2.n = (int)io_ErrShortBuffer.tab;
    mVar2.err.data = io_ErrShortBuffer.data;
    return mVar2;
  }
  tab = (runtime_itab *)0x0;
  prVar1 = (runtime_itab *)0x0;
  do {
    if (min_spill <= (long)tab) {
LAB_005439da:
      mVar3.err.tab = r_spill.tab;
      mVar3.n = (int)tab;
      mVar3.err.data = (void *)buf_spill.len;
      return mVar3;
    }
    if (prVar1 != (runtime_itab *)0x0) {
      if (((long)tab < min_spill) && (0 < (long)tab)) {
        if (io_EOF.tab == prVar1) {
          runtime_ifaceeq(tab,r_spill.tab,io_EOF.data);
          buf_spill.len = local_40 & 0xff;
        }
        else {
          buf_spill.len = 0;
        }
      }
      goto LAB_005439da;
    }
    if ((ulong)buf_spill.len < tab) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
                    /* Unresolved local var: int nn@[???] */
    local_40 = buf_spill.cap - (long)tab;
    (*(code *)(r_spill.tab)->fun[0])();
    tab = (runtime_itab *)(tab->_ + local_38 + -0x14);
    prVar1 = local_30;
  } while( true );
}

