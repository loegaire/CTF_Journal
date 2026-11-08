
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcResetMarkState(void)

{
  runtime_arenaIdx *prVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: []runtime.arenaIdx arenas@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  runtime_forEachG((func__runtime_g_ **)&PTR_runtime_gcResetMarkState_func1_002b3880);
  runtime_lock2(&runtime_mheap_.lock);
  iVar2 = runtime_mheap_.allArenas.len;
  prVar1 = runtime_mheap_.allArenas.array;
  runtime_unlock2((runtime_mutex *)runtime_mheap_.allArenas.len);
                    /* Unresolved local var: runtime.arenaIdx ai@[???] */
  lVar3 = 0;
  while( true ) {
    if (iVar2 <= lVar3) {
      runtime_work.bytesMarked = 0;
      runtime_work.initialHeapLive = runtime_gcController.heapLive;
      return;
    }
    if (0x3fffff < prVar1[lVar3]) break;
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
    runtime_memclrNoHeapPointers();
    lVar3 = lVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

