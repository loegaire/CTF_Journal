
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syscall_Syscall6(void)

{
  undefined1 in_CF;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  runtime_entersyscall();
  syscall();
  if ((bool)in_CF) {
    uStack0000000000000040 = 0xffffffffffffffff;
    uStack0000000000000048 = 0;
    runtime_exitsyscall();
    return;
  }
  uStack0000000000000050 = 0;
  runtime_exitsyscall();
  return;
}

