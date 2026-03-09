
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*ParseError).Error(net.ParseError * e, string ~r0) */

string net___ParseError__Error(net_ParseError *e)

{
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  uint8 *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  string sVar1;
  string a0;
  string a1;
  string a2;
  string a3;
  net_ParseError *e_spill;
  uint8 *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  a0.len = (int)&DAT_002877a3;
  a0.str = (e_spill->Text).str;
  a1.len = (int)&DAT_0028c512;
  a1.str = in_RDI;
  a2.len = in_R9;
  a2.str = in_R8;
  a3.len = in_R11;
  a3.str = in_R10;
  sVar1 = runtime_concatstring4((runtime_tmpBuf *)(e_spill->Text).len,a0,a1,a2,a3);
  sVar1.str = local_18;
  return sVar1;
}

