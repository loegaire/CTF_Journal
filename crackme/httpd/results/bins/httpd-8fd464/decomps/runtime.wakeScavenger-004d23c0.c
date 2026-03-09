
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_wakeScavenger(void)

{
  long in_FS_OFFSET;
  runtime_gList local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_scavenge.lock);
  if (runtime_scavenge.parked != false) {
                    /* Unresolved local var: runtime.gList list@[???] */
    LOCK();
    runtime_scavenge.sysmonWake = 0;
    UNLOCK();
    runtime_deltimer(runtime_scavenge.timer);
    local_10.head = (runtime_guintptr)runtime_scavenge.g;
    runtime_scavenge.parked = false;
    (runtime_scavenge.g)->schedlink = 0;
    runtime_injectglist(&local_10);
  }
  runtime_unlock2(&runtime_scavenge.lock);
  return;
}

