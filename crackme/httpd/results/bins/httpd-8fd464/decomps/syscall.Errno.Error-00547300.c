
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Errno.Error(syscall.Errno e, string ~r0) */

string syscall_Errno_Error(syscall_Errno e)

{
  string *psVar1;
  string *psVar2;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar3;
  string a0;
  string a1;
  syscall_Errno e_spill;
  runtime_tmpBuf *local_38;
  int local_30;
  uint8 *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (e_spill < 0x61) {
    psVar2 = syscall_errors + e_spill;
                    /* Unresolved local var: string s@[???] */
    psVar1 = syscall_errors + e_spill;
    e_spill = (syscall_Errno)psVar1->str;
    if (psVar2->len != 0) {
      return *psVar1;
    }
  }
  sVar3 = internal_itoa_Itoa(e_spill);
  a0.str = (uint8 *)sVar3.len;
  a0.len = local_30;
  a1.len = in_RSI;
  a1.str = in_RDI;
  sVar3 = runtime_concatstring2(local_38,a0,a1);
  sVar3.str = local_18;
  return sVar3;
}

