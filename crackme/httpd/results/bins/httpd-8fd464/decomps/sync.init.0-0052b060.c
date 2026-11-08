
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sync_init_0(void)

{
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sync_runtime_registerPoolCleanup((func__ **)&PTR_sync_poolCleanup_002b3ac8);
  return;
}

