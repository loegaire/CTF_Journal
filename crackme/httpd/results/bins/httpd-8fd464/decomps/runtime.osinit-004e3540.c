
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_osinit(void)

{
  long in_FS_OFFSET;
  undefined4 local_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_getncpu();
  runtime_ncpu = local_10;
  if (runtime_physPageSize == 0) {
    runtime_getPageSize();
    runtime_physPageSize = CONCAT44(uStack_c,local_10);
  }
  return;
}

