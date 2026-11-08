
/* WARNING: Unknown calling convention */

void sync___Once__doSlow(sync_Once *o,func__ **f)

{
  uint uVar1;
  sync_Mutex *m;
  long in_FS_OFFSET;
  sync_Once *o_spill;
  func__ **f_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  m = (sync_Mutex *)0x0;
  LOCK();
  uVar1 = (o_spill->m).state;
  if (uVar1 == 0) {
    (o_spill->m).state = 1;
  }
  else {
    m = (sync_Mutex *)(ulong)uVar1;
  }
  UNLOCK();
  if (uVar1 != 0) {
    sync___Mutex__lockSlow(m);
  }
  if (o_spill->done == 0) {
    (**f_spill)();
    sync_atomic_StoreUint32();
  }
  sync___Mutex__Unlock(&o_spill->m);
  return;
}

