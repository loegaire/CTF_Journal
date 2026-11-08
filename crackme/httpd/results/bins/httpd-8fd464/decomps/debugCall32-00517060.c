
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void debugCall32(void)

{
  long *plVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  undefined1 auStack_28 [32];
  
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
    *plVar1 = (long)auStack_28;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

