
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*entry).tryStore(sync.entry * e, interface_{} * i, bool ~r1)
    */

bool sync___entry__tryStore(sync_entry *e,interface___ *i)

{
  bool bVar1;
  long in_FS_OFFSET;
  sync_entry *e_spill;
  interface___ *i_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
                    /* Unresolved local var: void * p@[???] */
    if (e_spill->p == sync_expunged) {
      return SUB81(e_spill,0);
    }
    bVar1 = sync_atomic_CompareAndSwapPointer(&e_spill->p,i,i_spill);
  } while (local_10 == '\0');
  return bVar1;
}

