
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*spanSetBlockAlloc).alloc(runtime.spanSetBlockAlloc * p,
   runtime.spanSetBlock * ~r0) */

runtime_spanSetBlock * runtime___spanSetBlockAlloc__alloc(runtime_spanSetBlockAlloc *p)

{
  runtime_spanSetBlock *prVar1;
  runtime_lfstack rVar2;
  runtime_spanSetBlock *extraout_RAX;
  runtime_lfstack *prVar3;
  uintptr unaff_RBX;
  long in_FS_OFFSET;
  bool bVar4;
  runtime_spanSetBlockAlloc *p_spill;
  runtime_spanSetBlock *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    p = (runtime_spanSetBlockAlloc *)extraout_RAX;
  }
  do {
                    /* Unresolved local var: uint64 old@[???]
                       Unresolved local var: runtime.lfnode * node@[???]
                       Unresolved local var: uint64 next@[???] */
    prVar1 = (runtime_spanSetBlock *)p_spill->stack;
    if (prVar1 == (runtime_spanSetBlock *)0x0) {
      prVar3 = (runtime_lfstack *)0x0;
      break;
    }
    prVar3 = (runtime_lfstack *)(((long)prVar1 >> 0x13) << 3);
    rVar2 = *prVar3;
    LOCK();
    p = (runtime_spanSetBlockAlloc *)p_spill->stack;
    bVar4 = prVar1 == (runtime_spanSetBlock *)p;
    if (bVar4) {
      p_spill->stack = rVar2;
      p = (runtime_spanSetBlockAlloc *)prVar1;
    }
    UNLOCK();
    unaff_RBX = CONCAT71((int7)(rVar2 >> 8),bVar4);
  } while (!bVar4);
  if (prVar3 == (runtime_lfstack *)0x0) {
    runtime_persistentalloc(0xd025b8,unaff_RBX,&p_spill->stack);
    return local_10;
  }
  return (runtime_spanSetBlock *)p;
}

