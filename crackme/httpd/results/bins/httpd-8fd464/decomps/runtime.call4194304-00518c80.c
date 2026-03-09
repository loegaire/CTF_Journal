
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_call4194304(void)

{
  long *plVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined8 *in_stack_00000010;
  undefined1 *in_stack_00000018;
  uint in_stack_00000020;
  
  bVar4 = 0;
  while( true ) {
    if ((&UNK_003fff87 < &stack0x00000000) &&
       (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < &stack0xffffffffffc00078)) break;
    runtime_morestack_noctxt();
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
    *plVar1 = (long)&stack0xffffffffffbffff8;
  }
  puVar3 = &stack0xffffffffffbffff8;
  for (uVar2 = (ulong)in_stack_00000020; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *in_stack_00000018;
    in_stack_00000018 = in_stack_00000018 + (ulong)bVar4 * -2 + 1;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  runtime_unspillArgs();
  (*(code *)*in_stack_00000010)();
  runtime_spillArgs();
  callRet();
  return;
}

