
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).ReadFrom(os.File * f, io.Reader r, int64 n, error err)
    */

multireturn_int64_error__conflict os___File__ReadFrom(os_File *f,io_Reader r)

{
  runtime_itab *prVar1;
  long in_FS_OFFSET;
  multireturn_int64_error__conflict mVar2;
  multireturn_int64_error__conflict5 mVar3;
  multireturn_int64_error__conflict mVar4;
  io_Reader r_00;
  os_File *f_spill;
  io_Reader r_spill;
  undefined8 local_20;
  void *local_18;
  
  mVar2.err.tab = r.tab;
                    /* Unresolved local var: error e@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: error err@[???] */
  prVar1 = os_ErrInvalid.tab;
  if (f_spill != (os_File *)0x0) {
    prVar1 = (runtime_itab *)0x0;
  }
  if (prVar1 == (runtime_itab *)0x0) {
    r_00.data = (void *)0x0;
    r_00.tab = mVar2.err.tab;
    mVar3 = os_genericReadFrom(r_spill.data,r_00);
    mVar4.err.tab = mVar3.~r3.tab;
    mVar4.n = local_20;
    mVar4.err.data = local_18;
    return mVar4;
  }
  mVar2.n = (int64)f_spill;
  mVar2.err.data = prVar1;
  return mVar2;
}

