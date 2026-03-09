
/* WARNING: Unknown calling convention */

void runtime___itabTableType__add(runtime_itabTableType *t,runtime_itab *m)

{
  ulong uVar1;
  long lVar2;
  runtime_itabTableType *t_spill;
  runtime_itab *m_spill;
  
                    /* Unresolved local var: uintptr mask@[???]
                       Unresolved local var: uintptr h@[???] */
  uVar1 = (ulong)((m_spill->inter->typ).hash ^ m_spill->_type->hash);
  lVar2 = 1;
                    /* Unresolved local var: uintptr i@[???] */
  while( true ) {
    uVar1 = uVar1 & t_spill->size - 1;
    if (m_spill == t_spill->entries[uVar1]) {
      return;
    }
    if (t_spill->entries[uVar1] == (runtime_itab *)0x0) break;
                    /* Unresolved local var: runtime.itab * * p@[???]
                       Unresolved local var: runtime.itab * m2@[???] */
    uVar1 = uVar1 + lVar2;
    lVar2 = lVar2 + 1;
  }
  LOCK();
  t_spill->entries[uVar1] = m_spill;
  UNLOCK();
  t_spill->count = t_spill->count + 1;
  return;
}

