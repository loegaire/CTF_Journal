
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_startCheckmarks(void)

{
  runtime_heapArena *prVar1;
  long lVar2;
  runtime_arenaIdx *prVar3;
  int align;
  long lVar4;
  runtime_sysMemStat *in_RCX;
  long in_FS_OFFSET;
  string s;
  long local_30;
  
  while (align = runtime_mheap_.allArenas.len, prVar3 = runtime_mheap_.allArenas.array,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.arenaIdx ai@[???] */
  lVar4 = 0;
  while( true ) {
    if (align <= lVar4) {
      runtime_useCheckmark = true;
      return;
    }
                    /* Unresolved local var: runtime.heapArena * arena@[???]
                       Unresolved local var: runtime.checkmarksMap * bitmap@[???] */
    if (0x3fffff < prVar3[lVar4]) break;
    prVar1 = (*runtime_mheap_.arenas[0])[prVar3[lVar4]];
    lVar2 = *(long *)("*norm.reorderBuffer" + (long)(prVar1->bitmap + 3));
    if (lVar2 == 0) {
      runtime_persistentalloc(0xd025b8,align,in_RCX);
      if (local_30 == 0) {
        s.len = align;
        s.str = &DAT_002a737d;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
      *(long *)("*norm.reorderBuffer" + (long)(prVar1->bitmap + 3)) = local_30;
    }
    else {
      for (in_RCX = (runtime_sysMemStat *)0x0; (long)in_RCX < 0x100000;
          in_RCX = (runtime_sysMemStat *)((long)in_RCX + 1)) {
                    /* Unresolved local var: int i@[???] */
        *(undefined1 *)(lVar2 + (long)in_RCX) = 0;
      }
    }
    lVar4 = lVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

