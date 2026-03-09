
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_exit(void)

{
  syscall();
  _DAT_000000f1 = 0xf1;
  return;
}

