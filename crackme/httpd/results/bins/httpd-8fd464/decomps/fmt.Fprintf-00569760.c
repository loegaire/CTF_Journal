
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.Fprintf(io.Writer w, string format, []interface_{} a, int n,
   error err) */

multireturn_int_error_ fmt_Fprintf(io_Writer w,string format,__interface___ a)

{
  interface___ *piVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  string format_00;
  multireturn_int_error_ mVar4;
  __interface___ a_00;
  io_Writer w_spill;
  string format_spill;
  __interface___ a_spill;
  fmt_pp *local_60;
  undefined8 local_30;
  
  iVar3 = a.len;
  piVar1 = a.array;
  iVar2 = format.len;
  format_00.str = w.data;
                    /* Unresolved local var: fmt.pp * p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  fmt_newPrinter();
  format_00.len = a_spill.cap;
  a_00.len = (int)piVar1;
  a_00.array = (interface___ *)iVar2;
  a_00.cap = iVar3;
  fmt___pp__doPrintf(local_60,format_00,a_00);
  (*(code *)(w_spill.tab)->fun[0])();
  fmt___pp__free((fmt_pp *)a_spill.len);
  mVar4.err.tab = (runtime_itab *)local_60;
  mVar4.n = local_30;
  mVar4.err.data = (void *)a_spill.cap;
  return mVar4;
}

