
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).WriteString(os.File * f, string s, int n, error err) */

multireturn_int_error_ os___File__WriteString(os_File *f,string s)

{
  int in_RDI;
  long in_FS_OFFSET;
  __uint8 b_00;
  multireturn_int_error_ mVar1;
  os_File *f_spill;
  string s_spill;
  undefined8 local_38;
  undefined8 local_30;
  __uint8 b;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  b_00.len = s_spill.len;
  b_00.array = (uint8 *)f_spill;
  b_00.cap = in_RDI;
  mVar1 = os___File__Write((os_File *)s_spill.len,b_00);
  mVar1.n = local_38;
  mVar1.err.data = local_30;
  return mVar1;
}

