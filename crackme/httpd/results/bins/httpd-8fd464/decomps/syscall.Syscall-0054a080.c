
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syscall_Syscall(void)

{
  undefined1 in_CF;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  runtime_entersyscall();
  syscall();
  if ((bool)in_CF) {
    uStack0000000000000028 = 0xffffffffffffffff;
    uStack0000000000000030 = 0;
    runtime_exitsyscall();
    return;
  }
  uStack0000000000000038 = 0;
  runtime_exitsyscall();
  return;
}

