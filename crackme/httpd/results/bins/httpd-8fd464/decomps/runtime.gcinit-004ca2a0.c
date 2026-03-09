
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcinit(void)

{
  int32 unaff_EBX;
  long in_FS_OFFSET;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_mheap_.sweepDrained = 1;
  runtime_readGOGC();
  runtime___gcControllerState__init((runtime_gcControllerState *)(ulong)local_18,unaff_EBX);
  runtime_work.startSema = 1;
  runtime_work.markDoneSema = 1;
  return;
}

