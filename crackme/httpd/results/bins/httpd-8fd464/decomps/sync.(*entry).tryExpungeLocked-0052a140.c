
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*entry).tryExpungeLocked(sync.entry * e, bool isExpunged) */

bool sync___entry__tryExpungeLocked(sync_entry *e)

{
  bool bVar1;
  void *pvVar2;
  void *unaff_RBX;
  long in_FS_OFFSET;
  sync_entry *e_spill;
  char local_10;
  
                    /* Unresolved local var: void * p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  pvVar2 = e_spill->p;
  while( true ) {
    if (pvVar2 != (void *)0x0) {
      return SUB81(e_spill,0);
    }
    bVar1 = sync_atomic_CompareAndSwapPointer(&e_spill->p,unaff_RBX,sync_expunged);
    if (local_10 != '\0') break;
    pvVar2 = e_spill->p;
  }
  return bVar1;
}

