
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_cpuset_getaffinity(void)

{
  syscall();
  return;
}

