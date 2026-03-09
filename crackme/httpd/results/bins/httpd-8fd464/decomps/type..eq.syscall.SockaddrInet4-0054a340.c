
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.syscall.SockaddrInet4(syscall.SockaddrInet4 * p,
   syscall.SockaddrInet4 * q, bool r) */

bool type__eq_syscall_SockaddrInet4(syscall_SockaddrInet4 *p,syscall_SockaddrInet4 *q)

{
  long in_FS_OFFSET;
  syscall_SockaddrInet4 *p_spill;
  syscall_SockaddrInet4 *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memequal();
  return (bool)local_10;
}

