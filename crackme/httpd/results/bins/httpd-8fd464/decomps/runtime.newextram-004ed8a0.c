
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_newextram(void)

{
  uint32 uVar1;
  uint uVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  
                    /* Unresolved local var: uint32 c@[???] */
  while (uVar1 = runtime_extraMWaiters,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  runtime_extraMWaiters = 0;
  UNLOCK();
  if (uVar1 == 0) {
                    /* Unresolved local var: runtime.m * mp@[???] */
    runtime_lockextra(false);
    LOCK();
    runtime_extram = local_18;
    UNLOCK();
    if (local_18 == 0) {
      runtime_oneNewExtraM();
    }
  }
  else {
    for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
                    /* Unresolved local var: uint32 i@[???] */
      runtime_oneNewExtraM();
    }
  }
  return;
}

