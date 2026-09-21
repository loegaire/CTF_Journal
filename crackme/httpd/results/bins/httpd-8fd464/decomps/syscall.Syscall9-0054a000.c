
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syscall_Syscall9(void)

{
  undefined1 in_CF;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  
  runtime_entersyscall();
  syscall();
  if ((bool)in_CF) {
    uStack0000000000000058 = 0xffffffffffffffff;
    uStack0000000000000060 = 0;
    runtime_exitsyscall();
    return;
  }
  uStack0000000000000068 = 0;
  runtime_exitsyscall();
  return;
}

