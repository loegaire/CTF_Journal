
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_mmap(void)

{
  bool in_CF;
  
  syscall();
  if (in_CF) {
    return;
  }
  return;
}

