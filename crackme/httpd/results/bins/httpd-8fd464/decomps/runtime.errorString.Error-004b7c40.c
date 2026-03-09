
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.errorString.Error(runtime.errorString e, string ~r0) */

string runtime_errorString_Error(runtime_errorString e)

{
  int in_RCX;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar1;
  string sVar2;
  string a1;
  runtime_errorString e_spill;
  undefined8 local_18;
  
  sVar1.str = (uint8 *)e.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  a1.len = in_RSI;
  a1.str = in_RDI;
  sVar1.len = in_RCX;
  sVar1 = runtime_concatstring2((runtime_tmpBuf *)e_spill.len,sVar1,a1);
  sVar2.len = sVar1.len;
  sVar2.str = local_18;
  return sVar2;
}

