
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syscall_init(void)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  syscall_runtime_envs();
  syscall_envs.len = local_18;
  syscall_envs.cap = local_10;
  if (runtime_writeBarrier._0_4_ == 0) {
    syscall_envs.array = local_20;
  }
  else {
    runtime_gcWriteBarrier();
  }
  syscall_minRoutingSockaddrLen = 8;
  runtime_makemap_small();
  if (runtime_writeBarrier._0_4_ == 0) {
    syscall__stmp_3._8_8_ = local_20;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

