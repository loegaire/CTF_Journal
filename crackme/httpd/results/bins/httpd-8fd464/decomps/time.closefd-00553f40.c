
/* WARNING: Unknown calling convention */

void time_closefd(uintptr fd)

{
  long in_FS_OFFSET;
  uintptr fd_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  syscall_Close(fd_spill);
  return;
}

