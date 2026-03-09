
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.syscall.SockaddrUnix(syscall.SockaddrUnix * p,
   syscall.SockaddrUnix * q, bool r) */

bool type__eq_syscall_SockaddrUnix(syscall_SockaddrUnix *p,syscall_SockaddrUnix *q)

{
  long in_FS_OFFSET;
  syscall_SockaddrUnix *p_spill;
  syscall_SockaddrUnix *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((q_spill->Name).len == (p_spill->Name).len) && (runtime_memequal(), local_10 != '\0')) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

