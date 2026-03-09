
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.newArenaMayUnlock(runtime.gcBitsArena * ~r0) */

runtime_gcBitsArena * runtime_newArenaMayUnlock(void)

{
  runtime_gcBitsArena *prVar1;
  runtime_sysMemStat *unaff_RBX;
  long in_FS_OFFSET;
  string s;
  runtime_gcBitsArena *local_20;
  
                    /* Unresolved local var: runtime.gcBitsArena * result@[???] */
  while (prVar1 = runtime_gcBitsArenas.free,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_gcBitsArenas.free == (runtime_gcBitsArena *)0x0) {
    runtime_unlock2(&runtime_gcBitsArenas.lock);
    runtime_sysAlloc(0xd025b8,unaff_RBX);
    if (local_20 == (runtime_gcBitsArena *)0x0) {
      s.len = (int)unaff_RBX;
      s.str = (uint8 *)0x2a209d;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    runtime_lock2(&runtime_gcBitsArenas.lock);
  }
  else {
    runtime_gcBitsArenas.free = (runtime_gcBitsArenas.free)->next;
    runtime_memclrNoHeapPointers();
    local_20 = prVar1;
  }
  local_20->next = (runtime_gcBitsArena *)0x0;
  local_20->free = 0;
  return local_20;
}

