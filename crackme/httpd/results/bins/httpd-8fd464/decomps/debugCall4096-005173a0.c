
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void debugCall4096(void)

{
  long *plVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  undefined1 auStack_1008 [128];
  undefined1 auStack_f88 [3968];
  
  while( true ) {
    if (((undefined1 *)0xf87 < &stack0x00000000) &&
       (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < auStack_f88)) break;
    runtime_morestack_noctxt();
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
    *plVar1 = (long)auStack_1008;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

