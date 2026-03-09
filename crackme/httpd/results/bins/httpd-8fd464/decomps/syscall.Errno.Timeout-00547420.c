
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Errno.Timeout(syscall.Errno e, bool ~r0) */

bool syscall_Errno_Timeout(syscall_Errno e)

{
  syscall_Errno e_spill;
  
  return e_spill == 0x23 || e_spill == 0x3c;
}

