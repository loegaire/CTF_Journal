
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.stringWriter.WriteString(strings.stringWriter w, string s,
   int ~r1, error ~r2) */

multireturn_int_error__conflict strings_stringWriter_WriteString(strings_stringWriter w,string s)

{
  uint8 *puVar1;
  long in_FS_OFFSET;
  string s_00;
  multireturn_int_error__conflict mVar2;
  strings_stringWriter w_spill;
  string s_spill;
  undefined8 local_20;
  void *local_18;
  
  puVar1 = s.str;
  s_00.str = w.w.data;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s_00.len = (int)puVar1;
  runtime_stringtoslicebyte((runtime_tmpBuf *)s_spill.len,s_00);
  (*(code *)(w_spill.w.tab)->fun[0])();
  mVar2.~r2.tab = local_18;
  mVar2.~r1 = local_20;
  mVar2.~r2.data = local_18;
  return mVar2;
}

