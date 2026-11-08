
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Errno.Temporary(syscall.Errno e, bool ~r0) */

bool syscall_Errno_Temporary(syscall_Errno e)

{
  bool bVar1;
  syscall_Errno e_spill;
  
  if (((e_spill == 4) || (e_spill == 0x18)) || (e_spill == 0x17)) {
    bVar1 = true;
  }
  else if (e_spill == 0x23) {
    bVar1 = true;
  }
  else {
    bVar1 = e_spill == 0x3c;
  }
  return bVar1;
}

