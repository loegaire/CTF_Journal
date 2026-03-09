
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.os.file(os.file * p, os.file * q, bool r) */

bool type__eq_os_file(os_file *p,os_file *q)

{
  long in_FS_OFFSET;
  os_file *p_spill;
  os_file *q_spill;
  char local_18;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  type__eq_internal_poll_FD(&p_spill->pfd,&q->pfd);
  if (((local_18 != '\0') && ((q_spill->name).len == (p_spill->name).len)) &&
     (runtime_memequal(), local_10 != '\0')) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

