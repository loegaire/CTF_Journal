
/* WARNING: Unknown calling convention */

void runtime___spanSet__push(runtime_spanSet *b,runtime_mspan *s)

{
  uint uVar1;
  runtime_mutex *prVar2;
  runtime_mutex *sysStat;
  uintptr uVar3;
  long in_FS_OFFSET;
  runtime_spanSet *b_spill;
  runtime_mspan *s_spill;
  void *local_50;
  void *local_40;
  
                    /* Unresolved local var: uintptr bottom@[???]
                       Unresolved local var: uintptr spineLen@[???]
                       Unresolved local var: runtime.spanSetBlock * block@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime___headTailIndex__incTail((runtime_headTailIndex *)b_spill);
  sysStat = (runtime_mutex *)b_spill->spineLen;
  uVar1 = (int)local_50 - 1;
  prVar2 = (runtime_mutex *)(ulong)(uVar1 >> 9);
  do {
    if (prVar2 < sysStat) {
                    /* Unresolved local var: void * spine@[???]
                       Unresolved local var: void * blockp@[???] */
      local_50 = *(void **)((long)b_spill->spine + (long)prVar2 * 8);
LAB_004e0e1c:
      LOCK();
      *(runtime_mspan **)((long)local_50 + ((ulong)uVar1 & 0x1ff) * 8 + 0x18) = s_spill;
      UNLOCK();
      return;
    }
    runtime_lock2(prVar2);
    sysStat = (runtime_mutex *)b_spill->spineLen;
    if (sysStat <= prVar2) {
      if (sysStat == (runtime_mutex *)b_spill->spineCap) {
                    /* Unresolved local var: uintptr newCap@[???]
                       Unresolved local var: void * newSpine@[???] */
        uVar3 = (long)b_spill->spineCap << 1;
        if (uVar3 == 0) {
          uVar3 = 0x100;
        }
        local_50 = (void *)internal_cpu_CacheLineSize;
        runtime_persistentalloc(0xd025b8,uVar3 << 3,(runtime_sysMemStat *)sysStat);
        if (b_spill->spineCap != 0) {
          local_50 = b_spill->spine;
          runtime_memmove();
        }
        LOCK();
        b_spill->spine = local_40;
        UNLOCK();
        b_spill->spineCap = uVar3;
      }
      runtime___spanSetBlockAlloc__alloc(&runtime_spanSetBlockPool);
      LOCK();
      *(void **)((long)prVar2 * 8 + (long)b_spill->spine) = local_50;
      UNLOCK();
      LOCK();
      prVar2 = (runtime_mutex *)b_spill->spineLen;
      b_spill->spineLen = (uintptr)((long)&sysStat->key + 1);
      UNLOCK();
      runtime_unlock2(prVar2);
      goto LAB_004e0e1c;
    }
    runtime_unlock2(&b_spill->spineLock);
  } while( true );
}

