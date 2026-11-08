
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.Sprint([]interface_{} a, string ~r1) */

string fmt_Sprint(__interface___ a)

{
  int in_RDI;
  long in_FS_OFFSET;
  string sVar1;
  __interface___ a_00;
  __interface___ a_spill;
  fmt_pp *local_48;
  uint8 *local_28;
  
  a_00.array = (uint8 *)a.len;
                    /* Unresolved local var: fmt.pp * p@[???]
                       Unresolved local var: string s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  fmt_newPrinter();
  a_00.len = a_spill.cap;
  a_00.cap = in_RDI;
  fmt___pp__doPrint(local_48,a_00);
  sVar1 = runtime_slicebytetostring
                    ((runtime_tmpBuf *)local_48,a_00.array,(int)(local_48->buf).array);
  fmt___pp__free((fmt_pp *)a_spill.cap);
  sVar1.str = local_28;
  return sVar1;
}

