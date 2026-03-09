
/* WARNING: Unknown calling convention */

void sync___WaitGroup__Done(sync_WaitGroup *wg)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  sync_WaitGroup *wg_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sync___WaitGroup__Add(wg_spill,unaff_RBX);
  return;
}

