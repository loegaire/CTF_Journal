
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syscall_RawSyscall(void)

{
  bool in_CF;
  
  syscall();
  if (in_CF) {
    return;
  }
  return;
}

