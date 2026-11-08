
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*SyscallError).Error(os.SyscallError * e, string ~r0) */

string os___SyscallError__Error(os_SyscallError *e)

{
  int in_RSI;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string sVar1;
  string a0;
  string a1;
  string a2;
  os_SyscallError *e_spill;
  uint8 *local_40;
  uint8 *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  (*(code *)((e_spill->Err).tab)->fun[0])();
  a0.len = (int)(e_spill->Syscall).str;
  a0.str = local_40;
  a1.len = in_RSI;
  a1.str = in_RDI;
  a2.len = in_R9;
  a2.str = in_R8;
  sVar1 = runtime_concatstring3((runtime_tmpBuf *)&DAT_002877a3,a0,a1,a2);
  sVar1.str = local_18;
  return sVar1;
}

