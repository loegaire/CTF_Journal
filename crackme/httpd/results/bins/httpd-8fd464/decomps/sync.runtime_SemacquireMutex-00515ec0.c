
/* WARNING: Unknown calling convention */

void sync_runtime_SemacquireMutex(uint32 *addr,bool lifo,int skipframes)

{
  int in_RDI;
  long in_FS_OFFSET;
  uint32 *addr_spill;
  bool lifo_spill;
  int skipframes_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_semacquire1((uint32 *)skipframes_spill,lifo,skipframes,in_RDI);
  return;
}

