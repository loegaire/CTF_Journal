
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pollCache).alloc(runtime.pollCache * c, runtime.pollDesc
   * ~r0) */

runtime_pollDesc * runtime___pollCache__alloc(runtime_pollCache *c)

{
  runtime_pollDesc *prVar1;
  runtime_sysMemStat *in_RCX;
  ulong uVar2;
  uintptr unaff_RBX;
  long in_FS_OFFSET;
  runtime_pollCache *c_spill;
  long local_18;
  
                    /* Unresolved local var: runtime.pollDesc * pd@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&c_spill->lock);
  if (c_spill->first == (runtime_pollDesc *)0x0) {
                    /* Unresolved local var: void * mem@[???] */
    runtime_persistentalloc(0xd025c0,unaff_RBX,in_RCX);
                    /* Unresolved local var: uintptr i@[???] */
    for (uVar2 = 0; uVar2 < 0x11; uVar2 = uVar2 + 1) {
                    /* Unresolved local var: runtime.pollDesc * pd@[???] */
      *(runtime_pollDesc **)(local_18 + uVar2 * 0xe8) = c_spill->first;
      c_spill->first = (runtime_pollDesc *)(uVar2 * 0xe8 + local_18);
    }
  }
  prVar1 = c_spill->first;
  c_spill->first = prVar1->link;
  runtime_unlock2(&c_spill->lock);
  return prVar1;
}

