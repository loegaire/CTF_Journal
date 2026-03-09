
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mime_init_1(void)

{
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    mime_osInitMime = (func__ **)&PTR_mime_initMimeUnix_002b33f0;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

