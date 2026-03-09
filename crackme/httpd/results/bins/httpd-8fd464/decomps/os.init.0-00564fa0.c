
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void os_init_0(void)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  os_runtime_args();
  os_Args.len = local_18;
  os_Args.cap = local_10;
  if (runtime_writeBarrier._0_4_ == 0) {
    os_Args.array = local_20;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

