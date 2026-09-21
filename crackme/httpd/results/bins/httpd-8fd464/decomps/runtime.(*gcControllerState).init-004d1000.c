
/* WARNING: Unknown calling convention */

void runtime___gcControllerState__init(runtime_gcControllerState *c,int32 gcPercent)

{
  long in_FS_OFFSET;
  runtime_gcControllerState *c_spill;
  int32 gcPercent_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  c_spill->heapMinimum = 0x400000;
  c_spill->triggerRatio = 0.875;
  c_spill->heapMarked = (uint64)&DAT_00222222;
  runtime___gcControllerState__setGCPercent
            ((runtime_gcControllerState *)(ulong)(uint)gcPercent_spill,gcPercent);
  return;
}

