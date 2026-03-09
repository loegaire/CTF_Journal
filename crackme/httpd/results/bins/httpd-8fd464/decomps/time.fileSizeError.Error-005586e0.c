
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.fileSizeError.Error(time.fileSizeError f, string ~r0) */

string time_fileSizeError_Error(time_fileSizeError f)

{
  int in_RCX;
  int in_RSI;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string sVar1;
  string sVar2;
  string a1;
  string a2;
  time_fileSizeError f_spill;
  uint8 *local_18;
  
  sVar1.str = (uint8 *)f.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  a1.len = in_RSI;
  a1.str = in_RDI;
  sVar1.len = in_RCX;
  a2.len = in_R9;
  a2.str = in_R8;
  sVar1 = runtime_concatstring3((runtime_tmpBuf *)&DAT_0029452a,sVar1,a1,a2);
  sVar2.len = sVar1.len;
  sVar2.str = local_18;
  return sVar2;
}

