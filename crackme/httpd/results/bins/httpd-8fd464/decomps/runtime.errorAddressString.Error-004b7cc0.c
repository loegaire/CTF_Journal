
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.errorAddressString.Error(runtime.errorAddressString e,
   string ~r0) */

string runtime_errorAddressString_Error(runtime_errorAddressString e)

{
  uintptr uVar1;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar2;
  string sVar3;
  string a1;
  runtime_errorAddressString e_spill;
  undefined8 local_18;
  
  uVar1 = e.addr;
  sVar2.str = e.msg.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  a1.len = in_RSI;
  a1.str = in_RDI;
  sVar2.len = uVar1;
  sVar2 = runtime_concatstring2((runtime_tmpBuf *)e_spill.msg.len,sVar2,a1);
  sVar3.len = sVar2.len;
  sVar3.str = local_18;
  return sVar3;
}

