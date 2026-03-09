
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_thr_start(void)

{
  long lVar1;
  code *pcVar2;
  long *in_RDI;
  long in_FS_OFFSET;
  
  runtime_settls();
  lVar1 = *in_RDI;
  *(long **)(lVar1 + 0x30) = in_RDI;
  *(long *)(in_FS_OFFSET + -8) = lVar1;
  runtime_stackcheck();
  runtime_mstart();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

