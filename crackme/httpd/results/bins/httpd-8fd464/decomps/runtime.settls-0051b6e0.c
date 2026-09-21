
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_settls(void)

{
  ulong in_RDI;
  
  syscall();
  if (0xfffffffffffffff7 < in_RDI) {
    _DAT_000000f1 = 0xf1;
  }
  return;
}

