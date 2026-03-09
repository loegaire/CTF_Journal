
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_nextMarkBitArenaEpoch(void)

{
  runtime_gcBitsArena *prVar1;
  runtime_gcBitsArena *prVar2;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_gcBitsArenas.lock);
  if (runtime_gcBitsArenas.previous != (runtime_gcBitsArena *)0x0) {
    prVar1 = runtime_gcBitsArenas.previous;
    if (runtime_gcBitsArenas.free == (runtime_gcBitsArena *)0x0) {
      runtime_gcBitsArenas.free = runtime_gcBitsArenas.previous;
    }
    else {
      do {
        prVar2 = prVar1;
        prVar1 = prVar2->next;
      } while (prVar1 != (runtime_gcBitsArena *)0x0);
      prVar2->next = runtime_gcBitsArenas.free;
      runtime_gcBitsArenas.free = runtime_gcBitsArenas.previous;
    }
  }
  runtime_gcBitsArenas.previous = runtime_gcBitsArenas.current;
  runtime_gcBitsArenas.current = runtime_gcBitsArenas.next;
  LOCK();
  runtime_gcBitsArenas.next = (runtime_gcBitsArena *)0x0;
  UNLOCK();
  runtime_unlock2(&runtime_gcBitsArenas.lock);
  return;
}

