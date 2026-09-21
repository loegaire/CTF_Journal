
/* WARNING: Unknown calling convention */

void sync_runtime_Semrelease(uint32 *addr,bool handoff,int skipframes)

{
  long in_FS_OFFSET;
  uint32 *addr_spill;
  bool handoff_spill;
  int skipframes_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_semrelease1((uint32 *)skipframes_spill,handoff,skipframes);
  return;
}

