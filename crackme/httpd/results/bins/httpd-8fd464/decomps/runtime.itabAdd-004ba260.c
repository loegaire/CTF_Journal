
/* WARNING: Unknown calling convention */

void runtime_itabAdd(runtime_itab *m)

{
  runtime__type *typ;
  runtime_itabTableType *prVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_itab *m_spill;
  runtime_itabTableType *local_30;
  
                    /* Unresolved local var: runtime.itabTableType * t@[???] */
  while (prVar1 = runtime_itabTable,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (*(int *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xf8) == 0) {
    typ = (runtime__type *)runtime_itabTable->size;
    if (((ulong)typ >> 2) * 3 <= runtime_itabTable->count) {
                    /* Unresolved local var: runtime.itabTableType * t2@[???] */
      runtime_mallocgc(((long)typ * 2 + 2) * 8,typ,SUB81(runtime_itabTable->count,0));
      local_30->size = prVar1->size << 1;
      runtime_iterate_itabs((func__runtime_itab_ **)local_30);
      if (prVar1->count != local_30->count) {
        s.len = (int)typ;
        s.str = &DAT_002a5fa7;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
      if (runtime_writeBarrier.enabled != false) {
        runtime_atomicwb((void **)local_30,typ);
      }
      LOCK();
      runtime_itabTable = local_30;
      UNLOCK();
    }
    runtime___itabTableType__add((runtime_itabTableType *)m_spill,(runtime_itab *)typ);
    return;
  }
  s_00.len = unaff_RBX;
  s_00.str = &DAT_00298d94;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}

