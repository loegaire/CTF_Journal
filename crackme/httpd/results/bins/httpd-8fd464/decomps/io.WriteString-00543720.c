
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.WriteString(io.Writer w, string s, int n, error err) */

multireturn_int_error_ io_WriteString(io_Writer w,string s)

{
  long in_FS_OFFSET;
  runtime_iface rVar1;
  string s_00;
  multireturn_int_error_ mVar2;
  multireturn_int_error_ mVar3;
  io_Writer w_spill;
  string s_spill;
  long local_28;
  void *local_20;
  void *local_18;
  
  rVar1.tab = w.data;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar1.data = w_spill.data;
                    /* Unresolved local var: io.StringWriter sw@[???] */
  rVar1 = runtime_assertI2I2((runtime_interfacetype *)w_spill.tab,rVar1);
  mVar2.err.tab = rVar1.data;
  if (local_28 != 0) {
    (**(code **)(local_28 + 0x18))();
    mVar2.n = local_28;
    mVar2.err.data = local_20;
    return mVar2;
  }
  s_00.len = (int)local_20;
  s_00.str = mVar2.err.tab;
  runtime_stringtoslicebyte((runtime_tmpBuf *)s_spill.len,s_00);
  (*(code *)(w_spill.tab)->fun[0])();
  mVar3.err.tab = local_18;
  mVar3.n = (int)local_20;
  mVar3.err.data = local_18;
  return mVar3;
}

