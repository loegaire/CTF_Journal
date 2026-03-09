
/* WARNING: Unknown calling convention */

void net___file__close(net_file *f)

{
  long in_FS_OFFSET;
  net_file *f_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (f_spill->file != (os_File *)0x0) {
    os___file__close(f_spill->file->file);
  }
  return;
}

