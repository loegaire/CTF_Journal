
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.os.SyscallError(os.SyscallError * p, os.SyscallError * q,
   bool r) */

bool type__eq_os_SyscallError(os_SyscallError *p,os_SyscallError *q)

{
  runtime_itab *y;
  long in_FS_OFFSET;
  os_SyscallError *p_spill;
  os_SyscallError *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((q_spill->Syscall).len == (p_spill->Syscall).len) && (runtime_memequal(), local_10 != '\0'))
  {
    y = (p_spill->Err).tab;
    if ((q_spill->Err).tab != y) {
      return false;
    }
    runtime_ifaceeq((p_spill->Err).data,(q_spill->Err).data,y);
    return (bool)local_10;
  }
  return false;
}

