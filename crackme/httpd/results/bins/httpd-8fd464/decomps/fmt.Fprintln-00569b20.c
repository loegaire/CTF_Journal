
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.Fprintln(io.Writer w, []interface_{} a, int n, error err) */

multireturn_int_error_ fmt_Fprintln(io_Writer w,__interface___ a)

{
  int iVar1;
  long in_FS_OFFSET;
  multireturn_int_error_ mVar2;
  __interface___ a_00;
  io_Writer w_spill;
  __interface___ a_spill;
  fmt_pp *local_60;
  fmt_pp *local_40;
  void *local_38;
  undefined8 local_30;
  
  iVar1 = a.len;
  a_00.array = w.data;
                    /* Unresolved local var: fmt.pp * p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  fmt_newPrinter();
  a_00.len = a_spill.cap;
  a_00.cap = iVar1;
  fmt___pp__doPrintln(local_60,a_00);
  (*(code *)(w_spill.tab)->fun[0])();
  fmt___pp__free(local_40);
  mVar2.err.tab = (runtime_itab *)local_60;
  mVar2.n = local_30;
  mVar2.err.data = local_38;
  return mVar2;
}

